// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vrx_gazebo:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_HPP_
#define VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'ready_time'
// Member 'running_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'elapsed_time'
// Member 'remaining_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vrx_gazebo__msg__Task __attribute__((deprecated))
#else
# define DEPRECATED__vrx_gazebo__msg__Task __declspec(deprecated)
#endif

namespace vrx_gazebo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Task_
{
  using Type = Task_<ContainerAllocator>;

  explicit Task_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ready_time(_init),
    running_time(_init),
    elapsed_time(_init),
    remaining_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->state = "";
      this->timed_out = false;
      this->num_collisions = 0ul;
      this->score = 0.0;
    }
  }

  explicit Task_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    state(_alloc),
    ready_time(_alloc, _init),
    running_time(_alloc, _init),
    elapsed_time(_alloc, _init),
    remaining_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->state = "";
      this->timed_out = false;
      this->num_collisions = 0ul;
      this->score = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_type state;
  using _ready_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _ready_time_type ready_time;
  using _running_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _running_time_type running_time;
  using _elapsed_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _elapsed_time_type elapsed_time;
  using _remaining_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _remaining_time_type remaining_time;
  using _timed_out_type =
    bool;
  _timed_out_type timed_out;
  using _num_collisions_type =
    uint32_t;
  _num_collisions_type num_collisions;
  using _score_type =
    double;
  _score_type score;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__ready_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->ready_time = _arg;
    return *this;
  }
  Type & set__running_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->running_time = _arg;
    return *this;
  }
  Type & set__elapsed_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__timed_out(
    const bool & _arg)
  {
    this->timed_out = _arg;
    return *this;
  }
  Type & set__num_collisions(
    const uint32_t & _arg)
  {
    this->num_collisions = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vrx_gazebo::msg::Task_<ContainerAllocator> *;
  using ConstRawPtr =
    const vrx_gazebo::msg::Task_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vrx_gazebo::msg::Task_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vrx_gazebo::msg::Task_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::msg::Task_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::msg::Task_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::msg::Task_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::msg::Task_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vrx_gazebo::msg::Task_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vrx_gazebo::msg::Task_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vrx_gazebo__msg__Task
    std::shared_ptr<vrx_gazebo::msg::Task_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vrx_gazebo__msg__Task
    std::shared_ptr<vrx_gazebo::msg::Task_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Task_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->ready_time != other.ready_time) {
      return false;
    }
    if (this->running_time != other.running_time) {
      return false;
    }
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->timed_out != other.timed_out) {
      return false;
    }
    if (this->num_collisions != other.num_collisions) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const Task_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Task_

// alias to use template instance with default allocator
using Task =
  vrx_gazebo::msg::Task_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__MSG__DETAIL__TASK__STRUCT_HPP_
