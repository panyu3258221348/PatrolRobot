// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_H_
#define FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motorcontorl in the package fishbot_interfaces.
typedef struct fishbot_interfaces__msg__Motorcontorl
{
  float motor1;
  float motor2;
  float motor3;
  float motor4;
  float speed1;
  float speed2;
  float speed3;
  float speed4;
} fishbot_interfaces__msg__Motorcontorl;

// Struct for a sequence of fishbot_interfaces__msg__Motorcontorl.
typedef struct fishbot_interfaces__msg__Motorcontorl__Sequence
{
  fishbot_interfaces__msg__Motorcontorl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fishbot_interfaces__msg__Motorcontorl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__STRUCT_H_
