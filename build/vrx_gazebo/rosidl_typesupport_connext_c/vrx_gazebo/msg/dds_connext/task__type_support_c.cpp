// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "vrx_gazebo/msg/task__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "vrx_gazebo/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "vrx_gazebo/msg/detail/task__struct.h"
#include "vrx_gazebo/msg/detail/task__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "vrx_gazebo/msg/dds_connext/Task_Support.h"
#include "vrx_gazebo/msg/dds_connext/Task_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'name'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'name'
// Member 'state'
#include "rosidl_runtime_c/string_functions.h"
// Member 'ready_time'
// Member 'running_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'ready_time'
// Member 'running_time'
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member 'elapsed_time'
// Member 'remaining_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'elapsed_time'
// Member 'remaining_time'
#include "builtin_interfaces/msg/detail/duration__functions.h"

// forward declare type support functions
// Member 'ready_time'
// Member 'running_time'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  builtin_interfaces, msg,
  Time)();
// Member 'elapsed_time'
// Member 'remaining_time'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  builtin_interfaces, msg,
  Duration)();

static DDS_TypeCode *
_Task__get_type_code()
{
  return vrx_gazebo::msg::dds_::Task_TypeSupport::get_typecode();
}

static bool
_Task__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const vrx_gazebo__msg__Task * ros_message =
    static_cast<const vrx_gazebo__msg__Task *>(untyped_ros_message);
  vrx_gazebo::msg::dds_::Task_ * dds_message =
    static_cast<vrx_gazebo::msg::dds_::Task_ *>(untyped_dds_message);
  // Member name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->name_ = DDS_String_dup(str->data);
  }
  // Member name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->state_ = DDS_String_dup(str->data);
  }
  // Member name: ready_time
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Time__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Time
      )()->data);
    if (!builtin_interfaces__msg__Time__callbacks->convert_ros_to_dds(
        &ros_message->ready_time, &dds_message->ready_time_))
    {
      return false;
    }
  }
  // Member name: running_time
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Time__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Time
      )()->data);
    if (!builtin_interfaces__msg__Time__callbacks->convert_ros_to_dds(
        &ros_message->running_time, &dds_message->running_time_))
    {
      return false;
    }
  }
  // Member name: elapsed_time
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Duration__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!builtin_interfaces__msg__Duration__callbacks->convert_ros_to_dds(
        &ros_message->elapsed_time, &dds_message->elapsed_time_))
    {
      return false;
    }
  }
  // Member name: remaining_time
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Duration__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!builtin_interfaces__msg__Duration__callbacks->convert_ros_to_dds(
        &ros_message->remaining_time, &dds_message->remaining_time_))
    {
      return false;
    }
  }
  // Member name: timed_out
  {
    dds_message->timed_out_ = ros_message->timed_out;
  }
  // Member name: num_collisions
  {
    dds_message->num_collisions_ = ros_message->num_collisions;
  }
  // Member name: score
  {
    dds_message->score_ = ros_message->score;
  }
  return true;
}

static bool
_Task__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const vrx_gazebo::msg::dds_::Task_ * dds_message =
    static_cast<const vrx_gazebo::msg::dds_::Task_ *>(untyped_dds_message);
  vrx_gazebo__msg__Task * ros_message =
    static_cast<vrx_gazebo__msg__Task *>(untyped_ros_message);
  // Member name: name
  {
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      dds_message->name_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }
  // Member name: state
  {
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      dds_message->state_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }
  // Member name: ready_time
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Time)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->ready_time_, &ros_message->ready_time);
  }
  // Member name: running_time
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Time)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->running_time_, &ros_message->running_time);
  }
  // Member name: elapsed_time
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Duration)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->elapsed_time_, &ros_message->elapsed_time);
  }
  // Member name: remaining_time
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Duration)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->remaining_time_, &ros_message->remaining_time);
  }
  // Member name: timed_out
  {
    ros_message->timed_out = dds_message->timed_out_ == static_cast<DDS_Boolean>(true);
  }
  // Member name: num_collisions
  {
    ros_message->num_collisions = dds_message->num_collisions_;
  }
  // Member name: score
  {
    ros_message->score = dds_message->score_;
  }
  return true;
}


static bool
_Task__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const vrx_gazebo__msg__Task * ros_message =
    static_cast<const vrx_gazebo__msg__Task *>(untyped_ros_message);
  vrx_gazebo::msg::dds_::Task_ dds_message;
  if (!_Task__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer()\n");
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
  if (vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer(
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
_Task__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  vrx_gazebo::msg::dds_::Task_ * dds_message =
    vrx_gazebo::msg::dds_::Task_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (vrx_gazebo::msg::dds_::Task_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Task__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (vrx_gazebo::msg::dds_::Task_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Task__callbacks = {
  "vrx_gazebo::msg",  // message_namespace
  "Task",  // message_name
  _Task__get_type_code,  // get_type_code
  _Task__convert_ros_to_dds,  // convert_ros_to_dds
  _Task__convert_dds_to_ros,  // convert_dds_to_ros
  _Task__to_cdr_stream,  // to_cdr_stream
  _Task__to_message  // to_message
};

static rosidl_message_type_support_t _Task__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Task__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  vrx_gazebo, msg,
  Task)()
{
  return &_Task__type_support;
}

#if defined(__cplusplus)
}
#endif
