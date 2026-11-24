// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from project_msgs:msg/LocalizationObject.idl
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
#include "project_msgs/msg/detail/localization_object__struct.h"
#include "project_msgs/msg/detail/localization_object__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool project_msgs__msg__localization_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("project_msgs.msg._localization_object.LocalizationObject", full_classname_dest, 56) == 0);
  }
  project_msgs__msg__LocalizationObject * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // distance_linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_linear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_linear = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_angular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sen_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "sen_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sen_angular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cos_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "cos_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cos_angular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * project_msgs__msg__localization_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LocalizationObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("project_msgs.msg._localization_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LocalizationObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  project_msgs__msg__LocalizationObject * ros_message = (project_msgs__msg__LocalizationObject *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_linear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sen_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sen_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sen_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cos_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cos_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cos_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
