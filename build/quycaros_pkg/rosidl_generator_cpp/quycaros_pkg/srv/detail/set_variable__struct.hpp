// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from quycaros_pkg:srv/SetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__STRUCT_HPP_
#define QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__quycaros_pkg__srv__SetVariable_Request __attribute__((deprecated))
#else
# define DEPRECATED__quycaros_pkg__srv__SetVariable_Request __declspec(deprecated)
#endif

namespace quycaros_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVariable_Request_
{
  using Type = SetVariable_Request_<ContainerAllocator>;

  explicit SetVariable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->variable_name = "";
      this->value_x = 0l;
      this->value_y = 0l;
    }
  }

  explicit SetVariable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : variable_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->variable_name = "";
      this->value_x = 0l;
      this->value_y = 0l;
    }
  }

  // field types and members
  using _variable_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _variable_name_type variable_name;
  using _value_x_type =
    int32_t;
  _value_x_type value_x;
  using _value_y_type =
    int32_t;
  _value_y_type value_y;

  // setters for named parameter idiom
  Type & set__variable_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->variable_name = _arg;
    return *this;
  }
  Type & set__value_x(
    const int32_t & _arg)
  {
    this->value_x = _arg;
    return *this;
  }
  Type & set__value_y(
    const int32_t & _arg)
  {
    this->value_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quycaros_pkg__srv__SetVariable_Request
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quycaros_pkg__srv__SetVariable_Request
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVariable_Request_ & other) const
  {
    if (this->variable_name != other.variable_name) {
      return false;
    }
    if (this->value_x != other.value_x) {
      return false;
    }
    if (this->value_y != other.value_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVariable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVariable_Request_

// alias to use template instance with default allocator
using SetVariable_Request =
  quycaros_pkg::srv::SetVariable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace quycaros_pkg


#ifndef _WIN32
# define DEPRECATED__quycaros_pkg__srv__SetVariable_Response __attribute__((deprecated))
#else
# define DEPRECATED__quycaros_pkg__srv__SetVariable_Response __declspec(deprecated)
#endif

namespace quycaros_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVariable_Response_
{
  using Type = SetVariable_Response_<ContainerAllocator>;

  explicit SetVariable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetVariable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__quycaros_pkg__srv__SetVariable_Response
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__quycaros_pkg__srv__SetVariable_Response
    std::shared_ptr<quycaros_pkg::srv::SetVariable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVariable_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVariable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVariable_Response_

// alias to use template instance with default allocator
using SetVariable_Response =
  quycaros_pkg::srv::SetVariable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace quycaros_pkg

namespace quycaros_pkg
{

namespace srv
{

struct SetVariable
{
  using Request = quycaros_pkg::srv::SetVariable_Request;
  using Response = quycaros_pkg::srv::SetVariable_Response;
};

}  // namespace srv

}  // namespace quycaros_pkg

#endif  // QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__STRUCT_HPP_
