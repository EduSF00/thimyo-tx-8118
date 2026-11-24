#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Event() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__Event__init(msg: *mut Event) -> bool;
    fn asebaros_msgs__msg__Event__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Event>, size: usize) -> bool;
    fn asebaros_msgs__msg__Event__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Event>);
    fn asebaros_msgs__msg__Event__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Event>, out_seq: *mut rosidl_runtime_rs::Sequence<Event>) -> bool;
}

// Corresponds to asebaros_msgs__msg__Event
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for Event {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__Event__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__Event__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Event {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Event__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Event__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Event__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Event where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/Event";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Event() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__AnonymousEvent() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__AnonymousEvent__init(msg: *mut AnonymousEvent) -> bool;
    fn asebaros_msgs__msg__AnonymousEvent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AnonymousEvent>, size: usize) -> bool;
    fn asebaros_msgs__msg__AnonymousEvent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AnonymousEvent>);
    fn asebaros_msgs__msg__AnonymousEvent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AnonymousEvent>, out_seq: *mut rosidl_runtime_rs::Sequence<AnonymousEvent>) -> bool;
}

// Corresponds to asebaros_msgs__msg__AnonymousEvent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnonymousEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i16>,

}



impl Default for AnonymousEvent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__AnonymousEvent__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__AnonymousEvent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AnonymousEvent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__AnonymousEvent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__AnonymousEvent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__AnonymousEvent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AnonymousEvent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AnonymousEvent where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/AnonymousEvent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__AnonymousEvent() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Constant() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__Constant__init(msg: *mut Constant) -> bool;
    fn asebaros_msgs__msg__Constant__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Constant>, size: usize) -> bool;
    fn asebaros_msgs__msg__Constant__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Constant>);
    fn asebaros_msgs__msg__Constant__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Constant>, out_seq: *mut rosidl_runtime_rs::Sequence<Constant>) -> bool;
}

// Corresponds to asebaros_msgs__msg__Constant
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Constant {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i16,

}



impl Default for Constant {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__Constant__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__Constant__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Constant {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Constant__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Constant__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Constant__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Constant {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Constant where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/Constant";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Constant() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Node() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__Node__init(msg: *mut Node) -> bool;
    fn asebaros_msgs__msg__Node__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Node>, size: usize) -> bool;
    fn asebaros_msgs__msg__Node__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Node>);
    fn asebaros_msgs__msg__Node__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Node>, out_seq: *mut rosidl_runtime_rs::Sequence<Node>) -> bool;
}

// Corresponds to asebaros_msgs__msg__Node
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Node {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name_space: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub running: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ignored: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub connected: bool,

}



impl Default for Node {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__Node__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__Node__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Node {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Node__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Node__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__Node__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Node {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Node where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/Node";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__Node() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__NodeList() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__NodeList__init(msg: *mut NodeList) -> bool;
    fn asebaros_msgs__msg__NodeList__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeList>, size: usize) -> bool;
    fn asebaros_msgs__msg__NodeList__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeList>);
    fn asebaros_msgs__msg__NodeList__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeList>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeList>) -> bool;
}

// Corresponds to asebaros_msgs__msg__NodeList
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Node>,

}



impl Default for NodeList {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__NodeList__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__NodeList__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeList {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeList__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeList__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeList__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeList {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeList where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/NodeList";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__NodeList() }
  }
}


#[link(name = "asebaros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__NodeDescription() -> *const std::ffi::c_void;
}

#[link(name = "asebaros_msgs__rosidl_generator_c")]
extern "C" {
    fn asebaros_msgs__msg__NodeDescription__init(msg: *mut NodeDescription) -> bool;
    fn asebaros_msgs__msg__NodeDescription__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeDescription>, size: usize) -> bool;
    fn asebaros_msgs__msg__NodeDescription__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeDescription>);
    fn asebaros_msgs__msg__NodeDescription__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeDescription>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeDescription>) -> bool;
}

// Corresponds to asebaros_msgs__msg__NodeDescription
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeDescription {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constants: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Constant>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub events: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub variables: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for NodeDescription {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !asebaros_msgs__msg__NodeDescription__init(&mut msg as *mut _) {
        panic!("Call to asebaros_msgs__msg__NodeDescription__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeDescription {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeDescription__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeDescription__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { asebaros_msgs__msg__NodeDescription__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeDescription {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeDescription where Self: Sized {
  const TYPE_NAME: &'static str = "asebaros_msgs/msg/NodeDescription";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__asebaros_msgs__msg__NodeDescription() }
  }
}


