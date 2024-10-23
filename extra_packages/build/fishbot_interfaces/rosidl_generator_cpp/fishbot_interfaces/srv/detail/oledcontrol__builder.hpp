// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fishbot_interfaces:srv/Oledcontrol.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__BUILDER_HPP_
#define FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fishbot_interfaces/srv/detail/oledcontrol__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fishbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Oledcontrol_Request_data
{
public:
  explicit Init_Oledcontrol_Request_data(::fishbot_interfaces::srv::Oledcontrol_Request & msg)
  : msg_(msg)
  {}
  ::fishbot_interfaces::srv::Oledcontrol_Request data(::fishbot_interfaces::srv::Oledcontrol_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fishbot_interfaces::srv::Oledcontrol_Request msg_;
};

class Init_Oledcontrol_Request_py
{
public:
  explicit Init_Oledcontrol_Request_py(::fishbot_interfaces::srv::Oledcontrol_Request & msg)
  : msg_(msg)
  {}
  Init_Oledcontrol_Request_data py(::fishbot_interfaces::srv::Oledcontrol_Request::_py_type arg)
  {
    msg_.py = std::move(arg);
    return Init_Oledcontrol_Request_data(msg_);
  }

private:
  ::fishbot_interfaces::srv::Oledcontrol_Request msg_;
};

class Init_Oledcontrol_Request_px
{
public:
  Init_Oledcontrol_Request_px()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Oledcontrol_Request_py px(::fishbot_interfaces::srv::Oledcontrol_Request::_px_type arg)
  {
    msg_.px = std::move(arg);
    return Init_Oledcontrol_Request_py(msg_);
  }

private:
  ::fishbot_interfaces::srv::Oledcontrol_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fishbot_interfaces::srv::Oledcontrol_Request>()
{
  return fishbot_interfaces::srv::builder::Init_Oledcontrol_Request_px();
}

}  // namespace fishbot_interfaces


namespace fishbot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Oledcontrol_Response_result
{
public:
  Init_Oledcontrol_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fishbot_interfaces::srv::Oledcontrol_Response result(::fishbot_interfaces::srv::Oledcontrol_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fishbot_interfaces::srv::Oledcontrol_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fishbot_interfaces::srv::Oledcontrol_Response>()
{
  return fishbot_interfaces::srv::builder::Init_Oledcontrol_Response_result();
}

}  // namespace fishbot_interfaces

#endif  // FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__BUILDER_HPP_
