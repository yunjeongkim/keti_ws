#include <ros/ros.h>
#include <tf/transform_listener.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "get_tf");
  ros::NodeHandle node;
  tf::TransformListener listener;

  ros::Rate rate(10.0);
  while (node.ok()){
    tf::StampedTransform transform;
    try{

      listener.lookupTransform("/map", "/front_camera_link", ros::Time(), transform);
    }
    catch (tf::TransformException &ex) {
      ROS_ERROR("%s",ex.what());
      ros::Duration(1.0).sleep();
      continue;
    }

    ROS_INFO("x:%f, y:%f",transform.getOrigin().getX(), transform.getOrigin().getY());
    rate.sleep();
  }
  return 0;
};
