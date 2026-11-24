// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from thymio_msgs:msg/SystemSound.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/system_sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
thymio_msgs__msg__SystemSound__init(thymio_msgs__msg__SystemSound * msg)
{
  if (!msg) {
    return false;
  }
  // sound
  return true;
}

void
thymio_msgs__msg__SystemSound__fini(thymio_msgs__msg__SystemSound * msg)
{
  if (!msg) {
    return;
  }
  // sound
}

bool
thymio_msgs__msg__SystemSound__are_equal(const thymio_msgs__msg__SystemSound * lhs, const thymio_msgs__msg__SystemSound * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sound
  if (lhs->sound != rhs->sound) {
    return false;
  }
  return true;
}

bool
thymio_msgs__msg__SystemSound__copy(
  const thymio_msgs__msg__SystemSound * input,
  thymio_msgs__msg__SystemSound * output)
{
  if (!input || !output) {
    return false;
  }
  // sound
  output->sound = input->sound;
  return true;
}

thymio_msgs__msg__SystemSound *
thymio_msgs__msg__SystemSound__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__SystemSound * msg = (thymio_msgs__msg__SystemSound *)allocator.allocate(sizeof(thymio_msgs__msg__SystemSound), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio_msgs__msg__SystemSound));
  bool success = thymio_msgs__msg__SystemSound__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
thymio_msgs__msg__SystemSound__destroy(thymio_msgs__msg__SystemSound * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    thymio_msgs__msg__SystemSound__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
thymio_msgs__msg__SystemSound__Sequence__init(thymio_msgs__msg__SystemSound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__SystemSound * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(thymio_msgs__msg__SystemSound)) {
      return false;
    }
    data = (thymio_msgs__msg__SystemSound *)allocator.zero_allocate(size, sizeof(thymio_msgs__msg__SystemSound), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio_msgs__msg__SystemSound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio_msgs__msg__SystemSound__fini(&data[i - 1]);
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
thymio_msgs__msg__SystemSound__Sequence__fini(thymio_msgs__msg__SystemSound__Sequence * array)
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
      thymio_msgs__msg__SystemSound__fini(&array->data[i]);
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

thymio_msgs__msg__SystemSound__Sequence *
thymio_msgs__msg__SystemSound__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__SystemSound__Sequence * array = (thymio_msgs__msg__SystemSound__Sequence *)allocator.allocate(sizeof(thymio_msgs__msg__SystemSound__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = thymio_msgs__msg__SystemSound__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
thymio_msgs__msg__SystemSound__Sequence__destroy(thymio_msgs__msg__SystemSound__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    thymio_msgs__msg__SystemSound__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
thymio_msgs__msg__SystemSound__Sequence__are_equal(const thymio_msgs__msg__SystemSound__Sequence * lhs, const thymio_msgs__msg__SystemSound__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!thymio_msgs__msg__SystemSound__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
thymio_msgs__msg__SystemSound__Sequence__copy(
  const thymio_msgs__msg__SystemSound__Sequence * input,
  thymio_msgs__msg__SystemSound__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(thymio_msgs__msg__SystemSound)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(thymio_msgs__msg__SystemSound);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    thymio_msgs__msg__SystemSound * data =
      (thymio_msgs__msg__SystemSound *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!thymio_msgs__msg__SystemSound__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          thymio_msgs__msg__SystemSound__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!thymio_msgs__msg__SystemSound__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
