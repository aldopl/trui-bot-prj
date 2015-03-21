// Generated by gencpp from file mavros/CommandHomeResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_COMMANDHOMERESPONSE_H
#define MAVROS_MESSAGE_COMMANDHOMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros
{
template <class ContainerAllocator>
struct CommandHomeResponse_
{
  typedef CommandHomeResponse_<ContainerAllocator> Type;

  CommandHomeResponse_()
    : success(false)
    , result(0)  {
    }
  CommandHomeResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , result(0)  {
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::mavros::CommandHomeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::CommandHomeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CommandHomeResponse_

typedef ::mavros::CommandHomeResponse_<std::allocator<void> > CommandHomeResponse;

typedef boost::shared_ptr< ::mavros::CommandHomeResponse > CommandHomeResponsePtr;
typedef boost::shared_ptr< ::mavros::CommandHomeResponse const> CommandHomeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::CommandHomeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::CommandHomeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'mavros': ['/home/deanzaka/Github/trui-bot-prj/controller/src/mavros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandHomeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::CommandHomeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandHomeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::CommandHomeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandHomeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::CommandHomeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::CommandHomeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1cd894375e4e3d2861d2222772894fdb";
  }

  static const char* value(const ::mavros::CommandHomeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1cd894375e4e3d28ULL;
  static const uint64_t static_value2 = 0x61d2222772894fdbULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::CommandHomeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/CommandHomeResponse";
  }

  static const char* value(const ::mavros::CommandHomeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::CommandHomeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
uint8 result\n\
\n\
";
  }

  static const char* value(const ::mavros::CommandHomeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::CommandHomeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CommandHomeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::CommandHomeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::CommandHomeResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_COMMANDHOMERESPONSE_H
