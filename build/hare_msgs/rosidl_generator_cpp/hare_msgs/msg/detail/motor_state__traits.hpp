// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_state.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hare_msgs/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hare_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: erpm
  {
    out << "erpm: ";
    rosidl_generator_traits::value_to_yaml(msg.erpm, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: duty
  {
    out << "duty: ";
    rosidl_generator_traits::value_to_yaml(msg.duty, out);
    out << ", ";
  }

  // member: temp_fet
  {
    out << "temp_fet: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fet, out);
    out << ", ";
  }

  // member: temp_motor
  {
    out << "temp_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_motor, out);
    out << ", ";
  }

  // member: input_current
  {
    out << "input_current: ";
    rosidl_generator_traits::value_to_yaml(msg.input_current, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: tachometer
  {
    out << "tachometer: ";
    rosidl_generator_traits::value_to_yaml(msg.tachometer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorState & msg,
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

  // member: erpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "erpm: ";
    rosidl_generator_traits::value_to_yaml(msg.erpm, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: duty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duty: ";
    rosidl_generator_traits::value_to_yaml(msg.duty, out);
    out << "\n";
  }

  // member: temp_fet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_fet: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_fet, out);
    out << "\n";
  }

  // member: temp_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.temp_motor, out);
    out << "\n";
  }

  // member: input_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_current: ";
    rosidl_generator_traits::value_to_yaml(msg.input_current, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: tachometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tachometer: ";
    rosidl_generator_traits::value_to_yaml(msg.tachometer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorState & msg, bool use_flow_style = false)
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
  const hare_msgs::msg::MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  hare_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hare_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hare_msgs::msg::MotorState & msg)
{
  return hare_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hare_msgs::msg::MotorState>()
{
  return "hare_msgs::msg::MotorState";
}

template<>
inline const char * name<hare_msgs::msg::MotorState>()
{
  return "hare_msgs/msg/MotorState";
}

template<>
struct has_fixed_size<hare_msgs::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hare_msgs::msg::MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hare_msgs::msg::MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_STATE__TRAITS_HPP_
