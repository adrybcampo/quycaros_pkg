// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from quycaros_pkg:srv/SetVariable.idl
// generated code does not contain a copyright notice

#ifndef QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__FUNCTIONS_H_
#define QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "quycaros_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "quycaros_pkg/srv/detail/set_variable__struct.h"

/// Initialize srv/SetVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * quycaros_pkg__srv__SetVariable_Request
 * )) before or use
 * quycaros_pkg__srv__SetVariable_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__init(quycaros_pkg__srv__SetVariable_Request * msg);

/// Finalize srv/SetVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Request__fini(quycaros_pkg__srv__SetVariable_Request * msg);

/// Create srv/SetVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * quycaros_pkg__srv__SetVariable_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
quycaros_pkg__srv__SetVariable_Request *
quycaros_pkg__srv__SetVariable_Request__create();

/// Destroy srv/SetVariable message.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Request__destroy(quycaros_pkg__srv__SetVariable_Request * msg);

/// Check for srv/SetVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__are_equal(const quycaros_pkg__srv__SetVariable_Request * lhs, const quycaros_pkg__srv__SetVariable_Request * rhs);

/// Copy a srv/SetVariable message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__copy(
  const quycaros_pkg__srv__SetVariable_Request * input,
  quycaros_pkg__srv__SetVariable_Request * output);

/// Initialize array of srv/SetVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * quycaros_pkg__srv__SetVariable_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__Sequence__init(quycaros_pkg__srv__SetVariable_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetVariable messages.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Request__Sequence__fini(quycaros_pkg__srv__SetVariable_Request__Sequence * array);

/// Create array of srv/SetVariable messages.
/**
 * It allocates the memory for the array and calls
 * quycaros_pkg__srv__SetVariable_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
quycaros_pkg__srv__SetVariable_Request__Sequence *
quycaros_pkg__srv__SetVariable_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetVariable messages.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Request__Sequence__destroy(quycaros_pkg__srv__SetVariable_Request__Sequence * array);

/// Check for srv/SetVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__Sequence__are_equal(const quycaros_pkg__srv__SetVariable_Request__Sequence * lhs, const quycaros_pkg__srv__SetVariable_Request__Sequence * rhs);

/// Copy an array of srv/SetVariable messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Request__Sequence__copy(
  const quycaros_pkg__srv__SetVariable_Request__Sequence * input,
  quycaros_pkg__srv__SetVariable_Request__Sequence * output);

/// Initialize srv/SetVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * quycaros_pkg__srv__SetVariable_Response
 * )) before or use
 * quycaros_pkg__srv__SetVariable_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__init(quycaros_pkg__srv__SetVariable_Response * msg);

/// Finalize srv/SetVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Response__fini(quycaros_pkg__srv__SetVariable_Response * msg);

/// Create srv/SetVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * quycaros_pkg__srv__SetVariable_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
quycaros_pkg__srv__SetVariable_Response *
quycaros_pkg__srv__SetVariable_Response__create();

/// Destroy srv/SetVariable message.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Response__destroy(quycaros_pkg__srv__SetVariable_Response * msg);

/// Check for srv/SetVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__are_equal(const quycaros_pkg__srv__SetVariable_Response * lhs, const quycaros_pkg__srv__SetVariable_Response * rhs);

/// Copy a srv/SetVariable message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__copy(
  const quycaros_pkg__srv__SetVariable_Response * input,
  quycaros_pkg__srv__SetVariable_Response * output);

/// Initialize array of srv/SetVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * quycaros_pkg__srv__SetVariable_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__Sequence__init(quycaros_pkg__srv__SetVariable_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetVariable messages.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Response__Sequence__fini(quycaros_pkg__srv__SetVariable_Response__Sequence * array);

/// Create array of srv/SetVariable messages.
/**
 * It allocates the memory for the array and calls
 * quycaros_pkg__srv__SetVariable_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
quycaros_pkg__srv__SetVariable_Response__Sequence *
quycaros_pkg__srv__SetVariable_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetVariable messages.
/**
 * It calls
 * quycaros_pkg__srv__SetVariable_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
void
quycaros_pkg__srv__SetVariable_Response__Sequence__destroy(quycaros_pkg__srv__SetVariable_Response__Sequence * array);

/// Check for srv/SetVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__Sequence__are_equal(const quycaros_pkg__srv__SetVariable_Response__Sequence * lhs, const quycaros_pkg__srv__SetVariable_Response__Sequence * rhs);

/// Copy an array of srv/SetVariable messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quycaros_pkg
bool
quycaros_pkg__srv__SetVariable_Response__Sequence__copy(
  const quycaros_pkg__srv__SetVariable_Response__Sequence * input,
  quycaros_pkg__srv__SetVariable_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QUYCAROS_PKG__SRV__DETAIL__SET_VARIABLE__FUNCTIONS_H_
