// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from quycaros_pkg:srv/SetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__TRAITS_HPP_
#define QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "quycaros_pkg/srv/detail/set_variable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace quycaros_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetVariable_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: variable_name
  {
    out << "variable_name: ";
    rosidl_generator_traits::value_to_yaml(msg.variable_name, out);
    out << ", ";
  }

  // member: value_x
  {
    out << "value_x: ";
    rosidl_generator_traits::value_to_yaml(msg.value_x, out);
    out << ", ";
  }

  // member: value_y
  {
    out << "value_y: ";
    rosidl_generator_traits::value_to_yaml(msg.value_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetVariable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: variable_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variable_name: ";
    rosidl_generator_traits::value_to_yaml(msg.variable_name, out);
    out << "\n";
  }

  // member: value_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_x: ";
    rosidl_generator_traits::value_to_yaml(msg.value_x, out);
    out << "\n";
  }

  // member: value_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_y: ";
    rosidl_generator_traits::value_to_yaml(msg.value_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetVariable_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quycaros_pkg

namespace rosidl_generator_traits
{

[[deprecated("use quycaros_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quycaros_pkg::srv::SetVariable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  quycaros_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quycaros_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const quycaros_pkg::srv::SetVariable_Request & msg)
{
  return quycaros_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quycaros_pkg::srv::SetVariable_Request>()
{
  return "quycaros_pkg::srv::SetVariable_Request";
}

template<>
inline const char * name<quycaros_pkg::srv::SetVariable_Request>()
{
  return "quycaros_pkg/srv/SetVariable_Request";
}

template<>
struct has_fixed_size<quycaros_pkg::srv::SetVariable_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<quycaros_pkg::srv::SetVariable_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<quycaros_pkg::srv::SetVariable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace quycaros_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetVariable_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetVariable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetVariable_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace quycaros_pkg

namespace rosidl_generator_traits
{

[[deprecated("use quycaros_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const quycaros_pkg::srv::SetVariable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  quycaros_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use quycaros_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const quycaros_pkg::srv::SetVariable_Response & msg)
{
  return quycaros_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<quycaros_pkg::srv::SetVariable_Response>()
{
  return "quycaros_pkg::srv::SetVariable_Response";
}

template<>
inline const char * name<quycaros_pkg::srv::SetVariable_Response>()
{
  return "quycaros_pkg/srv/SetVariable_Response";
}

template<>
struct has_fixed_size<quycaros_pkg::srv::SetVariable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<quycaros_pkg::srv::SetVariable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<quycaros_pkg::srv::SetVariable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<quycaros_pkg::srv::SetVariable>()
{
  return "quycaros_pkg::srv::SetVariable";
}

template<>
inline const char * name<quycaros_pkg::srv::SetVariable>()
{
  return "quycaros_pkg/srv/SetVariable";
}

template<>
struct has_fixed_size<quycaros_pkg::srv::SetVariable>
  : std::integral_constant<
    bool,
    has_fixed_size<quycaros_pkg::srv::SetVariable_Request>::value &&
    has_fixed_size<quycaros_pkg::srv::SetVariable_Response>::value
  >
{
};

template<>
struct has_bounded_size<quycaros_pkg::srv::SetVariable>
  : std::integral_constant<
    bool,
    has_bounded_size<quycaros_pkg::srv::SetVariable_Request>::value &&
    has_bounded_size<quycaros_pkg::srv::SetVariable_Response>::value
  >
{
};

template<>
struct is_service<quycaros_pkg::srv::SetVariable>
  : std::true_type
{
};

template<>
struct is_service_request<quycaros_pkg::srv::SetVariable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<quycaros_pkg::srv::SetVariable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__TRAITS_HPP_
