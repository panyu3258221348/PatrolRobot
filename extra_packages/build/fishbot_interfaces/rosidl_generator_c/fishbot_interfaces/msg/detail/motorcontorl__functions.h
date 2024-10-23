// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice

#ifndef FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__FUNCTIONS_H_
#define FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fishbot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "fishbot_interfaces/msg/detail/motorcontorl__struct.h"

/// Initialize msg/Motorcontorl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fishbot_interfaces__msg__Motorcontorl
 * )) before or use
 * fishbot_interfaces__msg__Motorcontorl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__init(fishbot_interfaces__msg__Motorcontorl * msg);

/// Finalize msg/Motorcontorl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
void
fishbot_interfaces__msg__Motorcontorl__fini(fishbot_interfaces__msg__Motorcontorl * msg);

/// Create msg/Motorcontorl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fishbot_interfaces__msg__Motorcontorl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
fishbot_interfaces__msg__Motorcontorl *
fishbot_interfaces__msg__Motorcontorl__create();

/// Destroy msg/Motorcontorl message.
/**
 * It calls
 * fishbot_interfaces__msg__Motorcontorl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
void
fishbot_interfaces__msg__Motorcontorl__destroy(fishbot_interfaces__msg__Motorcontorl * msg);

/// Check for msg/Motorcontorl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__are_equal(const fishbot_interfaces__msg__Motorcontorl * lhs, const fishbot_interfaces__msg__Motorcontorl * rhs);

/// Copy a msg/Motorcontorl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__copy(
  const fishbot_interfaces__msg__Motorcontorl * input,
  fishbot_interfaces__msg__Motorcontorl * output);

/// Initialize array of msg/Motorcontorl messages.
/**
 * It allocates the memory for the number of elements and calls
 * fishbot_interfaces__msg__Motorcontorl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__Sequence__init(fishbot_interfaces__msg__Motorcontorl__Sequence * array, size_t size);

/// Finalize array of msg/Motorcontorl messages.
/**
 * It calls
 * fishbot_interfaces__msg__Motorcontorl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
void
fishbot_interfaces__msg__Motorcontorl__Sequence__fini(fishbot_interfaces__msg__Motorcontorl__Sequence * array);

/// Create array of msg/Motorcontorl messages.
/**
 * It allocates the memory for the array and calls
 * fishbot_interfaces__msg__Motorcontorl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
fishbot_interfaces__msg__Motorcontorl__Sequence *
fishbot_interfaces__msg__Motorcontorl__Sequence__create(size_t size);

/// Destroy array of msg/Motorcontorl messages.
/**
 * It calls
 * fishbot_interfaces__msg__Motorcontorl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
void
fishbot_interfaces__msg__Motorcontorl__Sequence__destroy(fishbot_interfaces__msg__Motorcontorl__Sequence * array);

/// Check for msg/Motorcontorl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__Sequence__are_equal(const fishbot_interfaces__msg__Motorcontorl__Sequence * lhs, const fishbot_interfaces__msg__Motorcontorl__Sequence * rhs);

/// Copy an array of msg/Motorcontorl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fishbot_interfaces
bool
fishbot_interfaces__msg__Motorcontorl__Sequence__copy(
  const fishbot_interfaces__msg__Motorcontorl__Sequence * input,
  fishbot_interfaces__msg__Motorcontorl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FISHBOT_INTERFACES__MSG__DETAIL__MOTORCONTORL__FUNCTIONS_H_
