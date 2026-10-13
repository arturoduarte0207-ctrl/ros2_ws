// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robx7_interfaces:srv/SumarDosFlotantes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/sumar_dos_flotantes.h"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__FUNCTIONS_H_
#define ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__FUNCTIONS_H_

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
#include "robx7_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__srv__SumarDosFlotantes__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robx7_interfaces__srv__SumarDosFlotantes__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__srv__SumarDosFlotantes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__srv__SumarDosFlotantes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SumarDosFlotantes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robx7_interfaces__srv__SumarDosFlotantes_Request
 * )) before or use
 * robx7_interfaces__srv__SumarDosFlotantes_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__init(robx7_interfaces__srv__SumarDosFlotantes_Request * msg);

/// Finalize srv/SumarDosFlotantes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Request__fini(robx7_interfaces__srv__SumarDosFlotantes_Request * msg);

/// Create srv/SumarDosFlotantes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Request *
robx7_interfaces__srv__SumarDosFlotantes_Request__create(void);

/// Destroy srv/SumarDosFlotantes message.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Request__destroy(robx7_interfaces__srv__SumarDosFlotantes_Request * msg);

/// Check for srv/SumarDosFlotantes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Request * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Request * rhs);

/// Copy a srv/SumarDosFlotantes message.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Request * input,
  robx7_interfaces__srv__SumarDosFlotantes_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__srv__SumarDosFlotantes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the number of elements and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * array, size_t size);

/// Finalize array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * array);

/// Create array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the array and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__create(size_t size);

/// Destroy array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__destroy(robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * array);

/// Check for srv/SumarDosFlotantes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * rhs);

/// Copy an array of srv/SumarDosFlotantes messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * input,
  robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence * output);

/// Initialize srv/SumarDosFlotantes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robx7_interfaces__srv__SumarDosFlotantes_Response
 * )) before or use
 * robx7_interfaces__srv__SumarDosFlotantes_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__init(robx7_interfaces__srv__SumarDosFlotantes_Response * msg);

/// Finalize srv/SumarDosFlotantes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Response__fini(robx7_interfaces__srv__SumarDosFlotantes_Response * msg);

/// Create srv/SumarDosFlotantes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Response *
robx7_interfaces__srv__SumarDosFlotantes_Response__create(void);

/// Destroy srv/SumarDosFlotantes message.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Response__destroy(robx7_interfaces__srv__SumarDosFlotantes_Response * msg);

/// Check for srv/SumarDosFlotantes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Response * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Response * rhs);

/// Copy a srv/SumarDosFlotantes message.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Response * input,
  robx7_interfaces__srv__SumarDosFlotantes_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__srv__SumarDosFlotantes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the number of elements and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * array, size_t size);

/// Finalize array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * array);

/// Create array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the array and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__create(size_t size);

/// Destroy array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__destroy(robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * array);

/// Check for srv/SumarDosFlotantes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * rhs);

/// Copy an array of srv/SumarDosFlotantes messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * input,
  robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence * output);

/// Initialize srv/SumarDosFlotantes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robx7_interfaces__srv__SumarDosFlotantes_Event
 * )) before or use
 * robx7_interfaces__srv__SumarDosFlotantes_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__init(robx7_interfaces__srv__SumarDosFlotantes_Event * msg);

/// Finalize srv/SumarDosFlotantes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Event__fini(robx7_interfaces__srv__SumarDosFlotantes_Event * msg);

/// Create srv/SumarDosFlotantes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Event *
robx7_interfaces__srv__SumarDosFlotantes_Event__create(void);

/// Destroy srv/SumarDosFlotantes message.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Event__destroy(robx7_interfaces__srv__SumarDosFlotantes_Event * msg);

/// Check for srv/SumarDosFlotantes message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Event * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Event * rhs);

/// Copy a srv/SumarDosFlotantes message.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Event * input,
  robx7_interfaces__srv__SumarDosFlotantes_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_type_hash_t *
robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robx7_interfaces__srv__SumarDosFlotantes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the number of elements and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__init(robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * array, size_t size);

/// Finalize array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__fini(robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * array);

/// Create array of srv/SumarDosFlotantes messages.
/**
 * It allocates the memory for the array and calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence *
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__create(size_t size);

/// Destroy array of srv/SumarDosFlotantes messages.
/**
 * It calls
 * robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
void
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__destroy(robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * array);

/// Check for srv/SumarDosFlotantes message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__are_equal(const robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * lhs, const robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * rhs);

/// Copy an array of srv/SumarDosFlotantes messages.
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
ROSIDL_GENERATOR_C_PUBLIC_robx7_interfaces
bool
robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence__copy(
  const robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * input,
  robx7_interfaces__srv__SumarDosFlotantes_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__FUNCTIONS_H_
