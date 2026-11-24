// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from asebaros_msgs:srv/GetVariable.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "asebaros_msgs/srv/get_variable.h"


#ifndef ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__FUNCTIONS_H_
#define ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "asebaros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "asebaros_msgs/srv/detail/get_variable__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__GetVariable__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__GetVariable__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__GetVariable__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__GetVariable__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * asebaros_msgs__srv__GetVariable_Request
 * )) before or use
 * asebaros_msgs__srv__GetVariable_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__init(asebaros_msgs__srv__GetVariable_Request * msg);

/// Finalize srv/GetVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Request__fini(asebaros_msgs__srv__GetVariable_Request * msg);

/// Create srv/GetVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * asebaros_msgs__srv__GetVariable_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Request *
asebaros_msgs__srv__GetVariable_Request__create(void);

/// Destroy srv/GetVariable message.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Request__destroy(asebaros_msgs__srv__GetVariable_Request * msg);

/// Check for srv/GetVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__are_equal(const asebaros_msgs__srv__GetVariable_Request * lhs, const asebaros_msgs__srv__GetVariable_Request * rhs);

/// Copy a srv/GetVariable message.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__copy(
  const asebaros_msgs__srv__GetVariable_Request * input,
  asebaros_msgs__srv__GetVariable_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__GetVariable_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__GetVariable_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__GetVariable_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__GetVariable_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * asebaros_msgs__srv__GetVariable_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__Sequence__init(asebaros_msgs__srv__GetVariable_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Request__Sequence__fini(asebaros_msgs__srv__GetVariable_Request__Sequence * array);

/// Create array of srv/GetVariable messages.
/**
 * It allocates the memory for the array and calls
 * asebaros_msgs__srv__GetVariable_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Request__Sequence *
asebaros_msgs__srv__GetVariable_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Request__Sequence__destroy(asebaros_msgs__srv__GetVariable_Request__Sequence * array);

/// Check for srv/GetVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__Sequence__are_equal(const asebaros_msgs__srv__GetVariable_Request__Sequence * lhs, const asebaros_msgs__srv__GetVariable_Request__Sequence * rhs);

/// Copy an array of srv/GetVariable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Request__Sequence__copy(
  const asebaros_msgs__srv__GetVariable_Request__Sequence * input,
  asebaros_msgs__srv__GetVariable_Request__Sequence * output);

/// Initialize srv/GetVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * asebaros_msgs__srv__GetVariable_Response
 * )) before or use
 * asebaros_msgs__srv__GetVariable_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__init(asebaros_msgs__srv__GetVariable_Response * msg);

/// Finalize srv/GetVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Response__fini(asebaros_msgs__srv__GetVariable_Response * msg);

/// Create srv/GetVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * asebaros_msgs__srv__GetVariable_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Response *
asebaros_msgs__srv__GetVariable_Response__create(void);

/// Destroy srv/GetVariable message.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Response__destroy(asebaros_msgs__srv__GetVariable_Response * msg);

/// Check for srv/GetVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__are_equal(const asebaros_msgs__srv__GetVariable_Response * lhs, const asebaros_msgs__srv__GetVariable_Response * rhs);

/// Copy a srv/GetVariable message.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__copy(
  const asebaros_msgs__srv__GetVariable_Response * input,
  asebaros_msgs__srv__GetVariable_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__GetVariable_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__GetVariable_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__GetVariable_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__GetVariable_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * asebaros_msgs__srv__GetVariable_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__Sequence__init(asebaros_msgs__srv__GetVariable_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Response__Sequence__fini(asebaros_msgs__srv__GetVariable_Response__Sequence * array);

/// Create array of srv/GetVariable messages.
/**
 * It allocates the memory for the array and calls
 * asebaros_msgs__srv__GetVariable_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Response__Sequence *
asebaros_msgs__srv__GetVariable_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Response__Sequence__destroy(asebaros_msgs__srv__GetVariable_Response__Sequence * array);

/// Check for srv/GetVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__Sequence__are_equal(const asebaros_msgs__srv__GetVariable_Response__Sequence * lhs, const asebaros_msgs__srv__GetVariable_Response__Sequence * rhs);

/// Copy an array of srv/GetVariable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Response__Sequence__copy(
  const asebaros_msgs__srv__GetVariable_Response__Sequence * input,
  asebaros_msgs__srv__GetVariable_Response__Sequence * output);

/// Initialize srv/GetVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * asebaros_msgs__srv__GetVariable_Event
 * )) before or use
 * asebaros_msgs__srv__GetVariable_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__init(asebaros_msgs__srv__GetVariable_Event * msg);

/// Finalize srv/GetVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Event__fini(asebaros_msgs__srv__GetVariable_Event * msg);

/// Create srv/GetVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * asebaros_msgs__srv__GetVariable_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Event *
asebaros_msgs__srv__GetVariable_Event__create(void);

/// Destroy srv/GetVariable message.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Event__destroy(asebaros_msgs__srv__GetVariable_Event * msg);

/// Check for srv/GetVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__are_equal(const asebaros_msgs__srv__GetVariable_Event * lhs, const asebaros_msgs__srv__GetVariable_Event * rhs);

/// Copy a srv/GetVariable message.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__copy(
  const asebaros_msgs__srv__GetVariable_Event * input,
  asebaros_msgs__srv__GetVariable_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_type_hash_t *
asebaros_msgs__srv__GetVariable_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeDescription *
asebaros_msgs__srv__GetVariable_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource *
asebaros_msgs__srv__GetVariable_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
asebaros_msgs__srv__GetVariable_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * asebaros_msgs__srv__GetVariable_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__Sequence__init(asebaros_msgs__srv__GetVariable_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Event__Sequence__fini(asebaros_msgs__srv__GetVariable_Event__Sequence * array);

/// Create array of srv/GetVariable messages.
/**
 * It allocates the memory for the array and calls
 * asebaros_msgs__srv__GetVariable_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
asebaros_msgs__srv__GetVariable_Event__Sequence *
asebaros_msgs__srv__GetVariable_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetVariable messages.
/**
 * It calls
 * asebaros_msgs__srv__GetVariable_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
void
asebaros_msgs__srv__GetVariable_Event__Sequence__destroy(asebaros_msgs__srv__GetVariable_Event__Sequence * array);

/// Check for srv/GetVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__Sequence__are_equal(const asebaros_msgs__srv__GetVariable_Event__Sequence * lhs, const asebaros_msgs__srv__GetVariable_Event__Sequence * rhs);

/// Copy an array of srv/GetVariable messages.
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
ROSIDL_GENERATOR_C_PUBLIC_asebaros_msgs
bool
asebaros_msgs__srv__GetVariable_Event__Sequence__copy(
  const asebaros_msgs__srv__GetVariable_Event__Sequence * input,
  asebaros_msgs__srv__GetVariable_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ASEBAROS_MSGS__SRV__DETAIL__GET_VARIABLE__FUNCTIONS_H_
