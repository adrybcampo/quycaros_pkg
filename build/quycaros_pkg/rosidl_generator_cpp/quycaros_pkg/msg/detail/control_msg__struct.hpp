// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_HPP_
#define QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__quycaros_pkg__msg__ControlMsg __attribute__((deprecated))
#else
# define DEPRECATED__quycaros_pkg__msg__ControlMsg __declspec(deprecated)
#endif

namespace quycaros_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlMsg_
{
  using Type = ControlMsg_<ContainerAllocator>;

  explicit ControlMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->mov_x = 0l;
      this->mov_y = 0l;
      this->emo_x = 0l;
      this->emo_y = 0l;
      this->cam = false;
    }
  }

  explicit ControlMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0l;
      this->mov_x = 0l;
      this->mov_y = 0l;
      this->emo_x = 0l;
      this->emo_y = 0l;
      this->cam = false;
    }
  }

  // field types and members
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _mov_x_type =
    int32_t;
  _mov_x_type mov_x;
  using _mov_y_type =
    int32_t;
  _mov_y_type mov_y;
  using _emo_x_type =
    int32_t;
  _emo_x_type emo_x;
  using _emo_y_type =
    int32_t;
  _emo_y_type emo_y;
  using _cam_type =
    bool;
  _cam_type cam;

  // setters for named parameter idiom
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__mov_x(
    const int32_t & _arg)
  {
    this->mov_x = _arg;
    return *this;
  }
  Type & set__mov_y(
    const int32_t & _arg)
  {
    this->mov_y = _arg;
    return *this;
  }
  Type & set__emo_x(
    const int32_t & _arg)
  {
    this->emo_x = _arg;
    return *this;
  }
  Type & set__emo_y(
    const int32_t & _arg)
  {
    this->emo_y = _arg;
    return *this;
  }
  Type & set__cam(
    const bool & _arg)
  {
    this->cam = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quycaros_pkg::msg::ControlMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const quycaros_pkg::msg::ControlMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::msg::ControlMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::msg::ControlMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quycaros_pkg__msg__ControlMsg
    std::shared_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quycaros_pkg__msg__ControlMsg
    std::shared_ptr<quycaros_pkg::msg::ControlMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMsg_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->mov_x != other.mov_x) {
      return false;
    }
    if (this->mov_y != other.mov_y) {
      return false;
    }
    if (this->emo_x != other.emo_x) {
      return false;
    }
    if (this->emo_y != other.emo_y) {
      return false;
    }
    if (this->cam != other.cam) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMsg_

// alias to use template instance with default allocator
using ControlMsg =
  quycaros_pkg::msg::ControlMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace quycaros_pkg

#endif  // QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_HPP_
