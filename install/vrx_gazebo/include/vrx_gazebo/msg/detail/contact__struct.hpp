// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_HPP_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vrx_gazebo__msg__Contact __attribute__((deprecated))
#else
# define DEPRECATED__vrx_gazebo__msg__Contact __declspec(deprecated)
#endif

namespace vrx_gazebo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Contact_
{
  using Type = Contact_<ContainerAllocator>;

  explicit Contact_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collision1 = "";
      this->collision2 = "";
    }
  }

  explicit Contact_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    collision1(_alloc),
    collision2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->collision1 = "";
      this->collision2 = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _collision1_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _collision1_type collision1;
  using _collision2_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _collision2_type collision2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__collision1(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->collision1 = _arg;
    return *this;
  }
  Type & set__collision2(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->collision2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vrx_gazebo::msg::Contact_<ContainerAllocator> *;
  using ConstRawPtr =
    const vrx_gazebo::msg::Contact_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::msg::Contact_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::msg::Contact_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vrx_gazebo__msg__Contact
    std::shared_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vrx_gazebo__msg__Contact
    std::shared_ptr<vrx_gazebo::msg::Contact_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Contact_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->collision1 != other.collision1) {
      return false;
    }
    if (this->collision2 != other.collision2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Contact_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Contact_

// alias to use template instance with default allocator
using Contact =
  vrx_gazebo::msg::Contact_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__STRUCT_HPP_
