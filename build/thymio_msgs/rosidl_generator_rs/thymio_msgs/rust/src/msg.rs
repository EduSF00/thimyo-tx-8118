#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to thymio_msgs__msg__Led

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Led {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub values: Vec<f32>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Led::default())
  }
}

impl rosidl_runtime_rs::Message for Led {
  type RmwMsg = super::msg::rmw::Led;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        values: msg.values.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        values: msg.values.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      values: msg.values.into(),
    }
  }
}


// Corresponds to thymio_msgs__msg__LedGesture

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub mask: Vec<bool>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LedGesture::default())
  }
}

impl rosidl_runtime_rs::Message for LedGesture {
  type RmwMsg = super::msg::rmw::LedGesture;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        gesture: msg.gesture,
        wave: msg.wave,
        leds: msg.leds,
        period: msg.period,
        length: msg.length,
        mirror: msg.mirror,
        mask: msg.mask.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      gesture: msg.gesture,
      wave: msg.wave,
      leds: msg.leds,
      period: msg.period,
      length: msg.length,
      mirror: msg.mirror,
        mask: msg.mask.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      gesture: msg.gesture,
      wave: msg.wave,
      leds: msg.leds,
      period: msg.period,
      length: msg.length,
      mirror: msg.mirror,
      mask: msg.mask.into(),
    }
  }
}


// Corresponds to thymio_msgs__msg__Sound

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sound {

    // This member is not documented.
    #[allow(missing_docs)]
    pub duration: builtin_interfaces::msg::Duration,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frequency: f32,

}



impl Default for Sound {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Sound::default())
  }
}

impl rosidl_runtime_rs::Message for Sound {
  type RmwMsg = super::msg::rmw::Sound;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.duration)).into_owned(),
        frequency: msg.frequency,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        duration: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.duration)).into_owned(),
      frequency: msg.frequency,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      duration: builtin_interfaces::msg::Duration::from_rmw_message(msg.duration),
      frequency: msg.frequency,
    }
  }
}


// Corresponds to thymio_msgs__msg__SystemSound

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SystemSound::default())
  }
}

impl rosidl_runtime_rs::Message for SystemSound {
  type RmwMsg = super::msg::rmw::SystemSound;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sound: msg.sound,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sound: msg.sound,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sound: msg.sound,
    }
  }
}


// Corresponds to thymio_msgs__msg__Comm

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Comm::default())
  }
}

impl rosidl_runtime_rs::Message for Comm {
  type RmwMsg = super::msg::rmw::Comm;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
        payloads: msg.payloads,
        intensities: msg.intensities,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
        payloads: msg.payloads,
        intensities: msg.intensities,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
      payloads: msg.payloads,
      intensities: msg.intensities,
    }
  }
}


