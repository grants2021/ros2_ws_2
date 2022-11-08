// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vrx_gazebo:srv/ColorSequence.idl
// generated code does not contain a copyright notice
#include "vrx_gazebo/srv/detail/color_sequence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vrx_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vrx_gazebo/srv/detail/color_sequence__struct.h"
#include "vrx_gazebo/srv/detail/color_sequence__functions.h"
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

#include "rosidl_runtime_c/string.h"  // color1, color2, color3
#include "rosidl_runtime_c/string_functions.h"  // color1, color2, color3

// forward declare type support functions


using _ColorSequence_Request__ros_msg_type = vrx_gazebo__srv__ColorSequence_Request;

static bool _ColorSequence_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorSequence_Request__ros_msg_type * ros_message = static_cast<const _ColorSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: color1
  {
    const rosidl_runtime_c__String * str = &ros_message->color1;
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

  // Field name: color2
  {
    const rosidl_runtime_c__String * str = &ros_message->color2;
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

  // Field name: color3
  {
    const rosidl_runtime_c__String * str = &ros_message->color3;
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

static bool _ColorSequence_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorSequence_Request__ros_msg_type * ros_message = static_cast<_ColorSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: color1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color1.data) {
      rosidl_runtime_c__String__init(&ros_message->color1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color1'\n");
      return false;
    }
  }

  // Field name: color2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color2.data) {
      rosidl_runtime_c__String__init(&ros_message->color2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color2'\n");
      return false;
    }
  }

  // Field name: color3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color3.data) {
      rosidl_runtime_c__String__init(&ros_message->color3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color3'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vrx_gazebo
size_t get_serialized_size_vrx_gazebo__srv__ColorSequence_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorSequence_Request__ros_msg_type * ros_message = static_cast<const _ColorSequence_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color1.size + 1);
  // field.name color2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color2.size + 1);
  // field.name color3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color3.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ColorSequence_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vrx_gazebo__srv__ColorSequence_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vrx_gazebo
size_t max_serialized_size_vrx_gazebo__srv__ColorSequence_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: color1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: color2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: color3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorSequence_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vrx_gazebo__srv__ColorSequence_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ColorSequence_Request = {
  "vrx_gazebo::srv",
  "ColorSequence_Request",
  _ColorSequence_Request__cdr_serialize,
  _ColorSequence_Request__cdr_deserialize,
  _ColorSequence_Request__get_serialized_size,
  _ColorSequence_Request__max_serialized_size
};

static rosidl_message_type_support_t _ColorSequence_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorSequence_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Request)() {
  return &_ColorSequence_Request__type_support;
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
// #include "vrx_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__struct.h"
// already included above
// #include "vrx_gazebo/srv/detail/color_sequence__functions.h"
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


using _ColorSequence_Response__ros_msg_type = vrx_gazebo__srv__ColorSequence_Response;

static bool _ColorSequence_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorSequence_Response__ros_msg_type * ros_message = static_cast<const _ColorSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ColorSequence_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorSequence_Response__ros_msg_type * ros_message = static_cast<_ColorSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vrx_gazebo
size_t get_serialized_size_vrx_gazebo__srv__ColorSequence_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorSequence_Response__ros_msg_type * ros_message = static_cast<const _ColorSequence_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ColorSequence_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vrx_gazebo__srv__ColorSequence_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vrx_gazebo
size_t max_serialized_size_vrx_gazebo__srv__ColorSequence_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorSequence_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vrx_gazebo__srv__ColorSequence_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ColorSequence_Response = {
  "vrx_gazebo::srv",
  "ColorSequence_Response",
  _ColorSequence_Response__cdr_serialize,
  _ColorSequence_Response__cdr_deserialize,
  _ColorSequence_Response__get_serialized_size,
  _ColorSequence_Response__max_serialized_size
};

static rosidl_message_type_support_t _ColorSequence_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorSequence_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Response)() {
  return &_ColorSequence_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vrx_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vrx_gazebo/srv/color_sequence.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ColorSequence__callbacks = {
  "vrx_gazebo::srv",
  "ColorSequence",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence_Response)(),
};

static rosidl_service_type_support_t ColorSequence__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ColorSequence__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vrx_gazebo, srv, ColorSequence)() {
  return &ColorSequence__handle;
}

#if defined(__cplusplus)
}
#endif
