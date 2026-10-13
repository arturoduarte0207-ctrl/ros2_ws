// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice
#include "robx7_interfaces/msg/detail/custom_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
robx7_interfaces__msg__CustomString__init(robx7_interfaces__msg__CustomString * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    robx7_interfaces__msg__CustomString__fini(msg);
    return false;
  }
  return true;
}

void
robx7_interfaces__msg__CustomString__fini(robx7_interfaces__msg__CustomString * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

bool
robx7_interfaces__msg__CustomString__are_equal(const robx7_interfaces__msg__CustomString * lhs, const robx7_interfaces__msg__CustomString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
robx7_interfaces__msg__CustomString__copy(
  const robx7_interfaces__msg__CustomString * input,
  robx7_interfaces__msg__CustomString * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

robx7_interfaces__msg__CustomString *
robx7_interfaces__msg__CustomString__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__msg__CustomString * msg = (robx7_interfaces__msg__CustomString *)allocator.allocate(sizeof(robx7_interfaces__msg__CustomString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robx7_interfaces__msg__CustomString));
  bool success = robx7_interfaces__msg__CustomString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robx7_interfaces__msg__CustomString__destroy(robx7_interfaces__msg__CustomString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robx7_interfaces__msg__CustomString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robx7_interfaces__msg__CustomString__Sequence__init(robx7_interfaces__msg__CustomString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__msg__CustomString * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robx7_interfaces__msg__CustomString)) {
      return false;
    }
    data = (robx7_interfaces__msg__CustomString *)allocator.zero_allocate(size, sizeof(robx7_interfaces__msg__CustomString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robx7_interfaces__msg__CustomString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robx7_interfaces__msg__CustomString__fini(&data[i - 1]);
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
robx7_interfaces__msg__CustomString__Sequence__fini(robx7_interfaces__msg__CustomString__Sequence * array)
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
      robx7_interfaces__msg__CustomString__fini(&array->data[i]);
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

robx7_interfaces__msg__CustomString__Sequence *
robx7_interfaces__msg__CustomString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robx7_interfaces__msg__CustomString__Sequence * array = (robx7_interfaces__msg__CustomString__Sequence *)allocator.allocate(sizeof(robx7_interfaces__msg__CustomString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robx7_interfaces__msg__CustomString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robx7_interfaces__msg__CustomString__Sequence__destroy(robx7_interfaces__msg__CustomString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robx7_interfaces__msg__CustomString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robx7_interfaces__msg__CustomString__Sequence__are_equal(const robx7_interfaces__msg__CustomString__Sequence * lhs, const robx7_interfaces__msg__CustomString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robx7_interfaces__msg__CustomString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robx7_interfaces__msg__CustomString__Sequence__copy(
  const robx7_interfaces__msg__CustomString__Sequence * input,
  robx7_interfaces__msg__CustomString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robx7_interfaces__msg__CustomString)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robx7_interfaces__msg__CustomString);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robx7_interfaces__msg__CustomString * data =
      (robx7_interfaces__msg__CustomString *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robx7_interfaces__msg__CustomString__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robx7_interfaces__msg__CustomString__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robx7_interfaces__msg__CustomString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
