// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_H_
#define VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color1'
// Member 'color2'
// Member 'color3'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ColorSequence in the package vrx_gazebo.
typedef struct vrx_gazebo__srv__ColorSequence_Request
{
  rosidl_runtime_c__String color1;
  rosidl_runtime_c__String color2;
  rosidl_runtime_c__String color3;
} vrx_gazebo__srv__ColorSequence_Request;

// Struct for a sequence of vrx_gazebo__srv__ColorSequence_Request.
typedef struct vrx_gazebo__srv__ColorSequence_Request__Sequence
{
  vrx_gazebo__srv__ColorSequence_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vrx_gazebo__srv__ColorSequence_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ColorSequence in the package vrx_gazebo.
typedef struct vrx_gazebo__srv__ColorSequence_Response
{
  bool success;
} vrx_gazebo__srv__ColorSequence_Response;

// Struct for a sequence of vrx_gazebo__srv__ColorSequence_Response.
typedef struct vrx_gazebo__srv__ColorSequence_Response__Sequence
{
  vrx_gazebo__srv__ColorSequence_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vrx_gazebo__srv__ColorSequence_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_H_
