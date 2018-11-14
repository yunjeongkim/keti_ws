#include "coms_commander/coms_commander.h"
#include <ros/console.h>

/* Constructors, Destructor, and Assignment operators {{{ */
ComsCommander::ComsCommander(const float steering_gear_ratio,
                             const float wheel_base,
                             const float update_rate,
                             const std::vector<float>& steering_vel,
                             const float cmd_ang_acc)
  : first_twist_received{false}
  , steering_gear_ratio{steering_gear_ratio}
  , wheel_base{wheel_base}
  , update_rate{update_rate}
  , steering_vel{steering_vel}
  , cmd_ang_acc{cmd_ang_acc}
  , is_ready{false}
{
  ros::NodeHandle nh;
  /*
    gab_pub = nh.advertise<coms_msgs::ComsGAB>("cmd_gab", 100);
    steer_pub = nh.advertise<coms_msgs::Steering>("cmd_steer", 100);
    */
  control_pub = nh.advertise<prius_msgs::Control>("prius",100);
  odom_sub = nh.subscribe("base_pose_ground_truth",
                          100,
                          &ComsCommander::odom_callback,
                          this);
  /*
  cmd_vel_sub = nh.subscribe("cmd_vel",
                             100,
                             &ComsCommander::cmd_vel_callback,
                             this);
                             */
  twist_cmd_sub = nh.subscribe("twist_cmd",
                             100,
                             &ComsCommander::twist_cmd_callback,
                             this);
  control_msg.header.frame_id = "chassis";

  //cmd_percentage_file.open("/home/dallddungi/.ros/log/cmd_percentage.txt");
  //throttle_file.open("/home/dallddungi/.ros/log/throttle.txt");
/*

  current_vel_file.open("/home/dallddungi/.ros/log/current.txt");
  brake_file.open("/home/dallddungi/.ros/log/brake.txt");
  cmd_angle_file.open("/home/dallddungi/.ros/log/cmd_angle.txt");
  cmd_steer_file.open("/home/dallddungi/.ros/log/cmd_steer.txt");
  current_angular_vel_file.open("/home/dallddungi/.ros/log/current_angular_vel.txt");
  cmd_angular_vel_file.open("/home/dallddungi/.ros/log/cmd_angular_vel.txt");
  */
}

// Destructor
ComsCommander::~ComsCommander()
{
  if (velocity_thread.joinable()) {
    velocity_thread.join();
  }
  /*
  if (steering_thread.joinable()) {
    steering_thread.join();
  }
  */
}
/* }}} */

void
ComsCommander::set_pid(const double KP, const double KI, const double KD) {
  this->KP = KP;
  this->KI = KI;
  this->KD = KD;
  err_i = 0;
  prev_err_p = 0;
}

void
ComsCommander::begin_commanding() {
  is_ready = true;
  control_msg.header.stamp = ros::Time::now();
  velocity_thread = std::thread{&ComsCommander::velocity_control, this};
  // steering_thread = std::thread{&ComsCommander::steering_control, this};
}

void
ComsCommander::end_commanding() {
  is_ready = false;

  if (velocity_thread.joinable()) {
    velocity_thread.join();
  }
   /*
  cmd_percentage_file.close();
  throttle_file.close();


  current_vel_file.close();
  brake_file.close();
  cmd_angle_file.close();
  cmd_steer_file.close();
  current_angular_vel_file.close();
  cmd_angular_vel_file.close();
  */
}

void
ComsCommander::odom_callback(const nav_msgs::Odometry& odom) {
  std::lock_guard<std::mutex> lock{odom_mutex};
  current_odom = odom;
}

void
ComsCommander::twist_cmd_callback(const geometry_msgs::TwistStamped& twist_cmd) {
  std::lock_guard<std::mutex> lock{twist_mutex};
  target_twist = twist_cmd.twist;
  first_twist_received = true;
}


void
ComsCommander::velocity_control() {
  auto r = ros::Rate{update_rate};
  while (ros::ok()) {
    r.sleep();

    if (!is_ready || !first_twist_received) {
      continue;
    }

    odom_mutex.lock();
    auto v_cur = get_speed(current_odom.twist.twist);
    odom_mutex.unlock();
    twist_mutex.lock();
    auto tgt = target_twist;
    twist_mutex.unlock();
    auto v_tgt = get_speed(tgt);
    auto tgt_omega = tgt.angular.z;

    auto cur_vel = v_cur;

    // Angular Velocity Control
    //double max_angle = 0.6352; // it is calculated by front-left-steer-joint.
    double max_angle = 0.4; // it is calculated by front-left-steer-joint.
    //auto tire_ang = std::atan2(tgt_omega * wheel_base, cur_vel);
    double sin_steer_angle = tgt_omega * wheel_base/cur_vel;
    double tire_ang;
    if(std::abs(sin_steer_angle) <= 1){
      tire_ang = std::asin(tgt_omega * wheel_base/cur_vel);
    }else{
      tire_ang = 0;
    }
    control_msg.steer = tire_ang / max_angle;

    /*
    std::cout<<"cur_vel:"<<cur_vel<<",";
    std::cout<<"tire_and:"<<tire_ang<<",";
    std::cout<<"tgt_omega:"<<tgt_omega<<",";
    std::cout<<"steer:"<<control_msg.steer<<std::endl;
*/

    // Linear Velocity Control
    auto err_p = v_tgt - v_cur;
    this->err_i += err_p;
    auto err_d = err_p - prev_err_p;
    double cmd_percentage = KP * err_p + KI * err_i + KD * err_d;

    if (tgt.linear.x == 0) {
      control_msg.shift_gears = control_msg.NEUTRAL;
      control_msg.throttle = 0;
      control_msg.brake = 1;
      control_pub.publish(control_msg);
      continue;
    }

    if (tgt.linear.x < 0) {
      control_msg.shift_gears = control_msg.REVERSE;
    }
    else {

      control_msg.shift_gears=control_msg.FORWARD;
    }
    double cmd = cmd_percentage*0.01;
    if (cmd_percentage > 0) {
      //if (cmd_percentage>100){
      if(cmd_percentage>40){
        //control_msg.throttle = 1;
        control_msg.throttle = 0.4;
      }else{
        control_msg.throttle = cmd;
      }
      control_msg.brake = 0;
    } else {
      if (cmd_percentage<-100){
        control_msg.brake = 1;
      }else{
        control_msg.brake = -cmd;
      }
      control_msg.throttle = 0;
    }
    control_pub.publish(control_msg);
    //cmd_percentage_file<<cmd_percentage<<std::endl;
    //throttle_file<<control_msg.throttle<<std::endl;
/*

    current_vel_file<<v_cur<<std::endl;
    brake_file<<control_msg.brake<<std::endl;
    cmd_steer_file<<control_msg.steer<<std::endl;
    cmd_angle_file<<cmd_ang<<std::endl;
    current_angular_vel_file<<current_odom.twist.twist.angular.z<<std::endl;
    cmd_angular_vel_file<<tgt_omega<<std::endl;
*/
  }
}
/*
void
ComsCommander::steering_control() {
  auto r = ros::Rate{update_rate};
  while (ros::ok()) {
    r.sleep();

    if (!is_ready) {
      continue;
    }

    twist_mutex.lock();
    auto tgt_omega = target_twist.angular.z;
    twist_mutex.unlock();

    odom_mutex.lock();
    auto cur_vel = get_speed(current_odom.twist.twist);
    odom_mutex.unlock();

    if (cur_vel == 0) {
      continue;
    }
    cur_vel = 0.1;
    auto tire_ang = std::atan2(tgt_omega * wheel_base, cur_vel);
    auto cmd_ang = tire_ang * steering_gear_ratio;
    auto cmd_ang_vel = get_steering_speed(cur_vel, cmd_ang);

    if (cmd_ang_vel == 0) {
      continue;
    }


    coms_msgs::Steering msg;
    // Position (rad)
    msg.pos = cmd_ang;
    // Velocity (rad/s)
    msg.vel = cmd_ang_vel;
    // Acceleration (rad/s^2)
    msg.acc = cmd_ang_acc;
    steer_pub.publish(msg);

    control_msg.steer = cmd_ang / (3.141592/2);
    control_pub.publish(control_msg);
  }
}
*/
double
ComsCommander::get_speed(const geometry_msgs::Twist& twist) {
  auto v_x = twist.linear.x;
  auto v_y = twist.linear.y;
  auto v_z = twist.linear.z;
  auto v_xy = std::sqrt(std::pow(v_x, 2) + std::pow(v_y, 2));
  auto v = std::sqrt(std::pow(v_xy, 2) + std::pow(v_z, 2));
  return static_cast<double>(v);
}

double
ComsCommander::get_steering_speed(const double v_cur, const double cmd_ang) {
  if(cmd_ang > 0 ){
    if (v_cur < steering_vel[0]) {
      return 0;
    }
    if (v_cur > steering_vel[1]) {
      return steering_vel[2];
    }
    auto slope = steering_vel[2] / (steering_vel[1] - steering_vel[0]);
    return v_cur * slope;

  }else{
    if (v_cur < steering_vel[0]) {
      return 0;
    }
    if (v_cur > steering_vel[1]) {
      return -steering_vel[2];
    }
    auto slope = -steering_vel[2] / (steering_vel[1] - steering_vel[0]);
    return v_cur * slope;

  }


}
