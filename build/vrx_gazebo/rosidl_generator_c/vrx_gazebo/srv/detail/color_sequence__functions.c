// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice
#include "vrx_gazebo/srv/detail/color_sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `color1`
// Member `color2`
// Member `color3`
#include "rosidl_runtime_c/string_functions.h"

bool
vrx_gazebo__srv__ColorSequence_Request__init(vrx_gazebo__srv__ColorSequence_Request * msg)
{
  if (!msg) {
    return false;
  }
  // color1
  if (!rosidl_runtime_c__String__init(&msg->color1)) {
    vrx_gazebo__srv__ColorSequence_Request__fini(msg);
    return false;
  }
  // color2
  if (!rosidl_runtime_c__String__init(&msg->color2)) {
    vrx_gazebo__srv__ColorSequence_Request__fini(msg);
    return false;
  }
  // color3
  if (!rosidl_runtime_c__String__init(&msg->color3)) {
    vrx_gazebo__srv__ColorSequence_Request__fini(msg);
    return false;
  }
  return true;
}

void
vrx_gazebo__srv__ColorSequence_Request__fini(vrx_gazebo__srv__ColorSequence_Request * msg)
{
  if (!msg) {
    return;
  }
  // color1
  rosidl_runtime_c__String__fini(&msg->color1);
  // color2
  rosidl_runtime_c__String__fini(&msg->color2);
  // color3
  rosidl_runtime_c__String__fini(&msg->color3);
}

bool
vrx_gazebo__srv__ColorSequence_Request__are_equal(const vrx_gazebo__srv__ColorSequence_Request * lhs, const vrx_gazebo__srv__ColorSequence_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color1), &(rhs->color1)))
  {
    return false;
  }
  // color2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color2), &(rhs->color2)))
  {
    return false;
  }
  // color3
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color3), &(rhs->color3)))
  {
    return false;
  }
  return true;
}

bool
vrx_gazebo__srv__ColorSequence_Request__copy(
  const vrx_gazebo__srv__ColorSequence_Request * input,
  vrx_gazebo__srv__ColorSequence_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // color1
  if (!rosidl_runtime_c__String__copy(
      &(input->color1), &(output->color1)))
  {
    return false;
  }
  // color2
  if (!rosidl_runtime_c__String__copy(
      &(input->color2), &(output->color2)))
  {
    return false;
  }
  // color3
  if (!rosidl_runtime_c__String__copy(
      &(input->color3), &(output->color3)))
  {
    return false;
  }
  return true;
}

vrx_gazebo__srv__ColorSequence_Request *
vrx_gazebo__srv__ColorSequence_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Request * msg = (vrx_gazebo__srv__ColorSequence_Request *)allocator.allocate(sizeof(vrx_gazebo__srv__ColorSequence_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vrx_gazebo__srv__ColorSequence_Request));
  bool success = vrx_gazebo__srv__ColorSequence_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vrx_gazebo__srv__ColorSequence_Request__destroy(vrx_gazebo__srv__ColorSequence_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vrx_gazebo__srv__ColorSequence_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vrx_gazebo__srv__ColorSequence_Request__Sequence__init(vrx_gazebo__srv__ColorSequence_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Request * data = NULL;

  if (size) {
    data = (vrx_gazebo__srv__ColorSequence_Request *)allocator.zero_allocate(size, sizeof(vrx_gazebo__srv__ColorSequence_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vrx_gazebo__srv__ColorSequence_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vrx_gazebo__srv__ColorSequence_Request__fini(&data[i - 1]);
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
vrx_gazebo__srv__ColorSequence_Request__Sequence__fini(vrx_gazebo__srv__ColorSequence_Request__Sequence * array)
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
      vrx_gazebo__srv__ColorSequence_Request__fini(&array->data[i]);
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

vrx_gazebo__srv__ColorSequence_Request__Sequence *
vrx_gazebo__srv__ColorSequence_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Request__Sequence * array = (vrx_gazebo__srv__ColorSequence_Request__Sequence *)allocator.allocate(sizeof(vrx_gazebo__srv__ColorSequence_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vrx_gazebo__srv__ColorSequence_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vrx_gazebo__srv__ColorSequence_Request__Sequence__destroy(vrx_gazebo__srv__ColorSequence_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vrx_gazebo__srv__ColorSequence_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vrx_gazebo__srv__ColorSequence_Request__Sequence__are_equal(const vrx_gazebo__srv__ColorSequence_Request__Sequence * lhs, const vrx_gazebo__srv__ColorSequence_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vrx_gazebo__srv__ColorSequence_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vrx_gazebo__srv__ColorSequence_Request__Sequence__copy(
  const vrx_gazebo__srv__ColorSequence_Request__Sequence * input,
  vrx_gazebo__srv__ColorSequence_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vrx_gazebo__srv__ColorSequence_Request);
    vrx_gazebo__srv__ColorSequence_Request * data =
      (vrx_gazebo__srv__ColorSequence_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vrx_gazebo__srv__ColorSequence_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vrx_gazebo__srv__ColorSequence_Request__fini(&data[i]);
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
    if (!vrx_gazebo__srv__ColorSequence_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
vrx_gazebo__srv__ColorSequence_Response__init(vrx_gazebo__srv__ColorSequence_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
vrx_gazebo__srv__ColorSequence_Response__fini(vrx_gazebo__srv__ColorSequence_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
vrx_gazebo__srv__ColorSequence_Response__are_equal(const vrx_gazebo__srv__ColorSequence_Response * lhs, const vrx_gazebo__srv__ColorSequence_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
vrx_gazebo__srv__ColorSequence_Response__copy(
  const vrx_gazebo__srv__ColorSequence_Response * input,
  vrx_gazebo__srv__ColorSequence_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

vrx_gazebo__srv__ColorSequence_Response *
vrx_gazebo__srv__ColorSequence_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Response * msg = (vrx_gazebo__srv__ColorSequence_Response *)allocator.allocate(sizeof(vrx_gazebo__srv__ColorSequence_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vrx_gazebo__srv__ColorSequence_Response));
  bool success = vrx_gazebo__srv__ColorSequence_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vrx_gazebo__srv__ColorSequence_Response__destroy(vrx_gazebo__srv__ColorSequence_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vrx_gazebo__srv__ColorSequence_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vrx_gazebo__srv__ColorSequence_Response__Sequence__init(vrx_gazebo__srv__ColorSequence_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Response * data = NULL;

  if (size) {
    data = (vrx_gazebo__srv__ColorSequence_Response *)allocator.zero_allocate(size, sizeof(vrx_gazebo__srv__ColorSequence_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vrx_gazebo__srv__ColorSequence_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vrx_gazebo__srv__ColorSequence_Response__fini(&data[i - 1]);
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
vrx_gazebo__srv__ColorSequence_Response__Sequence__fini(vrx_gazebo__srv__ColorSequence_Response__Sequence * array)
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
      vrx_gazebo__srv__ColorSequence_Response__fini(&array->data[i]);
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

vrx_gazebo__srv__ColorSequence_Response__Sequence *
vrx_gazebo__srv__ColorSequence_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__srv__ColorSequence_Response__Sequence * array = (vrx_gazebo__srv__ColorSequence_Response__Sequence *)allocator.allocate(sizeof(vrx_gazebo__srv__ColorSequence_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vrx_gazebo__srv__ColorSequence_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vrx_gazebo__srv__ColorSequence_Response__Sequence__destroy(vrx_gazebo__srv__ColorSequence_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vrx_gazebo__srv__ColorSequence_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vrx_gazebo__srv__ColorSequence_Response__Sequence__are_equal(const vrx_gazebo__srv__ColorSequence_Response__Sequence * lhs, const vrx_gazebo__srv__ColorSequence_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vrx_gazebo__srv__ColorSequence_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vrx_gazebo__srv__ColorSequence_Response__Sequence__copy(
  const vrx_gazebo__srv__ColorSequence_Response__Sequence * input,
  vrx_gazebo__srv__ColorSequence_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vrx_gazebo__srv__ColorSequence_Response);
    vrx_gazebo__srv__ColorSequence_Response * data =
      (vrx_gazebo__srv__ColorSequence_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vrx_gazebo__srv__ColorSequence_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vrx_gazebo__srv__ColorSequence_Response__fini(&data[i]);
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
    if (!vrx_gazebo__srv__ColorSequence_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
