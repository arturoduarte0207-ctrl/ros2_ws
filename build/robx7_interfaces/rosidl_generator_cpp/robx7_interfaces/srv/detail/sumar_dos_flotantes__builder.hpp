// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robx7_interfaces:srv/SumarDosFlotantes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robx7_interfaces/srv/sumar_dos_flotantes.hpp"


#ifndef ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__BUILDER_HPP_
#define ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robx7_interfaces/srv/detail/sumar_dos_flotantes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robx7_interfaces
{

namespace srv
{

namespace builder
{

class Init_SumarDosFlotantes_Request_b
{
public:
  explicit Init_SumarDosFlotantes_Request_b(::robx7_interfaces::srv::SumarDosFlotantes_Request & msg)
  : msg_(msg)
  {}
  ::robx7_interfaces::srv::SumarDosFlotantes_Request b(::robx7_interfaces::srv::SumarDosFlotantes_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Request msg_;
};

class Init_SumarDosFlotantes_Request_a
{
public:
  Init_SumarDosFlotantes_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumarDosFlotantes_Request_b a(::robx7_interfaces::srv::SumarDosFlotantes_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SumarDosFlotantes_Request_b(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::SumarDosFlotantes_Request>()
{
  return robx7_interfaces::srv::builder::Init_SumarDosFlotantes_Request_a();
}

}  // namespace robx7_interfaces


namespace robx7_interfaces
{

namespace srv
{

namespace builder
{

class Init_SumarDosFlotantes_Response_suma
{
public:
  Init_SumarDosFlotantes_Response_suma()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robx7_interfaces::srv::SumarDosFlotantes_Response suma(::robx7_interfaces::srv::SumarDosFlotantes_Response::_suma_type arg)
  {
    msg_.suma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::SumarDosFlotantes_Response>()
{
  return robx7_interfaces::srv::builder::Init_SumarDosFlotantes_Response_suma();
}

}  // namespace robx7_interfaces


namespace robx7_interfaces
{

namespace srv
{

namespace builder
{

class Init_SumarDosFlotantes_Event_response
{
public:
  explicit Init_SumarDosFlotantes_Event_response(::robx7_interfaces::srv::SumarDosFlotantes_Event & msg)
  : msg_(msg)
  {}
  ::robx7_interfaces::srv::SumarDosFlotantes_Event response(::robx7_interfaces::srv::SumarDosFlotantes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Event msg_;
};

class Init_SumarDosFlotantes_Event_request
{
public:
  explicit Init_SumarDosFlotantes_Event_request(::robx7_interfaces::srv::SumarDosFlotantes_Event & msg)
  : msg_(msg)
  {}
  Init_SumarDosFlotantes_Event_response request(::robx7_interfaces::srv::SumarDosFlotantes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SumarDosFlotantes_Event_response(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Event msg_;
};

class Init_SumarDosFlotantes_Event_info
{
public:
  Init_SumarDosFlotantes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SumarDosFlotantes_Event_request info(::robx7_interfaces::srv::SumarDosFlotantes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SumarDosFlotantes_Event_request(msg_);
  }

private:
  ::robx7_interfaces::srv::SumarDosFlotantes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robx7_interfaces::srv::SumarDosFlotantes_Event>()
{
  return robx7_interfaces::srv::builder::Init_SumarDosFlotantes_Event_info();
}

}  // namespace robx7_interfaces

#endif  // ROBX7_INTERFACES__SRV__DETAIL__SUMAR_DOS_FLOTANTES__BUILDER_HPP_
