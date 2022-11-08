// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from usv_msgs:msg/RangeBearing.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "usv_msgs/msg/range_bearing__rosidl_typesupport_connext_cpp.hpp"
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


namespace usv_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__RangeBearing()
{
  return usv_msgs::msg::dds_::RangeBearing_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const usv_msgs::msg::RangeBearing & ros_message,
  usv_msgs::msg::dds_::RangeBearing_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name range
  dds_message.range_ =
    ros_message.range;

  // member.name bearing
  dds_message.bearing_ =
    ros_message.bearing;

  // member.name elevation
  dds_message.elevation_ =
    ros_message.elevation;

  return true;
}

bool
convert_dds_message_to_ros(
  const usv_msgs::msg::dds_::RangeBearing_ & dds_message,
  usv_msgs::msg::RangeBearing & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name range
  ros_message.range =
    dds_message.range_;

  // member.name bearing
  ros_message.bearing =
    dds_message.bearing_;

  // member.name elevation
  ros_message.elevation =
    dds_message.elevation_;

  return true;
}

bool
to_cdr_stream__RangeBearing(
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
  const usv_msgs::msg::RangeBearing & ros_message =
    *(const usv_msgs::msg::RangeBearing *)untyped_ros_message;

  // create a respective connext dds type
  usv_msgs::msg::dds_::RangeBearing_ * dds_message = usv_msgs::msg::dds_::RangeBearing_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (usv_msgs::msg::dds_::RangeBearing_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call usv_msgs::msg::dds_::RangeBearing_Plugin_serialize_to_cdr_buffer()\n");
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
  if (usv_msgs::msg::dds_::RangeBearing_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (usv_msgs::msg::dds_::RangeBearing_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__RangeBearing(
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

  usv_msgs::msg::dds_::RangeBearing_ * dds_message =
    usv_msgs::msg::dds_::RangeBearing_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (usv_msgs::msg::dds_::RangeBearing_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  usv_msgs::msg::RangeBearing & ros_message =
    *(usv_msgs::msg::RangeBearing *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (usv_msgs::msg::dds_::RangeBearing_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RangeBearing__callbacks = {
  "usv_msgs::msg",
  "RangeBearing",
  &get_type_code__RangeBearing,
  nullptr,
  nullptr,
  &to_cdr_stream__RangeBearing,
  &to_message__RangeBearing
};

static rosidl_message_type_support_t _RangeBearing__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_RangeBearing__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace usv_msgs


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_usv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<usv_msgs::msg::RangeBearing>()
{
  return &usv_msgs::msg::typesupport_connext_cpp::_RangeBearing__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  usv_msgs, msg,
  RangeBearing)()
{
  return &usv_msgs::msg::typesupport_connext_cpp::_RangeBearing__handle;
}

#ifdef __cplusplus
}
#endif
