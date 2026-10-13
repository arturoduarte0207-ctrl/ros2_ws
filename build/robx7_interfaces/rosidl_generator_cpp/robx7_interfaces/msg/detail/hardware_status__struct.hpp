// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/msg/hardware_status.hpp"


#ifndef ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_HPP_
#define ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_HPP_

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
# define DEPRECATED__robx7_interfaces__msg__HardwareStatus __attribute__((deprecated))
#else
# define DEPRECATED__robx7_interfaces__msg__HardwareStatus __declspec(deprecated)
#endif

namespace robx7_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HardwareStatus_
{
  using Type = HardwareStatus_<ContainerAllocator>;

  explicit HardwareStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperatura = 0ll;
      this->motores_listos = false;
      this->debug_msg = "";
    }
  }

  explicit HardwareStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperatura = 0ll;
      this->motores_listos = false;
      this->debug_msg = "";
    }
  }

  // field types and members
  using _temperatura_type =
    int64_t;
  _temperatura_type temperatura;
  using _motores_listos_type =
    bool;
  _motores_listos_type motores_listos;
  using _debug_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _debug_msg_type debug_msg;

  // setters for named parameter idiom
  Type & set__temperatura(
    const int64_t & _arg)
  {
    this->temperatura = _arg;
    return *this;
  }
  Type & set__motores_listos(
    const bool & _arg)
  {
    this->motores_listos = _arg;
    return *this;
  }
  Type & set__debug_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->debug_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robx7_interfaces__msg__HardwareStatus
    std::shared_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robx7_interfaces__msg__HardwareStatus
    std::shared_ptr<robx7_interfaces::msg::HardwareStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareStatus_ & other) const
  {
    if (this->temperatura != other.temperatura) {
      return false;
    }
    if (this->motores_listos != other.motores_listos) {
      return false;
    }
    if (this->debug_msg != other.debug_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareStatus_

// alias to use template instance with default allocator
using HardwareStatus =
  robx7_interfaces::msg::HardwareStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__STRUCT_HPP_
