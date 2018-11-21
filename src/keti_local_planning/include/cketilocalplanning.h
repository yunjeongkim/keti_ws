#ifndef CKETILOCALPLANNING_H
#define CKETILOCALPLANNING_H

/**
 * @brief Planning local path avoiding obstacle and following lane.
 * @author Yunjeong Kim(dallddungi@naver.com)
 *
 * It generates local path consisting of waypoints which follwoing lane while avoiding obstacles.
 * \ingroup MainGroup
 * @{
 */

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include "autoware_msgs/LaneArray.h"
#include "data_handler/lanearray_handler.h"
#include "data_handler/lane_handler.h"

class CKetiLocalPlanning{

protected:
  ros::NodeHandle nh;
  ros::Publisher pub_LocalPath;
  ros::Publisher pub_LocalTrajectoriesRviz;
  ros::Publisher pub_WaypointTrajectoriesRviz;
  ros::Publisher pub_CubicSplineRviz;
  ros::Subscriber sub_current_pose;
  ros::Subscriber sub_WayPlannerPaths;

  geometry_msgs::Pose current_pose_;
  LaneArrayHandler lanes_handler_;
  bool bInitPose;

  /**
   * @brief callbackGetCurrentPose
   * @param geometry_msgs::PoseStampedConstPtr /current_pose
   *
   */
  void callbackGetCurrentPose(const geometry_msgs::PoseStampedConstPtr& msg);
  /**
   * @brief callbackGetWayPlannerPath
   * @param autoware_msgs::LaneArrayConstPtr /lane_waypoints_Array
   */
  void callbackGetWayPlannerPath(const autoware_msgs::LaneArray& msg);
public:
  CKetiLocalPlanning();
  ~CKetiLocalPlanning();
  void PlannerMainLoop();

};
/** @} */
#endif // CKETILOCALPLANNING_H
