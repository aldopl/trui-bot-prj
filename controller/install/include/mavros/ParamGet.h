// Generated by gencpp from file mavros/ParamGet.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_PARAMGET_H
#define MAVROS_MESSAGE_PARAMGET_H

#include <ros/service_traits.h>


#include <mavros/ParamGetRequest.h>
#include <mavros/ParamGetResponse.h>


namespace mavros
{

struct ParamGet
{

typedef ParamGetRequest Request;
typedef ParamGetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ParamGet
} // namespace mavros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros::ParamGet > {
  static const char* value()
  {
    return "93fd6e4fa4f0fb943fff9ce5ce2182b1";
  }

  static const char* value(const ::mavros::ParamGet&) { return value(); }
};

template<>
struct DataType< ::mavros::ParamGet > {
  static const char* value()
  {
    return "mavros/ParamGet";
  }

  static const char* value(const ::mavros::ParamGet&) { return value(); }
};


// service_traits::MD5Sum< ::mavros::ParamGetRequest> should match 
// service_traits::MD5Sum< ::mavros::ParamGet > 
template<>
struct MD5Sum< ::mavros::ParamGetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::ParamGet >::value();
  }
  static const char* value(const ::mavros::ParamGetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::ParamGetRequest> should match 
// service_traits::DataType< ::mavros::ParamGet > 
template<>
struct DataType< ::mavros::ParamGetRequest>
{
  static const char* value()
  {
    return DataType< ::mavros::ParamGet >::value();
  }
  static const char* value(const ::mavros::ParamGetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros::ParamGetResponse> should match 
// service_traits::MD5Sum< ::mavros::ParamGet > 
template<>
struct MD5Sum< ::mavros::ParamGetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::ParamGet >::value();
  }
  static const char* value(const ::mavros::ParamGetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::ParamGetResponse> should match 
// service_traits::DataType< ::mavros::ParamGet > 
template<>
struct DataType< ::mavros::ParamGetResponse>
{
  static const char* value()
  {
    return DataType< ::mavros::ParamGet >::value();
  }
  static const char* value(const ::mavros::ParamGetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MESSAGE_PARAMGET_H
