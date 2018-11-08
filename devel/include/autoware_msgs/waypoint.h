// Generated by gencpp from file autoware_msgs/waypoint.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_WAYPOINT_H
#define AUTOWARE_MSGS_MESSAGE_WAYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <autoware_msgs/dtlane.h>
#include <autoware_msgs/WaypointState.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct waypoint_
{
  typedef waypoint_<ContainerAllocator> Type;

  waypoint_()
    : gid(0)
    , lid(0)
    , pose()
    , twist()
    , dtlane()
    , change_flag(0)
    , wpstate()
    , lane_id(0)
    , left_lane_id(0)
    , right_lane_id(0)
    , stop_line_id(0)
    , cost(0.0)
    , time_cost(0.0)
    , direction(0)  {
    }
  waypoint_(const ContainerAllocator& _alloc)
    : gid(0)
    , lid(0)
    , pose(_alloc)
    , twist(_alloc)
    , dtlane(_alloc)
    , change_flag(0)
    , wpstate(_alloc)
    , lane_id(0)
    , left_lane_id(0)
    , right_lane_id(0)
    , stop_line_id(0)
    , cost(0.0)
    , time_cost(0.0)
    , direction(0)  {
  (void)_alloc;
    }



   typedef int32_t _gid_type;
  _gid_type gid;

   typedef int32_t _lid_type;
  _lid_type lid;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::TwistStamped_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef  ::autoware_msgs::dtlane_<ContainerAllocator>  _dtlane_type;
  _dtlane_type dtlane;

   typedef int32_t _change_flag_type;
  _change_flag_type change_flag;

   typedef  ::autoware_msgs::WaypointState_<ContainerAllocator>  _wpstate_type;
  _wpstate_type wpstate;

   typedef uint32_t _lane_id_type;
  _lane_id_type lane_id;

   typedef uint32_t _left_lane_id_type;
  _left_lane_id_type left_lane_id;

   typedef uint32_t _right_lane_id_type;
  _right_lane_id_type right_lane_id;

   typedef uint32_t _stop_line_id_type;
  _stop_line_id_type stop_line_id;

   typedef float _cost_type;
  _cost_type cost;

   typedef float _time_cost_type;
  _time_cost_type time_cost;

   typedef uint32_t _direction_type;
  _direction_type direction;





  typedef boost::shared_ptr< ::autoware_msgs::waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct waypoint_

typedef ::autoware_msgs::waypoint_<std::allocator<void> > waypoint;

typedef boost::shared_ptr< ::autoware_msgs::waypoint > waypointPtr;
typedef boost::shared_ptr< ::autoware_msgs::waypoint const> waypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/dallddungi/keti_ws/src/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::waypoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b8a2cbcecf4fbe2d4867ff60d36d973";
  }

  static const char* value(const ::autoware_msgs::waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b8a2cbcecf4fbe2ULL;
  static const uint64_t static_value2 = 0xd4867ff60d36d973ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/waypoint";
  }

  static const char* value(const ::autoware_msgs::waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# global id\n\
int32 gid \n\
# local id\n\
int32 lid\n\
geometry_msgs/PoseStamped pose\n\
geometry_msgs/TwistStamped twist\n\
dtlane dtlane\n\
int32 change_flag\n\
WaypointState wpstate\n\
\n\
uint32 lane_id\n\
uint32 left_lane_id\n\
uint32 right_lane_id\n\
uint32 stop_line_id\n\
float32 cost\n\
float32 time_cost\n\
\n\
# Lane Direction\n\
# FORWARD				= 0\n\
# FORWARD_LEFT	 		= 1\n\
# FORWARD_RIGHT			= 2\n\
# BACKWARD				= 3 \n\
# BACKWARD_LEFT			= 4\n\
# BACKWARD_RIGHT		= 5\n\
# STANDSTILL	 		= 6\n\
uint32 direction\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistStamped\n\
# A twist with reference coordinate frame and timestamp\n\
Header header\n\
Twist twist\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: autoware_msgs/dtlane\n\
float64 dist\n\
float64 dir\n\
float64 apara\n\
float64 r\n\
float64 slope\n\
float64 cant\n\
float64 lw\n\
float64 rw\n\
\n\
================================================================================\n\
MSG: autoware_msgs/WaypointState\n\
int32 aid\n\
uint8 NULLSTATE=0\n\
uint8 lanechange_state\n\
\n\
uint8 steering_state\n\
uint8 STR_LEFT=1\n\
uint8 STR_RIGHT=2\n\
uint8 STR_STRAIGHT=3\n\
\n\
uint8 accel_state\n\
uint8 stopline_state\n\
  uint8 TYPE_NULL=0\n\
  uint8 TYPE_STOPLINE=1\n\
  uint8 TYPE_STOP=2\n\
# 1 is stopline, 2 is stop which 2 can only be released manually.\n\
uint64 event_state\n\
";
  }

  static const char* value(const ::autoware_msgs::waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gid);
      stream.next(m.lid);
      stream.next(m.pose);
      stream.next(m.twist);
      stream.next(m.dtlane);
      stream.next(m.change_flag);
      stream.next(m.wpstate);
      stream.next(m.lane_id);
      stream.next(m.left_lane_id);
      stream.next(m.right_lane_id);
      stream.next(m.stop_line_id);
      stream.next(m.cost);
      stream.next(m.time_cost);
      stream.next(m.direction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::waypoint_<ContainerAllocator>& v)
  {
    s << indent << "gid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gid);
    s << indent << "lid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lid);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::TwistStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "dtlane: ";
    s << std::endl;
    Printer< ::autoware_msgs::dtlane_<ContainerAllocator> >::stream(s, indent + "  ", v.dtlane);
    s << indent << "change_flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.change_flag);
    s << indent << "wpstate: ";
    s << std::endl;
    Printer< ::autoware_msgs::WaypointState_<ContainerAllocator> >::stream(s, indent + "  ", v.wpstate);
    s << indent << "lane_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lane_id);
    s << indent << "left_lane_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.left_lane_id);
    s << indent << "right_lane_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.right_lane_id);
    s << indent << "stop_line_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.stop_line_id);
    s << indent << "cost: ";
    Printer<float>::stream(s, indent + "  ", v.cost);
    s << indent << "time_cost: ";
    Printer<float>::stream(s, indent + "  ", v.time_cost);
    s << indent << "direction: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.direction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_WAYPOINT_H