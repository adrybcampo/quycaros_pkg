// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from quycaros_pkg:msg/ControlMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "quycaros_pkg/msg/detail/control_msg__struct.h"
#include "quycaros_pkg/msg/detail/control_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool quycaros_pkg__msg__control_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("quycaros_pkg.msg._control_msg.ControlMsg", full_classname_dest, 40) == 0);
  }
  quycaros_pkg__msg__ControlMsg * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mov_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mov_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mov_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mov_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mov_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mov_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emo_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "emo_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emo_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // emo_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "emo_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emo_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cam
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cam = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * quycaros_pkg__msg__control_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("quycaros_pkg.msg._control_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  quycaros_pkg__msg__ControlMsg * ros_message = (quycaros_pkg__msg__ControlMsg *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mov_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mov_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mov_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mov_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mov_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mov_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emo_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->emo_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emo_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emo_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->emo_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emo_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
