// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetMode.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dynamixel_sdk_custom_interfaces__msg__SetMode__init(dynamixel_sdk_custom_interfaces__msg__SetMode * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
dynamixel_sdk_custom_interfaces__msg__SetMode__fini(dynamixel_sdk_custom_interfaces__msg__SetMode * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
dynamixel_sdk_custom_interfaces__msg__SetMode__are_equal(const dynamixel_sdk_custom_interfaces__msg__SetMode * lhs, const dynamixel_sdk_custom_interfaces__msg__SetMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__msg__SetMode__copy(
  const dynamixel_sdk_custom_interfaces__msg__SetMode * input,
  dynamixel_sdk_custom_interfaces__msg__SetMode * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

dynamixel_sdk_custom_interfaces__msg__SetMode *
dynamixel_sdk_custom_interfaces__msg__SetMode__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SetMode * msg = (dynamixel_sdk_custom_interfaces__msg__SetMode *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__msg__SetMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_sdk_custom_interfaces__msg__SetMode));
  bool success = dynamixel_sdk_custom_interfaces__msg__SetMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_sdk_custom_interfaces__msg__SetMode__destroy(dynamixel_sdk_custom_interfaces__msg__SetMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_sdk_custom_interfaces__msg__SetMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__init(dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SetMode * data = NULL;

  if (size) {
    data = (dynamixel_sdk_custom_interfaces__msg__SetMode *)allocator.zero_allocate(size, sizeof(dynamixel_sdk_custom_interfaces__msg__SetMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_sdk_custom_interfaces__msg__SetMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_sdk_custom_interfaces__msg__SetMode__fini(&data[i - 1]);
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
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__fini(dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * array)
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
      dynamixel_sdk_custom_interfaces__msg__SetMode__fini(&array->data[i]);
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

dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence *
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * array = (dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence *)allocator.allocate(sizeof(dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__destroy(dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__are_equal(const dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * lhs, const dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__msg__SetMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence__copy(
  const dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * input,
  dynamixel_sdk_custom_interfaces__msg__SetMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_sdk_custom_interfaces__msg__SetMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_sdk_custom_interfaces__msg__SetMode * data =
      (dynamixel_sdk_custom_interfaces__msg__SetMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_sdk_custom_interfaces__msg__SetMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_sdk_custom_interfaces__msg__SetMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_sdk_custom_interfaces__msg__SetMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
