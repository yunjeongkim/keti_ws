#include "cketilocalplanning.h"
#include <visualization_msgs/MarkerArray.h>
#include "data_handler/pose_point_handler.h"
#include "ros_helpers.h"
#include <tf/transform_listener.h>
#include "data_classes/waypoint.h"
#include <ecl/geometry.hpp>
#include "curve_fitting.h"

using ecl::CubicSpline;
using ecl::Array;

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

}

CKetiLocalPlanning::~CKetiLocalPlanning()
{

}


void CKetiLocalPlanning::callbackGetCurrentPose(const geometry_msgs::PoseStampedConstPtr& msg)
{
  current_pose_ = msg->pose;
}

void CKetiLocalPlanning::callbackGetWayPlannerPath(const autoware_msgs::LaneArray& msg)
{
  lanes_handler_.setLaneArray(msg);
}

void CKetiLocalPlanning::PlannerMainLoop()
{
  ros::Rate loop_rate(100);

  LaneHandler lane_handler;
  tf::TransformListener tf_listener;

  while (ros::ok())
  {

    ros::spinOnce();
    if(lanes_handler_.autoware_lanearray_.lanes.empty())
    {
      continue;
    }else{
      lane_handler.setLane(lanes_handler_.autoware_lanearray_.lanes.at(1));
    }
    int closest_waypoint_number = lane_handler.getClosestWaypoint(current_pose_);

    if(closest_waypoint_number == -1){
      continue;
    }
    // out_waypoints: local trajectory to be generated.
    // out_trajectory: local trajectory to be published
    // Temperal Work: Generate local trajectory from 20 waypoints from the closest waypoint
    std::vector<WayPoint> out_waypoints_map;
    autoware_msgs::lane out_trajectory;
    const int local_waypoints_size = 20;
    if(lane_handler.waypoints_lane_.size()-closest_waypoint_number>local_waypoints_size){
      out_waypoints_map.insert(out_waypoints_map.begin(),
                               lane_handler.waypoints_lane_.begin()+closest_waypoint_number,
                               lane_handler.waypoints_lane_.begin()+closest_waypoint_number+local_waypoints_size);
    }else{
      out_waypoints_map.insert(out_waypoints_map.begin(),
                               lane_handler.waypoints_lane_.begin()+closest_waypoint_number,
                               lane_handler.waypoints_lane_.end());
    }

    // Transform out_waypoints_map in the map frame to out_waypoints_camera:
    // parameter: from_frame, to_frame, input_point, output_point
    tf::StampedTransform transform;
    std::vector<WayPoint> out_waypoints_camera;
    try{
      // Get TF relation between two frames
      tf_listener.lookupTransform("/front_camera_link", "/map", ros::Time(), transform); // (to_frame, from_frame)
    }
    catch (tf::TransformException &ex) {
      ros::Duration(1.0).sleep();
      continue;
    }
    for(unsigned int i=0; i<out_waypoints_map.size(); i++)
    {
      // Transform each point from map to front_camera_link
      tf::Vector3 out_tfv_map(out_waypoints_map.at(i).pos_.x_,out_waypoints_map.at(i).pos_.y_, out_waypoints_map.at(i).pos_.z_);
      tf::Vector3 out_tfv_camera = transform*out_tfv_map;

      // Transform tf:Vector3 to WayPoint
      WayPoint out_waypoint_camera(out_tfv_camera.getX(),out_tfv_camera.getY(),out_tfv_camera.getZ(),out_waypoints_map.at(i).v_);
      out_waypoints_camera.push_back(out_waypoint_camera);
    }

    LaneHandler out_lane_handler(out_waypoints_camera);
    pub_LocalPath.publish(out_lane_handler.getAutowareLane());

    CurveFitting lane_fitting_handler(out_waypoints_camera);
    CubicSplineParams fitting_params = lane_fitting_handler.getCubicSplineParameter();
    //ROS_INFO("[c3,c2,c1,c0]=[%f,%f,%f,%f]",fitting_params.c3,fitting_params.c2,fitting_params.c1,fitting_params.c0);

    //Visualization for cubic spline
    visualization_msgs::MarkerArray cubic_spline_marker;
    RosHelpers::ConvertFromCubicSplineToVisualizePathFormat(fitting_params,"front_camera_link",cubic_spline_marker);
    pub_CubicSplineRviz.publish(cubic_spline_marker);

    //Visualization for local path
    visualization_msgs::MarkerArray local_marker;
    RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(out_waypoints_camera,"front_camera_link",local_marker);
    //RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(out_waypoints_map,local_marker);
    pub_LocalTrajectoriesRviz.publish(local_marker);

    // Visualization for global path
    visualization_msgs::MarkerArray waypoint_marker;
    RosHelpers::ConvertFromPlannerHToAutowareVisualizePathFormat(lanes_handler_.lanes_,waypoint_marker);
    pub_WaypointTrajectoriesRviz.publish(waypoint_marker);


    loop_rate.sleep();
  }
}






















