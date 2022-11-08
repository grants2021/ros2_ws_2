// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__TRAITS_HPP_
#define VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__TRAITS_HPP_

#include "vrx_gazebo/srv/detail/color_sequence__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vrx_gazebo::srv::ColorSequence_Request>()
{
  return "vrx_gazebo::srv::ColorSequence_Request";
}

template<>
inline const char * name<vrx_gazebo::srv::ColorSequence_Request>()
{
  return "vrx_gazebo/srv/ColorSequence_Request";
}

template<>
struct has_fixed_size<vrx_gazebo::srv::ColorSequence_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vrx_gazebo::srv::ColorSequence_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vrx_gazebo::srv::ColorSequence_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vrx_gazebo::srv::ColorSequence_Response>()
{
  return "vrx_gazebo::srv::ColorSequence_Response";
}

template<>
inline const char * name<vrx_gazebo::srv::ColorSequence_Response>()
{
  return "vrx_gazebo/srv/ColorSequence_Response";
}

template<>
struct has_fixed_size<vrx_gazebo::srv::ColorSequence_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vrx_gazebo::srv::ColorSequence_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vrx_gazebo::srv::ColorSequence_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vrx_gazebo::srv::ColorSequence>()
{
  return "vrx_gazebo::srv::ColorSequence";
}

template<>
inline const char * name<vrx_gazebo::srv::ColorSequence>()
{
  return "vrx_gazebo/srv/ColorSequence";
}

template<>
struct has_fixed_size<vrx_gazebo::srv::ColorSequence>
  : std::integral_constant<
    bool,
    has_fixed_size<vrx_gazebo::srv::ColorSequence_Request>::value &&
    has_fixed_size<vrx_gazebo::srv::ColorSequence_Response>::value
  >
{
};

template<>
struct has_bounded_size<vrx_gazebo::srv::ColorSequence>
  : std::integral_constant<
    bool,
    has_bounded_size<vrx_gazebo::srv::ColorSequence_Request>::value &&
    has_bounded_size<vrx_gazebo::srv::ColorSequence_Response>::value
  >
{
};

template<>
struct is_service<vrx_gazebo::srv::ColorSequence>
  : std::true_type
{
};

template<>
struct is_service_request<vrx_gazebo::srv::ColorSequence_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vrx_gazebo::srv::ColorSequence_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__TRAITS_HPP_
