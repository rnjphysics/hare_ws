# Low-rate VESC Status 2-5 data. Fields not represented by the received
# status frame retain their default value.
uint8 id

float32 amp_hours
float32 amp_hours_charged
float32 watt_hours
float32 watt_hours_charged

float32 temp_fet
float32 temp_motor
float32 input_current
float32 pid_pos

int32 tachometer
float32 voltage
