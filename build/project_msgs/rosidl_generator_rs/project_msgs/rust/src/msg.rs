#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to project_msgs__msg__LocalizationObject

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LocalizationObject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LocalizationObject::default())
  }
}

impl rosidl_runtime_rs::Message for LocalizationObject {
  type RmwMsg = super::msg::rmw::LocalizationObject;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        distance_linear: msg.distance_linear,
        distance_angular: msg.distance_angular,
        sen_angular: msg.sen_angular,
        cos_angular: msg.cos_angular,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      distance_linear: msg.distance_linear,
      distance_angular: msg.distance_angular,
      sen_angular: msg.sen_angular,
      cos_angular: msg.cos_angular,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      distance_linear: msg.distance_linear,
      distance_angular: msg.distance_angular,
      sen_angular: msg.sen_angular,
      cos_angular: msg.cos_angular,
    }
  }
}


// Corresponds to project_msgs__msg__Error

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Error::default())
  }
}

impl rosidl_runtime_rs::Message for Error {
  type RmwMsg = super::msg::rmw::Error;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        error_linear: msg.error_linear,
        error_angular: msg.error_angular,
        error_angular_sen: msg.error_angular_sen,
        error_angular_cos: msg.error_angular_cos,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      error_linear: msg.error_linear,
      error_angular: msg.error_angular,
      error_angular_sen: msg.error_angular_sen,
      error_angular_cos: msg.error_angular_cos,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      error_linear: msg.error_linear,
      error_angular: msg.error_angular,
      error_angular_sen: msg.error_angular_sen,
      error_angular_cos: msg.error_angular_cos,
    }
  }
}


