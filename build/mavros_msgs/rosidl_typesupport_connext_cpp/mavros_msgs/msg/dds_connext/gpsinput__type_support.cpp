// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/GPSINPUT.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/gpsinput__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace dds_
{
class Header_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const std_msgs::msg::Header &,
  std_msgs::msg::dds_::Header_ &);
bool convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Header_ &,
  std_msgs::msg::Header &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace std_msgs


namespace mavros_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__GPSINPUT()
{
  return mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::GPSINPUT & ros_message,
  mavros_msgs::msg::dds_::GPSINPUT_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name fix_type
  dds_message.fix_type_ =
    ros_message.fix_type;

  // member.name gps_id
  dds_message.gps_id_ =
    ros_message.gps_id;

  // member.name ignore_flags
  dds_message.ignore_flags_ =
    ros_message.ignore_flags;

  // member.name time_week_ms
  dds_message.time_week_ms_ =
    ros_message.time_week_ms;

  // member.name time_week
  dds_message.time_week_ =
    ros_message.time_week;

  // member.name lat
  dds_message.lat_ =
    ros_message.lat;

  // member.name lon
  dds_message.lon_ =
    ros_message.lon;

  // member.name alt
  dds_message.alt_ =
    ros_message.alt;

  // member.name hdop
  dds_message.hdop_ =
    ros_message.hdop;

  // member.name vdop
  dds_message.vdop_ =
    ros_message.vdop;

  // member.name vn
  dds_message.vn_ =
    ros_message.vn;

  // member.name ve
  dds_message.ve_ =
    ros_message.ve;

  // member.name vd
  dds_message.vd_ =
    ros_message.vd;

  // member.name speed_accuracy
  dds_message.speed_accuracy_ =
    ros_message.speed_accuracy;

  // member.name horiz_accuracy
  dds_message.horiz_accuracy_ =
    ros_message.horiz_accuracy;

  // member.name vert_accuracy
  dds_message.vert_accuracy_ =
    ros_message.vert_accuracy;

  // member.name satellites_visible
  dds_message.satellites_visible_ =
    ros_message.satellites_visible;

  // member.name yaw
  dds_message.yaw_ =
    ros_message.yaw;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::GPSINPUT_ & dds_message,
  mavros_msgs::msg::GPSINPUT & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name fix_type
  ros_message.fix_type =
    dds_message.fix_type_;

  // member.name gps_id
  ros_message.gps_id =
    dds_message.gps_id_;

  // member.name ignore_flags
  ros_message.ignore_flags =
    dds_message.ignore_flags_;

  // member.name time_week_ms
  ros_message.time_week_ms =
    dds_message.time_week_ms_;

  // member.name time_week
  ros_message.time_week =
    dds_message.time_week_;

  // member.name lat
  ros_message.lat =
    dds_message.lat_;

  // member.name lon
  ros_message.lon =
    dds_message.lon_;

  // member.name alt
  ros_message.alt =
    dds_message.alt_;

  // member.name hdop
  ros_message.hdop =
    dds_message.hdop_;

  // member.name vdop
  ros_message.vdop =
    dds_message.vdop_;

  // member.name vn
  ros_message.vn =
    dds_message.vn_;

  // member.name ve
  ros_message.ve =
    dds_message.ve_;

  // member.name vd
  ros_message.vd =
    dds_message.vd_;

  // member.name speed_accuracy
  ros_message.speed_accuracy =
    dds_message.speed_accuracy_;

  // member.name horiz_accuracy
  ros_message.horiz_accuracy =
    dds_message.horiz_accuracy_;

  // member.name vert_accuracy
  ros_message.vert_accuracy =
    dds_message.vert_accuracy_;

  // member.name satellites_visible
  ros_message.satellites_visible =
    dds_message.satellites_visible_;

  // member.name yaw
  ros_message.yaw =
    dds_message.yaw_;

  return true;
}

bool
to_cdr_stream__GPSINPUT(
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
  const mavros_msgs::msg::GPSINPUT & ros_message =
    *(const mavros_msgs::msg::GPSINPUT *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::GPSINPUT_ * dds_message = mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__GPSINPUT(
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

  mavros_msgs::msg::dds_::GPSINPUT_ * dds_message =
    mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::GPSINPUT_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::GPSINPUT & ros_message =
    *(mavros_msgs::msg::GPSINPUT *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GPSINPUT__callbacks = {
  "mavros_msgs::msg",
  "GPSINPUT",
  &get_type_code__GPSINPUT,
  nullptr,
  nullptr,
  &to_cdr_stream__GPSINPUT,
  &to_message__GPSINPUT
};

static rosidl_message_type_support_t _GPSINPUT__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_GPSINPUT__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::GPSINPUT>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_GPSINPUT__handle;
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
  GPSINPUT)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_GPSINPUT__handle;
}

#ifdef __cplusplus
}
#endif
