// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "vrx_gazebo/msg/contact__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "vrx_gazebo/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "vrx_gazebo/msg/detail/contact__struct.h"
#include "vrx_gazebo/msg/detail/contact__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "vrx_gazebo/msg/dds_connext/Contact_Support.h"
#include "vrx_gazebo/msg/dds_connext/Contact_Plugin.h"

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
// Member 'collision1'
// Member 'collision2'
#include "rosidl_runtime_c/string.h"
// Member 'collision1'
// Member 'collision2'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();

static DDS_TypeCode *
_Contact__get_type_code()
{
  return vrx_gazebo::msg::dds_::Contact_TypeSupport::get_typecode();
}

static bool
_Contact__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const vrx_gazebo__msg__Contact * ros_message =
    static_cast<const vrx_gazebo__msg__Contact *>(untyped_ros_message);
  vrx_gazebo::msg::dds_::Contact_ * dds_message =
    static_cast<vrx_gazebo::msg::dds_::Contact_ *>(untyped_dds_message);
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
  // Member name: collision1
  {
    const rosidl_runtime_c__String * str = &ros_message->collision1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->collision1_ = DDS_String_dup(str->data);
  }
  // Member name: collision2
  {
    const rosidl_runtime_c__String * str = &ros_message->collision2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->collision2_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_Contact__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const vrx_gazebo::msg::dds_::Contact_ * dds_message =
    static_cast<const vrx_gazebo::msg::dds_::Contact_ *>(untyped_dds_message);
  vrx_gazebo__msg__Contact * ros_message =
    static_cast<vrx_gazebo__msg__Contact *>(untyped_ros_message);
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
  // Member name: collision1
  {
    if (!ros_message->collision1.data) {
      rosidl_runtime_c__String__init(&ros_message->collision1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->collision1,
      dds_message->collision1_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'collision1'\n");
      return false;
    }
  }
  // Member name: collision2
  {
    if (!ros_message->collision2.data) {
      rosidl_runtime_c__String__init(&ros_message->collision2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->collision2,
      dds_message->collision2_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'collision2'\n");
      return false;
    }
  }
  return true;
}


static bool
_Contact__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const vrx_gazebo__msg__Contact * ros_message =
    static_cast<const vrx_gazebo__msg__Contact *>(untyped_ros_message);
  vrx_gazebo::msg::dds_::Contact_ dds_message;
  if (!_Contact__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (vrx_gazebo::msg::dds_::Contact_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call vrx_gazebo::msg::dds_::Contact_Plugin_serialize_to_cdr_buffer()\n");
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
  if (vrx_gazebo::msg::dds_::Contact_Plugin_serialize_to_cdr_buffer(
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
_Contact__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  vrx_gazebo::msg::dds_::Contact_ * dds_message =
    vrx_gazebo::msg::dds_::Contact_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (vrx_gazebo::msg::dds_::Contact_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Contact__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (vrx_gazebo::msg::dds_::Contact_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Contact__callbacks = {
  "vrx_gazebo::msg",  // message_namespace
  "Contact",  // message_name
  _Contact__get_type_code,  // get_type_code
  _Contact__convert_ros_to_dds,  // convert_ros_to_dds
  _Contact__convert_dds_to_ros,  // convert_dds_to_ros
  _Contact__to_cdr_stream,  // to_cdr_stream
  _Contact__to_message  // to_message
};

static rosidl_message_type_support_t _Contact__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Contact__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  vrx_gazebo, msg,
  Contact)()
{
  return &_Contact__type_support;
}

#if defined(__cplusplus)
}
#endif
