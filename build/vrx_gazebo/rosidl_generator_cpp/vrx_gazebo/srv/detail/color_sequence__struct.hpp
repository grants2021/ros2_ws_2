// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_HPP_
#define VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__vrx_gazebo__srv__ColorSequence_Request __attribute__((deprecated))
#else
# define DEPRECATED__vrx_gazebo__srv__ColorSequence_Request __declspec(deprecated)
#endif

namespace vrx_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColorSequence_Request_
{
  using Type = ColorSequence_Request_<ContainerAllocator>;

  explicit ColorSequence_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color1 = "";
      this->color2 = "";
      this->color3 = "";
    }
  }

  explicit ColorSequence_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color1(_alloc),
    color2(_alloc),
    color3(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color1 = "";
      this->color2 = "";
      this->color3 = "";
    }
  }

  // field types and members
  using _color1_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _color1_type color1;
  using _color2_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _color2_type color2;
  using _color3_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _color3_type color3;

  // setters for named parameter idiom
  Type & set__color1(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->color1 = _arg;
    return *this;
  }
  Type & set__color2(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->color2 = _arg;
    return *this;
  }
  Type & set__color3(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->color3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vrx_gazebo__srv__ColorSequence_Request
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vrx_gazebo__srv__ColorSequence_Request
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorSequence_Request_ & other) const
  {
    if (this->color1 != other.color1) {
      return false;
    }
    if (this->color2 != other.color2) {
      return false;
    }
    if (this->color3 != other.color3) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorSequence_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorSequence_Request_

// alias to use template instance with default allocator
using ColorSequence_Request =
  vrx_gazebo::srv::ColorSequence_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vrx_gazebo


#ifndef _WIN32
# define DEPRECATED__vrx_gazebo__srv__ColorSequence_Response __attribute__((deprecated))
#else
# define DEPRECATED__vrx_gazebo__srv__ColorSequence_Response __declspec(deprecated)
#endif

namespace vrx_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ColorSequence_Response_
{
  using Type = ColorSequence_Response_<ContainerAllocator>;

  explicit ColorSequence_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ColorSequence_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vrx_gazebo__srv__ColorSequence_Response
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vrx_gazebo__srv__ColorSequence_Response
    std::shared_ptr<vrx_gazebo::srv::ColorSequence_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorSequence_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorSequence_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorSequence_Response_

// alias to use template instance with default allocator
using ColorSequence_Response =
  vrx_gazebo::srv::ColorSequence_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vrx_gazebo

namespace vrx_gazebo
{

namespace srv
{

struct ColorSequence
{
  using Request = vrx_gazebo::srv::ColorSequence_Request;
  using Response = vrx_gazebo::srv::ColorSequence_Response;
};

}  // namespace srv

}  // namespace vrx_gazebo

#endif  // VRX_GAZEBO__SRV__DETAIL__COLOR_SEQUENCE__STRUCT_HPP_
