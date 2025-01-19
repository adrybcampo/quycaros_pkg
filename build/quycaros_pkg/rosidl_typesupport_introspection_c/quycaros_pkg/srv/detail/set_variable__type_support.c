// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quycaros_pkg:srv/SetVariable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quycaros_pkg/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
#include "quycaros_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quycaros_pkg/srv/detail/set_variable__functions.h"
#include "quycaros_pkg/srv/detail/set_variable__struct.h"


// Include directives for member types
// Member `variable_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quycaros_pkg__srv__SetVariable_Request__init(message_memory);
}

void quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_fini_function(void * message_memory)
{
  quycaros_pkg__srv__SetVariable_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_member_array[3] = {
  {
    "variable_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quycaros_pkg__srv__SetVariable_Request, variable_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quycaros_pkg__srv__SetVariable_Request, value_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quycaros_pkg__srv__SetVariable_Request, value_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_members = {
  "quycaros_pkg__srv",  // message namespace
  "SetVariable_Request",  // message name
  3,  // number of fields
  sizeof(quycaros_pkg__srv__SetVariable_Request),
  quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_member_array,  // message members
  quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle = {
  0,
  &quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quycaros_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Request)() {
  if (!quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle.typesupport_identifier) {
    quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quycaros_pkg__srv__SetVariable_Request__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "quycaros_pkg/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "quycaros_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "quycaros_pkg/srv/detail/set_variable__functions.h"
// already included above
// #include "quycaros_pkg/srv/detail/set_variable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quycaros_pkg__srv__SetVariable_Response__init(message_memory);
}

void quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_fini_function(void * message_memory)
{
  quycaros_pkg__srv__SetVariable_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quycaros_pkg__srv__SetVariable_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_members = {
  "quycaros_pkg__srv",  // message namespace
  "SetVariable_Response",  // message name
  1,  // number of fields
  sizeof(quycaros_pkg__srv__SetVariable_Response),
  quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_member_array,  // message members
  quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle = {
  0,
  &quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quycaros_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Response)() {
  if (!quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle.typesupport_identifier) {
    quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quycaros_pkg__srv__SetVariable_Response__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "quycaros_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "quycaros_pkg/srv/detail/set_variable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_members = {
  "quycaros_pkg__srv",  // service namespace
  "SetVariable",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_Request_message_type_support_handle,
  NULL  // response message
  // quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_Response_message_type_support_handle
};

static rosidl_service_type_support_t quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle = {
  0,
  &quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quycaros_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable)() {
  if (!quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.typesupport_identifier) {
    quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quycaros_pkg, srv, SetVariable_Response)()->data;
  }

  return &quycaros_pkg__srv__detail__set_variable__rosidl_typesupport_introspection_c__SetVariable_service_type_support_handle;
}
