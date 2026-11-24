#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetNodeList_Request() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetNodeList_Request__init(msg: *mut GetNodeList_Request) -> bool;
    fn asebaros_msgs__srv__GetNodeList_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Request>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetNodeList_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Request>);
    fn asebaros_msgs__srv__GetNodeList_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNodeList_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Request>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetNodeList_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ignored: bool,

}



impl Default for GetNodeList_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetNodeList_Request__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetNodeList_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNodeList_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNodeList_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNodeList_Request where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetNodeList_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetNodeList_Request() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetNodeList_Response() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetNodeList_Response__init(msg: *mut GetNodeList_Response) -> bool;
    fn asebaros_msgs__srv__GetNodeList_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Response>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetNodeList_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Response>);
    fn asebaros_msgs__srv__GetNodeList_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetNodeList_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetNodeList_Response>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetNodeList_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeList_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Node>,

}



impl Default for GetNodeList_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetNodeList_Response__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetNodeList_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetNodeList_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetNodeList_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetNodeList_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetNodeList_Response where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetNodeList_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetNodeList_Response() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetVariable_Request() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetVariable_Request__init(msg: *mut GetVariable_Request) -> bool;
    fn asebaros_msgs__srv__GetVariable_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Request>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetVariable_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Request>);
    fn asebaros_msgs__srv__GetVariable_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVariable_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Request>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetVariable_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVariable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub variable: rosidl_runtime_rs::String,

}



impl Default for GetVariable_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetVariable_Request__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetVariable_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVariable_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVariable_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVariable_Request where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetVariable_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetVariable_Request() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetVariable_Response() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetVariable_Response__init(msg: *mut GetVariable_Response) -> bool;
    fn asebaros_msgs__srv__GetVariable_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Response>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetVariable_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Response>);
    fn asebaros_msgs__srv__GetVariable_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetVariable_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetVariable_Response>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetVariable_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVariable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for GetVariable_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetVariable_Response__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetVariable_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetVariable_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetVariable_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetVariable_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetVariable_Response where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetVariable_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetVariable_Response() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__LoadScript_Request() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__LoadScript_Request__init(msg: *mut LoadScript_Request) -> bool;
    fn asebaros_msgs__srv__LoadScript_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Request>, size: usize) -> bool;
    fn asebaros_msgs__srv__LoadScript_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Request>);
    fn asebaros_msgs__srv__LoadScript_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadScript_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Request>) -> bool;
}

// Corresponds to asebaros_msgs__srv__LoadScript_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadScript_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constants: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Constant>,

    /// Leave empty to load to all nodes
    pub node_ids: rosidl_runtime_rs::Sequence<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub set_as_default: bool,

}



impl Default for LoadScript_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__LoadScript_Request__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__LoadScript_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadScript_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadScript_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadScript_Request where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/LoadScript_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__LoadScript_Request() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__LoadScript_Response() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__LoadScript_Response__init(msg: *mut LoadScript_Response) -> bool;
    fn asebaros_msgs__srv__LoadScript_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Response>, size: usize) -> bool;
    fn asebaros_msgs__srv__LoadScript_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Response>);
    fn asebaros_msgs__srv__LoadScript_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoadScript_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LoadScript_Response>) -> bool;
}

// Corresponds to asebaros_msgs__srv__LoadScript_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadScript_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for LoadScript_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__LoadScript_Response__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__LoadScript_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoadScript_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__LoadScript_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoadScript_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoadScript_Response where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/LoadScript_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__LoadScript_Response() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__SetVariable_Request() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__SetVariable_Request__init(msg: *mut SetVariable_Request) -> bool;
    fn asebaros_msgs__srv__SetVariable_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Request>, size: usize) -> bool;
    fn asebaros_msgs__srv__SetVariable_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Request>);
    fn asebaros_msgs__srv__SetVariable_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVariable_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Request>) -> bool;
}

// Corresponds to asebaros_msgs__srv__SetVariable_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVariable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub variable: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for SetVariable_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__SetVariable_Request__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__SetVariable_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVariable_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVariable_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVariable_Request where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/SetVariable_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__SetVariable_Request() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__SetVariable_Response() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__SetVariable_Response__init(msg: *mut SetVariable_Response) -> bool;
    fn asebaros_msgs__srv__SetVariable_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Response>, size: usize) -> bool;
    fn asebaros_msgs__srv__SetVariable_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Response>);
    fn asebaros_msgs__srv__SetVariable_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetVariable_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetVariable_Response>) -> bool;
}

// Corresponds to asebaros_msgs__srv__SetVariable_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVariable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetVariable_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__SetVariable_Response__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__SetVariable_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetVariable_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__SetVariable_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetVariable_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetVariable_Response where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/SetVariable_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__SetVariable_Response() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetDescription_Request() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetDescription_Request__init(msg: *mut GetDescription_Request) -> bool;
    fn asebaros_msgs__srv__GetDescription_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Request>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetDescription_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Request>);
    fn asebaros_msgs__srv__GetDescription_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDescription_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Request>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetDescription_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDescription_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetDescription_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetDescription_Request__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetDescription_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDescription_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDescription_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDescription_Request where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetDescription_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetDescription_Request() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetDescription_Response() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__srv__GetDescription_Response__init(msg: *mut GetDescription_Response) -> bool;
    fn asebaros_msgs__srv__GetDescription_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Response>, size: usize) -> bool;
    fn asebaros_msgs__srv__GetDescription_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Response>);
    fn asebaros_msgs__srv__GetDescription_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDescription_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDescription_Response>) -> bool;
}

// Corresponds to asebaros_msgs__srv__GetDescription_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDescription_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub description: super::super::msg::rmw::NodeDescription,

}



impl Default for GetDescription_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__srv__GetDescription_Response__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__srv__GetDescription_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDescription_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__srv__GetDescription_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDescription_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDescription_Response where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/srv/GetDescription_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__srv__GetDescription_Response() }
  }
}






#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetNodeList() -> *const std::ffi::c_void;
}

// Corresponds to asebaros_msgs__srv__GetNodeList
#[allow(missing_docs, non_camel_case_types)]
pub struct GetNodeList;

impl rosidl_runtime_rs::Service for GetNodeList {
    type Request = GetNodeList_Request;
    type Response = GetNodeList_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetNodeList() }
    }
}




#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetVariable() -> *const std::ffi::c_void;
}

// Corresponds to asebaros_msgs__srv__GetVariable
#[allow(missing_docs, non_camel_case_types)]
pub struct GetVariable;

impl rosidl_runtime_rs::Service for GetVariable {
    type Request = GetVariable_Request;
    type Response = GetVariable_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetVariable() }
    }
}




#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__LoadScript() -> *const std::ffi::c_void;
}

// Corresponds to asebaros_msgs__srv__LoadScript
#[allow(missing_docs, non_camel_case_types)]
pub struct LoadScript;

impl rosidl_runtime_rs::Service for LoadScript {
    type Request = LoadScript_Request;
    type Response = LoadScript_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__LoadScript() }
    }
}




#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__SetVariable() -> *const std::ffi::c_void;
}

// Corresponds to asebaros_msgs__srv__SetVariable
#[allow(missing_docs, non_camel_case_types)]
pub struct SetVariable;

impl rosidl_runtime_rs::Service for SetVariable {
    type Request = SetVariable_Request;
    type Response = SetVariable_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__SetVariable() }
    }
}




#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetDescription() -> *const std::ffi::c_void;
}

// Corresponds to asebaros_msgs__srv__GetDescription
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDescription;

impl rosidl_runtime_rs::Service for GetDescription {
    type Request = GetDescription_Request;
    type Response = GetDescription_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__asebaros_msgs__srv__GetDescription() }
    }
}


