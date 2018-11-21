#include "mobileye_input_generator/mobileye_input_generator.h"


MobileyeInputGenerator::MobileyeInputGenerator(){

}

void MobileyeInputGenerator::MainLoop(){
  ros::Rate loop_rate(100);

  //LaneHandler right_lane_handler, left_lane_handler;
/*
  while (ros::ok())
  {

    ros::spinOnce();
    // Receive waypoints from autoware waypoint_loader
    if(lanes_handler_.autoware_lanearray_.lanes.empty())
    {
      continue;
    }else{
      right_lane_handler.setLane(lanes_handler_.autoware_lanearray_.lanes.at(1));
      left_lane_handler.setLane(lanes_handler_.autoware_lanearray_.lanes.at(0));
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // From here, generate mobileye input
    // input: LaneHandler
    // output: CubicSplineParameter
    int closest_waypoint_number = right_lane_handler.getClosestWaypoint(current_pose_);

    if(closest_waypoint_number == -1){
      continue;
    }

    // Extract a part of the lane from the closest waypoint
    std::vector<WayPoint> out_waypoints_map;
    const int local_waypoints_size = 20;
    if(right_lane_handler.waypoints_lane_.size()-closest_waypoint_number>local_waypoints_size){
      out_waypoints_map.insert(out_waypoints_map.begin(),
                               right_lane_handler.waypoints_lane_.begin()+closest_waypoint_number,
                               right_lane_handler.waypoints_lane_.begin()+closest_waypoint_number+local_waypoints_size);
    }else{
      out_waypoints_map.insert(out_waypoints_map.begin(),
                               right_lane_handler.waypoints_lane_.begin()+closest_waypoint_number,
                               right_lane_handler.waypoints_lane_.end());
    }

    // Transform out_waypoints_map in the map frame to front_camera_link:
    // parameter: from_frame, to_frame, input_point, output_point
    tf::StampedTransform transform;
    RosHelpers::GetTransformFromTF("/front_camera_link","/map",transform);
    std::vector<WayPoint> out_waypoints_camera;
    for(unsigned int i=0; i<out_waypoints_map.size(); i++)
    {
      // Transform each point from map to front_camera_link
      tf::Vector3 out_tfv_map(out_waypoints_map.at(i).pos_.x_,out_waypoints_map.at(i).pos_.y_, out_waypoints_map.at(i).pos_.z_);
      tf::Vector3 out_tfv_camera = transform*out_tfv_map;

      // Transform tf:Vector3 to WayPoint
      WayPoint out_waypoint_camera(out_tfv_camera.getX(),out_tfv_camera.getY(),out_tfv_camera.getZ(),out_waypoints_map.at(i).v_);
      out_waypoints_camera.push_back(out_waypoint_camera);
    }
    // Conduct line_fitting
    CurveFitting lane_fitting_handler(out_waypoints_camera);
    CubicSplineParams center_lane_fitting_params = lane_fitting_handler.getCubicSplineParameter();

    // Fine waypoints vector whihc is in front of the car using cubic spline parameter
    std::vector<WayPoint> waypoints_from_parameters;
    double delta_distance=1;;
    double z_car, x_car;
    for(unsigned int i=0; i<10; i++)
    {
      z_car = i*delta_distance;
      x_car = center_lane_fitting_params.c3*pow(z_car,3)
          + center_lane_fitting_params.c2*pow(z_car,2)
          + center_lane_fitting_params.c1*z_car
          + center_lane_fitting_params.c0;
      WayPoint point(z_car,-x_car,0);
      waypoints_from_parameters.push_back(point);
    }

    // TF from camera_link to map
    tf::StampedTransform transform_camera_map;
    std::vector<WayPoint> waypoints_map;
    RosHelpers::GetTransformFromTF("/map","/front_camera_link",transform_camera_map);

    for(unsigned int i=0; i<waypoints_from_parameters.size(); i++)
    {
      // Transform each point from map to front_camera_link
      tf::Vector3 out_camera(waypoints_from_parameters.at(i).pos_.x_,waypoints_from_parameters.at(i).pos_.y_, waypoints_from_parameters.at(i).pos_.z_);
      tf::Vector3 out_map = transform_camera_map*out_camera;

      // Transform tf:Vector3 to WayPoint
      WayPoint out_waypoint_map(out_map.getX(),out_map.getY(),out_map.getZ(),waypoints_from_parameters.at(i).v_);
      waypoints_map.push_back(out_waypoint_map);
    }
    // Transfrom std::vector<WayPoint> to autoware_msgs type to publish
    LaneHandler out_lane_handler(out_waypoints_map);
    pub_LocalPath.publish(out_lane_handler.getAutowareLane());



    //Visualization for cubic spline
    visualization_msgs::MarkerArray cubic_spline_marker;
    RosHelpers::ConvertFromCubicSplineToVisualizePathFormat(center_lane_fitting_params,"front_camera_link",cubic_spline_marker);
    pub_CubicSplineRviz.publish(cubic_spline_marker);


    //Visualization for waypoints from parameters
    visualization_msgs::MarkerArray local_marker;
    RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(waypoints_from_parameters,"front_camera_link",local_marker);
    //RosHelpers::ConvertFromLocalPlannerHToAutowareVisualizePathFormat(out_waypoints_map,local_marker);
    pub_LocalTrajectoriesRviz.publish(local_marker);

     loop_rate.sleep();

  }
  */
}
