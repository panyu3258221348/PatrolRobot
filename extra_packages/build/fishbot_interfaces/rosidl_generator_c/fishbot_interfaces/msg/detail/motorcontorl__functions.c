// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fishbot_interfaces:msg/Motorcontorl.idl
// generated code does not contain a copyright notice
#include "fishbot_interfaces/msg/detail/motorcontorl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fishbot_interfaces__msg__Motorcontorl__init(fishbot_interfaces__msg__Motorcontorl * msg)
{
  if (!msg) {
    return false;
  }
  // motor1
  // motor2
  // motor3
  // motor4
  // speed1
  // speed2
  // speed3
  // speed4
  return true;
}

void
fishbot_interfaces__msg__Motorcontorl__fini(fishbot_interfaces__msg__Motorcontorl * msg)
{
  if (!msg) {
    return;
  }
  // motor1
  // motor2
  // motor3
  // motor4
  // speed1
  // speed2
  // speed3
  // speed4
}

bool
fishbot_interfaces__msg__Motorcontorl__are_equal(const fishbot_interfaces__msg__Motorcontorl * lhs, const fishbot_interfaces__msg__Motorcontorl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor1
  if (lhs->motor1 != rhs->motor1) {
    return false;
  }
  // motor2
  if (lhs->motor2 != rhs->motor2) {
    return false;
  }
  // motor3
  if (lhs->motor3 != rhs->motor3) {
    return false;
  }
  // motor4
  if (lhs->motor4 != rhs->motor4) {
    return false;
  }
  // speed1
  if (lhs->speed1 != rhs->speed1) {
    return false;
  }
  // speed2
  if (lhs->speed2 != rhs->speed2) {
    return false;
  }
  // speed3
  if (lhs->speed3 != rhs->speed3) {
    return false;
  }
  // speed4
  if (lhs->speed4 != rhs->speed4) {
    return false;
  }
  return true;
}

bool
fishbot_interfaces__msg__Motorcontorl__copy(
  const fishbot_interfaces__msg__Motorcontorl * input,
  fishbot_interfaces__msg__Motorcontorl * output)
{
  if (!input || !output) {
    return false;
  }
  // motor1
  output->motor1 = input->motor1;
  // motor2
  output->motor2 = input->motor2;
  // motor3
  output->motor3 = input->motor3;
  // motor4
  output->motor4 = input->motor4;
  // speed1
  output->speed1 = input->speed1;
  // speed2
  output->speed2 = input->speed2;
  // speed3
  output->speed3 = input->speed3;
  // speed4
  output->speed4 = input->speed4;
  return true;
}

fishbot_interfaces__msg__Motorcontorl *
fishbot_interfaces__msg__Motorcontorl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__msg__Motorcontorl * msg = (fishbot_interfaces__msg__Motorcontorl *)allocator.allocate(sizeof(fishbot_interfaces__msg__Motorcontorl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fishbot_interfaces__msg__Motorcontorl));
  bool success = fishbot_interfaces__msg__Motorcontorl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fishbot_interfaces__msg__Motorcontorl__destroy(fishbot_interfaces__msg__Motorcontorl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fishbot_interfaces__msg__Motorcontorl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fishbot_interfaces__msg__Motorcontorl__Sequence__init(fishbot_interfaces__msg__Motorcontorl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__msg__Motorcontorl * data = NULL;

  if (size) {
    data = (fishbot_interfaces__msg__Motorcontorl *)allocator.zero_allocate(size, sizeof(fishbot_interfaces__msg__Motorcontorl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fishbot_interfaces__msg__Motorcontorl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fishbot_interfaces__msg__Motorcontorl__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fishbot_interfaces__msg__Motorcontorl__Sequence__fini(fishbot_interfaces__msg__Motorcontorl__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fishbot_interfaces__msg__Motorcontorl__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fishbot_interfaces__msg__Motorcontorl__Sequence *
fishbot_interfaces__msg__Motorcontorl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fishbot_interfaces__msg__Motorcontorl__Sequence * array = (fishbot_interfaces__msg__Motorcontorl__Sequence *)allocator.allocate(sizeof(fishbot_interfaces__msg__Motorcontorl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fishbot_interfaces__msg__Motorcontorl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fishbot_interfaces__msg__Motorcontorl__Sequence__destroy(fishbot_interfaces__msg__Motorcontorl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fishbot_interfaces__msg__Motorcontorl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fishbot_interfaces__msg__Motorcontorl__Sequence__are_equal(const fishbot_interfaces__msg__Motorcontorl__Sequence * lhs, const fishbot_interfaces__msg__Motorcontorl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fishbot_interfaces__msg__Motorcontorl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fishbot_interfaces__msg__Motorcontorl__Sequence__copy(
  const fishbot_interfaces__msg__Motorcontorl__Sequence * input,
  fishbot_interfaces__msg__Motorcontorl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fishbot_interfaces__msg__Motorcontorl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fishbot_interfaces__msg__Motorcontorl * data =
      (fishbot_interfaces__msg__Motorcontorl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fishbot_interfaces__msg__Motorcontorl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fishbot_interfaces__msg__Motorcontorl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fishbot_interfaces__msg__Motorcontorl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
