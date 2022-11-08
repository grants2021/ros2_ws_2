// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice
#include "vrx_gazebo/msg/detail/contact__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `collision1`
// Member `collision2`
#include "rosidl_runtime_c/string_functions.h"

bool
vrx_gazebo__msg__Contact__init(vrx_gazebo__msg__Contact * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vrx_gazebo__msg__Contact__fini(msg);
    return false;
  }
  // collision1
  if (!rosidl_runtime_c__String__init(&msg->collision1)) {
    vrx_gazebo__msg__Contact__fini(msg);
    return false;
  }
  // collision2
  if (!rosidl_runtime_c__String__init(&msg->collision2)) {
    vrx_gazebo__msg__Contact__fini(msg);
    return false;
  }
  return true;
}

void
vrx_gazebo__msg__Contact__fini(vrx_gazebo__msg__Contact * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // collision1
  rosidl_runtime_c__String__fini(&msg->collision1);
  // collision2
  rosidl_runtime_c__String__fini(&msg->collision2);
}

bool
vrx_gazebo__msg__Contact__are_equal(const vrx_gazebo__msg__Contact * lhs, const vrx_gazebo__msg__Contact * rhs)
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
  // collision1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->collision1), &(rhs->collision1)))
  {
    return false;
  }
  // collision2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->collision2), &(rhs->collision2)))
  {
    return false;
  }
  return true;
}

bool
vrx_gazebo__msg__Contact__copy(
  const vrx_gazebo__msg__Contact * input,
  vrx_gazebo__msg__Contact * output)
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
  // collision1
  if (!rosidl_runtime_c__String__copy(
      &(input->collision1), &(output->collision1)))
  {
    return false;
  }
  // collision2
  if (!rosidl_runtime_c__String__copy(
      &(input->collision2), &(output->collision2)))
  {
    return false;
  }
  return true;
}

vrx_gazebo__msg__Contact *
vrx_gazebo__msg__Contact__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Contact * msg = (vrx_gazebo__msg__Contact *)allocator.allocate(sizeof(vrx_gazebo__msg__Contact), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vrx_gazebo__msg__Contact));
  bool success = vrx_gazebo__msg__Contact__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vrx_gazebo__msg__Contact__destroy(vrx_gazebo__msg__Contact * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vrx_gazebo__msg__Contact__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vrx_gazebo__msg__Contact__Sequence__init(vrx_gazebo__msg__Contact__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Contact * data = NULL;

  if (size) {
    data = (vrx_gazebo__msg__Contact *)allocator.zero_allocate(size, sizeof(vrx_gazebo__msg__Contact), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vrx_gazebo__msg__Contact__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vrx_gazebo__msg__Contact__fini(&data[i - 1]);
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
vrx_gazebo__msg__Contact__Sequence__fini(vrx_gazebo__msg__Contact__Sequence * array)
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
      vrx_gazebo__msg__Contact__fini(&array->data[i]);
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

vrx_gazebo__msg__Contact__Sequence *
vrx_gazebo__msg__Contact__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Contact__Sequence * array = (vrx_gazebo__msg__Contact__Sequence *)allocator.allocate(sizeof(vrx_gazebo__msg__Contact__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vrx_gazebo__msg__Contact__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vrx_gazebo__msg__Contact__Sequence__destroy(vrx_gazebo__msg__Contact__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vrx_gazebo__msg__Contact__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vrx_gazebo__msg__Contact__Sequence__are_equal(const vrx_gazebo__msg__Contact__Sequence * lhs, const vrx_gazebo__msg__Contact__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vrx_gazebo__msg__Contact__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vrx_gazebo__msg__Contact__Sequence__copy(
  const vrx_gazebo__msg__Contact__Sequence * input,
  vrx_gazebo__msg__Contact__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vrx_gazebo__msg__Contact);
    vrx_gazebo__msg__Contact * data =
      (vrx_gazebo__msg__Contact *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vrx_gazebo__msg__Contact__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vrx_gazebo__msg__Contact__fini(&data[i]);
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
    if (!vrx_gazebo__msg__Contact__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
