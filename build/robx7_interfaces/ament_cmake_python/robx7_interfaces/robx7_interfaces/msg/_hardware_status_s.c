// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robx7_interfaces:msg/HardwareStatus.idl
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
#include "robx7_interfaces/msg/detail/hardware_status__struct.h"
#include "robx7_interfaces/msg/detail/hardware_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robx7_interfaces__msg__hardware_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("robx7_interfaces.msg._hardware_status", (char *)PyUnicode_1BYTE_DATA(module_attr), 37) == 0);
    assert(strncmp("HardwareStatus", (char *)PyUnicode_1BYTE_DATA(name_attr), 14) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  robx7_interfaces__msg__HardwareStatus * ros_message = _ros_message;
  {  // temperatura
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperatura");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperatura = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // motores_listos
    PyObject * field = PyObject_GetAttrString(_pymsg, "motores_listos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->motores_listos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // debug_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->debug_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robx7_interfaces__msg__hardware_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HardwareStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robx7_interfaces.msg._hardware_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HardwareStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robx7_interfaces__msg__HardwareStatus * ros_message = (robx7_interfaces__msg__HardwareStatus *)raw_ros_message;
  {  // temperatura
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->temperatura);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperatura", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motores_listos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->motores_listos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motores_listos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->debug_msg.data,
      strlen(ros_message->debug_msg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
