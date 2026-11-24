// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from asebaros_msgs:msg/NodeDescription.idl
// generated code does not contain a copyright notice
#include "asebaros_msgs/msg/detail/node_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `events`
// Member `variables`
#include "rosidl_runtime_c/string_functions.h"
// Member `constants`
#include "asebaros_msgs/msg/detail/constant__functions.h"

bool
asebaros_msgs__msg__NodeDescription__init(asebaros_msgs__msg__NodeDescription * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    asebaros_msgs__msg__NodeDescription__fini(msg);
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__init(&msg->constants, 0)) {
    asebaros_msgs__msg__NodeDescription__fini(msg);
    return false;
  }
  // events
  if (!rosidl_runtime_c__String__Sequence__init(&msg->events, 0)) {
    asebaros_msgs__msg__NodeDescription__fini(msg);
    return false;
  }
  // variables
  if (!rosidl_runtime_c__String__Sequence__init(&msg->variables, 0)) {
    asebaros_msgs__msg__NodeDescription__fini(msg);
    return false;
  }
  return true;
}

void
asebaros_msgs__msg__NodeDescription__fini(asebaros_msgs__msg__NodeDescription * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // constants
  asebaros_msgs__msg__Constant__Sequence__fini(&msg->constants);
  // events
  rosidl_runtime_c__String__Sequence__fini(&msg->events);
  // variables
  rosidl_runtime_c__String__Sequence__fini(&msg->variables);
}

bool
asebaros_msgs__msg__NodeDescription__are_equal(const asebaros_msgs__msg__NodeDescription * lhs, const asebaros_msgs__msg__NodeDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__are_equal(
      &(lhs->constants), &(rhs->constants)))
  {
    return false;
  }
  // events
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // variables
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->variables), &(rhs->variables)))
  {
    return false;
  }
  return true;
}

bool
asebaros_msgs__msg__NodeDescription__copy(
  const asebaros_msgs__msg__NodeDescription * input,
  asebaros_msgs__msg__NodeDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // constants
  if (!asebaros_msgs__msg__Constant__Sequence__copy(
      &(input->constants), &(output->constants)))
  {
    return false;
  }
  // events
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // variables
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->variables), &(output->variables)))
  {
    return false;
  }
  return true;
}

asebaros_msgs__msg__NodeDescription *
asebaros_msgs__msg__NodeDescription__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__NodeDescription * msg = (asebaros_msgs__msg__NodeDescription *)allocator.allocate(sizeof(asebaros_msgs__msg__NodeDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__msg__NodeDescription));
  bool success = asebaros_msgs__msg__NodeDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__msg__NodeDescription__destroy(asebaros_msgs__msg__NodeDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__msg__NodeDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__msg__NodeDescription__Sequence__init(asebaros_msgs__msg__NodeDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__NodeDescription * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__msg__NodeDescription)) {
      return false;
    }
    data = (asebaros_msgs__msg__NodeDescription *)allocator.zero_allocate(size, sizeof(asebaros_msgs__msg__NodeDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__msg__NodeDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__msg__NodeDescription__fini(&data[i - 1]);
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
asebaros_msgs__msg__NodeDescription__Sequence__fini(asebaros_msgs__msg__NodeDescription__Sequence * array)
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
      asebaros_msgs__msg__NodeDescription__fini(&array->data[i]);
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

asebaros_msgs__msg__NodeDescription__Sequence *
asebaros_msgs__msg__NodeDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__NodeDescription__Sequence * array = (asebaros_msgs__msg__NodeDescription__Sequence *)allocator.allocate(sizeof(asebaros_msgs__msg__NodeDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__msg__NodeDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__msg__NodeDescription__Sequence__destroy(asebaros_msgs__msg__NodeDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__msg__NodeDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__msg__NodeDescription__Sequence__are_equal(const asebaros_msgs__msg__NodeDescription__Sequence * lhs, const asebaros_msgs__msg__NodeDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__msg__NodeDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__msg__NodeDescription__Sequence__copy(
  const asebaros_msgs__msg__NodeDescription__Sequence * input,
  asebaros_msgs__msg__NodeDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__msg__NodeDescription)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__msg__NodeDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__msg__NodeDescription * data =
      (asebaros_msgs__msg__NodeDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__msg__NodeDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__msg__NodeDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__msg__NodeDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
