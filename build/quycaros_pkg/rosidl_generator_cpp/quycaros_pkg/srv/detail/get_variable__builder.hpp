// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quycaros_pkg:srv/GetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_
#define QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quycaros_pkg/srv/detail/get_variable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quycaros_pkg
{

namespace srv
{

namespace builder
{

class Init_GetVariable_Request_variable_name
{
public:
  Init_GetVariable_Request_variable_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::quycaros_pkg::srv::GetVariable_Request variable_name(::quycaros_pkg::srv::GetVariable_Request::_variable_name_type arg)
  {
    msg_.variable_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quycaros_pkg::srv::GetVariable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quycaros_pkg::srv::GetVariable_Request>()
{
  return quycaros_pkg::srv::builder::Init_GetVariable_Request_variable_name();
}

}  // namespace quycaros_pkg


namespace quycaros_pkg
{

namespace srv
{

namespace builder
{

class Init_GetVariable_Response_value_y
{
public:
  explicit Init_GetVariable_Response_value_y(::quycaros_pkg::srv::GetVariable_Response & msg)
  : msg_(msg)
  {}
  ::quycaros_pkg::srv::GetVariable_Response value_y(::quycaros_pkg::srv::GetVariable_Response::_value_y_type arg)
  {
    msg_.value_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quycaros_pkg::srv::GetVariable_Response msg_;
};

class Init_GetVariable_Response_value_x
{
public:
  Init_GetVariable_Response_value_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVariable_Response_value_y value_x(::quycaros_pkg::srv::GetVariable_Response::_value_x_type arg)
  {
    msg_.value_x = std::move(arg);
    return Init_GetVariable_Response_value_y(msg_);
  }

private:
  ::quycaros_pkg::srv::GetVariable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::quycaros_pkg::srv::GetVariable_Response>()
{
  return quycaros_pkg::srv::builder::Init_GetVariable_Response_value_x();
}

}  // namespace quycaros_pkg

#endif  // QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__BUILDER_HPP_
