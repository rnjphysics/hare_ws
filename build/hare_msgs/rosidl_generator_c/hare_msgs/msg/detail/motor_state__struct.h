// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_state.h"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorState in the package hare_msgs.
/**
  * Telemetry from a single VESC motor controller
 */
typedef struct hare_msgs__msg__MotorState
{
  uint8_t id;
  int32_t erpm;
  float current;
  float duty;
  float temp_fet;
  float temp_motor;
  float input_current;
  float voltage;
  int32_t tachometer;
} hare_msgs__msg__MotorState;

// Struct for a sequence of hare_msgs__msg__MotorState.
typedef struct hare_msgs__msg__MotorState__Sequence
{
  hare_msgs__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hare_msgs__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
