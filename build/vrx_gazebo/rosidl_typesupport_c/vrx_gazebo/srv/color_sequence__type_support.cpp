// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vrx_gazebo/msg/rosidl_typesupport_c__visibility_control.h"
#include "vrx_gazebo/srv/detail/color_sequence__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vrx_gazebo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ColorSequence_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ColorSequence_Request_type_support_ids_t;

static const _ColorSequence_Request_type_support_ids_t _ColorSequence_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorSequence_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ColorSequence_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorSequence_Request_type_support_symbol_names_t _ColorSequence_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, vrx_gazebo, srv, ColorSequence_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Request)),
  }
};

typedef struct _ColorSequence_Request_type_support_data_t
{
  void * data[3];
} _ColorSequence_Request_type_support_data_t;

static _ColorSequence_Request_type_support_data_t _ColorSequence_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorSequence_Request_message_typesupport_map = {
  3,
  "vrx_gazebo",
  &_ColorSequence_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ColorSequence_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ColorSequence_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColorSequence_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorSequence_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vrx_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vrx_gazebo, srv, ColorSequence_Request)() {
  return &::vrx_gazebo::srv::rosidl_typesupport_c::ColorSequence_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vrx_gazebo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ColorSequence_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ColorSequence_Response_type_support_ids_t;

static const _ColorSequence_Response_type_support_ids_t _ColorSequence_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorSequence_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ColorSequence_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorSequence_Response_type_support_symbol_names_t _ColorSequence_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, vrx_gazebo, srv, ColorSequence_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence_Response)),
  }
};

typedef struct _ColorSequence_Response_type_support_data_t
{
  void * data[3];
} _ColorSequence_Response_type_support_data_t;

static _ColorSequence_Response_type_support_data_t _ColorSequence_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorSequence_Response_message_typesupport_map = {
  3,
  "vrx_gazebo",
  &_ColorSequence_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ColorSequence_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ColorSequence_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ColorSequence_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorSequence_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vrx_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vrx_gazebo, srv, ColorSequence_Response)() {
  return &::vrx_gazebo::srv::rosidl_typesupport_c::ColorSequence_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vrx_gazebo
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ColorSequence_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ColorSequence_type_support_ids_t;

static const _ColorSequence_type_support_ids_t _ColorSequence_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ColorSequence_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ColorSequence_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ColorSequence_type_support_symbol_names_t _ColorSequence_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_c, vrx_gazebo, srv, ColorSequence)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vrx_gazebo, srv, ColorSequence)),
  }
};

typedef struct _ColorSequence_type_support_data_t
{
  void * data[3];
} _ColorSequence_type_support_data_t;

static _ColorSequence_type_support_data_t _ColorSequence_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ColorSequence_service_typesupport_map = {
  3,
  "vrx_gazebo",
  &_ColorSequence_service_typesupport_ids.typesupport_identifier[0],
  &_ColorSequence_service_typesupport_symbol_names.symbol_name[0],
  &_ColorSequence_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ColorSequence_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ColorSequence_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vrx_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vrx_gazebo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, vrx_gazebo, srv, ColorSequence)() {
  return &::vrx_gazebo::srv::rosidl_typesupport_c::ColorSequence_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
