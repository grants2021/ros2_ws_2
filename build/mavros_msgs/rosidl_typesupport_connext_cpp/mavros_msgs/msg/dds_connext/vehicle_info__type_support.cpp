// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from mavros_msgs:msg/VehicleInfo.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "mavros_msgs/msg/vehicle_info__rosidl_typesupport_connext_cpp.hpp"
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
get_type_code__VehicleInfo()
{
  return mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const mavros_msgs::msg::VehicleInfo & ros_message,
  mavros_msgs::msg::dds_::VehicleInfo_ & dds_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.header,
      dds_message.header_))
  {
    return false;
  }

  // member.name available_info
  dds_message.available_info_ =
    ros_message.available_info;

  // member.name sysid
  dds_message.sysid_ =
    ros_message.sysid;

  // member.name compid
  dds_message.compid_ =
    ros_message.compid;

  // member.name autopilot
  dds_message.autopilot_ =
    ros_message.autopilot;

  // member.name type
  dds_message.type_ =
    ros_message.type;

  // member.name system_status
  dds_message.system_status_ =
    ros_message.system_status;

  // member.name base_mode
  dds_message.base_mode_ =
    ros_message.base_mode;

  // member.name custom_mode
  dds_message.custom_mode_ =
    ros_message.custom_mode;

  // member.name mode
  DDS_String_free(dds_message.mode_);
  dds_message.mode_ =
    DDS_String_dup(ros_message.mode.c_str());

  // member.name mode_id
  dds_message.mode_id_ =
    ros_message.mode_id;

  // member.name capabilities
  dds_message.capabilities_ =
    ros_message.capabilities;

  // member.name flight_sw_version
  dds_message.flight_sw_version_ =
    ros_message.flight_sw_version;

  // member.name middleware_sw_version
  dds_message.middleware_sw_version_ =
    ros_message.middleware_sw_version;

  // member.name os_sw_version
  dds_message.os_sw_version_ =
    ros_message.os_sw_version;

  // member.name board_version
  dds_message.board_version_ =
    ros_message.board_version;

  // member.name flight_custom_version
  DDS_String_free(dds_message.flight_custom_version_);
  dds_message.flight_custom_version_ =
    DDS_String_dup(ros_message.flight_custom_version.c_str());

  // member.name vendor_id
  dds_message.vendor_id_ =
    ros_message.vendor_id;

  // member.name product_id
  dds_message.product_id_ =
    ros_message.product_id;

  // member.name uid
  dds_message.uid_ =
    ros_message.uid;

  return true;
}

bool
convert_dds_message_to_ros(
  const mavros_msgs::msg::dds_::VehicleInfo_ & dds_message,
  mavros_msgs::msg::VehicleInfo & ros_message)
{
  // member.name header
  if (
    !std_msgs::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.header_,
      ros_message.header))
  {
    return false;
  }

  // member.name available_info
  ros_message.available_info =
    dds_message.available_info_;

  // member.name sysid
  ros_message.sysid =
    dds_message.sysid_;

  // member.name compid
  ros_message.compid =
    dds_message.compid_;

  // member.name autopilot
  ros_message.autopilot =
    dds_message.autopilot_;

  // member.name type
  ros_message.type =
    dds_message.type_;

  // member.name system_status
  ros_message.system_status =
    dds_message.system_status_;

  // member.name base_mode
  ros_message.base_mode =
    dds_message.base_mode_;

  // member.name custom_mode
  ros_message.custom_mode =
    dds_message.custom_mode_;

  // member.name mode
  ros_message.mode = dds_message.mode_;

  // member.name mode_id
  ros_message.mode_id =
    dds_message.mode_id_;

  // member.name capabilities
  ros_message.capabilities =
    dds_message.capabilities_;

  // member.name flight_sw_version
  ros_message.flight_sw_version =
    dds_message.flight_sw_version_;

  // member.name middleware_sw_version
  ros_message.middleware_sw_version =
    dds_message.middleware_sw_version_;

  // member.name os_sw_version
  ros_message.os_sw_version =
    dds_message.os_sw_version_;

  // member.name board_version
  ros_message.board_version =
    dds_message.board_version_;

  // member.name flight_custom_version
  ros_message.flight_custom_version = dds_message.flight_custom_version_;

  // member.name vendor_id
  ros_message.vendor_id =
    dds_message.vendor_id_;

  // member.name product_id
  ros_message.product_id =
    dds_message.product_id_;

  // member.name uid
  ros_message.uid =
    dds_message.uid_;

  return true;
}

bool
to_cdr_stream__VehicleInfo(
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
  const mavros_msgs::msg::VehicleInfo & ros_message =
    *(const mavros_msgs::msg::VehicleInfo *)untyped_ros_message;

  // create a respective connext dds type
  mavros_msgs::msg::dds_::VehicleInfo_ * dds_message = mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::VehicleInfo_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::VehicleInfo_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::VehicleInfo_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__VehicleInfo(
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

  mavros_msgs::msg::dds_::VehicleInfo_ * dds_message =
    mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::VehicleInfo_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  mavros_msgs::msg::VehicleInfo & ros_message =
    *(mavros_msgs::msg::VehicleInfo *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _VehicleInfo__callbacks = {
  "mavros_msgs::msg",
  "VehicleInfo",
  &get_type_code__VehicleInfo,
  nullptr,
  nullptr,
  &to_cdr_stream__VehicleInfo,
  &to_message__VehicleInfo
};

static rosidl_message_type_support_t _VehicleInfo__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_VehicleInfo__callbacks,
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
get_message_type_support_handle<mavros_msgs::msg::VehicleInfo>()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_VehicleInfo__handle;
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
  VehicleInfo)()
{
  return &mavros_msgs::msg::typesupport_connext_cpp::_VehicleInfo__handle;
}

#ifdef __cplusplus
}
#endif
