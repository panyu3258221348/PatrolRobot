// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_HPP_
#define FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fishbot_interfaces__msg__Motorcontorl __attribute__((deprecated))
#else
# define DEPRECATED__fishbot_interfaces__msg__Motorcontorl __declspec(deprecated)
#endif

namespace fishbot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motorcontorl_
{
  using Type = Motorcontorl_<ContainerAllocator>;

  explicit Motorcontorl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor1 = 0.0f;
      this->motor2 = 0.0f;
      this->motor3 = 0.0f;
      this->motor4 = 0.0f;
      this->speed1 = 0.0f;
      this->speed2 = 0.0f;
      this->speed3 = 0.0f;
      this->speed4 = 0.0f;
    }
  }

  explicit Motorcontorl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor1 = 0.0f;
      this->motor2 = 0.0f;
      this->motor3 = 0.0f;
      this->motor4 = 0.0f;
      this->speed1 = 0.0f;
      this->speed2 = 0.0f;
      this->speed3 = 0.0f;
      this->speed4 = 0.0f;
    }
  }

  // field types and members
  using _motor1_type =
    float;
  _motor1_type motor1;
  using _motor2_type =
    float;
  _motor2_type motor2;
  using _motor3_type =
    float;
  _motor3_type motor3;
  using _motor4_type =
    float;
  _motor4_type motor4;
  using _speed1_type =
    float;
  _speed1_type speed1;
  using _speed2_type =
    float;
  _speed2_type speed2;
  using _speed3_type =
    float;
  _speed3_type speed3;
  using _speed4_type =
    float;
  _speed4_type speed4;

  // setters for named parameter idiom
  Type & set__motor1(
    const float & _arg)
  {
    this->motor1 = _arg;
    return *this;
  }
  Type & set__motor2(
    const float & _arg)
  {
    this->motor2 = _arg;
    return *this;
  }
  Type & set__motor3(
    const float & _arg)
  {
    this->motor3 = _arg;
    return *this;
  }
  Type & set__motor4(
    const float & _arg)
  {
    this->motor4 = _arg;
    return *this;
  }
  Type & set__speed1(
    const float & _arg)
  {
    this->speed1 = _arg;
    return *this;
  }
  Type & set__speed2(
    const float & _arg)
  {
    this->speed2 = _arg;
    return *this;
  }
  Type & set__speed3(
    const float & _arg)
  {
    this->speed3 = _arg;
    return *this;
  }
  Type & set__speed4(
    const float & _arg)
  {
    this->speed4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> *;
  using ConstRawPtr =
    const fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fishbot_interfaces__msg__Motorcontorl
    std::shared_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fishbot_interfaces__msg__Motorcontorl
    std::shared_ptr<fishbot_interfaces::msg::Motorcontorl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motorcontorl_ & other) const
  {
    if (this->motor1 != other.motor1) {
      return false;
    }
    if (this->motor2 != other.motor2) {
      return false;
    }
    if (this->motor3 != other.motor3) {
      return false;
    }
    if (this->motor4 != other.motor4) {
      return false;
    }
    if (this->speed1 != other.speed1) {
      return false;
    }
    if (this->speed2 != other.speed2) {
      return false;
    }
    if (this->speed3 != other.speed3) {
      return false;
    }
    if (this->speed4 != other.speed4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motorcontorl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motorcontorl_

// alias to use template instance with default allocator
using Motorcontorl =
  fishbot_interfaces::msg::Motorcontorl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fishbot_interfaces

#endif  // FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_HPP_
