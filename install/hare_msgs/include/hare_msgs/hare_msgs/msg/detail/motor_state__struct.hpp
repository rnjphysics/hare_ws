// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_state.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hare_msgs__msg__MotorState __attribute__((deprecated))
#else
# define DEPRECATED__hare_msgs__msg__MotorState __declspec(deprecated)
#endif

namespace hare_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorState_
{
  using Type = MotorState_<ContainerAllocator>;

  explicit MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->erpm = 0l;
      this->current = 0.0f;
      this->duty = 0.0f;
      this->temp_fet = 0.0f;
      this->temp_motor = 0.0f;
      this->input_current = 0.0f;
      this->voltage = 0.0f;
      this->tachometer = 0l;
    }
  }

  explicit MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->erpm = 0l;
      this->current = 0.0f;
      this->duty = 0.0f;
      this->temp_fet = 0.0f;
      this->temp_motor = 0.0f;
      this->input_current = 0.0f;
      this->voltage = 0.0f;
      this->tachometer = 0l;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _erpm_type =
    int32_t;
  _erpm_type erpm;
  using _current_type =
    float;
  _current_type current;
  using _duty_type =
    float;
  _duty_type duty;
  using _temp_fet_type =
    float;
  _temp_fet_type temp_fet;
  using _temp_motor_type =
    float;
  _temp_motor_type temp_motor;
  using _input_current_type =
    float;
  _input_current_type input_current;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _tachometer_type =
    int32_t;
  _tachometer_type tachometer;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__erpm(
    const int32_t & _arg)
  {
    this->erpm = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__duty(
    const float & _arg)
  {
    this->duty = _arg;
    return *this;
  }
  Type & set__temp_fet(
    const float & _arg)
  {
    this->temp_fet = _arg;
    return *this;
  }
  Type & set__temp_motor(
    const float & _arg)
  {
    this->temp_motor = _arg;
    return *this;
  }
  Type & set__input_current(
    const float & _arg)
  {
    this->input_current = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__tachometer(
    const int32_t & _arg)
  {
    this->tachometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hare_msgs::msg::MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const hare_msgs::msg::MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hare_msgs::msg::MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hare_msgs::msg::MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hare_msgs::msg::MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hare_msgs::msg::MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hare_msgs::msg::MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hare_msgs::msg::MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hare_msgs::msg::MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hare_msgs::msg::MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hare_msgs__msg__MotorState
    std::shared_ptr<hare_msgs::msg::MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hare_msgs__msg__MotorState
    std::shared_ptr<hare_msgs::msg::MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->erpm != other.erpm) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->duty != other.duty) {
      return false;
    }
    if (this->temp_fet != other.temp_fet) {
      return false;
    }
    if (this->temp_motor != other.temp_motor) {
      return false;
    }
    if (this->input_current != other.input_current) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->tachometer != other.tachometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorState_

// alias to use template instance with default allocator
using MotorState =
  hare_msgs::msg::MotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hare_msgs

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_STATE__STRUCT_HPP_
