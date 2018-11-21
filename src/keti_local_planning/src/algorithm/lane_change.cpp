#include "lane_change.h"
#include "ros_helpers.h"
#include <math.h>

LaneChange::LaneChange()
{
  updatePlanningParams();
}

LaneChange::LaneChange(const LaneHandler&  curr_lane, const LaneHandler& to_lane, const geometry_msgs::Pose& curr_pose)
{
  curr_lane_ = curr_lane;
  to_lane_ = to_lane;
  curr_pose_ = curr_pose;
  updatePlanningParams();
}

void LaneChange::updatePlanningParams()
{
  ratio=0.2113;
  longitudinal_distance = 20;


  //nh.getParam("/lane_change/longitudinal_distance", longitudinal_distance);
  //nh.getParam("/lane_chane/lane_to_lane_distance",lane_to_land_distance);

}

std::vector<WayPoint> LaneChange::getConnectionLane()
{
  unsigned int start_idx, end_idx, closest_idx_next_lane;
  WayPoint start_wp, closest_wp_next_lane;

  start_idx = curr_lane_.getFrontWaypoint(curr_pose_, 5);
  start_wp =  curr_lane_.waypoints_lane_.at(start_idx);

  // Find lane_to_lane_distance
  closest_idx_next_lane = curr_lane_.getClosestWaypointNextLane(to_lane_.waypoints_lane_,start_idx);
  closest_wp_next_lane = to_lane_.waypoints_lane_.at(closest_idx_next_lane);
  lane_to_land_distance = start_wp.getDistance(closest_wp_next_lane.getPoint());
  end_idx = to_lane_.getFrontWaypointByDistance(to_lane_.waypoints_lane_.at(closest_idx_next_lane).getPose(),longitudinal_distance);


  // Transform start and end pose from map frame to start_idx pose from
  tf::Transform transform;
  start_wp.pos_.a_ = start_wp.pos_.a_ - M_PI_2;
  RosHelpers::GetTransformFromWaypoint(start_wp, transform);


  // Fine waypoints vector whihc is in front of the car using cubic spline parameter
  std::vector<WayPoint> result;
  double y_car, x_car;
  double c3, c4, c5;
  c3 = 10; c4 = -15; c5 = 6;
  WayPoint to_lane_waypoint, connect_wp_map;
  tf::Transform inv_transform;
  inv_transform = transform.inverse();

  for(unsigned int i=start_idx; i<end_idx+1; i++)
  {

    RosHelpers::ConvertWaypointUsingTF(curr_lane_.waypoints_lane_.at(i),inv_transform, to_lane_waypoint);

    y_car = to_lane_waypoint.pos_.y_;

    x_car = -lane_to_land_distance*(c3*pow(y_car/longitudinal_distance,3)
        + c4*pow(y_car/longitudinal_distance,4)
        + c5*pow(y_car/longitudinal_distance,5));

    WayPoint point(x_car,y_car,0);
    RosHelpers::ConvertWaypointUsingTF(point,transform, connect_wp_map);
    result.push_back(connect_wp_map);
  }

  return result;

}
