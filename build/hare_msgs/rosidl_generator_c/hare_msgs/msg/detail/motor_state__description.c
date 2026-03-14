// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

#include "hare_msgs/msg/detail/motor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hare_msgs
const rosidl_type_hash_t *
hare_msgs__msg__MotorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x38, 0x92, 0x97, 0xa1, 0x62, 0x78, 0xb0,
      0xf1, 0x94, 0x16, 0x3d, 0xbe, 0x95, 0xd8, 0x7d,
      0xfe, 0x67, 0xd0, 0xed, 0x3a, 0xd2, 0xc2, 0x64,
      0x93, 0x28, 0x4f, 0x9d, 0xe6, 0xf8, 0xb9, 0xe0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char hare_msgs__msg__MotorState__TYPE_NAME[] = "hare_msgs/msg/MotorState";

// Define type names, field names, and default values
static char hare_msgs__msg__MotorState__FIELD_NAME__id[] = "id";
static char hare_msgs__msg__MotorState__FIELD_NAME__erpm[] = "erpm";
static char hare_msgs__msg__MotorState__FIELD_NAME__current[] = "current";
static char hare_msgs__msg__MotorState__FIELD_NAME__duty[] = "duty";
static char hare_msgs__msg__MotorState__FIELD_NAME__temp_fet[] = "temp_fet";
static char hare_msgs__msg__MotorState__FIELD_NAME__temp_motor[] = "temp_motor";
static char hare_msgs__msg__MotorState__FIELD_NAME__input_current[] = "input_current";
static char hare_msgs__msg__MotorState__FIELD_NAME__voltage[] = "voltage";
static char hare_msgs__msg__MotorState__FIELD_NAME__tachometer[] = "tachometer";

static rosidl_runtime_c__type_description__Field hare_msgs__msg__MotorState__FIELDS[] = {
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__erpm, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__duty, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__temp_fet, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__temp_motor, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__input_current, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {hare_msgs__msg__MotorState__FIELD_NAME__tachometer, 10, 10},
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
hare_msgs__msg__MotorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hare_msgs__msg__MotorState__TYPE_NAME, 24, 24},
      {hare_msgs__msg__MotorState__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Telemetry from a single VESC motor controller\n"
  "\n"
  "uint8 id\n"
  "\n"
  "int32 erpm\n"
  "float32 current\n"
  "float32 duty\n"
  "\n"
  "float32 temp_fet\n"
  "float32 temp_motor\n"
  "float32 input_current\n"
  "float32 voltage\n"
  "\n"
  "int32 tachometer";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hare_msgs__msg__MotorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hare_msgs__msg__MotorState__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 192, 192},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hare_msgs__msg__MotorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hare_msgs__msg__MotorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
