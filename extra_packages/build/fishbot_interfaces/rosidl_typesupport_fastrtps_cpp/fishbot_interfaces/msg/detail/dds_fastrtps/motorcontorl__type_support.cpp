// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice
#include "fishbot_interfaces/msg/detail/motorcontorl__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fishbot_interfaces/msg/detail/motorcontorl__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fishbot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fishbot_interfaces
cdr_serialize(
  const fishbot_interfaces::msg::Motorcontorl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor1
  cdr << ros_message.motor1;
  // Member: motor2
  cdr << ros_message.motor2;
  // Member: motor3
  cdr << ros_message.motor3;
  // Member: motor4
  cdr << ros_message.motor4;
  // Member: speed1
  cdr << ros_message.speed1;
  // Member: speed2
  cdr << ros_message.speed2;
  // Member: speed3
  cdr << ros_message.speed3;
  // Member: speed4
  cdr << ros_message.speed4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fishbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fishbot_interfaces::msg::Motorcontorl & ros_message)
{
  // Member: motor1
  cdr >> ros_message.motor1;

  // Member: motor2
  cdr >> ros_message.motor2;

  // Member: motor3
  cdr >> ros_message.motor3;

  // Member: motor4
  cdr >> ros_message.motor4;

  // Member: speed1
  cdr >> ros_message.speed1;

  // Member: speed2
  cdr >> ros_message.speed2;

  // Member: speed3
  cdr >> ros_message.speed3;

  // Member: speed4
  cdr >> ros_message.speed4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fishbot_interfaces
get_serialized_size(
  const fishbot_interfaces::msg::Motorcontorl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor1
  {
    size_t item_size = sizeof(ros_message.motor1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor2
  {
    size_t item_size = sizeof(ros_message.motor2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor3
  {
    size_t item_size = sizeof(ros_message.motor3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor4
  {
    size_t item_size = sizeof(ros_message.motor4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed1
  {
    size_t item_size = sizeof(ros_message.speed1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed2
  {
    size_t item_size = sizeof(ros_message.speed2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed3
  {
    size_t item_size = sizeof(ros_message.speed3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed4
  {
    size_t item_size = sizeof(ros_message.speed4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fishbot_interfaces
max_serialized_size_Motorcontorl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: motor1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fishbot_interfaces::msg::Motorcontorl;
    is_plain =
      (
      offsetof(DataType, speed4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Motorcontorl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fishbot_interfaces::msg::Motorcontorl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Motorcontorl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fishbot_interfaces::msg::Motorcontorl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Motorcontorl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fishbot_interfaces::msg::Motorcontorl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Motorcontorl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Motorcontorl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Motorcontorl__callbacks = {
  "fishbot_interfaces::msg",
  "Motorcontorl",
  _Motorcontorl__cdr_serialize,
  _Motorcontorl__cdr_deserialize,
  _Motorcontorl__get_serialized_size,
  _Motorcontorl__max_serialized_size
};

static rosidl_message_type_support_t _Motorcontorl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Motorcontorl__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fishbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fishbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<fishbot_interfaces::msg::Motorcontorl>()
{
  return &fishbot_interfaces::msg::typesupport_fastrtps_cpp::_Motorcontorl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fishbot_interfaces, msg, Motorcontorl)() {
  return &fishbot_interfaces::msg::typesupport_fastrtps_cpp::_Motorcontorl__handle;
}

#ifdef __cplusplus
}
#endif
