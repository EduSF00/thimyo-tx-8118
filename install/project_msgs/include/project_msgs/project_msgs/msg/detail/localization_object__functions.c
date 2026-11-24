// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from project_msgs:msg/LocalizationObject.idl
// generated code does not contain a copyright notice
#include "project_msgs/msg/detail/localization_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
project_msgs__msg__LocalizationObject__init(project_msgs__msg__LocalizationObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    project_msgs__msg__LocalizationObject__fini(msg);
    return false;
  }
  // distance_linear
  // distance_angular
  // sen_angular
  // cos_angular
  return true;
}

void
project_msgs__msg__LocalizationObject__fini(project_msgs__msg__LocalizationObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // distance_linear
  // distance_angular
  // sen_angular
  // cos_angular
}

bool
project_msgs__msg__LocalizationObject__are_equal(const project_msgs__msg__LocalizationObject * lhs, const project_msgs__msg__LocalizationObject * rhs)
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
  // distance_linear
  if (lhs->distance_linear != rhs->distance_linear) {
    return false;
  }
  // distance_angular
  if (lhs->distance_angular != rhs->distance_angular) {
    return false;
  }
  // sen_angular
  if (lhs->sen_angular != rhs->sen_angular) {
    return false;
  }
  // cos_angular
  if (lhs->cos_angular != rhs->cos_angular) {
    return false;
  }
  return true;
}

bool
project_msgs__msg__LocalizationObject__copy(
  const project_msgs__msg__LocalizationObject * input,
  project_msgs__msg__LocalizationObject * output)
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
  // distance_linear
  output->distance_linear = input->distance_linear;
  // distance_angular
  output->distance_angular = input->distance_angular;
  // sen_angular
  output->sen_angular = input->sen_angular;
  // cos_angular
  output->cos_angular = input->cos_angular;
  return true;
}

project_msgs__msg__LocalizationObject *
project_msgs__msg__LocalizationObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__LocalizationObject * msg = (project_msgs__msg__LocalizationObject *)allocator.allocate(sizeof(project_msgs__msg__LocalizationObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(project_msgs__msg__LocalizationObject));
  bool success = project_msgs__msg__LocalizationObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
project_msgs__msg__LocalizationObject__destroy(project_msgs__msg__LocalizationObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    project_msgs__msg__LocalizationObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
project_msgs__msg__LocalizationObject__Sequence__init(project_msgs__msg__LocalizationObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__LocalizationObject * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(project_msgs__msg__LocalizationObject)) {
      return false;
    }
    data = (project_msgs__msg__LocalizationObject *)allocator.zero_allocate(size, sizeof(project_msgs__msg__LocalizationObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = project_msgs__msg__LocalizationObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        project_msgs__msg__LocalizationObject__fini(&data[i - 1]);
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
project_msgs__msg__LocalizationObject__Sequence__fini(project_msgs__msg__LocalizationObject__Sequence * array)
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
      project_msgs__msg__LocalizationObject__fini(&array->data[i]);
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

project_msgs__msg__LocalizationObject__Sequence *
project_msgs__msg__LocalizationObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  project_msgs__msg__LocalizationObject__Sequence * array = (project_msgs__msg__LocalizationObject__Sequence *)allocator.allocate(sizeof(project_msgs__msg__LocalizationObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = project_msgs__msg__LocalizationObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
project_msgs__msg__LocalizationObject__Sequence__destroy(project_msgs__msg__LocalizationObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    project_msgs__msg__LocalizationObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
project_msgs__msg__LocalizationObject__Sequence__are_equal(const project_msgs__msg__LocalizationObject__Sequence * lhs, const project_msgs__msg__LocalizationObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!project_msgs__msg__LocalizationObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
project_msgs__msg__LocalizationObject__Sequence__copy(
  const project_msgs__msg__LocalizationObject__Sequence * input,
  project_msgs__msg__LocalizationObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(project_msgs__msg__LocalizationObject)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(project_msgs__msg__LocalizationObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    project_msgs__msg__LocalizationObject * data =
      (project_msgs__msg__LocalizationObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!project_msgs__msg__LocalizationObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          project_msgs__msg__LocalizationObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!project_msgs__msg__LocalizationObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
