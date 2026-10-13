#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robx7_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__msg__HardwareStatus() -> *const std::ffi::c_void;
}

#[link(name = "robx7_interfaces__rosidl_generator_c")]
extern "C" {
    fn robx7_interfaces__msg__HardwareStatus__init(msg: *mut HardwareStatus) -> bool;
    fn robx7_interfaces__msg__HardwareStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>, size: usize) -> bool;
    fn robx7_interfaces__msg__HardwareStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>);
    fn robx7_interfaces__msg__HardwareStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HardwareStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<HardwareStatus>) -> bool;
}

// Corresponds to robx7_interfaces__msg__HardwareStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temperatura: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motores_listos: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_msg: rosidl_runtime_rs::String,

}



impl Default for HardwareStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robx7_interfaces__msg__HardwareStatus__init(&mut msg as *mut _) {
        panic!("Call to robx7_interfaces__msg__HardwareStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HardwareStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__HardwareStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__HardwareStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__HardwareStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HardwareStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HardwareStatus where Self: Sized {
  const TYPE_NAME: &'static str = "robx7_interfaces/msg/HardwareStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__msg__HardwareStatus() }
  }
}


#[link(name = "robx7_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__msg__CustomString() -> *const std::ffi::c_void;
}

#[link(name = "robx7_interfaces__rosidl_generator_c")]
extern "C" {
    fn robx7_interfaces__msg__CustomString__init(msg: *mut CustomString) -> bool;
    fn robx7_interfaces__msg__CustomString__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CustomString>, size: usize) -> bool;
    fn robx7_interfaces__msg__CustomString__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CustomString>);
    fn robx7_interfaces__msg__CustomString__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CustomString>, out_seq: *mut rosidl_runtime_rs::Sequence<CustomString>) -> bool;
}

// Corresponds to robx7_interfaces__msg__CustomString
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CustomString {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for CustomString {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robx7_interfaces__msg__CustomString__init(&mut msg as *mut _) {
        panic!("Call to robx7_interfaces__msg__CustomString__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CustomString {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__CustomString__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__CustomString__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robx7_interfaces__msg__CustomString__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CustomString {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CustomString where Self: Sized {
  const TYPE_NAME: &'static str = "robx7_interfaces/msg/CustomString";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robx7_interfaces__msg__CustomString() }
  }
}


