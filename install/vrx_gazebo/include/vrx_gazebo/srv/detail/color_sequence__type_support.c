// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vrx_gazebo/srv/detail/color_sequence__rosidl_typesupport_introspection_c.h"
#include "vrx_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vrx_gazebo/srv/detail/color_sequence__functions.h"
#include "vrx_gazebo/srv/detail/color_sequence__struct.h"


// Include directives for member types
// Member `color1`
// Member `color2`
// Member `color3`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vrx_gazebo__srv__ColorSequence_Request__init(message_memory);
}

void ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_fini_function(void * message_memory)
{
  vrx_gazebo__srv__ColorSequence_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_member_array[3] = {
  {
    "color1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__srv__ColorSequence_Request, color1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__srv__ColorSequence_Request, color2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__srv__ColorSequence_Request, color3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_members = {
  "vrx_gazebo__srv",  // message namespace
  "ColorSequence_Request",  // message name
  3,  // number of fields
  sizeof(vrx_gazebo__srv__ColorSequence_Request),
  ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_member_array,  // message members
  ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_type_support_handle = {
  0,
  &ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Request)() {
  if (!ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_type_support_handle.typesupport_identifier) {
    ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ColorSequence_Request__rosidl_typesupport_introspection_c__ColorSequence_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__functions.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vrx_gazebo__srv__ColorSequence_Response__init(message_memory);
}

void ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_fini_function(void * message_memory)
{
  vrx_gazebo__srv__ColorSequence_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vrx_gazebo__srv__ColorSequence_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_members = {
  "vrx_gazebo__srv",  // message namespace
  "ColorSequence_Response",  // message name
  1,  // number of fields
  sizeof(vrx_gazebo__srv__ColorSequence_Response),
  ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_member_array,  // message members
  ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_type_support_handle = {
  0,
  &ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Response)() {
  if (!ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_type_support_handle.typesupport_identifier) {
    ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ColorSequence_Response__rosidl_typesupport_introspection_c__ColorSequence_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_members = {
  "vrx_gazebo__srv",  // service namespace
  "ColorSequence",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_Request_message_type_support_handle,
  NULL  // response message
  // vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_Response_message_type_support_handle
};

static rosidl_service_type_support_t vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_type_support_handle = {
  0,
  &vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vrx_gazebo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence)() {
  if (!vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_type_support_handle.typesupport_identifier) {
    vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Response)()->data;
  }

  return &vrx_gazebo__srv__detail__color_sequence__rosidl_typesupport_introspection_c__ColorSequence_service_type_support_handle;
}
