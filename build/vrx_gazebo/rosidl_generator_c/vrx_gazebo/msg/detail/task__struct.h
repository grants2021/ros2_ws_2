// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_H_
#define VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'ready_time'
// Member 'running_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'elapsed_time'
// Member 'remaining_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/Task in the package vrx_gazebo.
typedef struct vrx_gazebo__msg__Task
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String state;
  builtin_interfaces__msg__Time ready_time;
  builtin_interfaces__msg__Time running_time;
  builtin_interfaces__msg__Duration elapsed_time;
  builtin_interfaces__msg__Duration remaining_time;
  bool timed_out;
  uint32_t num_collisions;
  double score;
} vrx_gazebo__msg__Task;

// Struct for a sequence of vrx_gazebo__msg__Task.
typedef struct vrx_gazebo__msg__Task__Sequence
{
  vrx_gazebo__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vrx_gazebo__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_H_
