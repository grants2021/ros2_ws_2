// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from mavros_msgs:srv/CommandLong.idl
// generated code does not contain a copyright notice


#ifndef MAVROS_MSGS__SRV__COMMAND_LONG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MAVROS_MSGS__SRV__COMMAND_LONG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "mavros_msgs/srv/detail/command_long__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/srv/dds_connext/CommandLong_Support.h"
#include "mavros_msgs/srv/dds_connext/CommandLong_Plugin.h"
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


namespace mavros_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__CommandLong_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_ros_message_to_dds(
  const mavros_msgs::srv::CommandLong_Request & ros_message,
  mavros_msgs::srv::dds_::CommandLong_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_dds_message_to_ros(
  const mavros_msgs::srv::dds_::CommandLong_Request_ & dds_message,
  mavros_msgs::srv::CommandLong_Request & ros_message);

bool
to_cdr_stream__CommandLong_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__CommandLong_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mavros_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  CommandLong_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "mavros_msgs/srv/detail/command_long__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "mavros_msgs/srv/dds_connext/CommandLong_Support.h"
// already included above
// #include "mavros_msgs/srv/dds_connext/CommandLong_Plugin.h"
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


namespace mavros_msgs
{

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__CommandLong_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_ros_message_to_dds(
  const mavros_msgs::srv::CommandLong_Response & ros_message,
  mavros_msgs::srv::dds_::CommandLong_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_dds_message_to_ros(
  const mavros_msgs::srv::dds_::CommandLong_Response_ & dds_message,
  mavros_msgs::srv::CommandLong_Response & ros_message);

bool
to_cdr_stream__CommandLong_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__CommandLong_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace mavros_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  CommandLong_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace mavros_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
create_requester__CommandLong(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const char *
destroy_requester__CommandLong(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
int64_t
send_request__CommandLong(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
create_replier__CommandLong(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const char *
destroy_replier__CommandLong(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
bool
take_request__CommandLong(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
bool
take_response__CommandLong(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
bool
send_response__CommandLong(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
get_request_datawriter__CommandLong(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
get_reply_datareader__CommandLong(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
get_request_datareader__CommandLong(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
void *
get_reply_datawriter__CommandLong(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace mavros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, srv,
  CommandLong)();

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__SRV__COMMAND_LONG__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
