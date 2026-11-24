// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from asebaros_msgs:srv/LoadScript.idl
// generated code does not contain a copyright notice
#include "asebaros_msgs/srv/detail/load_script__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `constants`
#include "asebaros_msgs/msg/detail/constant__functions.h"
// Member `node_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
asebaros_msgs__srv__LoadScript_Request__init(asebaros_msgs__srv__LoadScript_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__init(&msg->file_name)) {
    asebaros_msgs__srv__LoadScript_Request__fini(msg);
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__init(&msg->constants, 0)) {
    asebaros_msgs__srv__LoadScript_Request__fini(msg);
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->node_ids, 0)) {
    asebaros_msgs__srv__LoadScript_Request__fini(msg);
    return false;
  }
  // set_as_default
  msg->set_as_default = false;
  return true;
}

void
asebaros_msgs__srv__LoadScript_Request__fini(asebaros_msgs__srv__LoadScript_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_name
  rosidl_runtime_c__String__fini(&msg->file_name);
  // constants
  asebaros_msgs__msg__Constant__Sequence__fini(&msg->constants);
  // node_ids
  rosidl_runtime_c__uint16__Sequence__fini(&msg->node_ids);
  // set_as_default
}

bool
asebaros_msgs__srv__LoadScript_Request__are_equal(const asebaros_msgs__srv__LoadScript_Request * lhs, const asebaros_msgs__srv__LoadScript_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_name), &(rhs->file_name)))
  {
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__are_equal(
      &(lhs->constants), &(rhs->constants)))
  {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->node_ids), &(rhs->node_ids)))
  {
    return false;
  }
  // set_as_default
  if (lhs->set_as_default != rhs->set_as_default) {
    return false;
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Request__copy(
  const asebaros_msgs__srv__LoadScript_Request * input,
  asebaros_msgs__srv__LoadScript_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->file_name), &(output->file_name)))
  {
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__copy(
      &(input->constants), &(output->constants)))
  {
    return false;
  }
  // node_ids
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->node_ids), &(output->node_ids)))
  {
    return false;
  }
  // set_as_default
  output->set_as_default = input->set_as_default;
  return true;
}

asebaros_msgs__srv__LoadScript_Request *
asebaros_msgs__srv__LoadScript_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Request * msg = (asebaros_msgs__srv__LoadScript_Request *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__srv__LoadScript_Request));
  bool success = asebaros_msgs__srv__LoadScript_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__srv__LoadScript_Request__destroy(asebaros_msgs__srv__LoadScript_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__srv__LoadScript_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__srv__LoadScript_Request__Sequence__init(asebaros_msgs__srv__LoadScript_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Request)) {
      return false;
    }
    data = (asebaros_msgs__srv__LoadScript_Request *)allocator.zero_allocate(size, sizeof(asebaros_msgs__srv__LoadScript_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__srv__LoadScript_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__srv__LoadScript_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
asebaros_msgs__srv__LoadScript_Request__Sequence__fini(asebaros_msgs__srv__LoadScript_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      asebaros_msgs__srv__LoadScript_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

asebaros_msgs__srv__LoadScript_Request__Sequence *
asebaros_msgs__srv__LoadScript_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Request__Sequence * array = (asebaros_msgs__srv__LoadScript_Request__Sequence *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__srv__LoadScript_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__srv__LoadScript_Request__Sequence__destroy(asebaros_msgs__srv__LoadScript_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__srv__LoadScript_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__srv__LoadScript_Request__Sequence__are_equal(const asebaros_msgs__srv__LoadScript_Request__Sequence * lhs, const asebaros_msgs__srv__LoadScript_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Request__Sequence__copy(
  const asebaros_msgs__srv__LoadScript_Request__Sequence * input,
  asebaros_msgs__srv__LoadScript_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__srv__LoadScript_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__srv__LoadScript_Request * data =
      (asebaros_msgs__srv__LoadScript_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__srv__LoadScript_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__srv__LoadScript_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
asebaros_msgs__srv__LoadScript_Response__init(asebaros_msgs__srv__LoadScript_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
asebaros_msgs__srv__LoadScript_Response__fini(asebaros_msgs__srv__LoadScript_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
asebaros_msgs__srv__LoadScript_Response__are_equal(const asebaros_msgs__srv__LoadScript_Response * lhs, const asebaros_msgs__srv__LoadScript_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Response__copy(
  const asebaros_msgs__srv__LoadScript_Response * input,
  asebaros_msgs__srv__LoadScript_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

asebaros_msgs__srv__LoadScript_Response *
asebaros_msgs__srv__LoadScript_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Response * msg = (asebaros_msgs__srv__LoadScript_Response *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__srv__LoadScript_Response));
  bool success = asebaros_msgs__srv__LoadScript_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__srv__LoadScript_Response__destroy(asebaros_msgs__srv__LoadScript_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__srv__LoadScript_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__srv__LoadScript_Response__Sequence__init(asebaros_msgs__srv__LoadScript_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Response)) {
      return false;
    }
    data = (asebaros_msgs__srv__LoadScript_Response *)allocator.zero_allocate(size, sizeof(asebaros_msgs__srv__LoadScript_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__srv__LoadScript_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__srv__LoadScript_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
asebaros_msgs__srv__LoadScript_Response__Sequence__fini(asebaros_msgs__srv__LoadScript_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      asebaros_msgs__srv__LoadScript_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

asebaros_msgs__srv__LoadScript_Response__Sequence *
asebaros_msgs__srv__LoadScript_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Response__Sequence * array = (asebaros_msgs__srv__LoadScript_Response__Sequence *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__srv__LoadScript_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__srv__LoadScript_Response__Sequence__destroy(asebaros_msgs__srv__LoadScript_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__srv__LoadScript_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__srv__LoadScript_Response__Sequence__are_equal(const asebaros_msgs__srv__LoadScript_Response__Sequence * lhs, const asebaros_msgs__srv__LoadScript_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Response__Sequence__copy(
  const asebaros_msgs__srv__LoadScript_Response__Sequence * input,
  asebaros_msgs__srv__LoadScript_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__srv__LoadScript_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__srv__LoadScript_Response * data =
      (asebaros_msgs__srv__LoadScript_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__srv__LoadScript_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__srv__LoadScript_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "asebaros_msgs/srv/detail/load_script__functions.h"

bool
asebaros_msgs__srv__LoadScript_Event__init(asebaros_msgs__srv__LoadScript_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    asebaros_msgs__srv__LoadScript_Event__fini(msg);
    return false;
  }
  // request
  if (!asebaros_msgs__srv__LoadScript_Request__Sequence__init(&msg->request, 0)) {
    asebaros_msgs__srv__LoadScript_Event__fini(msg);
    return false;
  }
  // response
  if (!asebaros_msgs__srv__LoadScript_Response__Sequence__init(&msg->response, 0)) {
    asebaros_msgs__srv__LoadScript_Event__fini(msg);
    return false;
  }
  return true;
}

void
asebaros_msgs__srv__LoadScript_Event__fini(asebaros_msgs__srv__LoadScript_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  asebaros_msgs__srv__LoadScript_Request__Sequence__fini(&msg->request);
  // response
  asebaros_msgs__srv__LoadScript_Response__Sequence__fini(&msg->response);
}

bool
asebaros_msgs__srv__LoadScript_Event__are_equal(const asebaros_msgs__srv__LoadScript_Event * lhs, const asebaros_msgs__srv__LoadScript_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!asebaros_msgs__srv__LoadScript_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!asebaros_msgs__srv__LoadScript_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Event__copy(
  const asebaros_msgs__srv__LoadScript_Event * input,
  asebaros_msgs__srv__LoadScript_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!asebaros_msgs__srv__LoadScript_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!asebaros_msgs__srv__LoadScript_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

asebaros_msgs__srv__LoadScript_Event *
asebaros_msgs__srv__LoadScript_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Event * msg = (asebaros_msgs__srv__LoadScript_Event *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__srv__LoadScript_Event));
  bool success = asebaros_msgs__srv__LoadScript_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__srv__LoadScript_Event__destroy(asebaros_msgs__srv__LoadScript_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__srv__LoadScript_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__srv__LoadScript_Event__Sequence__init(asebaros_msgs__srv__LoadScript_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Event)) {
      return false;
    }
    data = (asebaros_msgs__srv__LoadScript_Event *)allocator.zero_allocate(size, sizeof(asebaros_msgs__srv__LoadScript_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__srv__LoadScript_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__srv__LoadScript_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
asebaros_msgs__srv__LoadScript_Event__Sequence__fini(asebaros_msgs__srv__LoadScript_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      asebaros_msgs__srv__LoadScript_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

asebaros_msgs__srv__LoadScript_Event__Sequence *
asebaros_msgs__srv__LoadScript_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__srv__LoadScript_Event__Sequence * array = (asebaros_msgs__srv__LoadScript_Event__Sequence *)allocator.allocate(sizeof(asebaros_msgs__srv__LoadScript_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__srv__LoadScript_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__srv__LoadScript_Event__Sequence__destroy(asebaros_msgs__srv__LoadScript_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__srv__LoadScript_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__srv__LoadScript_Event__Sequence__are_equal(const asebaros_msgs__srv__LoadScript_Event__Sequence * lhs, const asebaros_msgs__srv__LoadScript_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__srv__LoadScript_Event__Sequence__copy(
  const asebaros_msgs__srv__LoadScript_Event__Sequence * input,
  asebaros_msgs__srv__LoadScript_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__srv__LoadScript_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__srv__LoadScript_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__srv__LoadScript_Event * data =
      (asebaros_msgs__srv__LoadScript_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__srv__LoadScript_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__srv__LoadScript_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__srv__LoadScript_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
