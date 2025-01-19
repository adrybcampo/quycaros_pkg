// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quycaros_pkg:srv/GetVariable.idl
// generated code does not contain a copyright notice
#include "quycaros_pkg/srv/detail/get_variable__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quycaros_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quycaros_pkg/srv/detail/get_variable__struct.h"
#include "quycaros_pkg/srv/detail/get_variable__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // variable_name
#include "rosidl_runtime_c/string_functions.h"  // variable_name

// forward declare type support functions


using _GetVariable_Request__ros_msg_type = quycaros_pkg__srv__GetVariable_Request;

static bool _GetVariable_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVariable_Request__ros_msg_type * ros_message = static_cast<const _GetVariable_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: variable_name
  {
    const rosidl_runtime_c__String * str = &ros_message->variable_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetVariable_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVariable_Request__ros_msg_type * ros_message = static_cast<_GetVariable_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: variable_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->variable_name.data) {
      rosidl_runtime_c__String__init(&ros_message->variable_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->variable_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'variable_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quycaros_pkg
size_t get_serialized_size_quycaros_pkg__srv__GetVariable_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVariable_Request__ros_msg_type * ros_message = static_cast<const _GetVariable_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name variable_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->variable_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetVariable_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quycaros_pkg__srv__GetVariable_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quycaros_pkg
size_t max_serialized_size_quycaros_pkg__srv__GetVariable_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: variable_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quycaros_pkg__srv__GetVariable_Request;
    is_plain =
      (
      offsetof(DataType, variable_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetVariable_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quycaros_pkg__srv__GetVariable_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetVariable_Request = {
  "quycaros_pkg::srv",
  "GetVariable_Request",
  _GetVariable_Request__cdr_serialize,
  _GetVariable_Request__cdr_deserialize,
  _GetVariable_Request__get_serialized_size,
  _GetVariable_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetVariable_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVariable_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quycaros_pkg, srv, GetVariable_Request)() {
  return &_GetVariable_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "quycaros_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "quycaros_pkg/srv/detail/get_variable__struct.h"
// already included above
// #include "quycaros_pkg/srv/detail/get_variable__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetVariable_Response__ros_msg_type = quycaros_pkg__srv__GetVariable_Response;

static bool _GetVariable_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetVariable_Response__ros_msg_type * ros_message = static_cast<const _GetVariable_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value_x
  {
    cdr << ros_message->value_x;
  }

  // Field name: value_y
  {
    cdr << ros_message->value_y;
  }

  return true;
}

static bool _GetVariable_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetVariable_Response__ros_msg_type * ros_message = static_cast<_GetVariable_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: value_x
  {
    cdr >> ros_message->value_x;
  }

  // Field name: value_y
  {
    cdr >> ros_message->value_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quycaros_pkg
size_t get_serialized_size_quycaros_pkg__srv__GetVariable_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetVariable_Response__ros_msg_type * ros_message = static_cast<const _GetVariable_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name value_x
  {
    size_t item_size = sizeof(ros_message->value_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value_y
  {
    size_t item_size = sizeof(ros_message->value_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetVariable_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quycaros_pkg__srv__GetVariable_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quycaros_pkg
size_t max_serialized_size_quycaros_pkg__srv__GetVariable_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: value_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = quycaros_pkg__srv__GetVariable_Response;
    is_plain =
      (
      offsetof(DataType, value_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetVariable_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_quycaros_pkg__srv__GetVariable_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetVariable_Response = {
  "quycaros_pkg::srv",
  "GetVariable_Response",
  _GetVariable_Response__cdr_serialize,
  _GetVariable_Response__cdr_deserialize,
  _GetVariable_Response__get_serialized_size,
  _GetVariable_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetVariable_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetVariable_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quycaros_pkg, srv, GetVariable_Response)() {
  return &_GetVariable_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "quycaros_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quycaros_pkg/srv/get_variable.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetVariable__callbacks = {
  "quycaros_pkg::srv",
  "GetVariable",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quycaros_pkg, srv, GetVariable_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quycaros_pkg, srv, GetVariable_Response)(),
};

static rosidl_service_type_support_t GetVariable__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetVariable__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quycaros_pkg, srv, GetVariable)() {
  return &GetVariable__handle;
}

#if defined(__cplusplus)
}
#endif
