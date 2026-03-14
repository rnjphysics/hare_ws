// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_state.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hare_msgs/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hare_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorState_tachometer
{
public:
  explicit Init_MotorState_tachometer(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::hare_msgs::msg::MotorState tachometer(::hare_msgs::msg::MotorState::_tachometer_type arg)
  {
    msg_.tachometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_voltage
{
public:
  explicit Init_MotorState_voltage(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tachometer voltage(::hare_msgs::msg::MotorState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MotorState_tachometer(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_input_current
{
public:
  explicit Init_MotorState_input_current(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_voltage input_current(::hare_msgs::msg::MotorState::_input_current_type arg)
  {
    msg_.input_current = std::move(arg);
    return Init_MotorState_voltage(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_temp_motor
{
public:
  explicit Init_MotorState_temp_motor(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_input_current temp_motor(::hare_msgs::msg::MotorState::_temp_motor_type arg)
  {
    msg_.temp_motor = std::move(arg);
    return Init_MotorState_input_current(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_temp_fet
{
public:
  explicit Init_MotorState_temp_fet(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temp_motor temp_fet(::hare_msgs::msg::MotorState::_temp_fet_type arg)
  {
    msg_.temp_fet = std::move(arg);
    return Init_MotorState_temp_motor(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_duty
{
public:
  explicit Init_MotorState_duty(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temp_fet duty(::hare_msgs::msg::MotorState::_duty_type arg)
  {
    msg_.duty = std::move(arg);
    return Init_MotorState_temp_fet(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_current
{
public:
  explicit Init_MotorState_current(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_duty current(::hare_msgs::msg::MotorState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorState_duty(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_erpm
{
public:
  explicit Init_MotorState_erpm(::hare_msgs::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_current erpm(::hare_msgs::msg::MotorState::_erpm_type arg)
  {
    msg_.erpm = std::move(arg);
    return Init_MotorState_current(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

class Init_MotorState_id
{
public:
  Init_MotorState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_erpm id(::hare_msgs::msg::MotorState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MotorState_erpm(msg_);
  }

private:
  ::hare_msgs::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hare_msgs::msg::MotorState>()
{
  return hare_msgs::msg::builder::Init_MotorState_id();
}

}  // namespace hare_msgs

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
