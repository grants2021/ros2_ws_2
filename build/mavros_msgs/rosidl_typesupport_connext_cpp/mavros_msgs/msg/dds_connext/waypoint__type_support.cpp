// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/waypoint__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace mavros_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Waypoint()
{
  return mavros_msgs::msg::dds_::Waypoint_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::Waypoint & ros_message,
  mavros_msgs::msg::dds_::Waypoint_ & dds_message)
{
  // member.name frame
  dds_message.frame_ =
    ros_message.frame;

  // member.name command
  dds_message.command_ =
    ros_message.command;

  // member.name is_current
  dds_message.is_current_ =
    ros_message.is_current;

  // member.name autocontinue
  dds_message.autocontinue_ =
    ros_message.autocontinue;

  // member.name param1
  dds_message.param1_ =
    ros_message.param1;

  // member.name param2
  dds_message.param2_ =
    ros_message.param2;

  // member.name param3
  dds_message.param3_ =
    ros_message.param3;

  // member.name param4
  dds_message.param4_ =
    ros_message.param4;

  // member.name x_lat
  dds_message.x_lat_ =
    ros_message.x_lat;

  // member.name y_long
  dds_message.y_long_ =
    ros_message.y_long;

  // member.name z_alt
  dds_message.z_alt_ =
    ros_message.z_alt;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::Waypoint_ & dds_message,
  mavros_msgs::msg::Waypoint & ros_message)
{
  // member.name frame
  ros_message.frame =
    dds_message.frame_;

  // member.name command
  ros_message.command =
    dds_message.command_;

  // member.name is_current
  ros_message.is_current =
    dds_message.is_current_ == DDS_BOOLEAN_TRUE;

  // member.name autocontinue
  ros_message.autocontinue =
    dds_message.autocontinue_ == DDS_BOOLEAN_TRUE;

  // member.name param1
  ros_message.param1 =
    dds_message.param1_;

  // member.name param2
  ros_message.param2 =
    dds_message.param2_;

  // member.name param3
  ros_message.param3 =
    dds_message.param3_;

  // member.name param4
  ros_message.param4 =
    dds_message.param4_;

  // member.name x_lat
  ros_message.x_lat =
    dds_message.x_lat_;

  // member.name y_long
  ros_message.y_long =
    dds_message.y_long_;

  // member.name z_alt
  ros_message.z_alt =
    dds_message.z_alt_;

  return true;
}

bool
to_cdr_stream__Waypoint(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  // cast the untyped to the known ros message
  const mavros_msgs::msg::Waypoint & ros_message =
    *(const mavros_msgs::msg::Waypoint *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::Waypoint_ * dds_message = mavros_msgs::msg::dds_::Waypoint_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::Waypoint_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::Waypoint_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (mavros_msgs::msg::dds_::Waypoint_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::Waypoint_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Waypoint(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!cdr_stream->buffer) {
    fprintf(stderr, "cdr stream doesn't contain data\n");
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::Waypoint_ * dds_message =
    mavros_msgs::msg::dds_::Waypoint_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::Waypoint_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::Waypoint & ros_message =
    *(mavros_msgs::msg::Waypoint *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::Waypoint_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Waypoint__callbacks = {
  "mavros_msgs::msg",
  "Waypoint",
  &get_type_code__Waypoint,
  nullptr,
  nullptr,
  &to_cdr_stream__Waypoint,
  &to_message__Waypoint
};

static rosidl_message_type_support_t _Waypoint__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Waypoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace mavros_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mavros_msgs::msg::Waypoint>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Waypoint__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  mavros_msgs, msg,
  Waypoint)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Waypoint__handle;
}

#ifdef __cplusplus
}
#endif
