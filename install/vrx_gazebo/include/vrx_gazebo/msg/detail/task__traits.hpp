// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__TASK__TRAITS_HPP_
#define VRX_GAZEBO__MSG__DETAIL__TASK__TRAITS_HPP_

#include "vrx_gazebo/msg/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ready_time'
// Member 'running_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'elapsed_time'
// Member 'remaining_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vrx_gazebo::msg::Task>()
{
  return "vrx_gazebo::msg::Task";
}

template<>
inline const char * name<vrx_gazebo::msg::Task>()
{
  return "vrx_gazebo/msg/Task";
}

template<>
struct has_fixed_size<vrx_gazebo::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vrx_gazebo::msg::Task>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vrx_gazebo::msg::Task>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VRX_GAZEBO__MSG__DETAIL__TASK__TRAITS_HPP_
