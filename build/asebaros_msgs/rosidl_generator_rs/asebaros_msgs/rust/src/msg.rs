#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to asebaros_msgs__msg__Event

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i16>,

}



impl Default for Event {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Event::default())
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = super::msg::rmw::Event;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        source: msg.source,
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      source: msg.source,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      source: msg.source,
      data: msg.data.into(),
    }
  }
}


// Corresponds to asebaros_msgs__msg__AnonymousEvent

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnonymousEvent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i16>,

}



impl Default for AnonymousEvent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AnonymousEvent::default())
  }
}

impl rosidl_runtime_rs::Message for AnonymousEvent {
  type RmwMsg = super::msg::rmw::AnonymousEvent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        source: msg.source,
        type_: msg.type_,
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      source: msg.source,
      type_: msg.type_,
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      source: msg.source,
      type_: msg.type_,
      data: msg.data.into(),
    }
  }
}


// Corresponds to asebaros_msgs__msg__Constant

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Constant {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i16,

}



impl Default for Constant {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Constant::default())
  }
}

impl rosidl_runtime_rs::Message for Constant {
  type RmwMsg = super::msg::rmw::Constant;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to asebaros_msgs__msg__Node

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Node {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name_space: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Node::default())
  }
}

impl rosidl_runtime_rs::Message for Node {
  type RmwMsg = super::msg::rmw::Node;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        name: msg.name.as_str().into(),
        name_space: msg.name_space.as_str().into(),
        running: msg.running,
        ignored: msg.ignored,
        connected: msg.connected,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        name: msg.name.as_str().into(),
        name_space: msg.name_space.as_str().into(),
      running: msg.running,
      ignored: msg.ignored,
      connected: msg.connected,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      name: msg.name.to_string(),
      name_space: msg.name_space.to_string(),
      running: msg.running,
      ignored: msg.ignored,
      connected: msg.connected,
    }
  }
}


// Corresponds to asebaros_msgs__msg__NodeList

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeList {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::Node>,

}



impl Default for NodeList {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeList::default())
  }
}

impl rosidl_runtime_rs::Message for NodeList {
  type RmwMsg = super::msg::rmw::NodeList;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .into_iter()
          .map(|elem| super::msg::Node::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .iter()
          .map(|elem| super::msg::Node::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      nodes: msg.nodes
          .into_iter()
          .map(super::msg::Node::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to asebaros_msgs__msg__NodeDescription

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeDescription {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constants: Vec<super::msg::Constant>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub events: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub variables: Vec<std::string::String>,

}



impl Default for NodeDescription {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeDescription::default())
  }
}

impl rosidl_runtime_rs::Message for NodeDescription {
  type RmwMsg = super::msg::rmw::NodeDescription;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        name: msg.name.as_str().into(),
        constants: msg.constants
          .into_iter()
          .map(|elem| super::msg::Constant::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        events: msg.events
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        variables: msg.variables
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        name: msg.name.as_str().into(),
        constants: msg.constants
          .iter()
          .map(|elem| super::msg::Constant::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        events: msg.events
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        variables: msg.variables
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      name: msg.name.to_string(),
      constants: msg.constants
          .into_iter()
          .map(super::msg::Constant::from_rmw_message)
          .collect(),
      events: msg.events
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      variables: msg.variables
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


