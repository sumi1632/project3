// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/OrderDetail.idl
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
#include "custom_msgs/msg/detail/order_detail__struct.h"
#include "custom_msgs/msg/detail/order_detail__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__order_detail__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("custom_msgs.msg._order_detail.OrderDetail", full_classname_dest, 41) == 0);
  }
  custom_msgs__msg__OrderDetail * ros_message = _ros_message;
  {  // order_detail_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "order_detail_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->order_detail_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // menu_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "menu_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->menu_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // table_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "table_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->table_num = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__order_detail__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OrderDetail */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._order_detail");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OrderDetail");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__OrderDetail * ros_message = (custom_msgs__msg__OrderDetail *)raw_ros_message;
  {  // order_detail_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->order_detail_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "order_detail_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // menu_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->menu_name.data,
      strlen(ros_message->menu_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "menu_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // table_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->table_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "table_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
