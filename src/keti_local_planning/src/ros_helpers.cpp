#include "ros_helpers.h"
#include <tf/transform_listener.h>
#include <tf/transform_broadcaster.h>
#include <tf/tf.h>
#include <math.h>

RosHelpers::RosHelpers() {

}

RosHelpers::~RosHelpers() {
}
void RosHelpers::ConvertWaypointUsingTF(const WayPoint& wp,const tf::Transform& transform, WayPoint& result)
{
  // Transform each point from map to front_camera_link
  tf::Vector3 end_tfv_map(wp.pos_.x_,wp.pos_.y_,wp.pos_.z_);
  tf::Vector3 out_tfv = transform * end_tfv_map;


  // Transform tf:Vector3 to WayPoint
  //double yaw, pitch, roll;
  //tf::Quaternion qt(out_tfv.x(),out_tfv.y(),out_tfv.z(),out_tfv.w());
  //tf::Matrix3x3(qt).getEulerYPR(yaw,pitch,roll);


  result.pos_.x_ = out_tfv.getX();
  result.pos_.y_ = out_tfv.getY();
  result.pos_.z_ = out_tfv.getZ();

  //result.pos_.a_ = yaw;
}

void RosHelpers::GetTransformFromWaypoint(const WayPoint& child, tf::Transform& transform)
{
  transform.setOrigin( tf::Vector3(child.pos_.x_,child.pos_.y_, 0.0) );
  tf::Quaternion q;
  q.setRPY(0, 0, child.pos_.a_);
  transform.setRotation(q);
}

void RosHelpers::GetTransformFromTF(const std::string parent_frame, const std::string child_frame, tf::StampedTransform &transform)
{
  static tf::TransformListener listener;

  int nFailedCounter = 0;
  while (1)
  {
    try
    {
      listener.lookupTransform(parent_frame, child_frame, ros::Time(0), transform);
      break;
    }
    catch (tf::TransformException& ex)
    {
      if(nFailedCounter > 2)
      {
        ROS_ERROR("%s", ex.what());
      }
      ros::Duration(1.0).sleep();
      nFailedCounter ++;
    }
  }
}

void RosHelpers::ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<std::vector<WayPoint> >& globalPaths,
                                                                  const std::string& frame,
                                                                  visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = frame;
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "global_lane_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;


  std_msgs::ColorRGBA roll_color, total_color, curr_color;
  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  total_color.r = 1;
  total_color.g = 0;
  total_color.b = 0;
  total_color.a = 0.5;
  lane_waypoint_marker.color = total_color;
  lane_waypoint_marker.frame_locked = false;

  int count = 0;
  for (unsigned int i = 0; i < globalPaths.size(); i++)
  {
    lane_waypoint_marker.points.clear();
    lane_waypoint_marker.id = count;

    for (unsigned int j=0; j < globalPaths.at(i).size(); j++)
    {
      geometry_msgs::Point point;

      point.x = globalPaths.at(i).at(j).pos_.x_;
      point.y = globalPaths.at(i).at(j).pos_.y_;
      point.z = globalPaths.at(i).at(j).pos_.z_;

      lane_waypoint_marker.points.push_back(point);
    }

    markerArray.markers.push_back(lane_waypoint_marker);
    count++;
  }
}

void RosHelpers::ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<std::vector<WayPoint> >& globalPaths,
                                                                  visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = "map";
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "global_lane_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;


  std_msgs::ColorRGBA roll_color, total_color, curr_color;
  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  total_color.r = 1;
  total_color.g = 0;
  total_color.b = 0;
  total_color.a = 0.5;
  lane_waypoint_marker.color = total_color;
  lane_waypoint_marker.frame_locked = false;

  int count = 0;
  for (unsigned int i = 0; i < globalPaths.size(); i++)
  {
    lane_waypoint_marker.points.clear();
    lane_waypoint_marker.id = count;

    for (unsigned int j=0; j < globalPaths.at(i).size(); j++)
    {
      geometry_msgs::Point point;

      point.x = globalPaths.at(i).at(j).pos_.x_;
      point.y = globalPaths.at(i).at(j).pos_.y_;
      point.z = globalPaths.at(i).at(j).pos_.z_;

      lane_waypoint_marker.points.push_back(point);
    }

    markerArray.markers.push_back(lane_waypoint_marker);
    count++;
  }
}


void RosHelpers::ConvertFromPlannerHToAutowareVisualizePathFormat(const std::vector<WayPoint>& globalPaths,
                                                                  visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = "map";
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "global_lane_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;


  std_msgs::ColorRGBA roll_color, total_color, curr_color;
  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  total_color.r = 1;
  total_color.g = 0;
  total_color.b = 0;
  total_color.a = 0.5;
  lane_waypoint_marker.color = total_color;
  lane_waypoint_marker.frame_locked = false;

  for (unsigned int j=0; j < globalPaths.size(); j++)
  {
    geometry_msgs::Point point;

    point.x = globalPaths.at(j).pos_.x_;
    point.y = globalPaths.at(j).pos_.y_;
    point.z = globalPaths.at(j).pos_.z_;

    lane_waypoint_marker.points.push_back(point);
  }
  markerArray.markers.push_back(lane_waypoint_marker);
}


void RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(
    const std::vector<WayPoint>& paths,
    const std::string& frame,
    visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = frame;
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "local_lane_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  //lane_waypoint_marker.scale.z = 0.1;
  lane_waypoint_marker.frame_locked = false;
  std_msgs::ColorRGBA  total_color, curr_color;


  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;

  for (unsigned int j=0; j < paths.size(); j++)
  {
    geometry_msgs::Point point;

    point.x = paths.at(j).pos_.x_;
    point.y = paths.at(j).pos_.y_;
    point.z = paths.at(j).pos_.z_;

    lane_waypoint_marker.points.push_back(point);
  }

  lane_waypoint_marker.color.a = 0.9;
  lane_waypoint_marker.color.r = 0.0;
  lane_waypoint_marker.color.g = 1.0;
  lane_waypoint_marker.color.b = 0.0;

  markerArray.markers.push_back(lane_waypoint_marker);

}

void RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(
    const std::vector<WayPoint>& paths,
    visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = "map";
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "local_lane_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  lane_waypoint_marker.frame_locked = false;

  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;

  for (unsigned int j=0; j < paths.size(); j++)
  {
    geometry_msgs::Point point;

    point.x = paths.at(j).pos_.x_;
    point.y = paths.at(j).pos_.y_;
    point.z = paths.at(j).pos_.z_;

    lane_waypoint_marker.points.push_back(point);
  }

  lane_waypoint_marker.color.a = 0.9;
  lane_waypoint_marker.color.r = 0.0;
  lane_waypoint_marker.color.g = 1.0;
  lane_waypoint_marker.color.b = 0;

  markerArray.markers.push_back(lane_waypoint_marker);
}

void RosHelpers::ConvertFromCubicSplineToVisualizePathFormat(const CubicSplineParams& params,
                                                             const std::string& frame,
                                                             visualization_msgs::MarkerArray& markerArray)
{
  visualization_msgs::Marker lane_waypoint_marker;
  lane_waypoint_marker.header.frame_id = frame;
  lane_waypoint_marker.header.stamp = ros::Time();
  lane_waypoint_marker.ns = "cubic_spline_array_marker";
  lane_waypoint_marker.type = visualization_msgs::Marker::LINE_STRIP;
  lane_waypoint_marker.action = visualization_msgs::Marker::ADD;
  lane_waypoint_marker.scale.x = 0.1;
  lane_waypoint_marker.scale.y = 0.1;
  lane_waypoint_marker.frame_locked = false;

  lane_waypoint_marker.points.clear();
  lane_waypoint_marker.id = 1;

  double delta_distance = 1.0;
  unsigned int point_number = 5;
  for (unsigned int j=0; j < point_number; j++)
  {
    geometry_msgs::Point point;
    point.x = j*delta_distance;
    point.y = -( params.c3*pow(point.x,3) + params.c2*pow(point.x,2) + params.c1*point.x + params.c0);
    point.z = 0;

    lane_waypoint_marker.points.push_back(point);
    //ROS_INFO("[x,y]=[%f,%f]",point.x,point.y);
  }

  lane_waypoint_marker.color.a = 0.9;
  lane_waypoint_marker.color.r = 0.0;
  lane_waypoint_marker.color.g = 0.0;
  lane_waypoint_marker.color.b = 1.0;

  markerArray.markers.push_back(lane_waypoint_marker);
}


