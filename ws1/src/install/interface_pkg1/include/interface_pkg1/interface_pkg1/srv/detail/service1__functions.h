// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interface_pkg1:srv/Service1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__SRV__DETAIL__SERVICE1__FUNCTIONS_H_
#define INTERFACE_PKG1__SRV__DETAIL__SERVICE1__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interface_pkg1/msg/rosidl_generator_c__visibility_control.h"

#include "interface_pkg1/srv/detail/service1__struct.h"

/// Initialize srv/Service1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_pkg1__srv__Service1_Request
 * )) before or use
 * interface_pkg1__srv__Service1_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__init(interface_pkg1__srv__Service1_Request * msg);

/// Finalize srv/Service1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Request__fini(interface_pkg1__srv__Service1_Request * msg);

/// Create srv/Service1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_pkg1__srv__Service1_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
interface_pkg1__srv__Service1_Request *
interface_pkg1__srv__Service1_Request__create();

/// Destroy srv/Service1 message.
/**
 * It calls
 * interface_pkg1__srv__Service1_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Request__destroy(interface_pkg1__srv__Service1_Request * msg);

/// Check for srv/Service1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__are_equal(const interface_pkg1__srv__Service1_Request * lhs, const interface_pkg1__srv__Service1_Request * rhs);

/// Copy a srv/Service1 message.
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
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__copy(
  const interface_pkg1__srv__Service1_Request * input,
  interface_pkg1__srv__Service1_Request * output);

/// Initialize array of srv/Service1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_pkg1__srv__Service1_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__Sequence__init(interface_pkg1__srv__Service1_Request__Sequence * array, size_t size);

/// Finalize array of srv/Service1 messages.
/**
 * It calls
 * interface_pkg1__srv__Service1_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Request__Sequence__fini(interface_pkg1__srv__Service1_Request__Sequence * array);

/// Create array of srv/Service1 messages.
/**
 * It allocates the memory for the array and calls
 * interface_pkg1__srv__Service1_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
interface_pkg1__srv__Service1_Request__Sequence *
interface_pkg1__srv__Service1_Request__Sequence__create(size_t size);

/// Destroy array of srv/Service1 messages.
/**
 * It calls
 * interface_pkg1__srv__Service1_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Request__Sequence__destroy(interface_pkg1__srv__Service1_Request__Sequence * array);

/// Check for srv/Service1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__Sequence__are_equal(const interface_pkg1__srv__Service1_Request__Sequence * lhs, const interface_pkg1__srv__Service1_Request__Sequence * rhs);

/// Copy an array of srv/Service1 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Request__Sequence__copy(
  const interface_pkg1__srv__Service1_Request__Sequence * input,
  interface_pkg1__srv__Service1_Request__Sequence * output);

/// Initialize srv/Service1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_pkg1__srv__Service1_Response
 * )) before or use
 * interface_pkg1__srv__Service1_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__init(interface_pkg1__srv__Service1_Response * msg);

/// Finalize srv/Service1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Response__fini(interface_pkg1__srv__Service1_Response * msg);

/// Create srv/Service1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_pkg1__srv__Service1_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
interface_pkg1__srv__Service1_Response *
interface_pkg1__srv__Service1_Response__create();

/// Destroy srv/Service1 message.
/**
 * It calls
 * interface_pkg1__srv__Service1_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Response__destroy(interface_pkg1__srv__Service1_Response * msg);

/// Check for srv/Service1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__are_equal(const interface_pkg1__srv__Service1_Response * lhs, const interface_pkg1__srv__Service1_Response * rhs);

/// Copy a srv/Service1 message.
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
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__copy(
  const interface_pkg1__srv__Service1_Response * input,
  interface_pkg1__srv__Service1_Response * output);

/// Initialize array of srv/Service1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_pkg1__srv__Service1_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__Sequence__init(interface_pkg1__srv__Service1_Response__Sequence * array, size_t size);

/// Finalize array of srv/Service1 messages.
/**
 * It calls
 * interface_pkg1__srv__Service1_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Response__Sequence__fini(interface_pkg1__srv__Service1_Response__Sequence * array);

/// Create array of srv/Service1 messages.
/**
 * It allocates the memory for the array and calls
 * interface_pkg1__srv__Service1_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
interface_pkg1__srv__Service1_Response__Sequence *
interface_pkg1__srv__Service1_Response__Sequence__create(size_t size);

/// Destroy array of srv/Service1 messages.
/**
 * It calls
 * interface_pkg1__srv__Service1_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
void
interface_pkg1__srv__Service1_Response__Sequence__destroy(interface_pkg1__srv__Service1_Response__Sequence * array);

/// Check for srv/Service1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__Sequence__are_equal(const interface_pkg1__srv__Service1_Response__Sequence * lhs, const interface_pkg1__srv__Service1_Response__Sequence * rhs);

/// Copy an array of srv/Service1 messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interface_pkg1
bool
interface_pkg1__srv__Service1_Response__Sequence__copy(
  const interface_pkg1__srv__Service1_Response__Sequence * input,
  interface_pkg1__srv__Service1_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG1__SRV__DETAIL__SERVICE1__FUNCTIONS_H_
