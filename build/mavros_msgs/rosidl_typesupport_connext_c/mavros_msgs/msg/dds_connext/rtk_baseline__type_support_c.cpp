// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/RTKBaseline.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/rtk_baseline__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/rtk_baseline__struct.h"
#include "mavros_msgs/msg/detail/rtk_baseline__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/RTKBaseline_Support.h"
#include "mavros_msgs/msg/dds_connext/RTKBaseline_Plugin.h"

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
_RTKBaseline__get_type_code()
{
  return mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::get_typecode();
}

static bool
_RTKBaseline__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__RTKBaseline * ros_message =
    static_cast<const mavros_msgs__msg__RTKBaseline *>(untyped_ros_message);
  mavros_msgs::msg::dds_::RTKBaseline_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::RTKBaseline_ *>(untyped_dds_message);
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
  // Member name: time_last_baseline_ms
  {
    dds_message->time_last_baseline_ms_ = ros_message->time_last_baseline_ms;
  }
  // Member name: rtk_receiver_id
  {
    dds_message->rtk_receiver_id_ = ros_message->rtk_receiver_id;
  }
  // Member name: wn
  {
    dds_message->wn_ = ros_message->wn;
  }
  // Member name: tow
  {
    dds_message->tow_ = ros_message->tow;
  }
  // Member name: rtk_health
  {
    dds_message->rtk_health_ = ros_message->rtk_health;
  }
  // Member name: rtk_rate
  {
    dds_message->rtk_rate_ = ros_message->rtk_rate;
  }
  // Member name: nsats
  {
    dds_message->nsats_ = ros_message->nsats;
  }
  // Member name: baseline_coords_type
  {
    dds_message->baseline_coords_type_ = ros_message->baseline_coords_type;
  }
  // Member name: baseline_a_mm
  {
    dds_message->baseline_a_mm_ = ros_message->baseline_a_mm;
  }
  // Member name: baseline_b_mm
  {
    dds_message->baseline_b_mm_ = ros_message->baseline_b_mm;
  }
  // Member name: baseline_c_mm
  {
    dds_message->baseline_c_mm_ = ros_message->baseline_c_mm;
  }
  // Member name: accuracy
  {
    dds_message->accuracy_ = ros_message->accuracy;
  }
  // Member name: iar_num_hypotheses
  {
    dds_message->iar_num_hypotheses_ = ros_message->iar_num_hypotheses;
  }
  return true;
}

static bool
_RTKBaseline__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::RTKBaseline_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::RTKBaseline_ *>(untyped_dds_message);
  mavros_msgs__msg__RTKBaseline * ros_message =
    static_cast<mavros_msgs__msg__RTKBaseline *>(untyped_ros_message);
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
  // Member name: time_last_baseline_ms
  {
    ros_message->time_last_baseline_ms = dds_message->time_last_baseline_ms_;
  }
  // Member name: rtk_receiver_id
  {
    ros_message->rtk_receiver_id = dds_message->rtk_receiver_id_;
  }
  // Member name: wn
  {
    ros_message->wn = dds_message->wn_;
  }
  // Member name: tow
  {
    ros_message->tow = dds_message->tow_;
  }
  // Member name: rtk_health
  {
    ros_message->rtk_health = dds_message->rtk_health_;
  }
  // Member name: rtk_rate
  {
    ros_message->rtk_rate = dds_message->rtk_rate_;
  }
  // Member name: nsats
  {
    ros_message->nsats = dds_message->nsats_;
  }
  // Member name: baseline_coords_type
  {
    ros_message->baseline_coords_type = dds_message->baseline_coords_type_;
  }
  // Member name: baseline_a_mm
  {
    ros_message->baseline_a_mm = dds_message->baseline_a_mm_;
  }
  // Member name: baseline_b_mm
  {
    ros_message->baseline_b_mm = dds_message->baseline_b_mm_;
  }
  // Member name: baseline_c_mm
  {
    ros_message->baseline_c_mm = dds_message->baseline_c_mm_;
  }
  // Member name: accuracy
  {
    ros_message->accuracy = dds_message->accuracy_;
  }
  // Member name: iar_num_hypotheses
  {
    ros_message->iar_num_hypotheses = dds_message->iar_num_hypotheses_;
  }
  return true;
}


static bool
_RTKBaseline__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__RTKBaseline * ros_message =
    static_cast<const mavros_msgs__msg__RTKBaseline *>(untyped_ros_message);
  mavros_msgs::msg::dds_::RTKBaseline_ dds_message;
  if (!_RTKBaseline__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::RTKBaseline_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::RTKBaseline_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::RTKBaseline_Plugin_serialize_to_cdr_buffer(
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
_RTKBaseline__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::RTKBaseline_ * dds_message =
    mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::RTKBaseline_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _RTKBaseline__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RTKBaseline__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "RTKBaseline",  // message_name
  _RTKBaseline__get_type_code,  // get_type_code
  _RTKBaseline__convert_ros_to_dds,  // convert_ros_to_dds
  _RTKBaseline__convert_dds_to_ros,  // convert_dds_to_ros
  _RTKBaseline__to_cdr_stream,  // to_cdr_stream
  _RTKBaseline__to_message  // to_message
};

static rosidl_message_type_support_t _RTKBaseline__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_RTKBaseline__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  RTKBaseline)()
{
  return &_RTKBaseline__type_support;
}

#if defined(__cplusplus)
}
#endif
