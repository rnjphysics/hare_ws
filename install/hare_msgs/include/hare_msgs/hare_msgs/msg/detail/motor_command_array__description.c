// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

#include "hare_msgs/msg/detail/motor_command_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_hare_msgs
const rosidl_type_hash_t *
hare_msgs__msg__MotorCommandArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0x62, 0xfa, 0xc6, 0x4e, 0x0d, 0xd0, 0xcc,
      0x90, 0x22, 0x88, 0x5c, 0x58, 0x64, 0x2e, 0xb7,
      0x78, 0x95, 0x94, 0x0e, 0x26, 0xb1, 0x53, 0x29,
      0x55, 0x70, 0xbb, 0xc1, 0xf9, 0x72, 0xac, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "hare_msgs/msg/detail/motor_command__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t hare_msgs__msg__MotorCommand__EXPECTED_HASH = {1, {
    0xe4, 0x9b, 0x01, 0x23, 0x23, 0x4e, 0x80, 0xad,
    0xa0, 0x32, 0xd4, 0x4f, 0x13, 0x55, 0xf2, 0xef,
    0x75, 0x2d, 0x46, 0x89, 0x7a, 0x69, 0x04, 0xbe,
    0xa0, 0xae, 0x16, 0xb9, 0x95, 0xd3, 0xab, 0xac,
  }};
#endif

static char hare_msgs__msg__MotorCommandArray__TYPE_NAME[] = "hare_msgs/msg/MotorCommandArray";
static char hare_msgs__msg__MotorCommand__TYPE_NAME[] = "hare_msgs/msg/MotorCommand";

// Define type names, field names, and default values
static char hare_msgs__msg__MotorCommandArray__FIELD_NAME__motors[] = "motors";

static rosidl_runtime_c__type_description__Field hare_msgs__msg__MotorCommandArray__FIELDS[] = {
  {
    {hare_msgs__msg__MotorCommandArray__FIELD_NAME__motors, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {hare_msgs__msg__MotorCommand__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription hare_msgs__msg__MotorCommandArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {hare_msgs__msg__MotorCommand__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
hare_msgs__msg__MotorCommandArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {hare_msgs__msg__MotorCommandArray__TYPE_NAME, 31, 31},
      {hare_msgs__msg__MotorCommandArray__FIELDS, 1, 1},
    },
    {hare_msgs__msg__MotorCommandArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&hare_msgs__msg__MotorCommand__EXPECTED_HASH, hare_msgs__msg__MotorCommand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = hare_msgs__msg__MotorCommand__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "hare_msgs/MotorCommand[] motors";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
hare_msgs__msg__MotorCommandArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {hare_msgs__msg__MotorCommandArray__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
hare_msgs__msg__MotorCommandArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *hare_msgs__msg__MotorCommandArray__get_individual_type_description_source(NULL),
    sources[1] = *hare_msgs__msg__MotorCommand__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
