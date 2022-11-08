// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__TRAITS_HPP_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__TRAITS_HPP_

#include "vrx_gazebo/msg/detail/contact__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vrx_gazebo::msg::Contact>()
{
  return "vrx_gazebo::msg::Contact";
}

template<>
inline const char * name<vrx_gazebo::msg::Contact>()
{
  return "vrx_gazebo/msg/Contact";
}

template<>
struct has_fixed_size<vrx_gazebo::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vrx_gazebo::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vrx_gazebo::msg::Contact>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__TRAITS_HPP_
