// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from mavros_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "mavros_msgs/msg/onboard_computer_status__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "mavros_msgs/msg/detail/onboard_computer_status__struct.h"
#include "mavros_msgs/msg/detail/onboard_computer_status__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "mavros_msgs/msg/dds_connext/OnboardComputerStatus_Support.h"
#include "mavros_msgs/msg/dds_connext/OnboardComputerStatus_Plugin.h"

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

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();

static DDS_TypeCode *
_OnboardComputerStatus__get_type_code()
{
  return mavros_msgs::msg::dds_::OnboardComputerStatus_TypeSupport::get_typecode();
}

static bool
_OnboardComputerStatus__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs__msg__OnboardComputerStatus * ros_message =
    static_cast<const mavros_msgs__msg__OnboardComputerStatus *>(untyped_ros_message);
  mavros_msgs::msg::dds_::OnboardComputerStatus_ * dds_message =
    static_cast<mavros_msgs::msg::dds_::OnboardComputerStatus_ *>(untyped_dds_message);
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
  // Member name: component
  {
    dds_message->component_ = ros_message->component;
  }
  // Member name: uptime
  {
    dds_message->uptime_ = ros_message->uptime;
  }
  // Member name: type
  {
    dds_message->type_ = ros_message->type;
  }
  // Member name: cpu_cores
  {
    size_t size = 8;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->cpu_cores[i];
      dds_message->cpu_cores_[i] = ros_i;
    }
  }
  // Member name: cpu_combined
  {
    size_t size = 10;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->cpu_combined[i];
      dds_message->cpu_combined_[i] = ros_i;
    }
  }
  // Member name: gpu_cores
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->gpu_cores[i];
      dds_message->gpu_cores_[i] = ros_i;
    }
  }
  // Member name: gpu_combined
  {
    size_t size = 10;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->gpu_combined[i];
      dds_message->gpu_combined_[i] = ros_i;
    }
  }
  // Member name: temperature_board
  {
    dds_message->temperature_board_ = ros_message->temperature_board;
  }
  // Member name: temperature_core
  {
    size_t size = 8;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->temperature_core[i];
      dds_message->temperature_core_[i] = ros_i;
    }
  }
  // Member name: fan_speed
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->fan_speed[i];
      dds_message->fan_speed_[i] = ros_i;
    }
  }
  // Member name: ram_usage
  {
    dds_message->ram_usage_ = ros_message->ram_usage;
  }
  // Member name: ram_total
  {
    dds_message->ram_total_ = ros_message->ram_total;
  }
  // Member name: storage_type
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->storage_type[i];
      dds_message->storage_type_[i] = ros_i;
    }
  }
  // Member name: storage_usage
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->storage_usage[i];
      dds_message->storage_usage_[i] = ros_i;
    }
  }
  // Member name: storage_total
  {
    size_t size = 4;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->storage_total[i];
      dds_message->storage_total_[i] = ros_i;
    }
  }
  // Member name: link_type
  {
    size_t size = 6;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->link_type[i];
      dds_message->link_type_[i] = ros_i;
    }
  }
  // Member name: link_tx_rate
  {
    size_t size = 6;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->link_tx_rate[i];
      dds_message->link_tx_rate_[i] = ros_i;
    }
  }
  // Member name: link_rx_rate
  {
    size_t size = 6;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->link_rx_rate[i];
      dds_message->link_rx_rate_[i] = ros_i;
    }
  }
  // Member name: link_tx_max
  {
    size_t size = 6;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->link_tx_max[i];
      dds_message->link_tx_max_[i] = ros_i;
    }
  }
  // Member name: link_rx_max
  {
    size_t size = 6;
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->link_rx_max[i];
      dds_message->link_rx_max_[i] = ros_i;
    }
  }
  return true;
}

static bool
_OnboardComputerStatus__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const mavros_msgs::msg::dds_::OnboardComputerStatus_ * dds_message =
    static_cast<const mavros_msgs::msg::dds_::OnboardComputerStatus_ *>(untyped_dds_message);
  mavros_msgs__msg__OnboardComputerStatus * ros_message =
    static_cast<mavros_msgs__msg__OnboardComputerStatus *>(untyped_ros_message);
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
  // Member name: component
  {
    ros_message->component = dds_message->component_;
  }
  // Member name: uptime
  {
    ros_message->uptime = dds_message->uptime_;
  }
  // Member name: type
  {
    ros_message->type = dds_message->type_;
  }
  // Member name: cpu_cores
  {
    DDS_Long size = 8;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->cpu_cores[i];
      ros_i = dds_message->cpu_cores_[i];
    }
  }
  // Member name: cpu_combined
  {
    DDS_Long size = 10;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->cpu_combined[i];
      ros_i = dds_message->cpu_combined_[i];
    }
  }
  // Member name: gpu_cores
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->gpu_cores[i];
      ros_i = dds_message->gpu_cores_[i];
    }
  }
  // Member name: gpu_combined
  {
    DDS_Long size = 10;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->gpu_combined[i];
      ros_i = dds_message->gpu_combined_[i];
    }
  }
  // Member name: temperature_board
  {
    ros_message->temperature_board = dds_message->temperature_board_;
  }
  // Member name: temperature_core
  {
    DDS_Long size = 8;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->temperature_core[i];
      ros_i = dds_message->temperature_core_[i];
    }
  }
  // Member name: fan_speed
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->fan_speed[i];
      ros_i = dds_message->fan_speed_[i];
    }
  }
  // Member name: ram_usage
  {
    ros_message->ram_usage = dds_message->ram_usage_;
  }
  // Member name: ram_total
  {
    ros_message->ram_total = dds_message->ram_total_;
  }
  // Member name: storage_type
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->storage_type[i];
      ros_i = dds_message->storage_type_[i];
    }
  }
  // Member name: storage_usage
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->storage_usage[i];
      ros_i = dds_message->storage_usage_[i];
    }
  }
  // Member name: storage_total
  {
    DDS_Long size = 4;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->storage_total[i];
      ros_i = dds_message->storage_total_[i];
    }
  }
  // Member name: link_type
  {
    DDS_Long size = 6;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->link_type[i];
      ros_i = dds_message->link_type_[i];
    }
  }
  // Member name: link_tx_rate
  {
    DDS_Long size = 6;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->link_tx_rate[i];
      ros_i = dds_message->link_tx_rate_[i];
    }
  }
  // Member name: link_rx_rate
  {
    DDS_Long size = 6;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->link_rx_rate[i];
      ros_i = dds_message->link_rx_rate_[i];
    }
  }
  // Member name: link_tx_max
  {
    DDS_Long size = 6;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->link_tx_max[i];
      ros_i = dds_message->link_tx_max_[i];
    }
  }
  // Member name: link_rx_max
  {
    DDS_Long size = 6;
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->link_rx_max[i];
      ros_i = dds_message->link_rx_max_[i];
    }
  }
  return true;
}


static bool
_OnboardComputerStatus__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const mavros_msgs__msg__OnboardComputerStatus * ros_message =
    static_cast<const mavros_msgs__msg__OnboardComputerStatus *>(untyped_ros_message);
  mavros_msgs::msg::dds_::OnboardComputerStatus_ dds_message;
  if (!_OnboardComputerStatus__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (mavros_msgs::msg::dds_::OnboardComputerStatus_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call mavros_msgs::msg::dds_::OnboardComputerStatus_Plugin_serialize_to_cdr_buffer()\n");
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
  if (mavros_msgs::msg::dds_::OnboardComputerStatus_Plugin_serialize_to_cdr_buffer(
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
_OnboardComputerStatus__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  mavros_msgs::msg::dds_::OnboardComputerStatus_ * dds_message =
    mavros_msgs::msg::dds_::OnboardComputerStatus_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (mavros_msgs::msg::dds_::OnboardComputerStatus_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _OnboardComputerStatus__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (mavros_msgs::msg::dds_::OnboardComputerStatus_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _OnboardComputerStatus__callbacks = {
  "mavros_msgs::msg",  // message_namespace
  "OnboardComputerStatus",  // message_name
  _OnboardComputerStatus__get_type_code,  // get_type_code
  _OnboardComputerStatus__convert_ros_to_dds,  // convert_ros_to_dds
  _OnboardComputerStatus__convert_dds_to_ros,  // convert_dds_to_ros
  _OnboardComputerStatus__to_cdr_stream,  // to_cdr_stream
  _OnboardComputerStatus__to_message  // to_message
};

static rosidl_message_type_support_t _OnboardComputerStatus__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_OnboardComputerStatus__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  mavros_msgs, msg,
  OnboardComputerStatus)()
{
  return &_OnboardComputerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
