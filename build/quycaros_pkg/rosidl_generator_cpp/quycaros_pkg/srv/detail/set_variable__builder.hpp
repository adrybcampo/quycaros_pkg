// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quycaros_pkg:srv/SetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_
#define QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quycaros_pkg/srv/detail/set_variable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quycaros_pkg
{

namespace srv
{

namespace builder
{

class Init_SetVariable_Request_value_y
{
public:
  explicit Init_SetVariable_Request_value_y(::quycaros_pkg::srv::SetVariable_Request & msg)
  : msg_(msg)
  {}
  ::quycaros_pkg::srv::SetVariable_Request value_y(::quycaros_pkg::srv::SetVariable_Request::_value_y_type arg)
  {
    msg_.value_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quycaros_pkg::srv::SetVariable_Request msg_;
};

class Init_SetVariable_Request_value_x
{
public:
  explicit Init_SetVariable_Request_value_x(::quycaros_pkg::srv::SetVariable_Request & msg)
  : msg_(msg)
  {}
  Init_SetVariable_Request_value_y value_x(::quycaros_pkg::srv::SetVariable_Request::_value_x_type arg)
  {
    msg_.value_x = std::move(arg);
    return Init_SetVariable_Request_value_y(msg_);
  }

private:
  ::quycaros_pkg::srv::SetVariable_Request msg_;
};

class Init_SetVariable_Request_variable_name
{
public:
  Init_SetVariable_Request_variable_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVariable_Request_value_x variable_name(::quycaros_pkg::srv::SetVariable_Request::_variable_name_type arg)
  {
    msg_.variable_name = std::move(arg);
    return Init_SetVariable_Request_value_x(msg_);
  }

private:
  ::quycaros_pkg::srv::SetVariable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quycaros_pkg::srv::SetVariable_Request>()
{
  return quycaros_pkg::srv::builder::Init_SetVariable_Request_variable_name();
}

}  // namespace quycaros_pkg


namespace quycaros_pkg
{

namespace srv
{

namespace builder
{

class Init_SetVariable_Response_success
{
public:
  Init_SetVariable_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::quycaros_pkg::srv::SetVariable_Response success(::quycaros_pkg::srv::SetVariable_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quycaros_pkg::srv::SetVariable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quycaros_pkg::srv::SetVariable_Response>()
{
  return quycaros_pkg::srv::builder::Init_SetVariable_Response_success();
}

}  // namespace quycaros_pkg

#endif  // QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__BUILDER_HPP_
