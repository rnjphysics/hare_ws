import ipaddress
import json
import socket
import subprocess
import threading
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer

import rclpy
from hare_msgs.msg import MotorTelemetry, VescStatus
from rclpy.node import Node


VESC_IDS = (10, 20, 30, 40, 50, 60)
TELEMETRY_STALE_SECONDS = 0.25
STATUS_STALE_SECONDS = 3.0
ROS_SERVICE = 'hare-ros.service'


def find_tailscale_address():
    result = subprocess.run(
        ['ip', '-j', '-4', 'addr', 'show'],
        check=True,
        capture_output=True,
        text=True,
    )
    interfaces = json.loads(result.stdout)
    candidates = []
    for interface in interfaces:
        for address in interface.get('addr_info', []):
            candidate = ipaddress.ip_address(address['local'])
            if candidate in ipaddress.ip_network('100.64.0.0/10'):
                candidates.append((interface.get('ifname'), str(candidate)))
    for interface_name, address in candidates:
        if interface_name == 'tailscale0':
            return address
    if len(candidates) == 1:
        return candidates[0][1]
    raise RuntimeError(
        'Could not identify a unique Tailscale IPv4 address; '
        f'candidates={candidates}'
    )


class StatusCache:
    def __init__(self):
        self._lock = threading.Lock()
        self._telemetry = {}
        self._status = {}
        self._telemetry_seen = {}
        self._status_seen = {}

    def update_telemetry(self, message):
        with self._lock:
            self._telemetry[message.id] = {
                'erpm': message.erpm,
                'current': message.current,
                'duty': message.duty,
            }
            self._telemetry_seen[message.id] = time.monotonic()

    def update_status(self, message):
        with self._lock:
            self._status[message.id] = {
                'amp_hours': message.amp_hours,
                'amp_hours_charged': message.amp_hours_charged,
                'watt_hours': message.watt_hours,
                'watt_hours_charged': message.watt_hours_charged,
                'temp_fet': message.temp_fet,
                'temp_motor': message.temp_motor,
                'input_current': message.input_current,
                'pid_pos': message.pid_pos,
                'tachometer': message.tachometer,
                'voltage': message.voltage,
            }
            self._status_seen[message.id] = time.monotonic()

    def snapshot(self):
        now = time.monotonic()
        with self._lock:
            result = []
            for vesc_id in VESC_IDS:
                telemetry_age = (
                    now - self._telemetry_seen[vesc_id]
                    if vesc_id in self._telemetry_seen else None
                )
                status_age = (
                    now - self._status_seen[vesc_id]
                    if vesc_id in self._status_seen else None
                )
                result.append({
                    'id': vesc_id,
                    'telemetry': self._telemetry.get(vesc_id),
                    'status': self._status.get(vesc_id),
                    'telemetry_age_seconds': telemetry_age,
                    'status_age_seconds': status_age,
                    'telemetry_stale': (
                        telemetry_age is None
                        or telemetry_age > TELEMETRY_STALE_SECONDS
                    ),
                    'status_stale': (
                        status_age is None
                        or status_age > STATUS_STALE_SECONDS
                    ),
                })
            return {'generated_at_unix': time.time(), 'vescs': result}


class WebNode(Node):
    def __init__(self, cache):
        super().__init__('hare_web')
        self._cache = cache
        self.create_subscription(
            MotorTelemetry, '/vesc_telemetry',
            self._telemetry_callback, 100
        )
        self.create_subscription(
            VescStatus, '/vesc_status',
            self._status_callback, 100
        )

    def _telemetry_callback(self, message):
        self._cache.update_telemetry(message)

    def _status_callback(self, message):
        self._cache.update_status(message)


class RequestHandler(BaseHTTPRequestHandler):
    cache = None
    ros_lock = threading.Lock()

    def _send_json(self, payload, status=200):
        body = json.dumps(payload).encode('utf-8')
        self.send_response(status)
        self.send_header('Content-Type', 'application/json')
        self.send_header('Content-Length', str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _ros_state(self):
        result = subprocess.run(
            ['systemctl', '--user', 'is-active', ROS_SERVICE],
            capture_output=True,
            text=True,
            check=False,
        )
        return result.stdout.strip() or 'inactive'

    def _ros_action(self, action):
        if action not in ('start', 'stop'):
            return self._send_json({'error': 'unsupported action'}, 400)
        with self.ros_lock:
            result = subprocess.run(
                ['systemctl', '--user', action, ROS_SERVICE],
                capture_output=True,
                text=True,
                check=False,
            )
        if result.returncode != 0:
            return self._send_json({
                'error': result.stderr.strip() or f'ROS {action} failed',
                'state': self._ros_state(),
            }, 500)
        return self._send_json({'state': self._ros_state()})

    def do_GET(self):
        if self.path == '/':
            body = HTML_PAGE.encode('utf-8')
            self.send_response(200)
            self.send_header('Content-Type', 'text/html; charset=utf-8')
        elif self.path == '/api/status':
            payload = self.cache.snapshot()
            payload['ros_state'] = self._ros_state()
            return self._send_json(payload)
        else:
            self.send_error(404)
            return
        self.send_header('Content-Length', str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def do_POST(self):
        if self.path == '/api/ros/start':
            return self._ros_action('start')
        if self.path == '/api/ros/stop':
            return self._ros_action('stop')
        self.send_error(404)

    def log_message(self, format_string, *args):
        return


HTML_PAGE = r'''<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Hare VESC Status</title>
<style>
body { background:#10141a; color:#e7edf5; font:16px system-ui,sans-serif; margin:2rem; }
h1 { margin-top:0; } .grid { display:grid; gap:1rem;
grid-template-columns:repeat(auto-fit,minmax(280px,1fr)); }
.card { background:#1b222c; border:1px solid #354354; border-radius:8px;
padding:1rem; } .stale { border-color:#d28b28; } .missing { border-color:#b83b4b; }
.row { display:flex; justify-content:space-between; border-bottom:1px solid #303b49;
padding:.3rem 0; } .label { color:#9eacbd; } .warn { color:#f0b44d; }
</style>
</head>
<body>
<h1>Hare VESC Status</h1>
<p id="updated">Waiting for telemetry...</p>
<p>ROS: <strong id="ros-state">unknown</strong>
<button onclick="rosAction('start')">Start ROS</button>
<button onclick="rosAction('stop')">Stop ROS</button></p>
<main class="grid" id="cards"></main>
<script>
function value(v, digits=2) {
  return v === null || v === undefined ? "—" :
    (typeof v === "number" ? v.toFixed(digits) : v);
}
function age(v) { return v === null ? "never" : value(v, 1) + " s"; }
function row(label, v, digits=2) {
  return `<div class="row"><span class="label">${label}</span><span>${value(v,digits)}</span></div>`;
}
async function refresh() {
  const response = await fetch("/api/status", {cache:"no-store"});
  const data = await response.json();
  document.getElementById("ros-state").textContent = data.ros_state;
  document.getElementById("updated").textContent =
    "Updated " + new Date(data.generated_at_unix * 1000).toLocaleTimeString();
  document.getElementById("cards").innerHTML = data.vescs.map(v => {
    const classes = v.telemetry_stale || v.status_stale ?
      (v.telemetry === null && v.status === null ? "card missing" : "card stale") : "card";
    const t = v.telemetry || {}, s = v.status || {};
    return `<section class="${classes}"><h2>VESC ${v.id}</h2>` +
      row("Telemetry age", age(v.telemetry_age_seconds)) +
      row("ERPM", t.erpm, 0) + row("Motor current (A)", t.current) +
      row("Duty", t.duty) + row("Status age", age(v.status_age_seconds)) +
      row("Bus voltage (V)", s.voltage) + row("Input current (A)", s.input_current) +
      row("FET temperature (C)", s.temp_fet) +
      row("Motor temperature (C)", s.temp_motor) +
      row("Amp-hours", s.amp_hours) + row("Watt-hours", s.watt_hours) +
      `</section>`;
  }).join("");
}
async function rosAction(action) {
  const response = await fetch("/api/ros/" + action, {method:"POST"});
  const data = await response.json();
  document.getElementById("ros-state").textContent = data.state || data.error;
  setTimeout(refresh, 500);
}
setInterval(refresh, 1000); refresh();
</script>
</body>
</html>'''


def main(args=None):
    rclpy.init(args=args)
    cache = StatusCache()
    node = WebNode(cache)
    bind_address = find_tailscale_address()
    RequestHandler.cache = cache
    server = ThreadingHTTPServer((bind_address, 8080), RequestHandler)
    server_thread = threading.Thread(target=server.serve_forever, daemon=True)
    server_thread.start()
    node.get_logger().info(
        f'Read-only status page listening on http://{bind_address}:8080'
    )
    try:
        rclpy.spin(node)
    finally:
        server.shutdown()
        server.server_close()
        node.destroy_node()
        rclpy.shutdown()
