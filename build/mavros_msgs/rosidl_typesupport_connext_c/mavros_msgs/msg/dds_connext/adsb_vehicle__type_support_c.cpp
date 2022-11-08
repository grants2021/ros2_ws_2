// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/ADSBVehicle.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/adsb_vehicle__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/adsb_vehicle__struct.h"
#include "mavros_msgs/msg/detail/adsb_vehicle__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/ADSBVehicle_Support.h"
#include "mavros_msgs/msg/dds_connext/ADSBVehicle_Plugin.h"

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
// Member 'callsign'
#include "rosidl_runtime_c/string.h"
// Member 'callsign'
#include "rosidl_runtime_c/string_functions.h"
// Member 'tslc'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'tslc'
#include "builtin_interfaces/msg/detail/duration__functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'tslc'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  builtin_interfaces, msg,
  Duration)();

static DDS_TypeCode *
_ADSBVehicle__get_type_code()
{
  return mavros_msgs::msg::dds_::ADSBVehicle_TypeSupport::get_typecode();
}

static bool
_ADSBVehicle__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__ADSBVehicle * ros_message =
    static_cast<const mavros_msgs__msg__ADSBVehicle *>(untyped_ros_message);
  mavros_msgs::msg::dds_::ADSBVehicle_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::ADSBVehicle_ *>(untyped_dds_message);
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
  // Member name: icao_address
  {
    dds_message->icao_address_ = ros_message->icao_address;
  }
  // Member name: callsign
  {
    const rosidl_runtime_c__String * str = &ros_message->callsign;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->callsign_ = DDS_String_dup(str->data);
  }
  // Member name: latitude
  {
    dds_message->latitude_ = ros_message->latitude;
  }
  // Member name: longitude
  {
    dds_message->longitude_ = ros_message->longitude;
  }
  // Member name: altitude
  {
    dds_message->altitude_ = ros_message->altitude;
  }
  // Member name: heading
  {
    dds_message->heading_ = ros_message->heading;
  }
  // Member name: hor_velocity
  {
    dds_message->hor_velocity_ = ros_message->hor_velocity;
  }
  // Member name: ver_velocity
  {
    dds_message->ver_velocity_ = ros_message->ver_velocity;
  }
  // Member name: altitude_type
  {
    dds_message->altitude_type_ = ros_message->altitude_type;
  }
  // Member name: emitter_type
  {
    dds_message->emitter_type_ = ros_message->emitter_type;
  }
  // Member name: tslc
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Duration__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!builtin_interfaces__msg__Duration__callbacks->convert_ros_to_dds(
        &ros_message->tslc, &dds_message->tslc_))
    {
      return false;
    }
  }
  // Member name: flags
  {
    dds_message->flags_ = ros_message->flags;
  }
  // Member name: squawk
  {
    dds_message->squawk_ = ros_message->squawk;
  }
  return true;
}

static bool
_ADSBVehicle__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::ADSBVehicle_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::ADSBVehicle_ *>(untyped_dds_message);
  mavros_msgs__msg__ADSBVehicle * ros_message =
    static_cast<mavros_msgs__msg__ADSBVehicle *>(untyped_ros_message);
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
  // Member name: icao_address
  {
    ros_message->icao_address = dds_message->icao_address_;
  }
  // Member name: callsign
  {
    if (!ros_message->callsign.data) {
      rosidl_runtime_c__String__init(&ros_message->callsign);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->callsign,
      dds_message->callsign_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'callsign'\n");
      return false;
    }
  }
  // Member name: latitude
  {
    ros_message->latitude = dds_message->latitude_;
  }
  // Member name: longitude
  {
    ros_message->longitude = dds_message->longitude_;
  }
  // Member name: altitude
  {
    ros_message->altitude = dds_message->altitude_;
  }
  // Member name: heading
  {
    ros_message->heading = dds_message->heading_;
  }
  // Member name: hor_velocity
  {
    ros_message->hor_velocity = dds_message->hor_velocity_;
  }
  // Member name: ver_velocity
  {
    ros_message->ver_velocity = dds_message->ver_velocity_;
  }
  // Member name: altitude_type
  {
    ros_message->altitude_type = dds_message->altitude_type_;
  }
  // Member name: emitter_type
  {
    ros_message->emitter_type = dds_message->emitter_type_;
  }
  // Member name: tslc
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      builtin_interfaces, msg,
      Duration)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->tslc_, &ros_message->tslc);
  }
  // Member name: flags
  {
    ros_message->flags = dds_message->flags_;
  }
  // Member name: squawk
  {
    ros_message->squawk = dds_message->squawk_;
  }
  return true;
}


static bool
_ADSBVehicle__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__ADSBVehicle * ros_message =
    static_cast<const mavros_msgs__msg__ADSBVehicle *>(untyped_ros_message);
  mavros_msgs::msg::dds_::ADSBVehicle_ dds_message;
  if (!_ADSBVehicle__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::ADSBVehicle_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::ADSBVehicle_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::ADSBVehicle_Plugin_serialize_to_cdr_buffer(
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
_ADSBVehicle__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::ADSBVehicle_ * dds_message =
    mavros_msgs::msg::dds_::ADSBVehicle_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::ADSBVehicle_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _ADSBVehicle__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::ADSBVehicle_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _ADSBVehicle__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "ADSBVehicle",  // message_name
  _ADSBVehicle__get_type_code,  // get_type_code
  _ADSBVehicle__convert_ros_to_dds,  // convert_ros_to_dds
  _ADSBVehicle__convert_dds_to_ros,  // convert_dds_to_ros
  _ADSBVehicle__to_cdr_stream,  // to_cdr_stream
  _ADSBVehicle__to_message  // to_message
};

static rosidl_message_type_support_t _ADSBVehicle__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_ADSBVehicle__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  ADSBVehicle)()
{
  return &_ADSBVehicle__type_support;
}

#if defined(__cplusplus)
}
#endif
