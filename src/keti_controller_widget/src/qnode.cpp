/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/keti_controller_widget/qnode.hpp"
#include "../include/keti_controller_widget/keti_dispatch.h"
#include "../include/keti_controller_widget/keti_util.h"

#include "keti_msgs/APM.h"
#include "keti_msgs/ASM.h"
#include "keti_msgs/Misc.h"
#include "keti_msgs/MoConf.h"
#include "keti_msgs/MoVal.h"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace keti_controller_widget {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
  init_argc(argc),
  init_argv(argv)
{}

QNode::~QNode() {
  if(ros::isStarted()) {
    ros::shutdown(); // explicitly needed since we use ros::start();
    ros::waitForShutdown();
  }
  wait();
}

bool QNode::init() {
  ros::init(init_argc,init_argv,"keti_controller_widget");
  ros::NodeHandle nh;
  ros::NodeHandle nh_p{"~"};

  nh_p.getParam("steering_gear_ratio", steering_gear_ratio);
  nh_p.getParam("wheel_base", wheel_base);
  nh_p.getParam("update_rate", update_rate);
  nh_p.getParam("steering_vel", steering_vel);
  nh_p.getParam("KP", KP);
  nh_p.getParam("KI", KI);
  nh_p.getParam("KD", KD);
  nh_p.getParam("amax",amax);

  // Output
  apm_pub = nh.advertise<keti_msgs::APM>("apm_report",100);
  asm_pub = nh.advertise<keti_msgs::ASM>("asm_report",100);
  misc_pub = nh.advertise<keti_msgs::Misc>("misc_report",100);
  can_pub = nh.advertise<can_msgs::Frame>("can_send",100);

  // For test
  can_output = nh.advertise<can_msgs::Frame>("can_output",100);

  // Input
  rec_can_sub = nh.subscribe("recv_msgs",
                             100,
                             &QNode::recv_can_callback,
                             this);
  ref_vel_sub = nh.subscribe("ref_vel",
                             100,
                             &QNode::ref_vel_callback,
                             this);
  can_out.is_extended = false;


  button_pressed = 0;

  start();
  return true;
}

void QNode::run() {
  ros::Rate loop_rate(25);
  int count = 1;
  //start();

  unsigned short upper_mask = 65280; // 1111111100000000
  unsigned short lower_mask = 255; //0000000011111111
  while ( ros::ok()  ) {
    //steering_control();
    //velocity_control();
    //ROS_INFO("I'm running!");


    if(button_pressed==1)
    {

      can_out.id = keti_controller_widget::ID_MOVAL;
      can_out.dlc = sizeof(MsgMoVal);
      ptr_moval = (MsgMoVal*)can_out.data.elems;
      memset(ptr_moval, 0x00, sizeof(*ptr_moval));

      ptr_moval->steer_cmd_upper = (((int)(10*steering_cmd))&upper_mask)/256;
      ptr_moval->steer_cmd_lower = (int)(10*steering_cmd)&lower_mask;
      ptr_moval->set_disp_speed = disp_speed;
      ptr_moval->areqmax_cmd_upper = (((int)(100*(acc_cmd+10.23)))&upper_mask)/256;
      ptr_moval->areqmax_cmd_lower = (int)(100*(acc_cmd+10.23))&lower_mask;
      can_pub.publish(can_out);

      ros::spinOnce();
      loop_rate.sleep();

      can_out.id = keti_controller_widget::ID_MOCONF;
      can_out.dlc = sizeof(MsgMoVal);
      ptr_moconf = (MsgMoConf*) can_out.data.elems;
      memset(ptr_moconf,0x00,sizeof(*ptr_moconf));
      ptr_moconf->apm_en = this->apm_en;
      ptr_moconf->acc_stopreq = this->acc_stopreq;
      ptr_moconf->asm_en = this->asm_en;
      ptr_moconf->apm_ignore = this->apm_ignore;
      ptr_moconf->apm_slevel = (this->apm_slevel)*0.5;
      ptr_moconf->mo_alvcnt = count;

      can_pub.publish(can_out);
      ros::spinOnce();
      loop_rate.sleep();

      ++count;
    }

    loop_rate.sleep();

  }
  std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
  Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}

void QNode::recv_can_callback(const can_msgs::Frame::ConstPtr& msg){
  can_output.publish(*msg);
  if (!msg->is_rtr && !msg->is_error && !msg->is_extended) {
    switch (msg->id) {
    case keti_controller_widget::ID_APM:
    {
      const MsgReportAPM *ptr = (const MsgReportAPM*)msg->data.elems;
      keti_msgs::APM out;
      keti_controller_widget::keti_util util;

      float steerangle_deg;
      out.APM_Fd_EN = ptr->apm_fd_en?true:false;
      out.Mo_Fd_State = ptr->mo_fd_state;
      out.APM_Fd_ErrBit_PD = ptr->apm_fd_errbit_pd?true:false;
      out.APM_Fd_ErrBit_APM = ptr->apm_fd_errbit_apm?true:false;
      out.APM_Fd_ErrBit_VInfo = ptr->apm_fd_errbit_vinfo?true:false;
      out.APM_Fd_ErrBit_SAS = ptr->apm_fd_errbit_sas?true:false;
      out.APM_Fd_Override = ptr->apm_fd_override?true:false;
      out.APM_Fd_Ovrrd_Ignore = ptr->apm_fd_ovrrd_ignore?true:false;
      steerangle_deg = 0.1*(ptr->apm_fd_steerangle_upper*256 + ptr->apm_fd_steerangle_lower);
      out.APM_Fd_SteerAngle = steerangle_deg;//util.degree_to_rad(steerangle_deg); // Sign Check!!
      out.APM_Fd_Steer_Torq =  0.01*(ptr->apm_fd_steer_torq_upper*256 + ptr->apm_fd_steer_torq_lower - 2048);
      out.APM_Fd_Str_out_tq =  0.1*(ptr->apm_fd_str_out_tq_upper*16 + ptr->apm_fd_str_out_tq_lower - 2048);

      out.Mo_Fd_AlvCnt = ptr->mo_fd_alvcnt;
      apm_pub.publish(out);
      curr_angle =  out.APM_Fd_SteerAngle;
      //ROS_INFO(":%f",steerangle_deg);
    }
      break;

    case keti_controller_widget::ID_ASM:
    {
      const MsgReportASM *ptr = (const MsgReportASM*)msg->data.elems;
      keti_msgs::ASM out;
      keti_util util;
           if(ptr->mo_fd_state == 0x00){out.Mo_Fd_State = 0;}
           out.ASM_Fd_EN = ptr->asm_fd_en?true:false;
           /*
           else if (ptr->mo_fd_state==0x01) {out.Mo_Fd_State=1;}
           else{out.Mo_Fd_State=2;}
           */
      out.Mo_Fd_State = ptr->mo_fd_state;
      out.ACC_Fd_ErrBit_PD = ptr->acc_fd_errbit_pd?true:false;
      out.ACC_Fd_ErrBit_TCU = ptr->acc_fd_errbit_tcu?true:false;
      out.ACC_Fd_ErrBit_ASM = ptr->acc_fd_errbit_asm?true:false;
      out.ACC_Fd_VSpeed = util.km_per_hour_to_m_per_sec(ptr->acc_fd_vspeed);
      out.Mo_Fd_AlvCnt = ptr->mo_fd_alvcnt;
      asm_pub.publish(out);
      curr_speed = out.ACC_Fd_VSpeed;
      //ROS_INFO("fd_speed:%f",ptr->acc_fd_vspeed);
    }
      break;

    case keti_controller_widget::ID_MISC:
    {
      const MsgReportMisc *ptr = (const MsgReportMisc*)msg->data.elems;
      keti_msgs::Misc out;

      out.Switch_Plus = ptr->switch_plus?true:false;
      out.Switch_Minus = ptr->switch_minus?true:false;
      out.Switch_cancel = ptr->switch_cancel?true:false;
      out.Switch_ACC = ptr->switch_acc?true:false;
      out.Accel_Pedal_Pushed = ptr->accel_pedal_pushed?true:false;
      out.Brake_Pedal_Pushed = ptr->brake_pedal_pushed?true:false;
      out.Mo_Fd_Alv_Cnt = ptr->mo_fd_alv_cnt;
      misc_pub.publish(out);
      ROS_INFO("mo_alv_cnt:%d",ptr->mo_fd_alv_cnt);
    }
      break;

    default:
      break;
    }

  }
}

void QNode::ref_vel_callback(const geometry_msgs::TwistStamped & cmd_vel) {
  target_twist = cmd_vel.twist;
  first_twist_received = true;
}

void QNode::velocity_control() {

  auto v_cur = curr_speed;

  auto tgt = target_twist;
  auto v_tgt = get_speed(tgt);

  auto err_p = v_tgt - v_cur;
  this->err_i += err_p;
  auto err_d = err_p - prev_err_p;
  double cmd_percentage = KP * err_p + KI * err_i + KD * err_d;


  if (tgt.linear.x == 0) {
    acc_cmd = -amax;
  }

  if (cmd_percentage > 0) {
    if (cmd_percentage < amax){
      acc_cmd = cmd_percentage;
    }
    else{
      acc_cmd = amax;
    }
  }
  else {
    if(cmd_percentage > -amax){
      acc_cmd = -cmd_percentage;
    }
    else{
      acc_cmd= -amax;
    }
  }

}

void QNode::steering_control() {
  auto tgt_omega = target_twist.angular.z; // Ackerman angle's velocity = theta

  auto cur_vel = curr_speed;
  //auto cur_vel = 3;

  if(cur_vel == 0){
    steering_cmd = 0;
  }else{
    auto tire_ang = std::atan2(tgt_omega * wheel_base, cur_vel); // wheel angle's velocity = phi
    steering_cmd = tire_ang * steering_gear_ratio;
  }
}

double QNode::get_speed(const geometry_msgs::Twist& twist) {
  auto v_x = twist.linear.x;
  auto v_y = twist.linear.y;
  auto v_z = twist.linear.z;
  auto v_xy = std::sqrt(std::pow(v_x, 2) + std::pow(v_y, 2));
  auto v = std::sqrt(std::pow(v_xy, 2) + std::pow(v_z, 2));
  return static_cast<double>(v);
}

double QNode::get_steering_speed(const double v_cur, const double cmd_ang) {
  if (v_cur < steering_vel[0]) {
    return 0;
  }
  if (v_cur > steering_vel[1]) {
    return steering_vel[2];
  }

  auto slope = steering_vel[2] / (steering_vel[1] - steering_vel[0]);
  return v_cur * slope;
}


}  // namespace keti_controller_widget
