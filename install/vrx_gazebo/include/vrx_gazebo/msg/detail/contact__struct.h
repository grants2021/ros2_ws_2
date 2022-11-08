// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_H_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'collision1'
// Member 'collision2'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Contact in the package vrx_gazebo.
typedef struct vrx_gazebo__msg__Contact
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String collision1;
  rosidl_runtime_c__String collision2;
} vrx_gazebo__msg__Contact;

// Struct for a sequence of vrx_gazebo__msg__Contact.
typedef struct vrx_gazebo__msg__Contact__Sequence
{
  vrx_gazebo__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vrx_gazebo__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_H_
