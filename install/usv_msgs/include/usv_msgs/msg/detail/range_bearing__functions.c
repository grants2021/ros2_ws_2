// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice
#include "usv_msgs/msg/detail/range_bearing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
usv_msgs__msg__RangeBearing__init(usv_msgs__msg__RangeBearing * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    usv_msgs__msg__RangeBearing__fini(msg);
    return false;
  }
  // range
  // bearing
  // elevation
  return true;
}

void
usv_msgs__msg__RangeBearing__fini(usv_msgs__msg__RangeBearing * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // range
  // bearing
  // elevation
}

bool
usv_msgs__msg__RangeBearing__are_equal(const usv_msgs__msg__RangeBearing * lhs, const usv_msgs__msg__RangeBearing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // bearing
  if (lhs->bearing != rhs->bearing) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  return true;
}

bool
usv_msgs__msg__RangeBearing__copy(
  const usv_msgs__msg__RangeBearing * input,
  usv_msgs__msg__RangeBearing * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // range
  output->range = input->range;
  // bearing
  output->bearing = input->bearing;
  // elevation
  output->elevation = input->elevation;
  return true;
}

usv_msgs__msg__RangeBearing *
usv_msgs__msg__RangeBearing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usv_msgs__msg__RangeBearing * msg = (usv_msgs__msg__RangeBearing *)allocator.allocate(sizeof(usv_msgs__msg__RangeBearing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usv_msgs__msg__RangeBearing));
  bool success = usv_msgs__msg__RangeBearing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
usv_msgs__msg__RangeBearing__destroy(usv_msgs__msg__RangeBearing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    usv_msgs__msg__RangeBearing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
usv_msgs__msg__RangeBearing__Sequence__init(usv_msgs__msg__RangeBearing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usv_msgs__msg__RangeBearing * data = NULL;

  if (size) {
    data = (usv_msgs__msg__RangeBearing *)allocator.zero_allocate(size, sizeof(usv_msgs__msg__RangeBearing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usv_msgs__msg__RangeBearing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usv_msgs__msg__RangeBearing__fini(&data[i - 1]);
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
usv_msgs__msg__RangeBearing__Sequence__fini(usv_msgs__msg__RangeBearing__Sequence * array)
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
      usv_msgs__msg__RangeBearing__fini(&array->data[i]);
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

usv_msgs__msg__RangeBearing__Sequence *
usv_msgs__msg__RangeBearing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usv_msgs__msg__RangeBearing__Sequence * array = (usv_msgs__msg__RangeBearing__Sequence *)allocator.allocate(sizeof(usv_msgs__msg__RangeBearing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = usv_msgs__msg__RangeBearing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
usv_msgs__msg__RangeBearing__Sequence__destroy(usv_msgs__msg__RangeBearing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    usv_msgs__msg__RangeBearing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
usv_msgs__msg__RangeBearing__Sequence__are_equal(const usv_msgs__msg__RangeBearing__Sequence * lhs, const usv_msgs__msg__RangeBearing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!usv_msgs__msg__RangeBearing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
usv_msgs__msg__RangeBearing__Sequence__copy(
  const usv_msgs__msg__RangeBearing__Sequence * input,
  usv_msgs__msg__RangeBearing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(usv_msgs__msg__RangeBearing);
    usv_msgs__msg__RangeBearing * data =
      (usv_msgs__msg__RangeBearing *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!usv_msgs__msg__RangeBearing__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          usv_msgs__msg__RangeBearing__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!usv_msgs__msg__RangeBearing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
