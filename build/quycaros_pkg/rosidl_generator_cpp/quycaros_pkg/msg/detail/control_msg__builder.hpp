// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_
#define QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "quycaros_pkg/msg/detail/control_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace quycaros_pkg
{

namespace msg
{

namespace builder
{

class Init_ControlMsg_cam
{
public:
  explicit Init_ControlMsg_cam(::quycaros_pkg::msg::ControlMsg & msg)
  : msg_(msg)
  {}
  ::quycaros_pkg::msg::ControlMsg cam(::quycaros_pkg::msg::ControlMsg::_cam_type arg)
  {
    msg_.cam = std::move(arg);
    return std::move(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

class Init_ControlMsg_emo_y
{
public:
  explicit Init_ControlMsg_emo_y(::quycaros_pkg::msg::ControlMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMsg_cam emo_y(::quycaros_pkg::msg::ControlMsg::_emo_y_type arg)
  {
    msg_.emo_y = std::move(arg);
    return Init_ControlMsg_cam(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

class Init_ControlMsg_emo_x
{
public:
  explicit Init_ControlMsg_emo_x(::quycaros_pkg::msg::ControlMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMsg_emo_y emo_x(::quycaros_pkg::msg::ControlMsg::_emo_x_type arg)
  {
    msg_.emo_x = std::move(arg);
    return Init_ControlMsg_emo_y(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

class Init_ControlMsg_mov_y
{
public:
  explicit Init_ControlMsg_mov_y(::quycaros_pkg::msg::ControlMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMsg_emo_x mov_y(::quycaros_pkg::msg::ControlMsg::_mov_y_type arg)
  {
    msg_.mov_y = std::move(arg);
    return Init_ControlMsg_emo_x(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

class Init_ControlMsg_mov_x
{
public:
  explicit Init_ControlMsg_mov_x(::quycaros_pkg::msg::ControlMsg & msg)
  : msg_(msg)
  {}
  Init_ControlMsg_mov_y mov_x(::quycaros_pkg::msg::ControlMsg::_mov_x_type arg)
  {
    msg_.mov_x = std::move(arg);
    return Init_ControlMsg_mov_y(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

class Init_ControlMsg_mode
{
public:
  Init_ControlMsg_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlMsg_mov_x mode(::quycaros_pkg::msg::ControlMsg::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ControlMsg_mov_x(msg_);
  }

private:
  ::quycaros_pkg::msg::ControlMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::quycaros_pkg::msg::ControlMsg>()
{
  return quycaros_pkg::msg::builder::Init_ControlMsg_mode();
}

}  // namespace quycaros_pkg

#endif  // QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__BUILDER_HPP_
