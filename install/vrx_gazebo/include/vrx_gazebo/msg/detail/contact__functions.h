// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vrx_gazebo:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef VRX_GAZEBO__MSG__DETAIL__CONTACT__FUNCTIONS_H_
#define VRX_GAZEBO__MSG__DETAIL__CONTACT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vrx_gazebo/msg/rosidl_generator_c__visibility_control.h"

#include "vrx_gazebo/msg/detail/contact__struct.h"

/// Initialize msg/Contact message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vrx_gazebo__msg__Contact
 * )) before or use
 * vrx_gazebo__msg__Contact__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__init(vrx_gazebo__msg__Contact * msg);

/// Finalize msg/Contact message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
void
vrx_gazebo__msg__Contact__fini(vrx_gazebo__msg__Contact * msg);

/// Create msg/Contact message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vrx_gazebo__msg__Contact__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
vrx_gazebo__msg__Contact *
vrx_gazebo__msg__Contact__create();

/// Destroy msg/Contact message.
/**
 * It calls
 * vrx_gazebo__msg__Contact__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
void
vrx_gazebo__msg__Contact__destroy(vrx_gazebo__msg__Contact * msg);

/// Check for msg/Contact message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__are_equal(const vrx_gazebo__msg__Contact * lhs, const vrx_gazebo__msg__Contact * rhs);

/// Copy a msg/Contact message.
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
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__copy(
  const vrx_gazebo__msg__Contact * input,
  vrx_gazebo__msg__Contact * output);

/// Initialize array of msg/Contact messages.
/**
 * It allocates the memory for the number of elements and calls
 * vrx_gazebo__msg__Contact__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__Sequence__init(vrx_gazebo__msg__Contact__Sequence * array, size_t size);

/// Finalize array of msg/Contact messages.
/**
 * It calls
 * vrx_gazebo__msg__Contact__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
void
vrx_gazebo__msg__Contact__Sequence__fini(vrx_gazebo__msg__Contact__Sequence * array);

/// Create array of msg/Contact messages.
/**
 * It allocates the memory for the array and calls
 * vrx_gazebo__msg__Contact__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
vrx_gazebo__msg__Contact__Sequence *
vrx_gazebo__msg__Contact__Sequence__create(size_t size);

/// Destroy array of msg/Contact messages.
/**
 * It calls
 * vrx_gazebo__msg__Contact__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
void
vrx_gazebo__msg__Contact__Sequence__destroy(vrx_gazebo__msg__Contact__Sequence * array);

/// Check for msg/Contact message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__Sequence__are_equal(const vrx_gazebo__msg__Contact__Sequence * lhs, const vrx_gazebo__msg__Contact__Sequence * rhs);

/// Copy an array of msg/Contact messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vrx_gazebo
bool
vrx_gazebo__msg__Contact__Sequence__copy(
  const vrx_gazebo__msg__Contact__Sequence * input,
  vrx_gazebo__msg__Contact__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VRX_GAZEBO__MSG__DETAIL__CONTACT__FUNCTIONS_H_
