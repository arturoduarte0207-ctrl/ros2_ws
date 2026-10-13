#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "robx7_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes_Request() -> *const std::ffi::c_void;
}

#[link(name = "robx7_interfaces__rosidl_generator_c")]
extern "C" {
    fn robx7_interfaces__srv__SumarDosFlotantes_Request__init(msg: *mut SumarDosFlotantes_Request) -> bool;
    fn robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Request>, size: usize) -> bool;
    fn robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Request>);
    fn robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SumarDosFlotantes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Request>) -> bool;
}

// Corresponds to robx7_interfaces__srv__SumarDosFlotantes_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robx7_interfaces__srv__SumarDosFlotantes_Request__init(&mut msg as *mut _) {
        panic!("Call to robx7_interfaces__srv__SumarDosFlotantes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SumarDosFlotantes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SumarDosFlotantes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SumarDosFlotantes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robx7_interfaces/srv/SumarDosFlotantes_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes_Request() }
  }
}


#[link(name = "robx7_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes_Response() -> *const std::ffi::c_void;
}

#[link(name = "robx7_interfaces__rosidl_generator_c")]
extern "C" {
    fn robx7_interfaces__srv__SumarDosFlotantes_Response__init(msg: *mut SumarDosFlotantes_Response) -> bool;
    fn robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Response>, size: usize) -> bool;
    fn robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Response>);
    fn robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SumarDosFlotantes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SumarDosFlotantes_Response>) -> bool;
}

// Corresponds to robx7_interfaces__srv__SumarDosFlotantes_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SumarDosFlotantes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub suma: f32,

}



impl Default for SumarDosFlotantes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robx7_interfaces__srv__SumarDosFlotantes_Response__init(&mut msg as *mut _) {
        panic!("Call to robx7_interfaces__srv__SumarDosFlotantes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SumarDosFlotantes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__srv__SumarDosFlotantes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SumarDosFlotantes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SumarDosFlotantes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robx7_interfaces/srv/SumarDosFlotantes_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__srv__SumarDosFlotantes_Response() }
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


