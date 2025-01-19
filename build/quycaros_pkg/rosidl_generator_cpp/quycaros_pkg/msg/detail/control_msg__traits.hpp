// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_
#define QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quycaros_pkg/msg/detail/control_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quycaros_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: mov_x
  {
    out << "mov_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_x, out);
    out << ", ";
  }

  // member: mov_y
  {
    out << "mov_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_y, out);
    out << ", ";
  }

  // member: emo_x
  {
    out << "emo_x: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_x, out);
    out << ", ";
  }

  // member: emo_y
  {
    out << "emo_y: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_y, out);
    out << ", ";
  }

  // member: cam
  {
    out << "cam: ";
    rosidl_generator_traits::value_to_yaml(msg.cam, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: mov_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mov_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_x, out);
    out << "\n";
  }

  // member: mov_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mov_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mov_y, out);
    out << "\n";
  }

  // member: emo_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emo_x: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_x, out);
    out << "\n";
  }

  // member: emo_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emo_y: ";
    rosidl_generator_traits::value_to_yaml(msg.emo_y, out);
    out << "\n";
  }

  // member: cam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam: ";
    rosidl_generator_traits::value_to_yaml(msg.cam, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace quycaros_pkg

namespace rosidl_generator_traits
{

[[deprecated("use quycaros_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quycaros_pkg::msg::ControlMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  quycaros_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quycaros_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const quycaros_pkg::msg::ControlMsg & msg)
{
  return quycaros_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<quycaros_pkg::msg::ControlMsg>()
{
  return "quycaros_pkg::msg::ControlMsg";
}

template<>
inline const char * name<quycaros_pkg::msg::ControlMsg>()
{
  return "quycaros_pkg/msg/ControlMsg";
}

template<>
struct has_fixed_size<quycaros_pkg::msg::ControlMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quycaros_pkg::msg::ControlMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quycaros_pkg::msg::ControlMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__TRAITS_HPP_
