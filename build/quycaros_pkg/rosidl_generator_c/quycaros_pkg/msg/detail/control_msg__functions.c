// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice
#include "quycaros_pkg/msg/detail/control_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
quycaros_pkg__msg__ControlMsg__init(quycaros_pkg__msg__ControlMsg * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // mov_x
  // mov_y
  // emo_x
  // emo_y
  // cam
  return true;
}

void
quycaros_pkg__msg__ControlMsg__fini(quycaros_pkg__msg__ControlMsg * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // mov_x
  // mov_y
  // emo_x
  // emo_y
  // cam
}

bool
quycaros_pkg__msg__ControlMsg__are_equal(const quycaros_pkg__msg__ControlMsg * lhs, const quycaros_pkg__msg__ControlMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // mov_x
  if (lhs->mov_x != rhs->mov_x) {
    return false;
  }
  // mov_y
  if (lhs->mov_y != rhs->mov_y) {
    return false;
  }
  // emo_x
  if (lhs->emo_x != rhs->emo_x) {
    return false;
  }
  // emo_y
  if (lhs->emo_y != rhs->emo_y) {
    return false;
  }
  // cam
  if (lhs->cam != rhs->cam) {
    return false;
  }
  return true;
}

bool
quycaros_pkg__msg__ControlMsg__copy(
  const quycaros_pkg__msg__ControlMsg * input,
  quycaros_pkg__msg__ControlMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // mov_x
  output->mov_x = input->mov_x;
  // mov_y
  output->mov_y = input->mov_y;
  // emo_x
  output->emo_x = input->emo_x;
  // emo_y
  output->emo_y = input->emo_y;
  // cam
  output->cam = input->cam;
  return true;
}

quycaros_pkg__msg__ControlMsg *
quycaros_pkg__msg__ControlMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__msg__ControlMsg * msg = (quycaros_pkg__msg__ControlMsg *)allocator.allocate(sizeof(quycaros_pkg__msg__ControlMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quycaros_pkg__msg__ControlMsg));
  bool success = quycaros_pkg__msg__ControlMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
quycaros_pkg__msg__ControlMsg__destroy(quycaros_pkg__msg__ControlMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    quycaros_pkg__msg__ControlMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
quycaros_pkg__msg__ControlMsg__Sequence__init(quycaros_pkg__msg__ControlMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__msg__ControlMsg * data = NULL;

  if (size) {
    data = (quycaros_pkg__msg__ControlMsg *)allocator.zero_allocate(size, sizeof(quycaros_pkg__msg__ControlMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quycaros_pkg__msg__ControlMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quycaros_pkg__msg__ControlMsg__fini(&data[i - 1]);
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
quycaros_pkg__msg__ControlMsg__Sequence__fini(quycaros_pkg__msg__ControlMsg__Sequence * array)
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
      quycaros_pkg__msg__ControlMsg__fini(&array->data[i]);
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

quycaros_pkg__msg__ControlMsg__Sequence *
quycaros_pkg__msg__ControlMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  quycaros_pkg__msg__ControlMsg__Sequence * array = (quycaros_pkg__msg__ControlMsg__Sequence *)allocator.allocate(sizeof(quycaros_pkg__msg__ControlMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = quycaros_pkg__msg__ControlMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
quycaros_pkg__msg__ControlMsg__Sequence__destroy(quycaros_pkg__msg__ControlMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    quycaros_pkg__msg__ControlMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
quycaros_pkg__msg__ControlMsg__Sequence__are_equal(const quycaros_pkg__msg__ControlMsg__Sequence * lhs, const quycaros_pkg__msg__ControlMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!quycaros_pkg__msg__ControlMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
quycaros_pkg__msg__ControlMsg__Sequence__copy(
  const quycaros_pkg__msg__ControlMsg__Sequence * input,
  quycaros_pkg__msg__ControlMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(quycaros_pkg__msg__ControlMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    quycaros_pkg__msg__ControlMsg * data =
      (quycaros_pkg__msg__ControlMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!quycaros_pkg__msg__ControlMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          quycaros_pkg__msg__ControlMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!quycaros_pkg__msg__ControlMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
