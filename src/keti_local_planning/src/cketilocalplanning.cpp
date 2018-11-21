#include "cketilocalplanning.h"
#include <visualization_msgs/MarkerArray.h>
#include "data_handler/pose_point_handler.h"
#include "ros_helpers.h"
#include <tf/transform_listener.h>
#include "data_classes/waypoint.h"
#include "curve_fitting.h"
#include "mobileye_560_660_msgs/LkaLane.h"
#include "lane_change.h"


CKetiLocalPlanning::CKetiLocalPlanning()
{
  // Publisher
  pub_LocalPath = nh.advertise<autoware_msgs::lane>( "/final_waypoints", 100,true);
  pub_LocalTrajectoriesRviz = nh.advertise<visualization_msgs::MarkerArray>("local_trajectories", 1);
  pub_WaypointTrajectoriesRviz = nh.advertise<visualization_msgs::MarkerArray>("waypoint_trajectories", 1);
  pub_CubicSplineRviz = nh.advertise<visualization_msgs::MarkerArray>("cubic_spline_trajectories", 1);

  // Subscriber
  sub_current_pose 	= nh.subscribe("/current_pose", 			1,		&CKetiLocalPlanning::callbackGetCurrentPose, 		this);
  sub_WayPlannerPaths = nh.subscribe("/lane_waypoints_array", 	1,		&CKetiLocalPlanning::callbackGetWayPlannerPath, 	this);

  // Initialize Variable
  bInitPose = false;

}

CKetiLocalPlanning::~CKetiLocalPlanning()
{

}


void CKetiLocalPlanning::callbackGetCurrentPose(const geometry_msgs::PoseStampedConstPtr& msg)
{
  current_pose_ = msg->pose;
  bInitPose = true;
}

void CKetiLocalPlanning::callbackGetWayPlannerPath(const autoware_msgs::LaneArray& msg)
{
  lanes_handler_.setLaneArray(msg);
}

void CKetiLocalPlanning::PlannerMainLoop()
{
  ros::Rate loop_rate(100);

  LaneHandler right_lane_handler, left_lane_handler;

  while (ros::ok())
  {
    ros::spinOnce();

    // Receive waypoints from autoware waypoint_loader
    if(lanes_handler_.autoware_lanearray_.lanes.empty() || (bInitPose==false))
    {
      continue;
    }else{
      right_lane_handler.setLane(lanes_handler_.autoware_lanearray_.lanes.at(1));
      left_lane_handler.setLane(lanes_handler_.autoware_lanearray_.lanes.at(0));
    }
    LaneChange lane_change(right_lane_handler, left_lane_handler, current_pose_);
    std::vector<WayPoint> lane_connection;
    lane_connection = lane_change.getConnectionLane();

    // Transfrom std::vector<WayPoint> to autoware_msgs type to publish
    LaneHandler out_lane_handler(lane_connection);
    pub_LocalPath.publish(out_lane_handler.getAutowareLane());

    //Visualization for local path
    visualization_msgs::MarkerArray waypoint_marker_local;
    RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(lane_connection,waypoint_marker_local);
    pub_LocalTrajectoriesRviz.publish(waypoint_marker_local);



    // Visualization for global path
    visualization_msgs::MarkerArray waypoint_marker;
    RosHelpers::ConvertFromPlannerHToAutowareVisualizePathFormat(lanes_handler_.lanes_,waypoint_marker);
    pub_WaypointTrajectoriesRviz.publish(waypoint_marker);

    loop_rate.sleep();
  }
}






















