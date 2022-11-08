// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/GPSRAW.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/gpsraw__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__GPSRAW()
{
  return mavros_msgs::msg::dds_::GPSRAW_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::GPSRAW & ros_message,
  mavros_msgs::msg::dds_::GPSRAW_ & dds_message)
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

  // member.name lat
  dds_message.lat_ =
    ros_message.lat;

  // member.name lon
  dds_message.lon_ =
    ros_message.lon;

  // member.name alt
  dds_message.alt_ =
    ros_message.alt;

  // member.name eph
  dds_message.eph_ =
    ros_message.eph;

  // member.name epv
  dds_message.epv_ =
    ros_message.epv;

  // member.name vel
  dds_message.vel_ =
    ros_message.vel;

  // member.name cog
  dds_message.cog_ =
    ros_message.cog;

  // member.name satellites_visible
  dds_message.satellites_visible_ =
    ros_message.satellites_visible;

  // member.name alt_ellipsoid
  dds_message.alt_ellipsoid_ =
    ros_message.alt_ellipsoid;

  // member.name h_acc
  dds_message.h_acc_ =
    ros_message.h_acc;

  // member.name v_acc
  dds_message.v_acc_ =
    ros_message.v_acc;

  // member.name vel_acc
  dds_message.vel_acc_ =
    ros_message.vel_acc;

  // member.name hdg_acc
  dds_message.hdg_acc_ =
    ros_message.hdg_acc;

  // member.name yaw
  dds_message.yaw_ =
    ros_message.yaw;

  // member.name dgps_numch
  dds_message.dgps_numch_ =
    ros_message.dgps_numch;

  // member.name dgps_age
  dds_message.dgps_age_ =
    ros_message.dgps_age;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::GPSRAW_ & dds_message,
  mavros_msgs::msg::GPSRAW & ros_message)
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

  // member.name lat
  ros_message.lat =
    dds_message.lat_;

  // member.name lon
  ros_message.lon =
    dds_message.lon_;

  // member.name alt
  ros_message.alt =
    dds_message.alt_;

  // member.name eph
  ros_message.eph =
    dds_message.eph_;

  // member.name epv
  ros_message.epv =
    dds_message.epv_;

  // member.name vel
  ros_message.vel =
    dds_message.vel_;

  // member.name cog
  ros_message.cog =
    dds_message.cog_;

  // member.name satellites_visible
  ros_message.satellites_visible =
    dds_message.satellites_visible_;

  // member.name alt_ellipsoid
  ros_message.alt_ellipsoid =
    dds_message.alt_ellipsoid_;

  // member.name h_acc
  ros_message.h_acc =
    dds_message.h_acc_;

  // member.name v_acc
  ros_message.v_acc =
    dds_message.v_acc_;

  // member.name vel_acc
  ros_message.vel_acc =
    dds_message.vel_acc_;

  // member.name hdg_acc
  ros_message.hdg_acc =
    dds_message.hdg_acc_;

  // member.name yaw
  ros_message.yaw =
    dds_message.yaw_;

  // member.name dgps_numch
  ros_message.dgps_numch =
    dds_message.dgps_numch_;

  // member.name dgps_age
  ros_message.dgps_age =
    dds_message.dgps_age_;

  return true;
}

bool
to_cdr_stream__GPSRAW(
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
  const mavros_msgs::msg::GPSRAW & ros_message =
    *(const mavros_msgs::msg::GPSRAW *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::GPSRAW_ * dds_message = mavros_msgs::msg::dds_::GPSRAW_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::GPSRAW_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::GPSRAW_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::GPSRAW_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::GPSRAW_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__GPSRAW(
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

  mavros_msgs::msg::dds_::GPSRAW_ * dds_message =
    mavros_msgs::msg::dds_::GPSRAW_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::GPSRAW_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::GPSRAW & ros_message =
    *(mavros_msgs::msg::GPSRAW *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::GPSRAW_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GPSRAW__callbacks = {
  "mavros_msgs::msg",
  "GPSRAW",
  &get_type_code__GPSRAW,
  nullptr,
  nullptr,
  &to_cdr_stream__GPSRAW,
  &to_message__GPSRAW
};

static rosidl_message_type_support_t _GPSRAW__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_GPSRAW__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::GPSRAW>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_GPSRAW__handle;
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
  GPSRAW)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_GPSRAW__handle;
}

#ifdef __cplusplus
}
#endif
