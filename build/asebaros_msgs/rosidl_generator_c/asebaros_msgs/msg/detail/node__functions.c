// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from asebaros_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "asebaros_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `name_space`
#include "rosidl_runtime_c/string_functions.h"

bool
asebaros_msgs__msg__Node__init(asebaros_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    asebaros_msgs__msg__Node__fini(msg);
    return false;
  }
  // name_space
  if (!rosidl_runtime_c__String__init(&msg->name_space)) {
    asebaros_msgs__msg__Node__fini(msg);
    return false;
  }
  // running
  // ignored
  // connected
  return true;
}

void
asebaros_msgs__msg__Node__fini(asebaros_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_space
  rosidl_runtime_c__String__fini(&msg->name_space);
  // running
  // ignored
  // connected
}

bool
asebaros_msgs__msg__Node__are_equal(const asebaros_msgs__msg__Node * lhs, const asebaros_msgs__msg__Node * rhs)
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
  // name_space
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name_space), &(rhs->name_space)))
  {
    return false;
  }
  // running
  if (lhs->running != rhs->running) {
    return false;
  }
  // ignored
  if (lhs->ignored != rhs->ignored) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  return true;
}

bool
asebaros_msgs__msg__Node__copy(
  const asebaros_msgs__msg__Node * input,
  asebaros_msgs__msg__Node * output)
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
  // name_space
  if (!rosidl_runtime_c__String__copy(
      &(input->name_space), &(output->name_space)))
  {
    return false;
  }
  // running
  output->running = input->running;
  // ignored
  output->ignored = input->ignored;
  // connected
  output->connected = input->connected;
  return true;
}

asebaros_msgs__msg__Node *
asebaros_msgs__msg__Node__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Node * msg = (asebaros_msgs__msg__Node *)allocator.allocate(sizeof(asebaros_msgs__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__msg__Node));
  bool success = asebaros_msgs__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__msg__Node__destroy(asebaros_msgs__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__msg__Node__Sequence__init(asebaros_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Node * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__msg__Node)) {
      return false;
    }
    data = (asebaros_msgs__msg__Node *)allocator.zero_allocate(size, sizeof(asebaros_msgs__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__msg__Node__fini(&data[i - 1]);
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
asebaros_msgs__msg__Node__Sequence__fini(asebaros_msgs__msg__Node__Sequence * array)
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
      asebaros_msgs__msg__Node__fini(&array->data[i]);
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

asebaros_msgs__msg__Node__Sequence *
asebaros_msgs__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Node__Sequence * array = (asebaros_msgs__msg__Node__Sequence *)allocator.allocate(sizeof(asebaros_msgs__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__msg__Node__Sequence__destroy(asebaros_msgs__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__msg__Node__Sequence__are_equal(const asebaros_msgs__msg__Node__Sequence * lhs, const asebaros_msgs__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__msg__Node__Sequence__copy(
  const asebaros_msgs__msg__Node__Sequence * input,
  asebaros_msgs__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__msg__Node)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__msg__Node * data =
      (asebaros_msgs__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
