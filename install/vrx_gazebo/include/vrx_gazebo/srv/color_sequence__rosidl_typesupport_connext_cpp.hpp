// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice


#ifndef VRX_GAZEBO__SRV__COLOR_SEQUENCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define VRX_GAZEBO__SRV__COLOR_SEQUENCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vrx_gazebo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "vrx_gazebo/srv/detail/color_sequence__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "vrx_gazebo/srv/dds_connext/ColorSequence_Support.h"
#include "vrx_gazebo/srv/dds_connext/ColorSequence_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace vrx_gazebo
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ColorSequence_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_ros_message_to_dds(
  const vrx_gazebo::srv::ColorSequence_Request & ros_message,
  vrx_gazebo::srv::dds_::ColorSequence_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_dds_message_to_ros(
  const vrx_gazebo::srv::dds_::ColorSequence_Request_ & dds_message,
  vrx_gazebo::srv::ColorSequence_Request & ros_message);

bool
to_cdr_stream__ColorSequence_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ColorSequence_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace vrx_gazebo


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  vrx_gazebo, srv,
  ColorSequence_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "vrx_gazebo/srv/dds_connext/ColorSequence_Support.h"
// already included above
// #include "vrx_gazebo/srv/dds_connext/ColorSequence_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace vrx_gazebo
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ColorSequence_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_ros_message_to_dds(
  const vrx_gazebo::srv::ColorSequence_Response & ros_message,
  vrx_gazebo::srv::dds_::ColorSequence_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_dds_message_to_ros(
  const vrx_gazebo::srv::dds_::ColorSequence_Response_ & dds_message,
  vrx_gazebo::srv::ColorSequence_Response & ros_message);

bool
to_cdr_stream__ColorSequence_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ColorSequence_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace vrx_gazebo


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  vrx_gazebo, srv,
  ColorSequence_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace vrx_gazebo
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
create_requester__ColorSequence(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const char *
destroy_requester__ColorSequence(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
int64_t
send_request__ColorSequence(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
create_replier__ColorSequence(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const char *
destroy_replier__ColorSequence(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
bool
take_request__ColorSequence(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
bool
take_response__ColorSequence(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
bool
send_response__ColorSequence(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
get_request_datawriter__ColorSequence(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
get_reply_datareader__ColorSequence(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
get_request_datareader__ColorSequence(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
void *
get_reply_datawriter__ColorSequence(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace vrx_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  vrx_gazebo, srv,
  ColorSequence)();

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__SRV__COLOR_SEQUENCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
