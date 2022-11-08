// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/VehicleInfo.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/vehicle_info__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/vehicle_info__struct.h"
#include "mavros_msgs/msg/detail/vehicle_info__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/VehicleInfo_Support.h"
#include "mavros_msgs/msg/dds_connext/VehicleInfo_Plugin.h"

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
// Member 'mode'
// Member 'flight_custom_version'
#include "rosidl_runtime_c/string.h"
// Member 'mode'
// Member 'flight_custom_version'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();

static DDS_TypeCode *
_VehicleInfo__get_type_code()
{
  return mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::get_typecode();
}

static bool
_VehicleInfo__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__VehicleInfo * ros_message =
    static_cast<const mavros_msgs__msg__VehicleInfo *>(untyped_ros_message);
  mavros_msgs::msg::dds_::VehicleInfo_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::VehicleInfo_ *>(untyped_dds_message);
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
  // Member name: available_info
  {
    dds_message->available_info_ = ros_message->available_info;
  }
  // Member name: sysid
  {
    dds_message->sysid_ = ros_message->sysid;
  }
  // Member name: compid
  {
    dds_message->compid_ = ros_message->compid;
  }
  // Member name: autopilot
  {
    dds_message->autopilot_ = ros_message->autopilot;
  }
  // Member name: type
  {
    dds_message->type_ = ros_message->type;
  }
  // Member name: system_status
  {
    dds_message->system_status_ = ros_message->system_status;
  }
  // Member name: base_mode
  {
    dds_message->base_mode_ = ros_message->base_mode;
  }
  // Member name: custom_mode
  {
    dds_message->custom_mode_ = ros_message->custom_mode;
  }
  // Member name: mode
  {
    const rosidl_runtime_c__String * str = &ros_message->mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->mode_ = DDS_String_dup(str->data);
  }
  // Member name: mode_id
  {
    dds_message->mode_id_ = ros_message->mode_id;
  }
  // Member name: capabilities
  {
    dds_message->capabilities_ = ros_message->capabilities;
  }
  // Member name: flight_sw_version
  {
    dds_message->flight_sw_version_ = ros_message->flight_sw_version;
  }
  // Member name: middleware_sw_version
  {
    dds_message->middleware_sw_version_ = ros_message->middleware_sw_version;
  }
  // Member name: os_sw_version
  {
    dds_message->os_sw_version_ = ros_message->os_sw_version;
  }
  // Member name: board_version
  {
    dds_message->board_version_ = ros_message->board_version;
  }
  // Member name: flight_custom_version
  {
    const rosidl_runtime_c__String * str = &ros_message->flight_custom_version;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->flight_custom_version_ = DDS_String_dup(str->data);
  }
  // Member name: vendor_id
  {
    dds_message->vendor_id_ = ros_message->vendor_id;
  }
  // Member name: product_id
  {
    dds_message->product_id_ = ros_message->product_id;
  }
  // Member name: uid
  {
    dds_message->uid_ = ros_message->uid;
  }
  return true;
}

static bool
_VehicleInfo__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::VehicleInfo_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::VehicleInfo_ *>(untyped_dds_message);
  mavros_msgs__msg__VehicleInfo * ros_message =
    static_cast<mavros_msgs__msg__VehicleInfo *>(untyped_ros_message);
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
  // Member name: available_info
  {
    ros_message->available_info = dds_message->available_info_;
  }
  // Member name: sysid
  {
    ros_message->sysid = dds_message->sysid_;
  }
  // Member name: compid
  {
    ros_message->compid = dds_message->compid_;
  }
  // Member name: autopilot
  {
    ros_message->autopilot = dds_message->autopilot_;
  }
  // Member name: type
  {
    ros_message->type = dds_message->type_;
  }
  // Member name: system_status
  {
    ros_message->system_status = dds_message->system_status_;
  }
  // Member name: base_mode
  {
    ros_message->base_mode = dds_message->base_mode_;
  }
  // Member name: custom_mode
  {
    ros_message->custom_mode = dds_message->custom_mode_;
  }
  // Member name: mode
  {
    if (!ros_message->mode.data) {
      rosidl_runtime_c__String__init(&ros_message->mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mode,
      dds_message->mode_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mode'\n");
      return false;
    }
  }
  // Member name: mode_id
  {
    ros_message->mode_id = dds_message->mode_id_;
  }
  // Member name: capabilities
  {
    ros_message->capabilities = dds_message->capabilities_;
  }
  // Member name: flight_sw_version
  {
    ros_message->flight_sw_version = dds_message->flight_sw_version_;
  }
  // Member name: middleware_sw_version
  {
    ros_message->middleware_sw_version = dds_message->middleware_sw_version_;
  }
  // Member name: os_sw_version
  {
    ros_message->os_sw_version = dds_message->os_sw_version_;
  }
  // Member name: board_version
  {
    ros_message->board_version = dds_message->board_version_;
  }
  // Member name: flight_custom_version
  {
    if (!ros_message->flight_custom_version.data) {
      rosidl_runtime_c__String__init(&ros_message->flight_custom_version);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->flight_custom_version,
      dds_message->flight_custom_version_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'flight_custom_version'\n");
      return false;
    }
  }
  // Member name: vendor_id
  {
    ros_message->vendor_id = dds_message->vendor_id_;
  }
  // Member name: product_id
  {
    ros_message->product_id = dds_message->product_id_;
  }
  // Member name: uid
  {
    ros_message->uid = dds_message->uid_;
  }
  return true;
}


static bool
_VehicleInfo__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__VehicleInfo * ros_message =
    static_cast<const mavros_msgs__msg__VehicleInfo *>(untyped_ros_message);
  mavros_msgs::msg::dds_::VehicleInfo_ dds_message;
  if (!_VehicleInfo__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::VehicleInfo_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
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
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_VehicleInfo__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
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
  bool success = _VehicleInfo__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::VehicleInfo_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _VehicleInfo__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "VehicleInfo",  // message_name
  _VehicleInfo__get_type_code,  // get_type_code
  _VehicleInfo__convert_ros_to_dds,  // convert_ros_to_dds
  _VehicleInfo__convert_dds_to_ros,  // convert_dds_to_ros
  _VehicleInfo__to_cdr_stream,  // to_cdr_stream
  _VehicleInfo__to_message  // to_message
};

static rosidl_message_type_support_t _VehicleInfo__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_VehicleInfo__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  VehicleInfo)()
{
  return &_VehicleInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
