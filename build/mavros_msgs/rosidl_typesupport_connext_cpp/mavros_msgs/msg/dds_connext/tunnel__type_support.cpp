// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/Tunnel.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/tunnel__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions


namespace mavros_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Tunnel()
{
  return mavros_msgs::msg::dds_::Tunnel_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::Tunnel & ros_message,
  mavros_msgs::msg::dds_::Tunnel_ & dds_message)
{
  // member.name target_system
  dds_message.target_system_ =
    ros_message.target_system;

  // member.name target_component
  dds_message.target_component_ =
    ros_message.target_component;

  // member.name payload_type
  dds_message.payload_type_ =
    ros_message.payload_type;

  // member.name payload_length
  dds_message.payload_length_ =
    ros_message.payload_length;

  // member.name payload
  {
    size_t size = 128;
    for (size_t i = 0; i < size; i++) {
      dds_message.payload_[static_cast<DDS_Long>(i)] =
        ros_message.payload[i];
    }
  }

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::Tunnel_ & dds_message,
  mavros_msgs::msg::Tunnel & ros_message)
{
  // member.name target_system
  ros_message.target_system =
    dds_message.target_system_;

  // member.name target_component
  ros_message.target_component =
    dds_message.target_component_;

  // member.name payload_type
  ros_message.payload_type =
    dds_message.payload_type_;

  // member.name payload_length
  ros_message.payload_length =
    dds_message.payload_length_;

  // member.name payload
  {
    size_t size = 128;
    for (size_t i = 0; i < size; i++) {
      ros_message.payload[i] =
        dds_message.payload_[static_cast<DDS_Long>(i)];
    }
  }

  return true;
}

bool
to_cdr_stream__Tunnel(
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
  const mavros_msgs::msg::Tunnel & ros_message =
    *(const mavros_msgs::msg::Tunnel *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::Tunnel_ * dds_message = mavros_msgs::msg::dds_::Tunnel_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::Tunnel_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::Tunnel_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::Tunnel_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::Tunnel_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Tunnel(
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

  mavros_msgs::msg::dds_::Tunnel_ * dds_message =
    mavros_msgs::msg::dds_::Tunnel_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::Tunnel_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::Tunnel & ros_message =
    *(mavros_msgs::msg::Tunnel *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::Tunnel_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Tunnel__callbacks = {
  "mavros_msgs::msg",
  "Tunnel",
  &get_type_code__Tunnel,
  nullptr,
  nullptr,
  &to_cdr_stream__Tunnel,
  &to_message__Tunnel
};

static rosidl_message_type_support_t _Tunnel__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Tunnel__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::Tunnel>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Tunnel__handle;
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
  Tunnel)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_Tunnel__handle;
}

#ifdef __cplusplus
}
#endif
