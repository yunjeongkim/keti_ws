// Generated by gencpp from file autoware_msgs/vscan_tracked.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_VSCAN_TRACKED_H
#define AUTOWARE_MSGS_MESSAGE_VSCAN_TRACKED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <autoware_msgs/geometric_rectangle.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct vscan_tracked_
{
  typedef vscan_tracked_<ContainerAllocator> Type;

  vscan_tracked_()
    : position()
    , orientation(0.0)
    , velocity(0.0)
    , geo_rect()  {
    }
  vscan_tracked_(const ContainerAllocator& _alloc)
    : position(_alloc)
    , orientation(0.0)
    , velocity(0.0)
    , geo_rect(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef float _orientation_type;
  _orientation_type orientation;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef  ::autoware_msgs::geometric_rectangle_<ContainerAllocator>  _geo_rect_type;
  _geo_rect_type geo_rect;





  typedef boost::shared_ptr< ::autoware_msgs::vscan_tracked_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::vscan_tracked_<ContainerAllocator> const> ConstPtr;

}; // struct vscan_tracked_

typedef ::autoware_msgs::vscan_tracked_<std::allocator<void> > vscan_tracked;

typedef boost::shared_ptr< ::autoware_msgs::vscan_tracked > vscan_trackedPtr;
typedef boost::shared_ptr< ::autoware_msgs::vscan_tracked const> vscan_trackedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::vscan_tracked_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/dallddungi/keti_ws/src/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::vscan_tracked_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::vscan_tracked_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::vscan_tracked_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bff5c0a61020da26ef210837bea359b1";
  }

  static const char* value(const ::autoware_msgs::vscan_tracked_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbff5c0a61020da26ULL;
  static const uint64_t static_value2 = 0xef210837bea359b1ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/vscan_tracked";
  }

  static const char* value(const ::autoware_msgs::vscan_tracked_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point position\n\
float32 orientation\n\
float32 velocity\n\
geometric_rectangle geo_rect\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: autoware_msgs/geometric_rectangle\n\
float32 wl\n\
float32 wr\n\
float32 lf\n\
float32 lb\n\
";
  }

  static const char* value(const ::autoware_msgs::vscan_tracked_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.velocity);
      stream.next(m.geo_rect);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vscan_tracked_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::vscan_tracked_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::vscan_tracked_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "orientation: ";
    Printer<float>::stream(s, indent + "  ", v.orientation);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "geo_rect: ";
    s << std::endl;
    Printer< ::autoware_msgs::geometric_rectangle_<ContainerAllocator> >::stream(s, indent + "  ", v.geo_rect);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_VSCAN_TRACKED_H
