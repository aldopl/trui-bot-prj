// Generated by gencpp from file mavros/WaypointSetCurrentRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H
#define MAVROS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H


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
struct WaypointSetCurrentRequest_
{
  typedef WaypointSetCurrentRequest_<ContainerAllocator> Type;

  WaypointSetCurrentRequest_()
    : wp_seq(0)  {
    }
  WaypointSetCurrentRequest_(const ContainerAllocator& _alloc)
    : wp_seq(0)  {
    }



   typedef uint16_t _wp_seq_type;
  _wp_seq_type wp_seq;




  typedef boost::shared_ptr< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointSetCurrentRequest_

typedef ::mavros::WaypointSetCurrentRequest_<std::allocator<void> > WaypointSetCurrentRequest;

typedef boost::shared_ptr< ::mavros::WaypointSetCurrentRequest > WaypointSetCurrentRequestPtr;
typedef boost::shared_ptr< ::mavros::WaypointSetCurrentRequest const> WaypointSetCurrentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9541369175e0776b0fef1c988db6840f";
  }

  static const char* value(const ::mavros::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9541369175e0776bULL;
  static const uint64_t static_value2 = 0x0fef1c988db6840fULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros/WaypointSetCurrentRequest";
  }

  static const char* value(const ::mavros::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
uint16 wp_seq\n\
";
  }

  static const char* value(const ::mavros::WaypointSetCurrentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wp_seq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct WaypointSetCurrentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros::WaypointSetCurrentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros::WaypointSetCurrentRequest_<ContainerAllocator>& v)
  {
    s << indent << "wp_seq: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wp_seq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MESSAGE_WAYPOINTSETCURRENTREQUEST_H