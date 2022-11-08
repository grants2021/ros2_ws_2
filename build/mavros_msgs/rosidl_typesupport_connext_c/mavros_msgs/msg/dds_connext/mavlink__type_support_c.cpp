// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/Mavlink.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/mavlink__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/mavlink__struct.h"
#include "mavros_msgs/msg/detail/mavlink__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/Mavlink_Support.h"
#include "mavros_msgs/msg/dds_connext/Mavlink_Plugin.h"

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
// Member 'payload64'
// Member 'signature'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'payload64'
// Member 'signature'
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();

static DDS_TypeCode *
_Mavlink__get_type_code()
{
  return mavros_msgs::msg::dds_::Mavlink_TypeSupport::get_typecode();
}

static bool
_Mavlink__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__Mavlink * ros_message =
    static_cast<const mavros_msgs__msg__Mavlink *>(untyped_ros_message);
  mavros_msgs::msg::dds_::Mavlink_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::Mavlink_ *>(untyped_dds_message);
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
  // Member name: framing_status
  {
    dds_message->framing_status_ = ros_message->framing_status;
  }
  // Member name: magic
  {
    dds_message->magic_ = ros_message->magic;
  }
  // Member name: len
  {
    dds_message->len_ = ros_message->len;
  }
  // Member name: incompat_flags
  {
    dds_message->incompat_flags_ = ros_message->incompat_flags;
  }
  // Member name: compat_flags
  {
    dds_message->compat_flags_ = ros_message->compat_flags;
  }
  // Member name: seq
  {
    dds_message->seq_ = ros_message->seq;
  }
  // Member name: sysid
  {
    dds_message->sysid_ = ros_message->sysid;
  }
  // Member name: compid
  {
    dds_message->compid_ = ros_message->compid;
  }
  // Member name: msgid
  {
    dds_message->msgid_ = ros_message->msgid;
  }
  // Member name: checksum
  {
    dds_message->checksum_ = ros_message->checksum;
  }
  // Member name: payload64
  {
    size_t size = ros_message->payload64.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    if (size > 33) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->payload64_.maximum()) {
      if (!dds_message->payload64_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->payload64_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->payload64.data[i];
      dds_message->payload64_[i] = ros_i;
    }
  }
  // Member name: signature
  {
    size_t size = ros_message->signature.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    if (size > 13) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->signature_.maximum()) {
      if (!dds_message->signature_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->signature_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->signature.data[i];
      dds_message->signature_[i] = ros_i;
    }
  }
  return true;
}

static bool
_Mavlink__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::Mavlink_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::Mavlink_ *>(untyped_dds_message);
  mavros_msgs__msg__Mavlink * ros_message =
    static_cast<mavros_msgs__msg__Mavlink *>(untyped_ros_message);
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
  // Member name: framing_status
  {
    ros_message->framing_status = dds_message->framing_status_;
  }
  // Member name: magic
  {
    ros_message->magic = dds_message->magic_;
  }
  // Member name: len
  {
    ros_message->len = dds_message->len_;
  }
  // Member name: incompat_flags
  {
    ros_message->incompat_flags = dds_message->incompat_flags_;
  }
  // Member name: compat_flags
  {
    ros_message->compat_flags = dds_message->compat_flags_;
  }
  // Member name: seq
  {
    ros_message->seq = dds_message->seq_;
  }
  // Member name: sysid
  {
    ros_message->sysid = dds_message->sysid_;
  }
  // Member name: compid
  {
    ros_message->compid = dds_message->compid_;
  }
  // Member name: msgid
  {
    ros_message->msgid = dds_message->msgid_;
  }
  // Member name: checksum
  {
    ros_message->checksum = dds_message->checksum_;
  }
  // Member name: payload64
  {
    DDS_Long size = dds_message->payload64_.length();
    if (ros_message->payload64.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->payload64);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->payload64, size)) {
      return "failed to create array for field 'payload64'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->payload64.data[i];
      ros_i = dds_message->payload64_[i];
    }
  }
  // Member name: signature
  {
    DDS_Long size = dds_message->signature_.length();
    if (ros_message->signature.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->signature);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->signature, size)) {
      return "failed to create array for field 'signature'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->signature.data[i];
      ros_i = dds_message->signature_[i];
    }
  }
  return true;
}


static bool
_Mavlink__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__Mavlink * ros_message =
    static_cast<const mavros_msgs__msg__Mavlink *>(untyped_ros_message);
  mavros_msgs::msg::dds_::Mavlink_ dds_message;
  if (!_Mavlink__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::Mavlink_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::Mavlink_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::Mavlink_Plugin_serialize_to_cdr_buffer(
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
_Mavlink__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::Mavlink_ * dds_message =
    mavros_msgs::msg::dds_::Mavlink_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::Mavlink_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Mavlink__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::Mavlink_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Mavlink__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "Mavlink",  // message_name
  _Mavlink__get_type_code,  // get_type_code
  _Mavlink__convert_ros_to_dds,  // convert_ros_to_dds
  _Mavlink__convert_dds_to_ros,  // convert_dds_to_ros
  _Mavlink__to_cdr_stream,  // to_cdr_stream
  _Mavlink__to_message  // to_message
};

static rosidl_message_type_support_t _Mavlink__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Mavlink__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  Mavlink)()
{
  return &_Mavlink__type_support;
}

#if defined(__cplusplus)
}
#endif
