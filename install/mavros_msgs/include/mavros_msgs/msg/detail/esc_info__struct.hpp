// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:msg/ESCInfo.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__ESC_INFO__STRUCT_HPP_
#define MAVROS_MSGS__MSG__DETAIL__ESC_INFO__STRUCT_HPP_

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
// Member 'esc_info'
#include "mavros_msgs/msg/detail/esc_info_item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mavros_msgs__msg__ESCInfo __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__msg__ESCInfo __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ESCInfo_
{
  using Type = ESCInfo_<ContainerAllocator>;

  explicit ESCInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0;
      this->count = 0;
      this->connection_type = 0;
      this->info = 0;
    }
  }

  explicit ESCInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->counter = 0;
      this->count = 0;
      this->connection_type = 0;
      this->info = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _counter_type =
    uint16_t;
  _counter_type counter;
  using _count_type =
    uint8_t;
  _count_type count;
  using _connection_type_type =
    uint8_t;
  _connection_type_type connection_type;
  using _info_type =
    uint8_t;
  _info_type info;
  using _esc_info_type =
    std::vector<mavros_msgs::msg::ESCInfoItem_<ContainerAllocator>, typename ContainerAllocator::template rebind<mavros_msgs::msg::ESCInfoItem_<ContainerAllocator>>::other>;
  _esc_info_type esc_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__counter(
    const uint16_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__connection_type(
    const uint8_t & _arg)
  {
    this->connection_type = _arg;
    return *this;
  }
  Type & set__info(
    const uint8_t & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__esc_info(
    const std::vector<mavros_msgs::msg::ESCInfoItem_<ContainerAllocator>, typename ContainerAllocator::template rebind<mavros_msgs::msg::ESCInfoItem_<ContainerAllocator>>::other> & _arg)
  {
    this->esc_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mavros_msgs::msg::ESCInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::msg::ESCInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::msg::ESCInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::msg::ESCInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__msg__ESCInfo
    std::shared_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__msg__ESCInfo
    std::shared_ptr<mavros_msgs::msg::ESCInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ESCInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->connection_type != other.connection_type) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->esc_info != other.esc_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ESCInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ESCInfo_

// alias to use template instance with default allocator
using ESCInfo =
  mavros_msgs::msg::ESCInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__MSG__DETAIL__ESC_INFO__STRUCT_HPP_
