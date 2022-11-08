// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from mavros_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice


#ifndef MAVROS_MSGS__MSG__ALTITUDE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MAVROS_MSGS__MSG__ALTITUDE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "mavros_msgs/msg/detail/altitude__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/Altitude_Support.h"
#include "mavros_msgs/msg/dds_connext/Altitude_Plugin.h"
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

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Altitude();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_ros_message_to_dds(
  const mavros_msgs::msg::Altitude & ros_message,
  mavros_msgs::msg::dds_::Altitude_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::Altitude_ & dds_message,
  mavros_msgs::msg::Altitude & ros_message);

bool
to_cdr_stream__Altitude(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Altitude(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mavros_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, msg,
  Altitude)();

#ifdef __cplusplus
}
#endif


#endif  // MAVROS_MSGS__MSG__ALTITUDE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
