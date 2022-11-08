// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vrx_gazebo/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vrx_gazebo/msg/detail/contact__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vrx_gazebo
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vrx_gazebo
cdr_serialize(
  const vrx_gazebo::msg::Contact & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vrx_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vrx_gazebo::msg::Contact & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vrx_gazebo
get_serialized_size(
  const vrx_gazebo::msg::Contact & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vrx_gazebo
max_serialized_size_Contact(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vrx_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vrx_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vrx_gazebo, msg, Contact)();

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
