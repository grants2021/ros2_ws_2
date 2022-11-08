// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/LandingTarget.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/landing_target__rosidl_typesupport_connext_cpp.hpp"
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
namespace geometry_msgs
{
namespace msg
{
namespace dds_
{
class Pose_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const geometry_msgs::msg::Pose &,
  geometry_msgs::msg::dds_::Pose_ &);
bool convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::Pose_ &,
  geometry_msgs::msg::Pose &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace mavros_msgs
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__LandingTarget()
{
  return mavros_msgs::msg::dds_::LandingTarget_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::LandingTarget & ros_message,
  mavros_msgs::msg::dds_::LandingTarget_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name target_num
  dds_message.target_num_ =
    ros_message.target_num;

  // member.name frame
  dds_message.frame_ =
    ros_message.frame;

  // member.name angle
  {
    size_t size = 2;
    for (size_t i = 0; i < size; i++) {
      dds_message.angle_[static_cast<DDS_Long>(i)] =
        ros_message.angle[i];
    }
  }

  // member.name distance
  dds_message.distance_ =
    ros_message.distance;

  // member.name size
  {
    size_t size = 2;
    for (size_t i = 0; i < size; i++) {
      dds_message.size_[static_cast<DDS_Long>(i)] =
        ros_message.size[i];
    }
  }

  // member.name pose
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.pose,
      dds_message.pose_))
  {
    return false;
  }

  // member.name type
  dds_message.type_ =
    ros_message.type;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::LandingTarget_ & dds_message,
  mavros_msgs::msg::LandingTarget & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name target_num
  ros_message.target_num =
    dds_message.target_num_;

  // member.name frame
  ros_message.frame =
    dds_message.frame_;

  // member.name angle
  {
    size_t size = 2;
    for (size_t i = 0; i < size; i++) {
      ros_message.angle[i] =
        dds_message.angle_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name distance
  ros_message.distance =
    dds_message.distance_;

  // member.name size
  {
    size_t size = 2;
    for (size_t i = 0; i < size; i++) {
      ros_message.size[i] =
        dds_message.size_[static_cast<DDS_Long>(i)];
    }
  }

  // member.name pose
  if (
    !geometry_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.pose_,
      ros_message.pose))
  {
    return false;
  }

  // member.name type
  ros_message.type =
    dds_message.type_;

  return true;
}

bool
to_cdr_stream__LandingTarget(
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
  const mavros_msgs::msg::LandingTarget & ros_message =
    *(const mavros_msgs::msg::LandingTarget *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::LandingTarget_ * dds_message = mavros_msgs::msg::dds_::LandingTarget_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::LandingTarget_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::LandingTarget_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::LandingTarget_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::LandingTarget_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__LandingTarget(
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

  mavros_msgs::msg::dds_::LandingTarget_ * dds_message =
    mavros_msgs::msg::dds_::LandingTarget_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::LandingTarget_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::LandingTarget & ros_message =
    *(mavros_msgs::msg::LandingTarget *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::LandingTarget_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _LandingTarget__callbacks = {
  "mavros_msgs::msg",
  "LandingTarget",
  &get_type_code__LandingTarget,
  nullptr,
  nullptr,
  &to_cdr_stream__LandingTarget,
  &to_message__LandingTarget
};

static rosidl_message_type_support_t _LandingTarget__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_LandingTarget__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::LandingTarget>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_LandingTarget__handle;
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
  LandingTarget)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_LandingTarget__handle;
}

#ifdef __cplusplus
}
#endif
