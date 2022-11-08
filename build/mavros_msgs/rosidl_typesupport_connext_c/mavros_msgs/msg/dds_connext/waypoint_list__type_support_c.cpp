// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/WaypointList.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/waypoint_list__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/waypoint_list__struct.h"
#include "mavros_msgs/msg/detail/waypoint_list__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/WaypointList_Support.h"
#include "mavros_msgs/msg/dds_connext/WaypointList_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'waypoints'
#include "mavros_msgs/msg/detail/waypoint__struct.h"
// Member 'waypoints'
#include "mavros_msgs/msg/detail/waypoint__functions.h"

// forward declare type support functions
// Member 'waypoints'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  Waypoint)();

static DDS_TypeCode *
_WaypointList__get_type_code()
{
  return mavros_msgs::msg::dds_::WaypointList_TypeSupport::get_typecode();
}

static bool
_WaypointList__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__WaypointList * ros_message =
    static_cast<const mavros_msgs__msg__WaypointList *>(untyped_ros_message);
  mavros_msgs::msg::dds_::WaypointList_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::WaypointList_ *>(untyped_dds_message);
  // Member name: current_seq
  {
    dds_message->current_seq_ = ros_message->current_seq;
  }
  // Member name: waypoints
  {
    const message_type_support_callbacks_t * mavros_msgs__msg__Waypoint__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, mavros_msgs, msg, Waypoint
      )()->data);
    size_t size = ros_message->waypoints.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->waypoints_.maximum()) {
      if (!dds_message->waypoints_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->waypoints_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->waypoints.data[i];
      if (!mavros_msgs__msg__Waypoint__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->waypoints_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_WaypointList__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::WaypointList_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::WaypointList_ *>(untyped_dds_message);
  mavros_msgs__msg__WaypointList * ros_message =
    static_cast<mavros_msgs__msg__WaypointList *>(untyped_ros_message);
  // Member name: current_seq
  {
    ros_message->current_seq = dds_message->current_seq_;
  }
  // Member name: waypoints
  {
    DDS_Long size = dds_message->waypoints_.length();
    if (ros_message->waypoints.data) {
      mavros_msgs__msg__Waypoint__Sequence__fini(&ros_message->waypoints);
    }
    if (!mavros_msgs__msg__Waypoint__Sequence__init(&ros_message->waypoints, size)) {
      return "failed to create array for field 'waypoints'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->waypoints.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        mavros_msgs, msg,
        Waypoint)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->waypoints_[i], &ros_i);
    }
  }
  return true;
}


static bool
_WaypointList__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__WaypointList * ros_message =
    static_cast<const mavros_msgs__msg__WaypointList *>(untyped_ros_message);
  mavros_msgs::msg::dds_::WaypointList_ dds_message;
  if (!_WaypointList__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::WaypointList_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::WaypointList_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::WaypointList_Plugin_serialize_to_cdr_buffer(
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
_WaypointList__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::WaypointList_ * dds_message =
    mavros_msgs::msg::dds_::WaypointList_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::WaypointList_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _WaypointList__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::WaypointList_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _WaypointList__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "WaypointList",  // message_name
  _WaypointList__get_type_code,  // get_type_code
  _WaypointList__convert_ros_to_dds,  // convert_ros_to_dds
  _WaypointList__convert_dds_to_ros,  // convert_dds_to_ros
  _WaypointList__to_cdr_stream,  // to_cdr_stream
  _WaypointList__to_message  // to_message
};

static rosidl_message_type_support_t _WaypointList__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_WaypointList__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  WaypointList)()
{
  return &_WaypointList__type_support;
}

#if defined(__cplusplus)
}
#endif
