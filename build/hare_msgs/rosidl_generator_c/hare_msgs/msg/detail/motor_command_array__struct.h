// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command_array.h"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_H_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motors'
#include "hare_msgs/msg/detail/motor_command__struct.h"

/// Struct defined in msg/MotorCommandArray in the package hare_msgs.
typedef struct hare_msgs__msg__MotorCommandArray
{
  hare_msgs__msg__MotorCommand__Sequence motors;
} hare_msgs__msg__MotorCommandArray;

// Struct for a sequence of hare_msgs__msg__MotorCommandArray.
typedef struct hare_msgs__msg__MotorCommandArray__Sequence
{
  hare_msgs__msg__MotorCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hare_msgs__msg__MotorCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_H_
