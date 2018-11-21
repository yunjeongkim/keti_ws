#ifndef LANE_CHANGE_H
#define LANE_CHANGE_H

#include <vector>
#include "waypoint.h"
#include <ros/ros.h>
#include "lane_handler.h"
/**
 * @brief The LaneChange class
 *
 */
class LaneChange{
public:
  LaneChange();
  LaneChange(const LaneHandler&  curr_lane, const LaneHandler& to_lane, const geometry_msgs::Pose& curr_pose);
  std::vector<WayPoint> getConnectionLane();
  /**
   * @brief curr_lane_ input, current lane in the map frame
   */
  LaneHandler curr_lane_;

  /**
   * @brief to_lane_ input, destination lane in the map frame
   */
  //std::vector<WayPoint> to_lane_;
  LaneHandler to_lane_;

  /**
   * @brief curr_pose_ input
   */
  //geometry_msgs::Pose curr_pose_;
  geometry_msgs::Pose curr_pose_;

  /**
   * @brief connection_lane_ output, connection lane in the map frame
   */
  std::vector<WayPoint> connection_lane_;

protected:
  //ros::NodeHandle nh;
  float ratio;
  float longitudinal_distance;
  float lane_to_land_distance;

  void updatePlanningParams();




};
#endif // LANE_CHANGE_H
