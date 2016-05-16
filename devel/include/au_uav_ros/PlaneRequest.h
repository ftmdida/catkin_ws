/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/viki/catkin_ws/src/au_uav_ros/srv/Plane.srv
 *
 */


#ifndef AU_UAV_ROS_MESSAGE_PLANEREQUEST_H
#define AU_UAV_ROS_MESSAGE_PLANEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace au_uav_ros
{
template <class ContainerAllocator>
struct PlaneRequest_
{
  typedef PlaneRequest_<ContainerAllocator> Type;

  PlaneRequest_()
    : sim(false)
    , planeID(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
    }
  PlaneRequest_(const ContainerAllocator& _alloc)
    : sim(false)
    , planeID(0)
    , latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
    }



   typedef uint8_t _sim_type;
  _sim_type sim;

   typedef int16_t _planeID_type;
  _planeID_type planeID;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;




  typedef boost::shared_ptr< ::au_uav_ros::PlaneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::au_uav_ros::PlaneRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct PlaneRequest_

typedef ::au_uav_ros::PlaneRequest_<std::allocator<void> > PlaneRequest;

typedef boost::shared_ptr< ::au_uav_ros::PlaneRequest > PlaneRequestPtr;
typedef boost::shared_ptr< ::au_uav_ros::PlaneRequest const> PlaneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::au_uav_ros::PlaneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace au_uav_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'au_uav_ros': ['/home/viki/catkin_ws/src/au_uav_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::au_uav_ros::PlaneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::au_uav_ros::PlaneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::au_uav_ros::PlaneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b0493c6f34dc962ebb8d5b8faff91bc";
  }

  static const char* value(const ::au_uav_ros::PlaneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b0493c6f34dc962ULL;
  static const uint64_t static_value2 = 0xebb8d5b8faff91bcULL;
};

template<class ContainerAllocator>
struct DataType< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "au_uav_ros/PlaneRequest";
  }

  static const char* value(const ::au_uav_ros::PlaneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool sim\n\
int16 planeID\n\
float64 latitude\n\
float64 longitude\n\
float64 altitude\n\
";
  }

  static const char* value(const ::au_uav_ros::PlaneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sim);
      stream.next(m.planeID);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PlaneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::au_uav_ros::PlaneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::au_uav_ros::PlaneRequest_<ContainerAllocator>& v)
  {
    s << indent << "sim: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sim);
    s << indent << "planeID: ";
    Printer<int16_t>::stream(s, indent + "  ", v.planeID);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AU_UAV_ROS_MESSAGE_PLANEREQUEST_H
