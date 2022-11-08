// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/RTKBaseline.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/rtk_baseline__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__RTKBaseline()
{
  return mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::RTKBaseline & ros_message,
  mavros_msgs::msg::dds_::RTKBaseline_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name time_last_baseline_ms
  dds_message.time_last_baseline_ms_ =
    ros_message.time_last_baseline_ms;

  // member.name rtk_receiver_id
  dds_message.rtk_receiver_id_ =
    ros_message.rtk_receiver_id;

  // member.name wn
  dds_message.wn_ =
    ros_message.wn;

  // member.name tow
  dds_message.tow_ =
    ros_message.tow;

  // member.name rtk_health
  dds_message.rtk_health_ =
    ros_message.rtk_health;

  // member.name rtk_rate
  dds_message.rtk_rate_ =
    ros_message.rtk_rate;

  // member.name nsats
  dds_message.nsats_ =
    ros_message.nsats;

  // member.name baseline_coords_type
  dds_message.baseline_coords_type_ =
    ros_message.baseline_coords_type;

  // member.name baseline_a_mm
  dds_message.baseline_a_mm_ =
    ros_message.baseline_a_mm;

  // member.name baseline_b_mm
  dds_message.baseline_b_mm_ =
    ros_message.baseline_b_mm;

  // member.name baseline_c_mm
  dds_message.baseline_c_mm_ =
    ros_message.baseline_c_mm;

  // member.name accuracy
  dds_message.accuracy_ =
    ros_message.accuracy;

  // member.name iar_num_hypotheses
  dds_message.iar_num_hypotheses_ =
    ros_message.iar_num_hypotheses;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::RTKBaseline_ & dds_message,
  mavros_msgs::msg::RTKBaseline & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name time_last_baseline_ms
  ros_message.time_last_baseline_ms =
    dds_message.time_last_baseline_ms_;

  // member.name rtk_receiver_id
  ros_message.rtk_receiver_id =
    dds_message.rtk_receiver_id_;

  // member.name wn
  ros_message.wn =
    dds_message.wn_;

  // member.name tow
  ros_message.tow =
    dds_message.tow_;

  // member.name rtk_health
  ros_message.rtk_health =
    dds_message.rtk_health_;

  // member.name rtk_rate
  ros_message.rtk_rate =
    dds_message.rtk_rate_;

  // member.name nsats
  ros_message.nsats =
    dds_message.nsats_;

  // member.name baseline_coords_type
  ros_message.baseline_coords_type =
    dds_message.baseline_coords_type_;

  // member.name baseline_a_mm
  ros_message.baseline_a_mm =
    dds_message.baseline_a_mm_;

  // member.name baseline_b_mm
  ros_message.baseline_b_mm =
    dds_message.baseline_b_mm_;

  // member.name baseline_c_mm
  ros_message.baseline_c_mm =
    dds_message.baseline_c_mm_;

  // member.name accuracy
  ros_message.accuracy =
    dds_message.accuracy_;

  // member.name iar_num_hypotheses
  ros_message.iar_num_hypotheses =
    dds_message.iar_num_hypotheses_;

  return true;
}

bool
to_cdr_stream__RTKBaseline(
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
  const mavros_msgs::msg::RTKBaseline & ros_message =
    *(const mavros_msgs::msg::RTKBaseline *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::RTKBaseline_ * dds_message = mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::RTKBaseline_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
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
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__RTKBaseline(
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

  mavros_msgs::msg::RTKBaseline & ros_message =
    *(mavros_msgs::msg::RTKBaseline *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::RTKBaseline_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _RTKBaseline__callbacks = {
  "mavros_msgs::msg",
  "RTKBaseline",
  &get_type_code__RTKBaseline,
  nullptr,
  nullptr,
  &to_cdr_stream__RTKBaseline,
  &to_message__RTKBaseline
};

static rosidl_message_type_support_t _RTKBaseline__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_RTKBaseline__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::RTKBaseline>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_RTKBaseline__handle;
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
  RTKBaseline)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_RTKBaseline__handle;
}

#ifdef __cplusplus
}
#endif
