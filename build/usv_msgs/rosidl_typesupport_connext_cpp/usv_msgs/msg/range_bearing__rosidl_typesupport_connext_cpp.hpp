// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice


#ifndef USV_MSGS__MSG__RANGE_BEARING__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define USV_MSGS__MSG__RANGE_BEARING__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "usv_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "usv_msgs/msg/detail/range_bearing__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "usv_msgs/msg/dds_connext/RangeBearing_Support.h"
#include "usv_msgs/msg/dds_connext/RangeBearing_Plugin.h"
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


namespace usv_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__RangeBearing();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_usv_msgs
convert_ros_message_to_dds(
  const usv_msgs::msg::RangeBearing & ros_message,
  usv_msgs::msg::dds_::RangeBearing_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_usv_msgs
convert_dds_message_to_ros(
  const usv_msgs::msg::dds_::RangeBearing_ & dds_message,
  usv_msgs::msg::RangeBearing & ros_message);

bool
to_cdr_stream__RangeBearing(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__RangeBearing(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace usv_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_usv_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  usv_msgs, msg,
  RangeBearing)();

#ifdef __cplusplus
}
#endif


#endif  // USV_MSGS__MSG__RANGE_BEARING__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
