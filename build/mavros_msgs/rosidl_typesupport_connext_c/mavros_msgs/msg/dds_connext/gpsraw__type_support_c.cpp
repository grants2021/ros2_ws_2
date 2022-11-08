// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/GPSRAW.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/gpsraw__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/gpsraw__struct.h"
#include "mavros_msgs/msg/detail/gpsraw__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/GPSRAW_Support.h"
#include "mavros_msgs/msg/dds_connext/GPSRAW_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'header'
#include "std_msgs/msg/detail/header__functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();

static DDS_TypeCode *
_GPSRAW__get_type_code()
{
  return mavros_msgs::msg::dds_::GPSRAW_TypeSupport::get_typecode();
}

static bool
_GPSRAW__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__GPSRAW * ros_message =
    static_cast<const mavros_msgs__msg__GPSRAW *>(untyped_ros_message);
  mavros_msgs::msg::dds_::GPSRAW_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::GPSRAW_ *>(untyped_dds_message);
  // Member name: header
  {
    const message_type_support_callbacks_t * std_msgs__msg__Header__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, std_msgs, msg, Header
      )()->data);
    if (!std_msgs__msg__Header__callbacks->convert_ros_to_dds(
        &ros_message->header, &dds_message->header_))
    {
      return false;
    }
  }
  // Member name: fix_type
  {
    dds_message->fix_type_ = ros_message->fix_type;
  }
  // Member name: lat
  {
    dds_message->lat_ = ros_message->lat;
  }
  // Member name: lon
  {
    dds_message->lon_ = ros_message->lon;
  }
  // Member name: alt
  {
    dds_message->alt_ = ros_message->alt;
  }
  // Member name: eph
  {
    dds_message->eph_ = ros_message->eph;
  }
  // Member name: epv
  {
    dds_message->epv_ = ros_message->epv;
  }
  // Member name: vel
  {
    dds_message->vel_ = ros_message->vel;
  }
  // Member name: cog
  {
    dds_message->cog_ = ros_message->cog;
  }
  // Member name: satellites_visible
  {
    dds_message->satellites_visible_ = ros_message->satellites_visible;
  }
  // Member name: alt_ellipsoid
  {
    dds_message->alt_ellipsoid_ = ros_message->alt_ellipsoid;
  }
  // Member name: h_acc
  {
    dds_message->h_acc_ = ros_message->h_acc;
  }
  // Member name: v_acc
  {
    dds_message->v_acc_ = ros_message->v_acc;
  }
  // Member name: vel_acc
  {
    dds_message->vel_acc_ = ros_message->vel_acc;
  }
  // Member name: hdg_acc
  {
    dds_message->hdg_acc_ = ros_message->hdg_acc;
  }
  // Member name: yaw
  {
    dds_message->yaw_ = ros_message->yaw;
  }
  // Member name: dgps_numch
  {
    dds_message->dgps_numch_ = ros_message->dgps_numch;
  }
  // Member name: dgps_age
  {
    dds_message->dgps_age_ = ros_message->dgps_age;
  }
  return true;
}

static bool
_GPSRAW__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::GPSRAW_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::GPSRAW_ *>(untyped_dds_message);
  mavros_msgs__msg__GPSRAW * ros_message =
    static_cast<mavros_msgs__msg__GPSRAW *>(untyped_ros_message);
  // Member name: header
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      std_msgs, msg,
      Header)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->header_, &ros_message->header);
  }
  // Member name: fix_type
  {
    ros_message->fix_type = dds_message->fix_type_;
  }
  // Member name: lat
  {
    ros_message->lat = dds_message->lat_;
  }
  // Member name: lon
  {
    ros_message->lon = dds_message->lon_;
  }
  // Member name: alt
  {
    ros_message->alt = dds_message->alt_;
  }
  // Member name: eph
  {
    ros_message->eph = dds_message->eph_;
  }
  // Member name: epv
  {
    ros_message->epv = dds_message->epv_;
  }
  // Member name: vel
  {
    ros_message->vel = dds_message->vel_;
  }
  // Member name: cog
  {
    ros_message->cog = dds_message->cog_;
  }
  // Member name: satellites_visible
  {
    ros_message->satellites_visible = dds_message->satellites_visible_;
  }
  // Member name: alt_ellipsoid
  {
    ros_message->alt_ellipsoid = dds_message->alt_ellipsoid_;
  }
  // Member name: h_acc
  {
    ros_message->h_acc = dds_message->h_acc_;
  }
  // Member name: v_acc
  {
    ros_message->v_acc = dds_message->v_acc_;
  }
  // Member name: vel_acc
  {
    ros_message->vel_acc = dds_message->vel_acc_;
  }
  // Member name: hdg_acc
  {
    ros_message->hdg_acc = dds_message->hdg_acc_;
  }
  // Member name: yaw
  {
    ros_message->yaw = dds_message->yaw_;
  }
  // Member name: dgps_numch
  {
    ros_message->dgps_numch = dds_message->dgps_numch_;
  }
  // Member name: dgps_age
  {
    ros_message->dgps_age = dds_message->dgps_age_;
  }
  return true;
}


static bool
_GPSRAW__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__GPSRAW * ros_message =
    static_cast<const mavros_msgs__msg__GPSRAW *>(untyped_ros_message);
  mavros_msgs::msg::dds_::GPSRAW_ dds_message;
  if (!_GPSRAW__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::GPSRAW_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
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
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_GPSRAW__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
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
  bool success = _GPSRAW__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::GPSRAW_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GPSRAW__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "GPSRAW",  // message_name
  _GPSRAW__get_type_code,  // get_type_code
  _GPSRAW__convert_ros_to_dds,  // convert_ros_to_dds
  _GPSRAW__convert_dds_to_ros,  // convert_dds_to_ros
  _GPSRAW__to_cdr_stream,  // to_cdr_stream
  _GPSRAW__to_message  // to_message
};

static rosidl_message_type_support_t _GPSRAW__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_GPSRAW__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  GPSRAW)()
{
  return &_GPSRAW__type_support;
}

#if defined(__cplusplus)
}
#endif
