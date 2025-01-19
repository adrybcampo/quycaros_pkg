// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_H_
#define QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControlMsg in the package quycaros_pkg.
typedef struct quycaros_pkg__msg__ControlMsg
{
  int32_t mode;
  int32_t mov_x;
  int32_t mov_y;
  int32_t emo_x;
  int32_t emo_y;
  bool cam;
} quycaros_pkg__msg__ControlMsg;

// Struct for a sequence of quycaros_pkg__msg__ControlMsg.
typedef struct quycaros_pkg__msg__ControlMsg__Sequence
{
  quycaros_pkg__msg__ControlMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quycaros_pkg__msg__ControlMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUYCAROS_PKG__MSG__DETAIL__CONTROL_MSG__STRUCT_H_
