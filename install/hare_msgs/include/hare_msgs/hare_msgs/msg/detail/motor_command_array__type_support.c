// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hare_msgs/msg/detail/motor_command_array__rosidl_typesupport_introspection_c.h"
#include "hare_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hare_msgs/msg/detail/motor_command_array__functions.h"
#include "hare_msgs/msg/detail/motor_command_array__struct.h"


// Include directives for member types
// Member `motors`
#include "hare_msgs/msg/motor_command.h"
// Member `motors`
#include "hare_msgs/msg/detail/motor_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hare_msgs__msg__MotorCommandArray__init(message_memory);
}

void hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_fini_function(void * message_memory)
{
  hare_msgs__msg__MotorCommandArray__fini(message_memory);
}

size_t hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__size_function__MotorCommandArray__motors(
  const void * untyped_member)
{
  const hare_msgs__msg__MotorCommand__Sequence * member =
    (const hare_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_const_function__MotorCommandArray__motors(
  const void * untyped_member, size_t index)
{
  const hare_msgs__msg__MotorCommand__Sequence * member =
    (const hare_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_function__MotorCommandArray__motors(
  void * untyped_member, size_t index)
{
  hare_msgs__msg__MotorCommand__Sequence * member =
    (hare_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__fetch_function__MotorCommandArray__motors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hare_msgs__msg__MotorCommand * item =
    ((const hare_msgs__msg__MotorCommand *)
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_const_function__MotorCommandArray__motors(untyped_member, index));
  hare_msgs__msg__MotorCommand * value =
    (hare_msgs__msg__MotorCommand *)(untyped_value);
  *value = *item;
}

void hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__assign_function__MotorCommandArray__motors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hare_msgs__msg__MotorCommand * item =
    ((hare_msgs__msg__MotorCommand *)
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_function__MotorCommandArray__motors(untyped_member, index));
  const hare_msgs__msg__MotorCommand * value =
    (const hare_msgs__msg__MotorCommand *)(untyped_value);
  *item = *value;
}

bool hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__resize_function__MotorCommandArray__motors(
  void * untyped_member, size_t size)
{
  hare_msgs__msg__MotorCommand__Sequence * member =
    (hare_msgs__msg__MotorCommand__Sequence *)(untyped_member);
  hare_msgs__msg__MotorCommand__Sequence__fini(member);
  return hare_msgs__msg__MotorCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_member_array[1] = {
  {
    "motors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hare_msgs__msg__MotorCommandArray, motors),  // bytes offset in struct
    NULL,  // default value
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__size_function__MotorCommandArray__motors,  // size() function pointer
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_const_function__MotorCommandArray__motors,  // get_const(index) function pointer
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__get_function__MotorCommandArray__motors,  // get(index) function pointer
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__fetch_function__MotorCommandArray__motors,  // fetch(index, &value) function pointer
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__assign_function__MotorCommandArray__motors,  // assign(index, value) function pointer
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__resize_function__MotorCommandArray__motors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_members = {
  "hare_msgs__msg",  // message namespace
  "MotorCommandArray",  // message name
  1,  // number of fields
  sizeof(hare_msgs__msg__MotorCommandArray),
  false,  // has_any_key_member_
  hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_member_array,  // message members
  hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_type_support_handle = {
  0,
  &hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_members,
  get_message_typesupport_handle_function,
  &hare_msgs__msg__MotorCommandArray__get_type_hash,
  &hare_msgs__msg__MotorCommandArray__get_type_description,
  &hare_msgs__msg__MotorCommandArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hare_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hare_msgs, msg, MotorCommandArray)() {
  hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hare_msgs, msg, MotorCommand)();
  if (!hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_type_support_handle.typesupport_identifier) {
    hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hare_msgs__msg__MotorCommandArray__rosidl_typesupport_introspection_c__MotorCommandArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
