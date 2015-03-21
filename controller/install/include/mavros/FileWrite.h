// Generated by gencpp from file mavros/FileWrite.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_FILEWRITE_H
#define MAVROS_MESSAGE_FILEWRITE_H

#include <ros/service_traits.h>


#include <mavros/FileWriteRequest.h>
#include <mavros/FileWriteResponse.h>


namespace mavros
{

struct FileWrite
{

typedef FileWriteRequest Request;
typedef FileWriteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FileWrite
} // namespace mavros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros::FileWrite > {
  static const char* value()
  {
    return "7d7e0ed4d86797a80355795ee6728fac";
  }

  static const char* value(const ::mavros::FileWrite&) { return value(); }
};

template<>
struct DataType< ::mavros::FileWrite > {
  static const char* value()
  {
    return "mavros/FileWrite";
  }

  static const char* value(const ::mavros::FileWrite&) { return value(); }
};


// service_traits::MD5Sum< ::mavros::FileWriteRequest> should match 
// service_traits::MD5Sum< ::mavros::FileWrite > 
template<>
struct MD5Sum< ::mavros::FileWriteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::FileWrite >::value();
  }
  static const char* value(const ::mavros::FileWriteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::FileWriteRequest> should match 
// service_traits::DataType< ::mavros::FileWrite > 
template<>
struct DataType< ::mavros::FileWriteRequest>
{
  static const char* value()
  {
    return DataType< ::mavros::FileWrite >::value();
  }
  static const char* value(const ::mavros::FileWriteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros::FileWriteResponse> should match 
// service_traits::MD5Sum< ::mavros::FileWrite > 
template<>
struct MD5Sum< ::mavros::FileWriteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros::FileWrite >::value();
  }
  static const char* value(const ::mavros::FileWriteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros::FileWriteResponse> should match 
// service_traits::DataType< ::mavros::FileWrite > 
template<>
struct DataType< ::mavros::FileWriteResponse>
{
  static const char* value()
  {
    return DataType< ::mavros::FileWrite >::value();
  }
  static const char* value(const ::mavros::FileWriteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MESSAGE_FILEWRITE_H
