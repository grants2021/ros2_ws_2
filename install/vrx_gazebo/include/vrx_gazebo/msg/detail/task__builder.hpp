// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__TASK__BUILDER_HPP_
#define VRX_GAZEBO__MSG__DETAIL__TASK__BUILDER_HPP_

#include "vrx_gazebo/msg/detail/task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vrx_gazebo
{

namespace msg
{

namespace builder
{

class Init_Task_score
{
public:
  explicit Init_Task_score(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  ::vrx_gazebo::msg::Task score(::vrx_gazebo::msg::Task::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_num_collisions
{
public:
  explicit Init_Task_num_collisions(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_score num_collisions(::vrx_gazebo::msg::Task::_num_collisions_type arg)
  {
    msg_.num_collisions = std::move(arg);
    return Init_Task_score(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_timed_out
{
public:
  explicit Init_Task_timed_out(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_num_collisions timed_out(::vrx_gazebo::msg::Task::_timed_out_type arg)
  {
    msg_.timed_out = std::move(arg);
    return Init_Task_num_collisions(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_remaining_time
{
public:
  explicit Init_Task_remaining_time(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_timed_out remaining_time(::vrx_gazebo::msg::Task::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_Task_timed_out(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_elapsed_time
{
public:
  explicit Init_Task_elapsed_time(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_remaining_time elapsed_time(::vrx_gazebo::msg::Task::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return Init_Task_remaining_time(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_running_time
{
public:
  explicit Init_Task_running_time(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_elapsed_time running_time(::vrx_gazebo::msg::Task::_running_time_type arg)
  {
    msg_.running_time = std::move(arg);
    return Init_Task_elapsed_time(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_ready_time
{
public:
  explicit Init_Task_ready_time(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_running_time ready_time(::vrx_gazebo::msg::Task::_ready_time_type arg)
  {
    msg_.ready_time = std::move(arg);
    return Init_Task_running_time(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_state
{
public:
  explicit Init_Task_state(::vrx_gazebo::msg::Task & msg)
  : msg_(msg)
  {}
  Init_Task_ready_time state(::vrx_gazebo::msg::Task::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Task_ready_time(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

class Init_Task_name
{
public:
  Init_Task_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Task_state name(::vrx_gazebo::msg::Task::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Task_state(msg_);
  }

private:
  ::vrx_gazebo::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vrx_gazebo::msg::Task>()
{
  return vrx_gazebo::msg::builder::Init_Task_name();
}

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__MSG__DETAIL__TASK__BUILDER_HPP_
