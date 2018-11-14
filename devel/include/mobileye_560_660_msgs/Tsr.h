// Generated by gencpp from file mobileye_560_660_msgs/Tsr.msg
// DO NOT EDIT!


#ifndef MOBILEYE_560_660_MSGS_MESSAGE_TSR_H
#define MOBILEYE_560_660_MSGS_MESSAGE_TSR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mobileye_560_660_msgs
{
template <class ContainerAllocator>
struct Tsr_
{
  typedef Tsr_<ContainerAllocator> Type;

  Tsr_()
    : header()
    , vision_only_sign_type(0)
    , vision_only_supplementary_sign_type(0)
    , sign_position_x(0.0)
    , sign_position_y(0.0)
    , sign_position_z(0.0)
    , filter_type(0)  {
    }
  Tsr_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vision_only_sign_type(0)
    , vision_only_supplementary_sign_type(0)
    , sign_position_x(0.0)
    , sign_position_y(0.0)
    , sign_position_z(0.0)
    , filter_type(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _vision_only_sign_type_type;
  _vision_only_sign_type_type vision_only_sign_type;

   typedef uint8_t _vision_only_supplementary_sign_type_type;
  _vision_only_supplementary_sign_type_type vision_only_supplementary_sign_type;

   typedef float _sign_position_x_type;
  _sign_position_x_type sign_position_x;

   typedef float _sign_position_y_type;
  _sign_position_y_type sign_position_y;

   typedef float _sign_position_z_type;
  _sign_position_z_type sign_position_z;

   typedef uint8_t _filter_type_type;
  _filter_type_type filter_type;



  enum {
    SIGN_TYPE_REGULAR_10 = 0u,
    SIGN_TYPE_REGULAR_20 = 1u,
    SIGN_TYPE_REGULAR_30 = 2u,
    SIGN_TYPE_REGULAR_40 = 3u,
    SIGN_TYPE_REGULAR_50 = 4u,
    SIGN_TYPE_REGULAR_60 = 5u,
    SIGN_TYPE_REGULAR_70 = 6u,
    SIGN_TYPE_REGULAR_80 = 7u,
    SIGN_TYPE_REGULAR_90 = 8u,
    SIGN_TYPE_REGULAR_100 = 9u,
    SIGN_TYPE_REGULAR_110 = 10u,
    SIGN_TYPE_REGULAR_120 = 11u,
    SIGN_TYPE_REGULAR_130 = 12u,
    SIGN_TYPE_REGULAR_140 = 13u,
    SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER = 20u,
    SIGN_TYPE_ELECTRONIC_10 = 28u,
    SIGN_TYPE_ELECTRONIC_20 = 29u,
    SIGN_TYPE_ELECTRONIC_30 = 30u,
    SIGN_TYPE_ELECTRONIC_40 = 31u,
    SIGN_TYPE_ELECTRONIC_50 = 32u,
    SIGN_TYPE_ELECTRONIC_60 = 33u,
    SIGN_TYPE_ELECTRONIC_70 = 34u,
    SIGN_TYPE_ELECTRONIC_80 = 35u,
    SIGN_TYPE_ELECTRONIC_90 = 36u,
    SIGN_TYPE_ELECTRONIC_100 = 37u,
    SIGN_TYPE_ELECTRONIC_110 = 38u,
    SIGN_TYPE_ELECTRONIC_120 = 39u,
    SIGN_TYPE_ELECTRONIC_130 = 40u,
    SIGN_TYPE_ELECTRONIC_140 = 41u,
    SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER = 50u,
    SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION = 64u,
    SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION = 65u,
    SIGN_TYPE_REGULAR_5 = 100u,
    SIGN_TYPE_REGULAR_15 = 101u,
    SIGN_TYPE_REGULAR_25 = 102u,
    SIGN_TYPE_REGULAR_35 = 103u,
    SIGN_TYPE_REGULAR_45 = 104u,
    SIGN_TYPE_REGULAR_55 = 105u,
    SIGN_TYPE_REGULAR_65 = 106u,
    SIGN_TYPE_REGULAR_75 = 107u,
    SIGN_TYPE_REGULAR_85 = 108u,
    SIGN_TYPE_REGULAR_95 = 109u,
    SIGN_TYPE_REGULAR_105 = 110u,
    SIGN_TYPE_REGULAR_115 = 111u,
    SIGN_TYPE_REGULAR_125 = 112u,
    SIGN_TYPE_REGULAR_135 = 113u,
    SIGN_TYPE_REGULAR_145 = 114u,
    SIGN_TYPE_ELECTRONIC_5 = 115u,
    SIGN_TYPE_ELECTRONIC_15 = 116u,
    SIGN_TYPE_ELECTRONIC_25 = 117u,
    SIGN_TYPE_ELECTRONIC_35 = 118u,
    SIGN_TYPE_ELECTRONIC_45 = 119u,
    SIGN_TYPE_ELECTRONIC_55 = 120u,
    SIGN_TYPE_ELECTRONIC_65 = 121u,
    SIGN_TYPE_ELECTRONIC_75 = 122u,
    SIGN_TYPE_ELECTRONIC_85 = 123u,
    SIGN_TYPE_ELECTRONIC_95 = 124u,
    SIGN_TYPE_ELECTRONIC_105 = 125u,
    SIGN_TYPE_ELECTRONIC_115 = 126u,
    SIGN_TYPE_ELECTRONIC_125 = 127u,
    SIGN_TYPE_ELECTRONIC_135 = 128u,
    SIGN_TYPE_ELECTRONIC_145 = 129u,
    SIGN_TYPE_REGULAR_MOTORWAY_BEGIN = 171u,
    SIGN_TYPE_REGULAR_END_OF_MOTORWAY = 172u,
    SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN = 173u,
    SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY = 174u,
    SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN = 175u,
    SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA = 176u,
    SIGN_TYPE_REGULAR_NO_PASSING_START = 200u,
    SIGN_TYPE_REGULAR_END_OF_NO_PASSING = 201u,
    SIGN_TYPE_ELECTRONIC_NO_PASSING_START = 220u,
    SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING = 221u,
    SIGN_TYPE_NONE_DETECTED = 254u,
    SIGN_TYPE_INVALID = 255u,
    SUPP_SIGN_TYPE_NONE = 0u,
    SUPP_SIGN_TYPE_RAIN = 1u,
    SUPP_SIGN_TYPE_SNOW = 2u,
    SUPP_SIGN_TYPE_TRAILER = 3u,
    SUPP_SIGN_TYPE_TIME = 4u,
    SUPP_SIGN_TYPE_ARROW_LEFT = 5u,
    SUPP_SIGN_TYPE_ARROW_RIGHT = 6u,
    SUPP_SIGN_TYPE_BEND_ARROW_LEFT = 7u,
    SUPP_SIGN_TYPE_BEND_ARROW_RIGHT = 8u,
    SUPP_SIGN_TYPE_TRUCK = 9u,
    SUPP_SIGN_TYPE_DISTANCE_ARROW = 10u,
    SUPP_SIGN_TYPE_WEIGHT = 11u,
    SUPP_SIGN_TYPE_DISTANCE_IN = 12u,
    SUPP_SIGN_TYPE_TRACTOR = 13u,
    SUPP_SIGN_TYPE_SNOW_RAIN = 14u,
    SUPP_SIGN_TYPE_SCHOOL = 15u,
    SUPP_SIGN_TYPE_RAIN_CLOUD = 16u,
    SUPP_SIGN_TYPE_FOG = 17u,
    SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS = 18u,
    SUPP_SIGN_TYPE_NIGHT = 19u,
    SUPP_SIGN_TYPE_GENERIC = 20u,
    SUPP_SIGN_TYPE_RAPPEL = 21u,
    SUPP_SIGN_TYPE_ZONE = 22u,
    SUPP_SIGN_TYPE_INVALID = 255u,
    FILTER_TYPE_NOT_FILTERED = 0u,
    FILTER_TYPE_IRRELEVANT_TO_DRIVER = 1u,
    FILTER_TYPE_ON_VEHICLE = 2u,
    FILTER_TYPE_EMBEDDED = 3u,
  };


  typedef boost::shared_ptr< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> const> ConstPtr;

}; // struct Tsr_

typedef ::mobileye_560_660_msgs::Tsr_<std::allocator<void> > Tsr;

typedef boost::shared_ptr< ::mobileye_560_660_msgs::Tsr > TsrPtr;
typedef boost::shared_ptr< ::mobileye_560_660_msgs::Tsr const> TsrConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mobileye_560_660_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mobileye_560_660_msgs': ['/home/dallddungi/keti_ws/src/mobileye_560_660_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6181cda0894c479426a7c686589123b7";
  }

  static const char* value(const ::mobileye_560_660_msgs::Tsr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6181cda0894c4794ULL;
  static const uint64_t static_value2 = 0x26a7c686589123b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobileye_560_660_msgs/Tsr";
  }

  static const char* value(const ::mobileye_560_660_msgs::Tsr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
uint8 SIGN_TYPE_REGULAR_10 = 0\n\
uint8 SIGN_TYPE_REGULAR_20 = 1\n\
uint8 SIGN_TYPE_REGULAR_30 = 2\n\
uint8 SIGN_TYPE_REGULAR_40 = 3\n\
uint8 SIGN_TYPE_REGULAR_50 = 4\n\
uint8 SIGN_TYPE_REGULAR_60 = 5\n\
uint8 SIGN_TYPE_REGULAR_70 = 6\n\
uint8 SIGN_TYPE_REGULAR_80 = 7\n\
uint8 SIGN_TYPE_REGULAR_90 = 8\n\
uint8 SIGN_TYPE_REGULAR_100 = 9\n\
uint8 SIGN_TYPE_REGULAR_110 = 10\n\
uint8 SIGN_TYPE_REGULAR_120 = 11\n\
uint8 SIGN_TYPE_REGULAR_130 = 12\n\
uint8 SIGN_TYPE_REGULAR_140 = 13\n\
uint8 SIGN_TYPE_REGULAR_END_RESTRICTION_OF_NUMBER = 20\n\
uint8 SIGN_TYPE_ELECTRONIC_10 = 28\n\
uint8 SIGN_TYPE_ELECTRONIC_20 = 29\n\
uint8 SIGN_TYPE_ELECTRONIC_30 = 30\n\
uint8 SIGN_TYPE_ELECTRONIC_40 = 31\n\
uint8 SIGN_TYPE_ELECTRONIC_50 = 32\n\
uint8 SIGN_TYPE_ELECTRONIC_60 = 33\n\
uint8 SIGN_TYPE_ELECTRONIC_70 = 34\n\
uint8 SIGN_TYPE_ELECTRONIC_80 = 35\n\
uint8 SIGN_TYPE_ELECTRONIC_90 = 36\n\
uint8 SIGN_TYPE_ELECTRONIC_100 = 37\n\
uint8 SIGN_TYPE_ELECTRONIC_110 = 38\n\
uint8 SIGN_TYPE_ELECTRONIC_120 = 39\n\
uint8 SIGN_TYPE_ELECTRONIC_130 = 40\n\
uint8 SIGN_TYPE_ELECTRONIC_140 = 41\n\
uint8 SIGN_TYPE_ELECTRONIC_END_RESTRICTION_OF_NUMBER = 50\n\
uint8 SIGN_TYPE_REGULAR_GENERAL_END_ALL_RESTRICTION = 64\n\
uint8 SIGN_TYPE_ELECTRONIC_GENERAL_END_ALL_RESTRICTION = 65\n\
uint8 SIGN_TYPE_REGULAR_5 = 100\n\
uint8 SIGN_TYPE_REGULAR_15 = 101\n\
uint8 SIGN_TYPE_REGULAR_25 = 102\n\
uint8 SIGN_TYPE_REGULAR_35 = 103\n\
uint8 SIGN_TYPE_REGULAR_45 = 104\n\
uint8 SIGN_TYPE_REGULAR_55 = 105\n\
uint8 SIGN_TYPE_REGULAR_65 = 106\n\
uint8 SIGN_TYPE_REGULAR_75 = 107\n\
uint8 SIGN_TYPE_REGULAR_85 = 108\n\
uint8 SIGN_TYPE_REGULAR_95 = 109\n\
uint8 SIGN_TYPE_REGULAR_105 = 110\n\
uint8 SIGN_TYPE_REGULAR_115 = 111\n\
uint8 SIGN_TYPE_REGULAR_125 = 112\n\
uint8 SIGN_TYPE_REGULAR_135 = 113\n\
uint8 SIGN_TYPE_REGULAR_145 = 114\n\
uint8 SIGN_TYPE_ELECTRONIC_5 = 115\n\
uint8 SIGN_TYPE_ELECTRONIC_15 = 116\n\
uint8 SIGN_TYPE_ELECTRONIC_25 = 117\n\
uint8 SIGN_TYPE_ELECTRONIC_35 = 118\n\
uint8 SIGN_TYPE_ELECTRONIC_45 = 119\n\
uint8 SIGN_TYPE_ELECTRONIC_55 = 120\n\
uint8 SIGN_TYPE_ELECTRONIC_65 = 121\n\
uint8 SIGN_TYPE_ELECTRONIC_75 = 122\n\
uint8 SIGN_TYPE_ELECTRONIC_85 = 123\n\
uint8 SIGN_TYPE_ELECTRONIC_95 = 124\n\
uint8 SIGN_TYPE_ELECTRONIC_105 = 125\n\
uint8 SIGN_TYPE_ELECTRONIC_115 = 126\n\
uint8 SIGN_TYPE_ELECTRONIC_125 = 127\n\
uint8 SIGN_TYPE_ELECTRONIC_135 = 128\n\
uint8 SIGN_TYPE_ELECTRONIC_145 = 129\n\
uint8 SIGN_TYPE_REGULAR_MOTORWAY_BEGIN = 171\n\
uint8 SIGN_TYPE_REGULAR_END_OF_MOTORWAY = 172\n\
uint8 SIGN_TYPE_REGULAR_EXPRESSWAY_BEGIN = 173\n\
uint8 SIGN_TYPE_REGULAR_END_OF_EXPRESSWAY = 174\n\
uint8 SIGN_TYPE_REGULAR_PLAYGROUND_AREA_BEGIN = 175\n\
uint8 SIGN_TYPE_REGULAR_END_OF_PLAYGROUND_AREA = 176\n\
uint8 SIGN_TYPE_REGULAR_NO_PASSING_START = 200\n\
uint8 SIGN_TYPE_REGULAR_END_OF_NO_PASSING = 201\n\
uint8 SIGN_TYPE_ELECTRONIC_NO_PASSING_START = 220\n\
uint8 SIGN_TYPE_ELECTRONIC_END_OF_NO_PASSING = 221\n\
uint8 SIGN_TYPE_NONE_DETECTED = 254\n\
uint8 SIGN_TYPE_INVALID = 255\n\
uint8 vision_only_sign_type\n\
\n\
uint8 SUPP_SIGN_TYPE_NONE = 0\n\
uint8 SUPP_SIGN_TYPE_RAIN = 1\n\
uint8 SUPP_SIGN_TYPE_SNOW = 2\n\
uint8 SUPP_SIGN_TYPE_TRAILER = 3\n\
uint8 SUPP_SIGN_TYPE_TIME = 4\n\
uint8 SUPP_SIGN_TYPE_ARROW_LEFT = 5\n\
uint8 SUPP_SIGN_TYPE_ARROW_RIGHT = 6\n\
uint8 SUPP_SIGN_TYPE_BEND_ARROW_LEFT = 7\n\
uint8 SUPP_SIGN_TYPE_BEND_ARROW_RIGHT = 8\n\
uint8 SUPP_SIGN_TYPE_TRUCK = 9\n\
uint8 SUPP_SIGN_TYPE_DISTANCE_ARROW = 10\n\
uint8 SUPP_SIGN_TYPE_WEIGHT = 11\n\
uint8 SUPP_SIGN_TYPE_DISTANCE_IN = 12\n\
uint8 SUPP_SIGN_TYPE_TRACTOR = 13\n\
uint8 SUPP_SIGN_TYPE_SNOW_RAIN = 14\n\
uint8 SUPP_SIGN_TYPE_SCHOOL = 15\n\
uint8 SUPP_SIGN_TYPE_RAIN_CLOUD = 16\n\
uint8 SUPP_SIGN_TYPE_FOG = 17\n\
uint8 SUPP_SIGN_TYPE_HAZARDOUS_MATERIALS = 18\n\
uint8 SUPP_SIGN_TYPE_NIGHT = 19\n\
uint8 SUPP_SIGN_TYPE_GENERIC = 20\n\
uint8 SUPP_SIGN_TYPE_RAPPEL = 21\n\
uint8 SUPP_SIGN_TYPE_ZONE = 22\n\
uint8 SUPP_SIGN_TYPE_INVALID = 255\n\
uint8 vision_only_supplementary_sign_type\n\
\n\
float32 sign_position_x\n\
float32 sign_position_y\n\
float32 sign_position_z\n\
\n\
uint8 FILTER_TYPE_NOT_FILTERED = 0\n\
uint8 FILTER_TYPE_IRRELEVANT_TO_DRIVER = 1\n\
uint8 FILTER_TYPE_ON_VEHICLE = 2\n\
uint8 FILTER_TYPE_EMBEDDED = 3\n\
uint8 filter_type\n\
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

  static const char* value(const ::mobileye_560_660_msgs::Tsr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vision_only_sign_type);
      stream.next(m.vision_only_supplementary_sign_type);
      stream.next(m.sign_position_x);
      stream.next(m.sign_position_y);
      stream.next(m.sign_position_z);
      stream.next(m.filter_type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Tsr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobileye_560_660_msgs::Tsr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobileye_560_660_msgs::Tsr_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vision_only_sign_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vision_only_sign_type);
    s << indent << "vision_only_supplementary_sign_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vision_only_supplementary_sign_type);
    s << indent << "sign_position_x: ";
    Printer<float>::stream(s, indent + "  ", v.sign_position_x);
    s << indent << "sign_position_y: ";
    Printer<float>::stream(s, indent + "  ", v.sign_position_y);
    s << indent << "sign_position_z: ";
    Printer<float>::stream(s, indent + "  ", v.sign_position_z);
    s << indent << "filter_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.filter_type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBILEYE_560_660_MSGS_MESSAGE_TSR_H
