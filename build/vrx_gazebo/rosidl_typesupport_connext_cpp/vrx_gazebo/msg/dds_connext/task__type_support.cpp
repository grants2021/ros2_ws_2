// generated from rosidl_typesupport_connext_cpp/resource/idl__dds_connext__type_support.cpp.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#include <limits>
#include <stdexcept>

#include "vrx_gazebo/msg/task__rosidl_typesupport_connext_cpp.hpp"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_connext_cpp/identifier.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_connext_cpp/wstring_conversion.hpp"

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Time_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const builtin_interfaces::msg::Time &,
  builtin_interfaces::msg::dds_::Time_ &);
bool convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Time_ &,
  builtin_interfaces::msg::Time &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace builtin_interfaces
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Time_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const builtin_interfaces::msg::Time &,
  builtin_interfaces::msg::dds_::Time_ &);
bool convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Time_ &,
  builtin_interfaces::msg::Time &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace builtin_interfaces
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Duration_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const builtin_interfaces::msg::Duration &,
  builtin_interfaces::msg::dds_::Duration_ &);
bool convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Duration_ &,
  builtin_interfaces::msg::Duration &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace builtin_interfaces
namespace builtin_interfaces
{
namespace msg
{
namespace dds_
{
class Duration_;
}  // namespace dds_

namespace typesupport_connext_cpp
{

bool convert_ros_message_to_dds(
  const builtin_interfaces::msg::Duration &,
  builtin_interfaces::msg::dds_::Duration_ &);
bool convert_dds_message_to_ros(
  const builtin_interfaces::msg::dds_::Duration_ &,
  builtin_interfaces::msg::Duration &);
}  // namespace typesupport_connext_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace vrx_gazebo
{

namespace msg
{

namespace typesupport_connext_cpp
{


DDS_TypeCode *
get_type_code__Task()
{
  return vrx_gazebo::msg::dds_::Task_TypeSupport::get_typecode();
}

bool
convert_ros_message_to_dds(
  const vrx_gazebo::msg::Task & ros_message,
  vrx_gazebo::msg::dds_::Task_ & dds_message)
{
  // member.name name
  DDS_String_free(dds_message.name_);
  dds_message.name_ =
    DDS_String_dup(ros_message.name.c_str());

  // member.name state
  DDS_String_free(dds_message.state_);
  dds_message.state_ =
    DDS_String_dup(ros_message.state.c_str());

  // member.name ready_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.ready_time,
      dds_message.ready_time_))
  {
    return false;
  }

  // member.name running_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.running_time,
      dds_message.running_time_))
  {
    return false;
  }

  // member.name elapsed_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.elapsed_time,
      dds_message.elapsed_time_))
  {
    return false;
  }

  // member.name remaining_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_ros_message_to_dds(
      ros_message.remaining_time,
      dds_message.remaining_time_))
  {
    return false;
  }

  // member.name timed_out
  dds_message.timed_out_ =
    ros_message.timed_out;

  // member.name num_collisions
  dds_message.num_collisions_ =
    ros_message.num_collisions;

  // member.name score
  dds_message.score_ =
    ros_message.score;

  return true;
}

bool
convert_dds_message_to_ros(
  const vrx_gazebo::msg::dds_::Task_ & dds_message,
  vrx_gazebo::msg::Task & ros_message)
{
  // member.name name
  ros_message.name = dds_message.name_;

  // member.name state
  ros_message.state = dds_message.state_;

  // member.name ready_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.ready_time_,
      ros_message.ready_time))
  {
    return false;
  }

  // member.name running_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.running_time_,
      ros_message.running_time))
  {
    return false;
  }

  // member.name elapsed_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.elapsed_time_,
      ros_message.elapsed_time))
  {
    return false;
  }

  // member.name remaining_time
  if (
    !builtin_interfaces::msg::typesupport_connext_cpp::convert_dds_message_to_ros(
      dds_message.remaining_time_,
      ros_message.remaining_time))
  {
    return false;
  }

  // member.name timed_out
  ros_message.timed_out =
    dds_message.timed_out_ == DDS_BOOLEAN_TRUE;

  // member.name num_collisions
  ros_message.num_collisions =
    dds_message.num_collisions_;

  // member.name score
  ros_message.score =
    dds_message.score_;

  return true;
}

bool
to_cdr_stream__Task(
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
  const vrx_gazebo::msg::Task & ros_message =
    *(const vrx_gazebo::msg::Task *)untyped_ros_message;

  // create a respective connext dds type
  vrx_gazebo::msg::dds_::Task_ * dds_message = vrx_gazebo::msg::dds_::Task_TypeSupport::create_data();
  if (!dds_message) {
    return false;
  }

  // convert ros to dds
  if (!convert_ros_message_to_dds(ros_message, *dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer(
      NULL,
      &expected_length,
      dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer()\n");
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
  if (vrx_gazebo::msg::dds_::Task_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;
  if (vrx_gazebo::msg::dds_::Task_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return true;
}

bool
to_message__Task(
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

  vrx_gazebo::msg::dds_::Task_ * dds_message =
    vrx_gazebo::msg::dds_::Task_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (vrx_gazebo::msg::dds_::Task_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }

  vrx_gazebo::msg::Task & ros_message =
    *(vrx_gazebo::msg::Task *)untyped_ros_message;
  bool success = convert_dds_message_to_ros(*dds_message, ros_message);
  if (vrx_gazebo::msg::dds_::Task_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Task__callbacks = {
  "vrx_gazebo::msg",
  "Task",
  &get_type_code__Task,
  nullptr,
  nullptr,
  &to_cdr_stream__Task,
  &to_message__Task
};

static rosidl_message_type_support_t _Task__handle = {
  rosidl_typesupport_connext_cpp::typesupport_identifier,
  &_Task__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace vrx_gazebo


namespace rosidl_typesupport_connext_cpp
{

template<>
ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_vrx_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<vrx_gazebo::msg::Task>()
{
  return &vrx_gazebo::msg::typesupport_connext_cpp::_Task__handle;
}

}  // namespace rosidl_typesupport_connext_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  vrx_gazebo, msg,
  Task)()
{
  return &vrx_gazebo::msg::typesupport_connext_cpp::_Task__handle;
}

#ifdef __cplusplus
}
#endif
