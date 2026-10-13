#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to robx7_interfaces__srv__SumarDosFlotantes_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SumarDosFlotantes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub b: f32,

}



impl Default for SumarDosFlotantes_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SumarDosFlotantes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SumarDosFlotantes_Request {
  type RmwMsg = super::srv::rmw::SumarDosFlotantes_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a: msg.a,
        b: msg.b,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a: msg.a,
      b: msg.b,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a: msg.a,
      b: msg.b,
    }
  }
}


// Corresponds to robx7_interfaces__srv__SumarDosFlotantes_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SumarDosFlotantes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub suma: f32,

}



impl Default for SumarDosFlotantes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SumarDosFlotantes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SumarDosFlotantes_Response {
  type RmwMsg = super::srv::rmw::SumarDosFlotantes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        suma: msg.suma,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      suma: msg.suma,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      suma: msg.suma,
    }
  }
}






#[link(name = "robx7_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes() -> *const std::ffi::c_void;
}

// Corresponds to robx7_interfaces__srv__SumarDosFlotantes
#[allow(missing_docs, non_camel_case_types)]
pub struct SumarDosFlotantes;

impl rosidl_runtime_rs::Service for SumarDosFlotantes {
    type Request = SumarDosFlotantes_Request;
    type Response = SumarDosFlotantes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes() }
    }
}


