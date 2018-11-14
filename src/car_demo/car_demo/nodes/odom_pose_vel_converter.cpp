#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/TwistStamped.h>
#include <fstream>

using namespace std;

class OdomPoseVelConverter{
private:
  // ROS
    ros::NodeHandle nh_;
    ros::Subscriber sub_odom_;
    ros::Publisher pub_pose_;
    ros::Publisher pub_vel_;
    int queue_size_;
    string odom_in_, pose_out_, vel_out_;
    // For debugging
    std::ofstream linear_vel_file, angular_vel_file;

public:
    OdomPoseVelConverter():nh_("~"),queue_size_(100), odom_in_("/base_pose_ground_truth"),
      pose_out_("/current_pose"), vel_out_("/current_velocity"){

        sub_odom_ = nh_.subscribe(odom_in_, queue_size_, &OdomPoseVelConverter::callbackOdom,this);
        pub_pose_ = nh_.advertise<geometry_msgs::PoseStamped>(pose_out_,queue_size_);
        pub_vel_ = nh_.advertise<geometry_msgs::TwistStamped>(vel_out_,queue_size_);
        nh_.resolveName(odom_in_).c_str();
        nh_.resolveName(pose_out_).c_str();
        nh_.resolveName(vel_out_).c_str();
        //linear_vel_file.open("/home/dallddungi/.ros/log/cardemo_linear_vel.txt");
        //angular_vel_file.open("/home/dallddungi/.ros/log/cardemo_angular_vel.txt");

    }

    void callbackOdom(const nav_msgs::OdometryConstPtr &msg){
      geometry_msgs::PoseStamped pose_out;
      geometry_msgs::TwistStamped vel_out;
      double linear_vel;
      pose_out.pose = msg->pose.pose;
      pose_out.header = msg->header;
      vel_out.twist = msg->twist.twist;
      vel_out.header = msg->header;
      pub_pose_.publish(pose_out);
      pub_vel_.publish(vel_out);

      // For debugging
      linear_vel = get_speed(msg->twist.twist);
      linear_vel_file<<linear_vel<<std::endl;
      angular_vel_file<<msg->twist.twist.angular.z<<std::endl;
      //std::cout<<msg->header.stamp<<std::endl;
    }
    double get_speed(const geometry_msgs::Twist& twist) {
      double v_x = twist.linear.x;
      double v_y = twist.linear.y;
      double v_z = twist.linear.z;
      double v_xy = std::sqrt(std::pow(v_x, 2) + std::pow(v_y, 2));
      double v = std::sqrt(std::pow(v_xy, 2) + std::pow(v_z, 2));
      return static_cast<double>(v);
    }
};


int main(int argc, char **argv)
{
  ros::init(argc, argv, "odom_pose_vel_converter",ros::init_options::AnonymousName);
  OdomPoseVelConverter p;
  ros::spin();
  return 0;

}
