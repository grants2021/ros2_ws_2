// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/GPSINPUT.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/gpsinput__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/gpsinput__struct.h"
#include "mavros_msgs/msg/detail/gpsinput__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/GPSINPUT_Support.h"
#include "mavros_msgs/msg/dds_connext/GPSINPUT_Plugin.h"

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
_GPSINPUT__get_type_code()
{
  return mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::get_typecode();
}

static bool
_GPSINPUT__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__GPSINPUT * ros_message =
    static_cast<const mavros_msgs__msg__GPSINPUT *>(untyped_ros_message);
  mavros_msgs::msg::dds_::GPSINPUT_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::GPSINPUT_ *>(untyped_dds_message);
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
  // Member name: gps_id
  {
    dds_message->gps_id_ = ros_message->gps_id;
  }
  // Member name: ignore_flags
  {
    dds_message->ignore_flags_ = ros_message->ignore_flags;
  }
  // Member name: time_week_ms
  {
    dds_message->time_week_ms_ = ros_message->time_week_ms;
  }
  // Member name: time_week
  {
    dds_message->time_week_ = ros_message->time_week;
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
  // Member name: hdop
  {
    dds_message->hdop_ = ros_message->hdop;
  }
  // Member name: vdop
  {
    dds_message->vdop_ = ros_message->vdop;
  }
  // Member name: vn
  {
    dds_message->vn_ = ros_message->vn;
  }
  // Member name: ve
  {
    dds_message->ve_ = ros_message->ve;
  }
  // Member name: vd
  {
    dds_message->vd_ = ros_message->vd;
  }
  // Member name: speed_accuracy
  {
    dds_message->speed_accuracy_ = ros_message->speed_accuracy;
  }
  // Member name: horiz_accuracy
  {
    dds_message->horiz_accuracy_ = ros_message->horiz_accuracy;
  }
  // Member name: vert_accuracy
  {
    dds_message->vert_accuracy_ = ros_message->vert_accuracy;
  }
  // Member name: satellites_visible
  {
    dds_message->satellites_visible_ = ros_message->satellites_visible;
  }
  // Member name: yaw
  {
    dds_message->yaw_ = ros_message->yaw;
  }
  return true;
}

static bool
_GPSINPUT__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::GPSINPUT_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::GPSINPUT_ *>(untyped_dds_message);
  mavros_msgs__msg__GPSINPUT * ros_message =
    static_cast<mavros_msgs__msg__GPSINPUT *>(untyped_ros_message);
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
  // Member name: gps_id
  {
    ros_message->gps_id = dds_message->gps_id_;
  }
  // Member name: ignore_flags
  {
    ros_message->ignore_flags = dds_message->ignore_flags_;
  }
  // Member name: time_week_ms
  {
    ros_message->time_week_ms = dds_message->time_week_ms_;
  }
  // Member name: time_week
  {
    ros_message->time_week = dds_message->time_week_;
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
  // Member name: hdop
  {
    ros_message->hdop = dds_message->hdop_;
  }
  // Member name: vdop
  {
    ros_message->vdop = dds_message->vdop_;
  }
  // Member name: vn
  {
    ros_message->vn = dds_message->vn_;
  }
  // Member name: ve
  {
    ros_message->ve = dds_message->ve_;
  }
  // Member name: vd
  {
    ros_message->vd = dds_message->vd_;
  }
  // Member name: speed_accuracy
  {
    ros_message->speed_accuracy = dds_message->speed_accuracy_;
  }
  // Member name: horiz_accuracy
  {
    ros_message->horiz_accuracy = dds_message->horiz_accuracy_;
  }
  // Member name: vert_accuracy
  {
    ros_message->vert_accuracy = dds_message->vert_accuracy_;
  }
  // Member name: satellites_visible
  {
    ros_message->satellites_visible = dds_message->satellites_visible_;
  }
  // Member name: yaw
  {
    ros_message->yaw = dds_message->yaw_;
  }
  return true;
}


static bool
_GPSINPUT__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__GPSINPUT * ros_message =
    static_cast<const mavros_msgs__msg__GPSINPUT *>(untyped_ros_message);
  mavros_msgs::msg::dds_::GPSINPUT_ dds_message;
  if (!_GPSINPUT__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::GPSINPUT_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
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
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_GPSINPUT__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
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
  bool success = _GPSINPUT__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::GPSINPUT_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GPSINPUT__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "GPSINPUT",  // message_name
  _GPSINPUT__get_type_code,  // get_type_code
  _GPSINPUT__convert_ros_to_dds,  // convert_ros_to_dds
  _GPSINPUT__convert_dds_to_ros,  // convert_dds_to_ros
  _GPSINPUT__to_cdr_stream,  // to_cdr_stream
  _GPSINPUT__to_message  // to_message
};

static rosidl_message_type_support_t _GPSINPUT__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_GPSINPUT__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  GPSINPUT)()
{
  return &_GPSINPUT__type_support;
}

#if defined(__cplusplus)
}
#endif
