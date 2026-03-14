// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command_array.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__BUILDER_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hare_msgs/msg/detail/motor_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hare_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommandArray_motors
{
public:
  Init_MotorCommandArray_motors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hare_msgs::msg::MotorCommandArray motors(::hare_msgs::msg::MotorCommandArray::_motors_type arg)
  {
    msg_.motors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hare_msgs::msg::MotorCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hare_msgs::msg::MotorCommandArray>()
{
  return hare_msgs::msg::builder::Init_MotorCommandArray_motors();
}

}  // namespace hare_msgs

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__BUILDER_HPP_
