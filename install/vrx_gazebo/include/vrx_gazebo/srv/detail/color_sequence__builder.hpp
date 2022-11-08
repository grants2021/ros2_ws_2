// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__BUILDER_HPP_
#define VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__BUILDER_HPP_

#include "vrx_gazebo/srv/detail/color_sequence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vrx_gazebo
{

namespace srv
{

namespace builder
{

class Init_ColorSequence_Request_color3
{
public:
  explicit Init_ColorSequence_Request_color3(::vrx_gazebo::srv::ColorSequence_Request & msg)
  : msg_(msg)
  {}
  ::vrx_gazebo::srv::ColorSequence_Request color3(::vrx_gazebo::srv::ColorSequence_Request::_color3_type arg)
  {
    msg_.color3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vrx_gazebo::srv::ColorSequence_Request msg_;
};

class Init_ColorSequence_Request_color2
{
public:
  explicit Init_ColorSequence_Request_color2(::vrx_gazebo::srv::ColorSequence_Request & msg)
  : msg_(msg)
  {}
  Init_ColorSequence_Request_color3 color2(::vrx_gazebo::srv::ColorSequence_Request::_color2_type arg)
  {
    msg_.color2 = std::move(arg);
    return Init_ColorSequence_Request_color3(msg_);
  }

private:
  ::vrx_gazebo::srv::ColorSequence_Request msg_;
};

class Init_ColorSequence_Request_color1
{
public:
  Init_ColorSequence_Request_color1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorSequence_Request_color2 color1(::vrx_gazebo::srv::ColorSequence_Request::_color1_type arg)
  {
    msg_.color1 = std::move(arg);
    return Init_ColorSequence_Request_color2(msg_);
  }

private:
  ::vrx_gazebo::srv::ColorSequence_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vrx_gazebo::srv::ColorSequence_Request>()
{
  return vrx_gazebo::srv::builder::Init_ColorSequence_Request_color1();
}

}  // namespace vrx_gazebo


namespace vrx_gazebo
{

namespace srv
{

namespace builder
{

class Init_ColorSequence_Response_success
{
public:
  Init_ColorSequence_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vrx_gazebo::srv::ColorSequence_Response success(::vrx_gazebo::srv::ColorSequence_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vrx_gazebo::srv::ColorSequence_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vrx_gazebo::srv::ColorSequence_Response>()
{
  return vrx_gazebo::srv::builder::Init_ColorSequence_Response_success();
}

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__BUILDER_HPP_
