// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hare_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command.h"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCommand in the package hare_msgs.
typedef struct hare_msgs__msg__MotorCommand
{
  uint8_t id;
  int32_t rpm;
} hare_msgs__msg__MotorCommand;

// Struct for a sequence of hare_msgs__msg__MotorCommand.
typedef struct hare_msgs__msg__MotorCommand__Sequence
{
  hare_msgs__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hare_msgs__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
