// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hare_msgs:msg/MotorCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hare_msgs/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hare_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_rpm
{
public:
  explicit Init_MotorCommand_rpm(::hare_msgs::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::hare_msgs::msg::MotorCommand rpm(::hare_msgs::msg::MotorCommand::_rpm_type arg)
  {
    msg_.rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hare_msgs::msg::MotorCommand msg_;
};

class Init_MotorCommand_id
{
public:
  Init_MotorCommand_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_rpm id(::hare_msgs::msg::MotorCommand::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MotorCommand_rpm(msg_);
  }

private:
  ::hare_msgs::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hare_msgs::msg::MotorCommand>()
{
  return hare_msgs::msg::builder::Init_MotorCommand_id();
}

}  // namespace hare_msgs

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
