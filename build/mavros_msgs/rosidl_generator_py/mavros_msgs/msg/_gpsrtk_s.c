// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mavros_msgs:msg/GPSRTK.idl
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
#include "mavros_msgs/msg/detail/gpsrtk__struct.h"
#include "mavros_msgs/msg/detail/gpsrtk__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mavros_msgs__msg__gpsrtk__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("mavros_msgs.msg._gpsrtk.GPSRTK", full_classname_dest, 30) == 0);
  }
  mavros_msgs__msg__GPSRTK * ros_message = _ros_message;
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
  {  // rtk_receiver_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_receiver_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtk_receiver_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wn
    PyObject * field = PyObject_GetAttrString(_pymsg, "wn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wn = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tow
    PyObject * field = PyObject_GetAttrString(_pymsg, "tow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tow = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rtk_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtk_health = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rtk_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_rate");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtk_rate = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nsats
    PyObject * field = PyObject_GetAttrString(_pymsg, "nsats");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nsats = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // baseline_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "baseline_a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baseline_a = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // baseline_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "baseline_b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baseline_b = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // baseline_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "baseline_c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baseline_c = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accuracy = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // iar_num_hypotheses
    PyObject * field = PyObject_GetAttrString(_pymsg, "iar_num_hypotheses");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iar_num_hypotheses = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mavros_msgs__msg__gpsrtk__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GPSRTK */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mavros_msgs.msg._gpsrtk");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GPSRTK");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mavros_msgs__msg__GPSRTK * ros_message = (mavros_msgs__msg__GPSRTK *)raw_ros_message;
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
  {  // rtk_receiver_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rtk_receiver_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_receiver_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wn
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->wn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rtk_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_rate
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rtk_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nsats
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nsats);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nsats", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baseline_a
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->baseline_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baseline_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baseline_b
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->baseline_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baseline_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baseline_c
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->baseline_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baseline_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iar_num_hypotheses
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->iar_num_hypotheses);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iar_num_hypotheses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
