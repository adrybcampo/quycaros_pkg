// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quycaros_pkg:srv/GetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__STRUCT_H_
#define QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'variable_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetVariable in the package quycaros_pkg.
typedef struct quycaros_pkg__srv__GetVariable_Request
{
  rosidl_runtime_c__String variable_name;
} quycaros_pkg__srv__GetVariable_Request;

// Struct for a sequence of quycaros_pkg__srv__GetVariable_Request.
typedef struct quycaros_pkg__srv__GetVariable_Request__Sequence
{
  quycaros_pkg__srv__GetVariable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quycaros_pkg__srv__GetVariable_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetVariable in the package quycaros_pkg.
typedef struct quycaros_pkg__srv__GetVariable_Response
{
  int32_t value_x;
  int32_t value_y;
} quycaros_pkg__srv__GetVariable_Response;

// Struct for a sequence of quycaros_pkg__srv__GetVariable_Response.
typedef struct quycaros_pkg__srv__GetVariable_Response__Sequence
{
  quycaros_pkg__srv__GetVariable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quycaros_pkg__srv__GetVariable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUYCAROS_PKG__SRV__DETAIL__GET_VARIABLE__STRUCT_H_
