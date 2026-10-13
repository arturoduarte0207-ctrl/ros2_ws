// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robx7_interfaces:msg/CustomString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/custom_string.hpp"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_buffer/buffer.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robx7_interfaces__msg__CustomString __attribute__((deprecated))
#else
# define DEPRECATED__robx7_interfaces__msg__CustomString __declspec(deprecated)
#endif

namespace robx7_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomString_
{
  using Type = CustomString_<ContainerAllocator>;

  explicit CustomString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  explicit CustomString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robx7_interfaces::msg::CustomString_<ContainerAllocator> *;
  using ConstRawPtr =
    const robx7_interfaces::msg::CustomString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::msg::CustomString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::msg::CustomString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robx7_interfaces__msg__CustomString
    std::shared_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robx7_interfaces__msg__CustomString
    std::shared_ptr<robx7_interfaces::msg::CustomString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomString_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomString_

// alias to use template instance with default allocator
using CustomString =
  robx7_interfaces::msg::CustomString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__MSG__DETAIL__CUSTOM_STRING__STRUCT_HPP_
