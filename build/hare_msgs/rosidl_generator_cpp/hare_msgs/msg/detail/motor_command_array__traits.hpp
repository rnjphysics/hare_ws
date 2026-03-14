// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command_array.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__TRAITS_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hare_msgs/msg/detail/motor_command_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motors'
#include "hare_msgs/msg/detail/motor_command__traits.hpp"

namespace hare_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommandArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: motors
  {
    if (msg.motors.size() == 0) {
      out << "motors: []";
    } else {
      out << "motors: [";
      size_t pending_items = msg.motors.size();
      for (auto item : msg.motors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommandArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motors.size() == 0) {
      out << "motors: []\n";
    } else {
      out << "motors:\n";
      for (auto item : msg.motors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommandArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hare_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hare_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hare_msgs::msg::MotorCommandArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  hare_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hare_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hare_msgs::msg::MotorCommandArray & msg)
{
  return hare_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hare_msgs::msg::MotorCommandArray>()
{
  return "hare_msgs::msg::MotorCommandArray";
}

template<>
inline const char * name<hare_msgs::msg::MotorCommandArray>()
{
  return "hare_msgs/msg/MotorCommandArray";
}

template<>
struct has_fixed_size<hare_msgs::msg::MotorCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hare_msgs::msg::MotorCommandArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hare_msgs::msg::MotorCommandArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__TRAITS_HPP_
