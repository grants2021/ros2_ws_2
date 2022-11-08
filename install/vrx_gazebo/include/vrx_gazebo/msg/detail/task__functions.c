// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice
#include "vrx_gazebo/msg/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `ready_time`
// Member `running_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `elapsed_time`
// Member `remaining_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
vrx_gazebo__msg__Task__init(vrx_gazebo__msg__Task * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // ready_time
  if (!builtin_interfaces__msg__Time__init(&msg->ready_time)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // running_time
  if (!builtin_interfaces__msg__Time__init(&msg->running_time)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__init(&msg->elapsed_time)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // remaining_time
  if (!builtin_interfaces__msg__Duration__init(&msg->remaining_time)) {
    vrx_gazebo__msg__Task__fini(msg);
    return false;
  }
  // timed_out
  // num_collisions
  // score
  return true;
}

void
vrx_gazebo__msg__Task__fini(vrx_gazebo__msg__Task * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // ready_time
  builtin_interfaces__msg__Time__fini(&msg->ready_time);
  // running_time
  builtin_interfaces__msg__Time__fini(&msg->running_time);
  // elapsed_time
  builtin_interfaces__msg__Duration__fini(&msg->elapsed_time);
  // remaining_time
  builtin_interfaces__msg__Duration__fini(&msg->remaining_time);
  // timed_out
  // num_collisions
  // score
}

bool
vrx_gazebo__msg__Task__are_equal(const vrx_gazebo__msg__Task * lhs, const vrx_gazebo__msg__Task * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // ready_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->ready_time), &(rhs->ready_time)))
  {
    return false;
  }
  // running_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->running_time), &(rhs->running_time)))
  {
    return false;
  }
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->elapsed_time), &(rhs->elapsed_time)))
  {
    return false;
  }
  // remaining_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->remaining_time), &(rhs->remaining_time)))
  {
    return false;
  }
  // timed_out
  if (lhs->timed_out != rhs->timed_out) {
    return false;
  }
  // num_collisions
  if (lhs->num_collisions != rhs->num_collisions) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  return true;
}

bool
vrx_gazebo__msg__Task__copy(
  const vrx_gazebo__msg__Task * input,
  vrx_gazebo__msg__Task * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // ready_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->ready_time), &(output->ready_time)))
  {
    return false;
  }
  // running_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->running_time), &(output->running_time)))
  {
    return false;
  }
  // elapsed_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->elapsed_time), &(output->elapsed_time)))
  {
    return false;
  }
  // remaining_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->remaining_time), &(output->remaining_time)))
  {
    return false;
  }
  // timed_out
  output->timed_out = input->timed_out;
  // num_collisions
  output->num_collisions = input->num_collisions;
  // score
  output->score = input->score;
  return true;
}

vrx_gazebo__msg__Task *
vrx_gazebo__msg__Task__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Task * msg = (vrx_gazebo__msg__Task *)allocator.allocate(sizeof(vrx_gazebo__msg__Task), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vrx_gazebo__msg__Task));
  bool success = vrx_gazebo__msg__Task__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vrx_gazebo__msg__Task__destroy(vrx_gazebo__msg__Task * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vrx_gazebo__msg__Task__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vrx_gazebo__msg__Task__Sequence__init(vrx_gazebo__msg__Task__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Task * data = NULL;

  if (size) {
    data = (vrx_gazebo__msg__Task *)allocator.zero_allocate(size, sizeof(vrx_gazebo__msg__Task), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vrx_gazebo__msg__Task__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vrx_gazebo__msg__Task__fini(&data[i - 1]);
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
vrx_gazebo__msg__Task__Sequence__fini(vrx_gazebo__msg__Task__Sequence * array)
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
      vrx_gazebo__msg__Task__fini(&array->data[i]);
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

vrx_gazebo__msg__Task__Sequence *
vrx_gazebo__msg__Task__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vrx_gazebo__msg__Task__Sequence * array = (vrx_gazebo__msg__Task__Sequence *)allocator.allocate(sizeof(vrx_gazebo__msg__Task__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vrx_gazebo__msg__Task__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vrx_gazebo__msg__Task__Sequence__destroy(vrx_gazebo__msg__Task__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vrx_gazebo__msg__Task__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vrx_gazebo__msg__Task__Sequence__are_equal(const vrx_gazebo__msg__Task__Sequence * lhs, const vrx_gazebo__msg__Task__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vrx_gazebo__msg__Task__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vrx_gazebo__msg__Task__Sequence__copy(
  const vrx_gazebo__msg__Task__Sequence * input,
  vrx_gazebo__msg__Task__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vrx_gazebo__msg__Task);
    vrx_gazebo__msg__Task * data =
      (vrx_gazebo__msg__Task *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vrx_gazebo__msg__Task__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          vrx_gazebo__msg__Task__fini(&data[i]);
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
    if (!vrx_gazebo__msg__Task__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
