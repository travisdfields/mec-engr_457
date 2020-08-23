// Generated by gencpp from file me457common/Gyroscope.msg
// DO NOT EDIT!


#ifndef ME457COMMON_MESSAGE_GYROSCOPE_H
#define ME457COMMON_MESSAGE_GYROSCOPE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace me457common
{
template <class ContainerAllocator>
struct Gyroscope_
{
  typedef Gyroscope_<ContainerAllocator> Type;

  Gyroscope_()
    : header()
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Gyroscope_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::me457common::Gyroscope_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::me457common::Gyroscope_<ContainerAllocator> const> ConstPtr;

}; // struct Gyroscope_

typedef ::me457common::Gyroscope_<std::allocator<void> > Gyroscope;

typedef boost::shared_ptr< ::me457common::Gyroscope > GyroscopePtr;
typedef boost::shared_ptr< ::me457common::Gyroscope const> GyroscopeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::me457common::Gyroscope_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::me457common::Gyroscope_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace me457common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'me457common': ['/home/pi/catkin_ws/src/me457common/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::me457common::Gyroscope_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::me457common::Gyroscope_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::me457common::Gyroscope_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::me457common::Gyroscope_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::me457common::Gyroscope_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::me457common::Gyroscope_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::me457common::Gyroscope_<ContainerAllocator> >
{
  static const char* value()
  {
    return "75f40115cb5a29c0ceea66f491a5e1a3";
  }

  static const char* value(const ::me457common::Gyroscope_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x75f40115cb5a29c0ULL;
  static const uint64_t static_value2 = 0xceea66f491a5e1a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::me457common::Gyroscope_<ContainerAllocator> >
{
  static const char* value()
  {
    return "me457common/Gyroscope";
  }

  static const char* value(const ::me457common::Gyroscope_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::me457common::Gyroscope_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 x\n\
float32 y\n\
float32 z\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::me457common::Gyroscope_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::me457common::Gyroscope_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gyroscope_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::me457common::Gyroscope_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::me457common::Gyroscope_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ME457COMMON_MESSAGE_GYROSCOPE_H
