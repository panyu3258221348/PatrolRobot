// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__TRAITS_HPP_
#define FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fishbot_interfaces/msg/detail/motorcontorl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fishbot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motorcontorl & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor1
  {
    out << "motor1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1, out);
    out << ", ";
  }

  // member: motor2
  {
    out << "motor2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2, out);
    out << ", ";
  }

  // member: motor3
  {
    out << "motor3: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3, out);
    out << ", ";
  }

  // member: motor4
  {
    out << "motor4: ";
    rosidl_generator_traits::value_to_yaml(msg.motor4, out);
    out << ", ";
  }

  // member: speed1
  {
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << ", ";
  }

  // member: speed2
  {
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
    out << ", ";
  }

  // member: speed3
  {
    out << "speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3, out);
    out << ", ";
  }

  // member: speed4
  {
    out << "speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motorcontorl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor1: ";
    rosidl_generator_traits::value_to_yaml(msg.motor1, out);
    out << "\n";
  }

  // member: motor2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor2: ";
    rosidl_generator_traits::value_to_yaml(msg.motor2, out);
    out << "\n";
  }

  // member: motor3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor3: ";
    rosidl_generator_traits::value_to_yaml(msg.motor3, out);
    out << "\n";
  }

  // member: motor4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor4: ";
    rosidl_generator_traits::value_to_yaml(msg.motor4, out);
    out << "\n";
  }

  // member: speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1: ";
    rosidl_generator_traits::value_to_yaml(msg.speed1, out);
    out << "\n";
  }

  // member: speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed2: ";
    rosidl_generator_traits::value_to_yaml(msg.speed2, out);
    out << "\n";
  }

  // member: speed3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed3: ";
    rosidl_generator_traits::value_to_yaml(msg.speed3, out);
    out << "\n";
  }

  // member: speed4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed4: ";
    rosidl_generator_traits::value_to_yaml(msg.speed4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motorcontorl & msg, bool use_flow_style = false)
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

}  // namespace fishbot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fishbot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fishbot_interfaces::msg::Motorcontorl & msg,
  std::ostream & out, size_t indentation = 0)
{
  fishbot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fishbot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fishbot_interfaces::msg::Motorcontorl & msg)
{
  return fishbot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fishbot_interfaces::msg::Motorcontorl>()
{
  return "fishbot_interfaces::msg::Motorcontorl";
}

template<>
inline const char * name<fishbot_interfaces::msg::Motorcontorl>()
{
  return "fishbot_interfaces/msg/Motorcontorl";
}

template<>
struct has_fixed_size<fishbot_interfaces::msg::Motorcontorl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fishbot_interfaces::msg::Motorcontorl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fishbot_interfaces::msg::Motorcontorl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__TRAITS_HPP_
