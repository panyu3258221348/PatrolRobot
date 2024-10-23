// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fishbot_interfaces:srv/Oledcontrol.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__STRUCT_H_
#define FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Oledcontrol in the package fishbot_interfaces.
typedef struct fishbot_interfaces__srv__Oledcontrol_Request
{
  int32_t px;
  int32_t py;
  rosidl_runtime_c__String data;
} fishbot_interfaces__srv__Oledcontrol_Request;

// Struct for a sequence of fishbot_interfaces__srv__Oledcontrol_Request.
typedef struct fishbot_interfaces__srv__Oledcontrol_Request__Sequence
{
  fishbot_interfaces__srv__Oledcontrol_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fishbot_interfaces__srv__Oledcontrol_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Oledcontrol in the package fishbot_interfaces.
typedef struct fishbot_interfaces__srv__Oledcontrol_Response
{
  int32_t result;
} fishbot_interfaces__srv__Oledcontrol_Response;

// Struct for a sequence of fishbot_interfaces__srv__Oledcontrol_Response.
typedef struct fishbot_interfaces__srv__Oledcontrol_Response__Sequence
{
  fishbot_interfaces__srv__Oledcontrol_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fishbot_interfaces__srv__Oledcontrol_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FISHBOT_INTERFACES__SRV__DETAIL__OLEDCONTROL__STRUCT_H_
