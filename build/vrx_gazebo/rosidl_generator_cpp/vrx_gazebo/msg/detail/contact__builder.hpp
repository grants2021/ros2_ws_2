// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__BUILDER_HPP_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__BUILDER_HPP_

#include "vrx_gazebo/msg/detail/contact__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vrx_gazebo
{

namespace msg
{

namespace builder
{

class Init_Contact_collision2
{
public:
  explicit Init_Contact_collision2(::vrx_gazebo::msg::Contact & msg)
  : msg_(msg)
  {}
  ::vrx_gazebo::msg::Contact collision2(::vrx_gazebo::msg::Contact::_collision2_type arg)
  {
    msg_.collision2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vrx_gazebo::msg::Contact msg_;
};

class Init_Contact_collision1
{
public:
  explicit Init_Contact_collision1(::vrx_gazebo::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_collision2 collision1(::vrx_gazebo::msg::Contact::_collision1_type arg)
  {
    msg_.collision1 = std::move(arg);
    return Init_Contact_collision2(msg_);
  }

private:
  ::vrx_gazebo::msg::Contact msg_;
};

class Init_Contact_header
{
public:
  Init_Contact_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Contact_collision1 header(::vrx_gazebo::msg::Contact::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Contact_collision1(msg_);
  }

private:
  ::vrx_gazebo::msg::Contact msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vrx_gazebo::msg::Contact>()
{
  return vrx_gazebo::msg::builder::Init_Contact_header();
}

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__BUILDER_HPP_
