#include "hare_can/vesc_can.hpp"

#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

VescCAN::VescCAN(const std::string& interface)
{
    socket_fd = socket(PF_CAN, SOCK_RAW, CAN_RAW);

    struct ifreq ifr;
    std::strncpy(ifr.ifr_name, interface.c_str(), IFNAMSIZ - 1);

    ioctl(socket_fd, SIOCGIFINDEX, &ifr);

    struct sockaddr_can addr{};
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;

    bind(socket_fd, (struct sockaddr *)&addr, sizeof(addr));
}

VescCAN::~VescCAN()
{
    close(socket_fd);
}

bool VescCAN::sendFrame(uint32_t id, uint8_t *data, uint8_t len)
{
    struct can_frame frame{};

    frame.can_id = id | CAN_EFF_FLAG;   // EXTENDED FRAME
    frame.can_dlc = len;

    std::memcpy(frame.data, data, len);

    return write(socket_fd, &frame, sizeof(frame)) == sizeof(frame);
}

bool VescCAN::sendRPM(int rpm, uint8_t vesc_id)
{
    uint8_t data[4];

    data[0] = (rpm >> 24) & 0xFF;
    data[1] = (rpm >> 16) & 0xFF;
    data[2] = (rpm >> 8) & 0xFF;
    data[3] = rpm & 0xFF;

    uint32_t id = (0x03 << 8) | vesc_id;

    return sendFrame(id, data, 4);
}

bool VescCAN::sendCurrent(float current, uint8_t vesc_id)
{
    int32_t val = current * 1000;

    uint8_t data[4];

    data[0] = (val >> 24) & 0xFF;
    data[1] = (val >> 16) & 0xFF;
    data[2] = (val >> 8) & 0xFF;
    data[3] = val & 0xFF;

    uint32_t id = (0x01 << 8) | vesc_id;

    return sendFrame(id, data, 4);
}

bool VescCAN::sendDuty(float duty, uint8_t vesc_id)
{
    int32_t val = duty * 100000;

    uint8_t data[4];

    data[0] = (val >> 24) & 0xFF;
    data[1] = (val >> 16) & 0xFF;
    data[2] = (val >> 8) & 0xFF;
    data[3] = val & 0xFF;

    uint32_t id = (0x00 << 8) | vesc_id;

    return sendFrame(id, data, 4);
}

bool VescCAN::sendPosition(float pos, uint8_t vesc_id)
{
    int32_t val = pos * 1000000;

    uint8_t data[4];

    data[0] = (val >> 24) & 0xFF;
    data[1] = (val >> 16) & 0xFF;
    data[2] = (val >> 8) & 0xFF;
    data[3] = val & 0xFF;

    uint32_t id = (0x04 << 8) | vesc_id;

    return sendFrame(id, data, 4);
}

bool VescCAN::receiveFrame(struct can_frame &frame)
{
    return read(socket_fd, &frame, sizeof(frame)) == sizeof(frame);
}

int32_t VescCAN::unpackInt32(const uint8_t *data)
{
    return (data[0] << 24) |
           (data[1] << 16) |
           (data[2] << 8) |
           data[3];
}

int16_t VescCAN::unpackInt16(const uint8_t *data)
{
    return static_cast<int16_t>(
        (static_cast<uint16_t>(data[0]) << 8) |
        static_cast<uint16_t>(data[1]));
}

bool VescCAN::isStatusFrame(const struct can_frame &frame, uint8_t command)
{
    const uint32_t can_id = frame.can_id & CAN_EFF_MASK;
    return (frame.can_id & CAN_EFF_FLAG) != 0 &&
           frame.can_dlc == 8 &&
           ((can_id >> 8) & 0xFF) == command;
}

bool VescCAN::parseStatus1(const struct can_frame &frame, VescStatus1 &out)
{
    if (!isStatusFrame(frame, 9))
        return false;

    out.erpm = unpackInt32(frame.data);
    out.current = unpackInt16(frame.data + 4) / 10.0;
    out.duty = unpackInt16(frame.data + 6) / 1000.0;

    return true;
}

bool VescCAN::parseStatus2(const struct can_frame &frame, VescStatus2 &out)
{
    if (!isStatusFrame(frame, 14))
        return false;

    out.amp_hours_charged = unpackInt32(frame.data) / 10000.0;
    out.amp_hours = unpackInt32(frame.data + 4) / 10000.0;

    return true;
}

bool VescCAN::parseStatus3(const struct can_frame &frame, VescStatus3 &out)
{
    if (!isStatusFrame(frame, 15))
        return false;

    out.watt_hours_charged = unpackInt32(frame.data) / 10000.0;
    out.watt_hours = unpackInt32(frame.data + 4) / 10000.0;

    return true;
}

bool VescCAN::parseStatus4(const struct can_frame &frame, VescStatus4 &out)
{
    if (!isStatusFrame(frame, 16))
        return false;

    out.temp_fet = unpackInt16(frame.data) / 10.0;
    out.temp_motor = unpackInt16(frame.data + 2) / 10.0;
    out.current_in = unpackInt16(frame.data + 4) / 10.0;
    out.pid_pos = unpackInt16(frame.data + 6) / 50.0;

    return true;
}

bool VescCAN::parseStatus5(const struct can_frame &frame, VescStatus5 &out)
{
    if (!isStatusFrame(frame, 27))
        return false;

    out.tachometer = unpackInt32(frame.data);
    out.input_voltage = unpackInt16(frame.data + 4) / 10.0;

    return true;
}
