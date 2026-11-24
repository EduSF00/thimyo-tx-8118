#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "project_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__project_msgs__msg__LocalizationObject() -> *const std::ffi::c_void;
}

#[link(name = "project_msgs__rosidl_generator_c")]
extern "C" {
    fn project_msgs__msg__LocalizationObject__init(msg: *mut LocalizationObject) -> bool;
    fn project_msgs__msg__LocalizationObject__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LocalizationObject>, size: usize) -> bool;
    fn project_msgs__msg__LocalizationObject__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LocalizationObject>);
    fn project_msgs__msg__LocalizationObject__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LocalizationObject>, out_seq: *mut rosidl_runtime_rs::Sequence<LocalizationObject>) -> bool;
}

// Corresponds to project_msgs__msg__LocalizationObject
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalizationObject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_linear: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_angular: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sen_angular: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cos_angular: f64,

}



impl Default for LocalizationObject {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !project_msgs__msg__LocalizationObject__init(&mut msg as *mut _) {
        panic!("Call to project_msgs__msg__LocalizationObject__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LocalizationObject {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__LocalizationObject__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__LocalizationObject__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__LocalizationObject__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LocalizationObject {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LocalizationObject where Self: Sized {
  const TYPE_NAME: &'static str = "project_msgs/msg/LocalizationObject";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__project_msgs__msg__LocalizationObject() }
  }
}


#[link(name = "project_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__project_msgs__msg__Error() -> *const std::ffi::c_void;
}

#[link(name = "project_msgs__rosidl_generator_c")]
extern "C" {
    fn project_msgs__msg__Error__init(msg: *mut Error) -> bool;
    fn project_msgs__msg__Error__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Error>, size: usize) -> bool;
    fn project_msgs__msg__Error__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Error>);
    fn project_msgs__msg__Error__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Error>, out_seq: *mut rosidl_runtime_rs::Sequence<Error>) -> bool;
}

// Corresponds to project_msgs__msg__Error
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_linear: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_angular: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_angular_sen: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error_angular_cos: f64,

}



impl Default for Error {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !project_msgs__msg__Error__init(&mut msg as *mut _) {
        panic!("Call to project_msgs__msg__Error__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Error {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__Error__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__Error__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { project_msgs__msg__Error__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Error {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Error where Self: Sized {
  const TYPE_NAME: &'static str = "project_msgs/msg/Error";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__project_msgs__msg__Error() }
  }
}


