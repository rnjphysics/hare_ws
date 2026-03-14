// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hare_msgs:msg/MotorCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hare_msgs/msg/motor_command_array.hpp"


#ifndef HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_HPP_
#define HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motors'
#include "hare_msgs/msg/detail/motor_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hare_msgs__msg__MotorCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__hare_msgs__msg__MotorCommandArray __declspec(deprecated)
#endif

namespace hare_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommandArray_
{
  using Type = MotorCommandArray_<ContainerAllocator>;

  explicit MotorCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motors_type =
    std::vector<hare_msgs::msg::MotorCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hare_msgs::msg::MotorCommand_<ContainerAllocator>>>;
  _motors_type motors;

  // setters for named parameter idiom
  Type & set__motors(
    const std::vector<hare_msgs::msg::MotorCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hare_msgs::msg::MotorCommand_<ContainerAllocator>>> & _arg)
  {
    this->motors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hare_msgs::msg::MotorCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const hare_msgs::msg::MotorCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hare_msgs::msg::MotorCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hare_msgs::msg::MotorCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hare_msgs__msg__MotorCommandArray
    std::shared_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hare_msgs__msg__MotorCommandArray
    std::shared_ptr<hare_msgs::msg::MotorCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommandArray_ & other) const
  {
    if (this->motors != other.motors) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommandArray_

// alias to use template instance with default allocator
using MotorCommandArray =
  hare_msgs::msg::MotorCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hare_msgs

#endif  // HARE_MSGS__MSG__DETAIL__MOTOR_COMMAND_ARRAY__STRUCT_HPP_
