// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hare_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#include "hare_msgs/msg/detail/motor_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hare_msgs
const rosidl_type_hash_t *
hare_msgs__msg__MotorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe4, 0x9b, 0x01, 0x23, 0x23, 0x4e, 0x80, 0xad,
      0xa0, 0x32, 0xd4, 0x4f, 0x13, 0x55, 0xf2, 0xef,
      0x75, 0x2d, 0x46, 0x89, 0x7a, 0x69, 0x04, 0xbe,
      0xa0, 0xae, 0x16, 0xb9, 0x95, 0xd3, 0xab, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hare_msgs__msg__MotorCommand__TYPE_NAME[] = "hare_msgs/msg/MotorCommand";

// Define type names, field names, and default values
static char hare_msgs__msg__MotorCommand__FIELD_NAME__id[] = "id";
static char hare_msgs__msg__MotorCommand__FIELD_NAME__rpm[] = "rpm";

static rosidl_runtime_c__type_description__Field hare_msgs__msg__MotorCommand__FIELDS[] = {
  {
    {hare_msgs__msg__MotorCommand__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorCommand__FIELD_NAME__rpm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hare_msgs__msg__MotorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hare_msgs__msg__MotorCommand__TYPE_NAME, 26, 26},
      {hare_msgs__msg__MotorCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 id\n"
  "int32 rpm";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hare_msgs__msg__MotorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hare_msgs__msg__MotorCommand__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hare_msgs__msg__MotorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hare_msgs__msg__MotorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
