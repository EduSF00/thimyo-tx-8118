// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_msgs:msg/Error.idl
// generated code does not contain a copyright notice
#include "project_msgs/msg/detail/error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
project_msgs__msg__Error__init(project_msgs__msg__Error * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    project_msgs__msg__Error__fini(msg);
    return false;
  }
  // error_linear
  // error_angular
  // error_angular_sen
  // error_angular_cos
  return true;
}

void
project_msgs__msg__Error__fini(project_msgs__msg__Error * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // error_linear
  // error_angular
  // error_angular_sen
  // error_angular_cos
}

bool
project_msgs__msg__Error__are_equal(const project_msgs__msg__Error * lhs, const project_msgs__msg__Error * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // error_linear
  if (lhs->error_linear != rhs->error_linear) {
    return false;
  }
  // error_angular
  if (lhs->error_angular != rhs->error_angular) {
    return false;
  }
  // error_angular_sen
  if (lhs->error_angular_sen != rhs->error_angular_sen) {
    return false;
  }
  // error_angular_cos
  if (lhs->error_angular_cos != rhs->error_angular_cos) {
    return false;
  }
  return true;
}

bool
project_msgs__msg__Error__copy(
  const project_msgs__msg__Error * input,
  project_msgs__msg__Error * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // error_linear
  output->error_linear = input->error_linear;
  // error_angular
  output->error_angular = input->error_angular;
  // error_angular_sen
  output->error_angular_sen = input->error_angular_sen;
  // error_angular_cos
  output->error_angular_cos = input->error_angular_cos;
  return true;
}

project_msgs__msg__Error *
project_msgs__msg__Error__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__Error * msg = (project_msgs__msg__Error *)allocator.allocate(sizeof(project_msgs__msg__Error), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_msgs__msg__Error));
  bool success = project_msgs__msg__Error__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project_msgs__msg__Error__destroy(project_msgs__msg__Error * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project_msgs__msg__Error__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project_msgs__msg__Error__Sequence__init(project_msgs__msg__Error__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__Error * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(project_msgs__msg__Error)) {
      return false;
    }
    data = (project_msgs__msg__Error *)allocator.zero_allocate(size, sizeof(project_msgs__msg__Error), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_msgs__msg__Error__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_msgs__msg__Error__fini(&data[i - 1]);
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
project_msgs__msg__Error__Sequence__fini(project_msgs__msg__Error__Sequence * array)
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
      project_msgs__msg__Error__fini(&array->data[i]);
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

project_msgs__msg__Error__Sequence *
project_msgs__msg__Error__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__Error__Sequence * array = (project_msgs__msg__Error__Sequence *)allocator.allocate(sizeof(project_msgs__msg__Error__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project_msgs__msg__Error__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project_msgs__msg__Error__Sequence__destroy(project_msgs__msg__Error__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project_msgs__msg__Error__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project_msgs__msg__Error__Sequence__are_equal(const project_msgs__msg__Error__Sequence * lhs, const project_msgs__msg__Error__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project_msgs__msg__Error__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project_msgs__msg__Error__Sequence__copy(
  const project_msgs__msg__Error__Sequence * input,
  project_msgs__msg__Error__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(project_msgs__msg__Error)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(project_msgs__msg__Error);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project_msgs__msg__Error * data =
      (project_msgs__msg__Error *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project_msgs__msg__Error__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project_msgs__msg__Error__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project_msgs__msg__Error__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
