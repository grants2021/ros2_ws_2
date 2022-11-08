// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice


#ifndef VRX_GAZEBO__MSG__CONTACT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define VRX_GAZEBO__MSG__CONTACT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vrx_gazebo/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "vrx_gazebo/msg/detail/contact__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "vrx_gazebo/msg/dds_connext/Contact_Support.h"
#include "vrx_gazebo/msg/dds_connext/Contact_Plugin.h"
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

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Contact();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_ros_message_to_dds(
  const vrx_gazebo::msg::Contact & ros_message,
  vrx_gazebo::msg::dds_::Contact_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
convert_dds_message_to_ros(
  const vrx_gazebo::msg::dds_::Contact_ & dds_message,
  vrx_gazebo::msg::Contact & ros_message);

bool
to_cdr_stream__Contact(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Contact(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace vrx_gazebo


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  vrx_gazebo, msg,
  Contact)();

#ifdef __cplusplus
}
#endif


#endif  // VRX_GAZEBO__MSG__CONTACT__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
