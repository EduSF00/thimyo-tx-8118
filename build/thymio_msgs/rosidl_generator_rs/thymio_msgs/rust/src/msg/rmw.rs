#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "thymio_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Led() -> *const std::ffi::c_void;
}

#[link(name = "thymio_msgs__rosidl_generator_c")]
extern "C" {
    fn thymio_msgs__msg__Led__init(msg: *mut Led) -> bool;
    fn thymio_msgs__msg__Led__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Led>, size: usize) -> bool;
    fn thymio_msgs__msg__Led__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Led>);
    fn thymio_msgs__msg__Led__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Led>, out_seq: *mut rosidl_runtime_rs::Sequence<Led>) -> bool;
}

// Corresponds to thymio_msgs__msg__Led
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Led {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub values: rosidl_runtime_rs::Sequence<f32>,

}

impl Led {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROXIMITY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BUTTONS: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const GROUND: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TEMPERATURE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MICROPHONE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REMOTE: u8 = 6;

}


impl Default for Led {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !thymio_msgs__msg__Led__init(&mut msg as *mut _) {
        panic!("Call to thymio_msgs__msg__Led__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Led {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Led__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Led__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Led__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Led {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Led where Self: Sized {
  const TYPE_NAME: &'static str = "thymio_msgs/msg/Led";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Led() }
  }
}


#[link(name = "thymio_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__LedGesture() -> *const std::ffi::c_void;
}

#[link(name = "thymio_msgs__rosidl_generator_c")]
extern "C" {
    fn thymio_msgs__msg__LedGesture__init(msg: *mut LedGesture) -> bool;
    fn thymio_msgs__msg__LedGesture__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LedGesture>, size: usize) -> bool;
    fn thymio_msgs__msg__LedGesture__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LedGesture>);
    fn thymio_msgs__msg__LedGesture__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LedGesture>, out_seq: *mut rosidl_runtime_rs::Sequence<LedGesture>) -> bool;
}

// Corresponds to thymio_msgs__msg__LedGesture
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LedGesture {

    // This member is not documented.
    #[allow(missing_docs)]
    pub gesture: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wave: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub leds: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub period: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mirror: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mask: rosidl_runtime_rs::Sequence<bool>,

}

impl LedGesture {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAVE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RECT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const HARMONIC: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PROXIMITY: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BUTTONS: u8 = 2;

}


impl Default for LedGesture {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !thymio_msgs__msg__LedGesture__init(&mut msg as *mut _) {
        panic!("Call to thymio_msgs__msg__LedGesture__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LedGesture {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__LedGesture__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__LedGesture__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__LedGesture__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LedGesture {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LedGesture where Self: Sized {
  const TYPE_NAME: &'static str = "thymio_msgs/msg/LedGesture";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__LedGesture() }
  }
}


#[link(name = "thymio_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Sound() -> *const std::ffi::c_void;
}

#[link(name = "thymio_msgs__rosidl_generator_c")]
extern "C" {
    fn thymio_msgs__msg__Sound__init(msg: *mut Sound) -> bool;
    fn thymio_msgs__msg__Sound__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sound>, size: usize) -> bool;
    fn thymio_msgs__msg__Sound__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sound>);
    fn thymio_msgs__msg__Sound__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sound>, out_seq: *mut rosidl_runtime_rs::Sequence<Sound>) -> bool;
}

// Corresponds to thymio_msgs__msg__Sound
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sound {

    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: builtin_interfaces::msg::rmw::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frequency: f32,

}



impl Default for Sound {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !thymio_msgs__msg__Sound__init(&mut msg as *mut _) {
        panic!("Call to thymio_msgs__msg__Sound__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sound {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Sound__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Sound__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Sound__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sound {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sound where Self: Sized {
  const TYPE_NAME: &'static str = "thymio_msgs/msg/Sound";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Sound() }
  }
}


#[link(name = "thymio_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__SystemSound() -> *const std::ffi::c_void;
}

#[link(name = "thymio_msgs__rosidl_generator_c")]
extern "C" {
    fn thymio_msgs__msg__SystemSound__init(msg: *mut SystemSound) -> bool;
    fn thymio_msgs__msg__SystemSound__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SystemSound>, size: usize) -> bool;
    fn thymio_msgs__msg__SystemSound__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SystemSound>);
    fn thymio_msgs__msg__SystemSound__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SystemSound>, out_seq: *mut rosidl_runtime_rs::Sequence<SystemSound>) -> bool;
}

// Corresponds to thymio_msgs__msg__SystemSound
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SystemSound {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sound: i8,

}

impl SystemSound {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STOP: i8 = -1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTUP: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SHUTDOWN: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ARROW_BUTTON: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CENTRAL_BUTTON: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FREE_FALL: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COLLISION: i8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_OK: i8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_DETECT: i8 = 7;

}


impl Default for SystemSound {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !thymio_msgs__msg__SystemSound__init(&mut msg as *mut _) {
        panic!("Call to thymio_msgs__msg__SystemSound__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SystemSound {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__SystemSound__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__SystemSound__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__SystemSound__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SystemSound {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SystemSound where Self: Sized {
  const TYPE_NAME: &'static str = "thymio_msgs/msg/SystemSound";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__SystemSound() }
  }
}


#[link(name = "thymio_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Comm() -> *const std::ffi::c_void;
}

#[link(name = "thymio_msgs__rosidl_generator_c")]
extern "C" {
    fn thymio_msgs__msg__Comm__init(msg: *mut Comm) -> bool;
    fn thymio_msgs__msg__Comm__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Comm>, size: usize) -> bool;
    fn thymio_msgs__msg__Comm__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Comm>);
    fn thymio_msgs__msg__Comm__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Comm>, out_seq: *mut rosidl_runtime_rs::Sequence<Comm>) -> bool;
}

// Corresponds to thymio_msgs__msg__Comm
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Comm {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payloads: [i16; 7],


    // This member is not documented.
    #[allow(missing_docs)]
    pub intensities: [i16; 7],

}



impl Default for Comm {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !thymio_msgs__msg__Comm__init(&mut msg as *mut _) {
        panic!("Call to thymio_msgs__msg__Comm__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Comm {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Comm__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Comm__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { thymio_msgs__msg__Comm__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Comm {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Comm where Self: Sized {
  const TYPE_NAME: &'static str = "thymio_msgs/msg/Comm";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__thymio_msgs__msg__Comm() }
  }
}


