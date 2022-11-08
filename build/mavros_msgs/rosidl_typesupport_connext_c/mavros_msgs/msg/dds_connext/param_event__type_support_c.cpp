// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/ParamEvent.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/param_event__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/param_event__struct.h"
#include "mavros_msgs/msg/detail/param_event__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/ParamEvent_Support.h"
#include "mavros_msgs/msg/dds_connext/ParamEvent_Plugin.h"

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
// Member 'param_id'
#include "rosidl_runtime_c/string.h"
// Member 'param_id'
#include "rosidl_runtime_c/string_functions.h"
// Member 'value'
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"
// Member 'value'
#include "rcl_interfaces/msg/detail/parameter_value__functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'value'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  rcl_interfaces, msg,
  ParameterValue)();

static DDS_TypeCode *
_ParamEvent__get_type_code()
{
  return mavros_msgs::msg::dds_::ParamEvent_TypeSupport::get_typecode();
}

static bool
_ParamEvent__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__ParamEvent * ros_message =
    static_cast<const mavros_msgs__msg__ParamEvent *>(untyped_ros_message);
  mavros_msgs::msg::dds_::ParamEvent_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::ParamEvent_ *>(untyped_dds_message);
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
  // Member name: param_id
  {
    const rosidl_runtime_c__String * str = &ros_message->param_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->param_id_ = DDS_String_dup(str->data);
  }
  // Member name: value
  {
    const message_type_support_callbacks_t * rcl_interfaces__msg__ParameterValue__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, rcl_interfaces, msg, ParameterValue
      )()->data);
    if (!rcl_interfaces__msg__ParameterValue__callbacks->convert_ros_to_dds(
        &ros_message->value, &dds_message->value_))
    {
      return false;
    }
  }
  // Member name: param_index
  {
    dds_message->param_index_ = ros_message->param_index;
  }
  // Member name: param_count
  {
    dds_message->param_count_ = ros_message->param_count;
  }
  return true;
}

static bool
_ParamEvent__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::ParamEvent_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::ParamEvent_ *>(untyped_dds_message);
  mavros_msgs__msg__ParamEvent * ros_message =
    static_cast<mavros_msgs__msg__ParamEvent *>(untyped_ros_message);
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
  // Member name: param_id
  {
    if (!ros_message->param_id.data) {
      rosidl_runtime_c__String__init(&ros_message->param_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->param_id,
      dds_message->param_id_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'param_id'\n");
      return false;
    }
  }
  // Member name: value
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      rcl_interfaces, msg,
      ParameterValue)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->value_, &ros_message->value);
  }
  // Member name: param_index
  {
    ros_message->param_index = dds_message->param_index_;
  }
  // Member name: param_count
  {
    ros_message->param_count = dds_message->param_count_;
  }
  return true;
}


static bool
_ParamEvent__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__ParamEvent * ros_message =
    static_cast<const mavros_msgs__msg__ParamEvent *>(untyped_ros_message);
  mavros_msgs::msg::dds_::ParamEvent_ dds_message;
  if (!_ParamEvent__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::ParamEvent_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::ParamEvent_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::ParamEvent_Plugin_serialize_to_cdr_buffer(
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
_ParamEvent__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::ParamEvent_ * dds_message =
    mavros_msgs::msg::dds_::ParamEvent_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::ParamEvent_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _ParamEvent__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::ParamEvent_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _ParamEvent__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "ParamEvent",  // message_name
  _ParamEvent__get_type_code,  // get_type_code
  _ParamEvent__convert_ros_to_dds,  // convert_ros_to_dds
  _ParamEvent__convert_dds_to_ros,  // convert_dds_to_ros
  _ParamEvent__to_cdr_stream,  // to_cdr_stream
  _ParamEvent__to_message  // to_message
};

static rosidl_message_type_support_t _ParamEvent__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_ParamEvent__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  ParamEvent)()
{
  return &_ParamEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
