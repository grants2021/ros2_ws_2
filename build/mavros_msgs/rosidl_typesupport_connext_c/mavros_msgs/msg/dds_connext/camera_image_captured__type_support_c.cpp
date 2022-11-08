// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/CameraImageCaptured.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/camera_image_captured__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/camera_image_captured__struct.h"
#include "mavros_msgs/msg/detail/camera_image_captured__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/CameraImageCaptured_Support.h"
#include "mavros_msgs/msg/dds_connext/CameraImageCaptured_Plugin.h"

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member 'geo'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'geo'
#include "geographic_msgs/msg/detail/geo_point__functions.h"
// Member 'file_url'
#include "rosidl_runtime_c/string.h"
// Member 'file_url'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'orientation'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  geometry_msgs, msg,
  Quaternion)();
// Member 'geo'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  geographic_msgs, msg,
  GeoPoint)();

static DDS_TypeCode *
_CameraImageCaptured__get_type_code()
{
  return mavros_msgs::msg::dds_::CameraImageCaptured_TypeSupport::get_typecode();
}

static bool
_CameraImageCaptured__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__CameraImageCaptured * ros_message =
    static_cast<const mavros_msgs__msg__CameraImageCaptured *>(untyped_ros_message);
  mavros_msgs::msg::dds_::CameraImageCaptured_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::CameraImageCaptured_ *>(untyped_dds_message);
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
  // Member name: orientation
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Quaternion__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!geometry_msgs__msg__Quaternion__callbacks->convert_ros_to_dds(
        &ros_message->orientation, &dds_message->orientation_))
    {
      return false;
    }
  }
  // Member name: geo
  {
    const message_type_support_callbacks_t * geographic_msgs__msg__GeoPoint__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, geographic_msgs, msg, GeoPoint
      )()->data);
    if (!geographic_msgs__msg__GeoPoint__callbacks->convert_ros_to_dds(
        &ros_message->geo, &dds_message->geo_))
    {
      return false;
    }
  }
  // Member name: relative_alt
  {
    dds_message->relative_alt_ = ros_message->relative_alt;
  }
  // Member name: image_index
  {
    dds_message->image_index_ = ros_message->image_index;
  }
  // Member name: capture_result
  {
    dds_message->capture_result_ = ros_message->capture_result;
  }
  // Member name: file_url
  {
    const rosidl_runtime_c__String * str = &ros_message->file_url;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->file_url_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_CameraImageCaptured__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::CameraImageCaptured_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::CameraImageCaptured_ *>(untyped_dds_message);
  mavros_msgs__msg__CameraImageCaptured * ros_message =
    static_cast<mavros_msgs__msg__CameraImageCaptured *>(untyped_ros_message);
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
  // Member name: orientation
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geometry_msgs, msg,
      Quaternion)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->orientation_, &ros_message->orientation);
  }
  // Member name: geo
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      geographic_msgs, msg,
      GeoPoint)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->geo_, &ros_message->geo);
  }
  // Member name: relative_alt
  {
    ros_message->relative_alt = dds_message->relative_alt_;
  }
  // Member name: image_index
  {
    ros_message->image_index = dds_message->image_index_;
  }
  // Member name: capture_result
  {
    ros_message->capture_result = dds_message->capture_result_;
  }
  // Member name: file_url
  {
    if (!ros_message->file_url.data) {
      rosidl_runtime_c__String__init(&ros_message->file_url);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->file_url,
      dds_message->file_url_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'file_url'\n");
      return false;
    }
  }
  return true;
}


static bool
_CameraImageCaptured__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__CameraImageCaptured * ros_message =
    static_cast<const mavros_msgs__msg__CameraImageCaptured *>(untyped_ros_message);
  mavros_msgs::msg::dds_::CameraImageCaptured_ dds_message;
  if (!_CameraImageCaptured__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::CameraImageCaptured_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::CameraImageCaptured_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::CameraImageCaptured_Plugin_serialize_to_cdr_buffer(
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
_CameraImageCaptured__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::CameraImageCaptured_ * dds_message =
    mavros_msgs::msg::dds_::CameraImageCaptured_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::CameraImageCaptured_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _CameraImageCaptured__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::CameraImageCaptured_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _CameraImageCaptured__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "CameraImageCaptured",  // message_name
  _CameraImageCaptured__get_type_code,  // get_type_code
  _CameraImageCaptured__convert_ros_to_dds,  // convert_ros_to_dds
  _CameraImageCaptured__convert_dds_to_ros,  // convert_dds_to_ros
  _CameraImageCaptured__to_cdr_stream,  // to_cdr_stream
  _CameraImageCaptured__to_message  // to_message
};

static rosidl_message_type_support_t _CameraImageCaptured__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_CameraImageCaptured__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  CameraImageCaptured)()
{
  return &_CameraImageCaptured__type_support;
}

#if defined(__cplusplus)
}
#endif
