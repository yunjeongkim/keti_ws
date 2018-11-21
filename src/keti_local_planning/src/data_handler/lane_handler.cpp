#include "data_handler/lane_handler.h"
#include <tf/tf.h>
#include "utils/angle_utils.h"
#include "data_handler/pose_point_handler.h"


LaneHandler::LaneHandler()
{

}

LaneHandler::LaneHandler(const std::vector<WayPoint>& lane)
{
  waypoints_lane_ = lane;
  convertFromWaypointsToLane(lane,0,autoware_lane_);
}

LaneHandler::LaneHandler(const autoware_msgs::lane &lane)
{
  autoware_lane_ = lane;
  convertFromLaneToWaypoints(lane, waypoints_lane_);
}
void LaneHandler::setLane(const autoware_msgs::lane& lane)
{
  autoware_lane_ = lane;
  convertFromLaneToWaypoints(lane, waypoints_lane_);
}
void LaneHandler::setLane(const std::vector<WayPoint>& lane)
{
  waypoints_lane_ = lane;
}

autoware_msgs::lane LaneHandler::getAutowareLane()
{
  return autoware_lane_;
}
std::vector<WayPoint> LaneHandler::getWaypointsLane()
{
  return waypoints_lane_;
}

void LaneHandler::convertFromLaneToWaypoints(const autoware_msgs::lane& lane, std::vector<WayPoint>& path)
{
  for(unsigned int j = 0 ; j < lane.waypoints.size(); j++)
  {
    WayPoint wp(lane.waypoints.at(j).pose.pose.position.x,
                lane.waypoints.at(j).pose.pose.position.y,
                lane.waypoints.at(j).pose.pose.position.z,
                tf::getYaw(lane.waypoints.at(j).pose.pose.orientation));
    wp.v_ = lane.waypoints.at(j).twist.twist.linear.x;
    path.push_back(wp);
  }
}

void LaneHandler::convertFromWaypointsToLane(const std::vector<WayPoint>& path, const int& iStart,
                                             autoware_msgs::lane& trajectory)
{
  trajectory.waypoints.clear();
  for(unsigned int i=iStart; i < path.size(); i++)
  {
    autoware_msgs::waypoint wp;
    wp.pose.pose.position.x = path.at(i).pos_.x_;
    wp.pose.pose.position.y = path.at(i).pos_.y_;
    wp.pose.pose.position.z = path.at(i).pos_.z_;
    wp.pose.pose.orientation = tf::createQuaternionMsgFromYaw(AngleUtils::SplitPositiveAngle(path.at(i).pos_.a_));
    wp.twist.twist.linear.x = path.at(i).v_;
    trajectory.waypoints.push_back(wp);
  }
}

int LaneHandler::getClosestWaypoint(const geometry_msgs::Pose& current_pose)
{

  if (waypoints_lane_.empty()==true)
    return -1;

  // search closest candidate within a certain meter
  double search_distance = 50.0;
  std::vector<int> waypoint_candidates;
  PosePointHandler pp_handler;

  for (unsigned int i = 0; i < waypoints_lane_.size(); i++)
  {
    pp_handler.setPosePoint(current_pose,waypoints_lane_.at(i).getPoint());
    if (waypoints_lane_.at(i).getDistance(current_pose.position) > search_distance)
      continue;

    if (!pp_handler.isPoisitionInFrontOfPose())
      continue;

    waypoint_candidates.push_back(i);
  }

  // get closest waypoint from candidates
  if (!waypoint_candidates.empty())
  {
    int waypoint_min = -1;
    double distance_min = DBL_MAX;
    for(uint el=0; el<waypoint_candidates.size();el++)
    {
      int cur_way = waypoint_candidates.at(el);
      double d = waypoints_lane_.at(cur_way).getDistance(current_pose.position);
      if (d < distance_min)
      {
        waypoint_min = cur_way;
        distance_min = d;
      }
    }
    return waypoint_min;
  }
  else
  {
    ROS_INFO("no candidate. search closest waypoint from all waypoints...");
    // if there is no candidate...
    int waypoint_min = -1;
    double distance_min = DBL_MAX;
    for (unsigned int i = 1; i <waypoints_lane_.size(); i++)
    {
      pp_handler.setPosePoint(current_pose,waypoints_lane_.at(i).getPoint());

      if (!pp_handler.isPoisitionInFrontOfPose())
        continue;


      double d = waypoints_lane_.at(i).getDistance(current_pose.position);
      if (d < distance_min)
      {
        waypoint_min = i;
        distance_min = d;
      }
    }
    return waypoint_min;
  }
}

int LaneHandler::getFrontWaypoint(const geometry_msgs::Pose& wp, const int num_idx_to_skip)
{
  int closest_waypoint = LaneHandler::getClosestWaypoint(wp);
  return closest_waypoint+num_idx_to_skip;
}

int LaneHandler::getClosestWaypointNextLane(const std::vector<WayPoint> next_lane_, const int curr_lane_waypoint_idx)
{
  if (waypoints_lane_.empty()==true)
    return -1;

  int waypoint_min = -1;
  double distance_min = DBL_MAX;
  geometry_msgs::Point curr_waypoint = waypoints_lane_.at(curr_lane_waypoint_idx).getPoint();
  for (unsigned int i = 1; i <next_lane_.size(); i++)
  {

    double d = next_lane_.at(i).getDistance(curr_waypoint);
    //ROS_INFO("i=%d",i);
    if (d < distance_min)
    {
      waypoint_min = i;
      distance_min = d;
    }
  }
  return waypoint_min;
}


int LaneHandler::getFrontWaypointByDistance(const geometry_msgs::Pose& wp, const float distance)
{
  int closest_waypoint = LaneHandler::getClosestWaypoint(wp);
  WayPoint cur_wp;
  float d;

  for(unsigned int i=closest_waypoint; i<waypoints_lane_.size(); i++)
  {
    cur_wp = waypoints_lane_.at(i);
    d = cur_wp.getDistance(wp.position);
    if(d>distance)
      return i;
  }
  return -1;
}

