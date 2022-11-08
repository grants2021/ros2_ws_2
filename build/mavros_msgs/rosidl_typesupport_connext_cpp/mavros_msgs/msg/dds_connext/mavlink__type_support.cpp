// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/Mavlink.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/mavlink__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__Mavlink()
{
  return mavros_msgs::msg::dds_::Mavlink_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::Mavlink & ros_message,
  mavros_msgs::msg::dds_::Mavlink_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name framing_status
  dds_message.framing_status_ =
    ros_message.framing_status;

  // member.name magic
  dds_message.magic_ =
    ros_message.magic;

  // member.name len
  dds_message.len_ =
    ros_message.len;

  // member.name incompat_flags
  dds_message.incompat_flags_ =
    ros_message.incompat_flags;

  // member.name compat_flags
  dds_message.compat_flags_ =
    ros_message.compat_flags;

  // member.name seq
  dds_message.seq_ =
    ros_message.seq;

  // member.name sysid
  dds_message.sysid_ =
    ros_message.sysid;

  // member.name compid
  dds_message.compid_ =
    ros_message.compid;

  // member.name msgid
  dds_message.msgid_ =
    ros_message.msgid;

  // member.name checksum
  dds_message.checksum_ =
    ros_message.checksum;

  // member.name payload64
  {
    size_t size = ros_message.payload64.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    if (size > 33) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.payload64_.maximum()) {
      if (!dds_message.payload64_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.payload64_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.payload64_[static_cast<DDS_Long>(i)] =
        ros_message.payload64[i];
    }
  }

  // member.name signature
  {
    size_t size = ros_message.signature.size();
    if (size > (std::numeric_limits<size_t>::max)()) {
      throw std::runtime_error("array size exceeds maximum DDS sequence size");
    }
    if (size > 13) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message.signature_.maximum()) {
      if (!dds_message.signature_.maximum(length)) {
        throw std::runtime_error("failed to set maximum of sequence");
      }
    }
    if (!dds_message.signature_.length(length)) {
      throw std::runtime_error("failed to set length of sequence");
    }
    for (size_t i = 0; i < size; i++) {
      dds_message.signature_[static_cast<DDS_Long>(i)] =
        ros_message.signature[i];
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::Mavlink_ & dds_message,
  mavros_msgs::msg::Mavlink & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name framing_status
  ros_message.framing_status =
    dds_message.framing_status_;

  // member.name magic
  ros_message.magic =
    dds_message.magic_;

  // member.name len
  ros_message.len =
    dds_message.len_;

  // member.name incompat_flags
  ros_message.incompat_flags =
    dds_message.incompat_flags_;

  // member.name compat_flags
  ros_message.compat_flags =
    dds_message.compat_flags_;

  // member.name seq
  ros_message.seq =
    dds_message.seq_;

  // member.name sysid
  ros_message.sysid =
    dds_message.sysid_;

  // member.name compid
  ros_message.compid =
    dds_message.compid_;

  // member.name msgid
  ros_message.msgid =
    dds_message.msgid_;

  // member.name checksum
  ros_message.checksum =
    dds_message.checksum_;

  // member.name payload64
  {
    size_t size = dds_message.payload64_.length();
    ros_message.payload64.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.payload64[i] =
        dds_message.payload64_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name signature
  {
    size_t size = dds_message.signature_.length();
    ros_message.signature.resize(size);
    for (size_t i = 0; i < size; i++) {
      ros_message.signature[i] =
        dds_message.signature_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__Mavlink(
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
  const mavros_msgs::msg::Mavlink & ros_message =
    *(const mavros_msgs::msg::Mavlink *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::Mavlink_ * dds_message = mavros_msgs::msg::dds_::Mavlink_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::Mavlink_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::Mavlink_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Mavlink(
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

  mavros_msgs::msg::Mavlink & ros_message =
    *(mavros_msgs::msg::Mavlink *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::Mavlink_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Mavlink__callbacks = {
  "mavros_msgs::msg",
  "Mavlink",
  &get_type_code__Mavlink,
  nullptr,
  nullptr,
  &to_cdr_stream__Mavlink,
  &to_message__Mavlink
};

static rosidl_message_type_support_t _Mavlink__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Mavlink__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::Mavlink>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Mavlink__handle;
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
  Mavlink)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Mavlink__handle;
}

#ifdef __cplusplus
}
#endif
