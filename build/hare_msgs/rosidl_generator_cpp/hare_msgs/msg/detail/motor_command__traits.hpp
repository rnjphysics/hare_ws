// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hare_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hare_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hare_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCommand & msg, bool use_flow_style = false)
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
  const hare_msgs::msg::MotorCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  hare_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hare_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hare_msgs::msg::MotorCommand & msg)
{
  return hare_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hare_msgs::msg::MotorCommand>()
{
  return "hare_msgs::msg::MotorCommand";
}

template<>
inline const char * name<hare_msgs::msg::MotorCommand>()
{
  return "hare_msgs/msg/MotorCommand";
}

template<>
struct has_fixed_size<hare_msgs::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hare_msgs::msg::MotorCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hare_msgs::msg::MotorCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__TRAITS_HPP_
