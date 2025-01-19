// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quycaros_pkg:srv/GetVariable.idl
// generated code does not contain a copyright notice
#include "quycaros_pkg/srv/detail/get_variable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `variable_name`
#include "rosidl_runtime_c/string_functions.h"

bool
quycaros_pkg__srv__GetVariable_Request__init(quycaros_pkg__srv__GetVariable_Request * msg)
{
  if (!msg) {
    return false;
  }
  // variable_name
  if (!rosidl_runtime_c__String__init(&msg->variable_name)) {
    quycaros_pkg__srv__GetVariable_Request__fini(msg);
    return false;
  }
  return true;
}

void
quycaros_pkg__srv__GetVariable_Request__fini(quycaros_pkg__srv__GetVariable_Request * msg)
{
  if (!msg) {
    return;
  }
  // variable_name
  rosidl_runtime_c__String__fini(&msg->variable_name);
}

bool
quycaros_pkg__srv__GetVariable_Request__are_equal(const quycaros_pkg__srv__GetVariable_Request * lhs, const quycaros_pkg__srv__GetVariable_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // variable_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->variable_name), &(rhs->variable_name)))
  {
    return false;
  }
  return true;
}

bool
quycaros_pkg__srv__GetVariable_Request__copy(
  const quycaros_pkg__srv__GetVariable_Request * input,
  quycaros_pkg__srv__GetVariable_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // variable_name
  if (!rosidl_runtime_c__String__copy(
      &(input->variable_name), &(output->variable_name)))
  {
    return false;
  }
  return true;
}

quycaros_pkg__srv__GetVariable_Request *
quycaros_pkg__srv__GetVariable_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Request * msg = (quycaros_pkg__srv__GetVariable_Request *)allocator.allocate(sizeof(quycaros_pkg__srv__GetVariable_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quycaros_pkg__srv__GetVariable_Request));
  bool success = quycaros_pkg__srv__GetVariable_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quycaros_pkg__srv__GetVariable_Request__destroy(quycaros_pkg__srv__GetVariable_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quycaros_pkg__srv__GetVariable_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quycaros_pkg__srv__GetVariable_Request__Sequence__init(quycaros_pkg__srv__GetVariable_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Request * data = NULL;

  if (size) {
    data = (quycaros_pkg__srv__GetVariable_Request *)allocator.zero_allocate(size, sizeof(quycaros_pkg__srv__GetVariable_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quycaros_pkg__srv__GetVariable_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quycaros_pkg__srv__GetVariable_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quycaros_pkg__srv__GetVariable_Request__Sequence__fini(quycaros_pkg__srv__GetVariable_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quycaros_pkg__srv__GetVariable_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quycaros_pkg__srv__GetVariable_Request__Sequence *
quycaros_pkg__srv__GetVariable_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Request__Sequence * array = (quycaros_pkg__srv__GetVariable_Request__Sequence *)allocator.allocate(sizeof(quycaros_pkg__srv__GetVariable_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quycaros_pkg__srv__GetVariable_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quycaros_pkg__srv__GetVariable_Request__Sequence__destroy(quycaros_pkg__srv__GetVariable_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quycaros_pkg__srv__GetVariable_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quycaros_pkg__srv__GetVariable_Request__Sequence__are_equal(const quycaros_pkg__srv__GetVariable_Request__Sequence * lhs, const quycaros_pkg__srv__GetVariable_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quycaros_pkg__srv__GetVariable_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quycaros_pkg__srv__GetVariable_Request__Sequence__copy(
  const quycaros_pkg__srv__GetVariable_Request__Sequence * input,
  quycaros_pkg__srv__GetVariable_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quycaros_pkg__srv__GetVariable_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quycaros_pkg__srv__GetVariable_Request * data =
      (quycaros_pkg__srv__GetVariable_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quycaros_pkg__srv__GetVariable_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quycaros_pkg__srv__GetVariable_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quycaros_pkg__srv__GetVariable_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
quycaros_pkg__srv__GetVariable_Response__init(quycaros_pkg__srv__GetVariable_Response * msg)
{
  if (!msg) {
    return false;
  }
  // value_x
  // value_y
  return true;
}

void
quycaros_pkg__srv__GetVariable_Response__fini(quycaros_pkg__srv__GetVariable_Response * msg)
{
  if (!msg) {
    return;
  }
  // value_x
  // value_y
}

bool
quycaros_pkg__srv__GetVariable_Response__are_equal(const quycaros_pkg__srv__GetVariable_Response * lhs, const quycaros_pkg__srv__GetVariable_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value_x
  if (lhs->value_x != rhs->value_x) {
    return false;
  }
  // value_y
  if (lhs->value_y != rhs->value_y) {
    return false;
  }
  return true;
}

bool
quycaros_pkg__srv__GetVariable_Response__copy(
  const quycaros_pkg__srv__GetVariable_Response * input,
  quycaros_pkg__srv__GetVariable_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // value_x
  output->value_x = input->value_x;
  // value_y
  output->value_y = input->value_y;
  return true;
}

quycaros_pkg__srv__GetVariable_Response *
quycaros_pkg__srv__GetVariable_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Response * msg = (quycaros_pkg__srv__GetVariable_Response *)allocator.allocate(sizeof(quycaros_pkg__srv__GetVariable_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quycaros_pkg__srv__GetVariable_Response));
  bool success = quycaros_pkg__srv__GetVariable_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quycaros_pkg__srv__GetVariable_Response__destroy(quycaros_pkg__srv__GetVariable_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quycaros_pkg__srv__GetVariable_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quycaros_pkg__srv__GetVariable_Response__Sequence__init(quycaros_pkg__srv__GetVariable_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Response * data = NULL;

  if (size) {
    data = (quycaros_pkg__srv__GetVariable_Response *)allocator.zero_allocate(size, sizeof(quycaros_pkg__srv__GetVariable_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quycaros_pkg__srv__GetVariable_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quycaros_pkg__srv__GetVariable_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
quycaros_pkg__srv__GetVariable_Response__Sequence__fini(quycaros_pkg__srv__GetVariable_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quycaros_pkg__srv__GetVariable_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

quycaros_pkg__srv__GetVariable_Response__Sequence *
quycaros_pkg__srv__GetVariable_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__srv__GetVariable_Response__Sequence * array = (quycaros_pkg__srv__GetVariable_Response__Sequence *)allocator.allocate(sizeof(quycaros_pkg__srv__GetVariable_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quycaros_pkg__srv__GetVariable_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quycaros_pkg__srv__GetVariable_Response__Sequence__destroy(quycaros_pkg__srv__GetVariable_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quycaros_pkg__srv__GetVariable_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quycaros_pkg__srv__GetVariable_Response__Sequence__are_equal(const quycaros_pkg__srv__GetVariable_Response__Sequence * lhs, const quycaros_pkg__srv__GetVariable_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quycaros_pkg__srv__GetVariable_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quycaros_pkg__srv__GetVariable_Response__Sequence__copy(
  const quycaros_pkg__srv__GetVariable_Response__Sequence * input,
  quycaros_pkg__srv__GetVariable_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quycaros_pkg__srv__GetVariable_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quycaros_pkg__srv__GetVariable_Response * data =
      (quycaros_pkg__srv__GetVariable_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quycaros_pkg__srv__GetVariable_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quycaros_pkg__srv__GetVariable_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quycaros_pkg__srv__GetVariable_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
