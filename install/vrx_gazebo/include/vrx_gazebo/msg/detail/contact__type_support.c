// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vrx_gazebo/msg/detail/contact__rosidl_typesupport_introspection_c.h"
#include "vrx_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vrx_gazebo/msg/detail/contact__functions.h"
#include "vrx_gazebo/msg/detail/contact__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `collision1`
// Member `collision2`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Contact__rosidl_typesupport_introspection_c__Contact_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vrx_gazebo__msg__Contact__init(message_memory);
}

void Contact__rosidl_typesupport_introspection_c__Contact_fini_function(void * message_memory)
{
  vrx_gazebo__msg__Contact__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Contact__rosidl_typesupport_introspection_c__Contact_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__msg__Contact, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__msg__Contact, collision1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__msg__Contact, collision2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Contact__rosidl_typesupport_introspection_c__Contact_message_members = {
  "vrx_gazebo__msg",  // message namespace
  "Contact",  // message name
  3,  // number of fields
  sizeof(vrx_gazebo__msg__Contact),
  Contact__rosidl_typesupport_introspection_c__Contact_message_member_array,  // message members
  Contact__rosidl_typesupport_introspection_c__Contact_init_function,  // function to initialize message memory (memory has to be allocated)
  Contact__rosidl_typesupport_introspection_c__Contact_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle = {
  0,
  &Contact__rosidl_typesupport_introspection_c__Contact_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, msg, Contact)() {
  Contact__rosidl_typesupport_introspection_c__Contact_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle.typesupport_identifier) {
    Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Contact__rosidl_typesupport_introspection_c__Contact_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
