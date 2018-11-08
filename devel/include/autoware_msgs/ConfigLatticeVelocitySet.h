// Generated by gencpp from file autoware_msgs/ConfigLatticeVelocitySet.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_CONFIGLATTICEVELOCITYSET_H
#define AUTOWARE_MSGS_MESSAGE_CONFIGLATTICEVELOCITYSET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct ConfigLatticeVelocitySet_
{
  typedef ConfigLatticeVelocitySet_<ContainerAllocator> Type;

  ConfigLatticeVelocitySet_()
    : header()
    , others_distance(0.0)
    , detection_range(0.0)
    , threshold_points(0)
    , detection_height_top(0.0)
    , detection_height_bottom(0.0)
    , deceleration(0.0)
    , velocity_change_limit(0.0)
    , deceleration_range(0.0)
    , temporal_waypoints_size(0.0)  {
    }
  ConfigLatticeVelocitySet_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , others_distance(0.0)
    , detection_range(0.0)
    , threshold_points(0)
    , detection_height_top(0.0)
    , detection_height_bottom(0.0)
    , deceleration(0.0)
    , velocity_change_limit(0.0)
    , deceleration_range(0.0)
    , temporal_waypoints_size(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _others_distance_type;
  _others_distance_type others_distance;

   typedef float _detection_range_type;
  _detection_range_type detection_range;

   typedef int32_t _threshold_points_type;
  _threshold_points_type threshold_points;

   typedef float _detection_height_top_type;
  _detection_height_top_type detection_height_top;

   typedef float _detection_height_bottom_type;
  _detection_height_bottom_type detection_height_bottom;

   typedef float _deceleration_type;
  _deceleration_type deceleration;

   typedef float _velocity_change_limit_type;
  _velocity_change_limit_type velocity_change_limit;

   typedef float _deceleration_range_type;
  _deceleration_range_type deceleration_range;

   typedef float _temporal_waypoints_size_type;
  _temporal_waypoints_size_type temporal_waypoints_size;





  typedef boost::shared_ptr< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigLatticeVelocitySet_

typedef ::autoware_msgs::ConfigLatticeVelocitySet_<std::allocator<void> > ConfigLatticeVelocitySet;

typedef boost::shared_ptr< ::autoware_msgs::ConfigLatticeVelocitySet > ConfigLatticeVelocitySetPtr;
typedef boost::shared_ptr< ::autoware_msgs::ConfigLatticeVelocitySet const> ConfigLatticeVelocitySetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/dallddungi/keti_ws/src/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ef980a10c16f05933cfc170bd574214";
  }

  static const char* value(const ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ef980a10c16f059ULL;
  static const uint64_t static_value2 = 0x33cfc170bd574214ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/ConfigLatticeVelocitySet";
  }

  static const char* value(const ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 others_distance\n\
float32 detection_range\n\
int32 threshold_points\n\
float32 detection_height_top\n\
float32 detection_height_bottom\n\
float32 deceleration\n\
float32 velocity_change_limit\n\
float32 deceleration_range\n\
float32 temporal_waypoints_size\n\
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

  static const char* value(const ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.others_distance);
      stream.next(m.detection_range);
      stream.next(m.threshold_points);
      stream.next(m.detection_height_top);
      stream.next(m.detection_height_bottom);
      stream.next(m.deceleration);
      stream.next(m.velocity_change_limit);
      stream.next(m.deceleration_range);
      stream.next(m.temporal_waypoints_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigLatticeVelocitySet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::ConfigLatticeVelocitySet_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "others_distance: ";
    Printer<float>::stream(s, indent + "  ", v.others_distance);
    s << indent << "detection_range: ";
    Printer<float>::stream(s, indent + "  ", v.detection_range);
    s << indent << "threshold_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.threshold_points);
    s << indent << "detection_height_top: ";
    Printer<float>::stream(s, indent + "  ", v.detection_height_top);
    s << indent << "detection_height_bottom: ";
    Printer<float>::stream(s, indent + "  ", v.detection_height_bottom);
    s << indent << "deceleration: ";
    Printer<float>::stream(s, indent + "  ", v.deceleration);
    s << indent << "velocity_change_limit: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_change_limit);
    s << indent << "deceleration_range: ";
    Printer<float>::stream(s, indent + "  ", v.deceleration_range);
    s << indent << "temporal_waypoints_size: ";
    Printer<float>::stream(s, indent + "  ", v.temporal_waypoints_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_CONFIGLATTICEVELOCITYSET_H
