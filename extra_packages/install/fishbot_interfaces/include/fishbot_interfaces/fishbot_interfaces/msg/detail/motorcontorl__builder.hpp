// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__BUILDER_HPP_
#define FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fishbot_interfaces/msg/detail/motorcontorl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fishbot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Motorcontorl_speed4
{
public:
  explicit Init_Motorcontorl_speed4(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  ::fishbot_interfaces::msg::Motorcontorl speed4(::fishbot_interfaces::msg::Motorcontorl::_speed4_type arg)
  {
    msg_.speed4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_speed3
{
public:
  explicit Init_Motorcontorl_speed3(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_speed4 speed3(::fishbot_interfaces::msg::Motorcontorl::_speed3_type arg)
  {
    msg_.speed3 = std::move(arg);
    return Init_Motorcontorl_speed4(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_speed2
{
public:
  explicit Init_Motorcontorl_speed2(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_speed3 speed2(::fishbot_interfaces::msg::Motorcontorl::_speed2_type arg)
  {
    msg_.speed2 = std::move(arg);
    return Init_Motorcontorl_speed3(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_speed1
{
public:
  explicit Init_Motorcontorl_speed1(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_speed2 speed1(::fishbot_interfaces::msg::Motorcontorl::_speed1_type arg)
  {
    msg_.speed1 = std::move(arg);
    return Init_Motorcontorl_speed2(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_motor4
{
public:
  explicit Init_Motorcontorl_motor4(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_speed1 motor4(::fishbot_interfaces::msg::Motorcontorl::_motor4_type arg)
  {
    msg_.motor4 = std::move(arg);
    return Init_Motorcontorl_speed1(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_motor3
{
public:
  explicit Init_Motorcontorl_motor3(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_motor4 motor3(::fishbot_interfaces::msg::Motorcontorl::_motor3_type arg)
  {
    msg_.motor3 = std::move(arg);
    return Init_Motorcontorl_motor4(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_motor2
{
public:
  explicit Init_Motorcontorl_motor2(::fishbot_interfaces::msg::Motorcontorl & msg)
  : msg_(msg)
  {}
  Init_Motorcontorl_motor3 motor2(::fishbot_interfaces::msg::Motorcontorl::_motor2_type arg)
  {
    msg_.motor2 = std::move(arg);
    return Init_Motorcontorl_motor3(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

class Init_Motorcontorl_motor1
{
public:
  Init_Motorcontorl_motor1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motorcontorl_motor2 motor1(::fishbot_interfaces::msg::Motorcontorl::_motor1_type arg)
  {
    msg_.motor1 = std::move(arg);
    return Init_Motorcontorl_motor2(msg_);
  }

private:
  ::fishbot_interfaces::msg::Motorcontorl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fishbot_interfaces::msg::Motorcontorl>()
{
  return fishbot_interfaces::msg::builder::Init_Motorcontorl_motor1();
}

}  // namespace fishbot_interfaces

#endif  // FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__BUILDER_HPP_
