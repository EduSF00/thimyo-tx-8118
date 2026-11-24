#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to asebaros_msgs__srv__GetNodeList_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeList_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub ignored: bool,

}



impl Default for GetNodeList_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNodeList_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetNodeList_Request {
  type RmwMsg = super::srv::rmw::GetNodeList_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ignored: msg.ignored,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ignored: msg.ignored,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ignored: msg.ignored,
    }
  }
}


// Corresponds to asebaros_msgs__srv__GetNodeList_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetNodeList_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::Node>,

}



impl Default for GetNodeList_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetNodeList_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetNodeList_Response {
  type RmwMsg = super::srv::rmw::GetNodeList_Response;

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


// Corresponds to asebaros_msgs__srv__GetVariable_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVariable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub variable: std::string::String,

}



impl Default for GetVariable_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVariable_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetVariable_Request {
  type RmwMsg = super::srv::rmw::GetVariable_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        variable: msg.variable.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        variable: msg.variable.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      variable: msg.variable.to_string(),
    }
  }
}


// Corresponds to asebaros_msgs__srv__GetVariable_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetVariable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i16>,

}



impl Default for GetVariable_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetVariable_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetVariable_Response {
  type RmwMsg = super::srv::rmw::GetVariable_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      data: msg.data.into(),
    }
  }
}


// Corresponds to asebaros_msgs__srv__LoadScript_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadScript_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constants: Vec<super::msg::Constant>,

    /// Leave empty to load to all nodes
    pub node_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub set_as_default: bool,

}



impl Default for LoadScript_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadScript_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LoadScript_Request {
  type RmwMsg = super::srv::rmw::LoadScript_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_name: msg.file_name.as_str().into(),
        constants: msg.constants
          .into_iter()
          .map(|elem| super::msg::Constant::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        node_ids: msg.node_ids.as_slice().into(),
        set_as_default: msg.set_as_default,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_name: msg.file_name.as_str().into(),
        constants: msg.constants
          .iter()
          .map(|elem| super::msg::Constant::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        node_ids: msg.node_ids.as_slice().into(),
      set_as_default: msg.set_as_default,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      file_name: msg.file_name.to_string(),
      constants: msg.constants
          .into_iter()
          .map(super::msg::Constant::from_rmw_message)
          .collect(),
      node_ids: msg.node_ids.into(),
      set_as_default: msg.set_as_default,
    }
  }
}


// Corresponds to asebaros_msgs__srv__LoadScript_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoadScript_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for LoadScript_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LoadScript_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LoadScript_Response {
  type RmwMsg = super::srv::rmw::LoadScript_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to asebaros_msgs__srv__SetVariable_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVariable_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub variable: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i16>,

}



impl Default for SetVariable_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVariable_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetVariable_Request {
  type RmwMsg = super::srv::rmw::SetVariable_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        variable: msg.variable.as_str().into(),
        data: msg.data.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        variable: msg.variable.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      variable: msg.variable.to_string(),
      data: msg.data.into(),
    }
  }
}


// Corresponds to asebaros_msgs__srv__SetVariable_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetVariable_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetVariable_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetVariable_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetVariable_Response {
  type RmwMsg = super::srv::rmw::SetVariable_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to asebaros_msgs__srv__GetDescription_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDescription_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetDescription_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDescription_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetDescription_Request {
  type RmwMsg = super::srv::rmw::GetDescription_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to asebaros_msgs__srv__GetDescription_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDescription_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub description: super::msg::NodeDescription,

}



impl Default for GetDescription_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetDescription_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetDescription_Response {
  type RmwMsg = super::srv::rmw::GetDescription_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: super::msg::NodeDescription::into_rmw_message(std::borrow::Cow::Owned(msg.description)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        description: super::msg::NodeDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.description)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      description: super::msg::NodeDescription::from_rmw_message(msg.description),
    }
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


