// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "quycaros_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "quycaros_pkg/msg/detail/control_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace quycaros_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quycaros_pkg
cdr_serialize(
  const quycaros_pkg::msg::ControlMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quycaros_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quycaros_pkg::msg::ControlMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quycaros_pkg
get_serialized_size(
  const quycaros_pkg::msg::ControlMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quycaros_pkg
max_serialized_size_ControlMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace quycaros_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quycaros_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quycaros_pkg, msg, ControlMsg)();

#ifdef __cplusplus
}
#endif

#endif  // QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
