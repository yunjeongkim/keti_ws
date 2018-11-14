/**
 * @file /include/keti_controller_widget/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef keti_controller_widget_QNODE_HPP_
#define keti_controller_widget_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include <geometry_msgs/TwistStamped.h>
#include <can_msgs/Frame.h>
#include <thread>
#include <mutex>
#include "keti_msgs/MoConf.h"
#include "keti_msgs/MoVal.h"
#include "keti_dispatch.h"
#include <std_msgs/Float32.h>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace keti_controller_widget {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	void run();

  void recv_can_callback(const can_msgs::Frame::ConstPtr& msg);

  void ref_vel_callback(const geometry_msgs::TwistStamped& cmd_vel);

  can_msgs::Frame can_out;
  MsgMoVal *ptr_moval;
  MsgMoConf *ptr_moconf;

  bool apm_en;
  bool asm_en;
  bool apm_ignore;
  uint8_t apm_slevel;
  bool acc_stopreq;

  // Mo_Val
  float steering_cmd;
  float disp_speed;
  float acc_cmd;

  //
  unsigned int button_pressed;


Q_SIGNALS:
    void rosShutdown();

private:
  int init_argc;
  char** init_argv;

  ros::Publisher apm_pub;
  ros::Publisher asm_pub;
  ros::Publisher misc_pub;
  ros::Publisher can_pub;
  // For test
  ros::Publisher can_output;

  ros::Subscriber rec_can_sub;
  ros::Subscriber ref_vel_sub;

  float curr_speed;
  float curr_angle;

  geometry_msgs::Twist target_twist;
  bool first_twist_received;

  /* variable from config.yaml */
  float steering_gear_ratio;
  float wheel_base;
  float update_rate;
  std::vector<float> steering_vel;
  float amax;
  double KP;
  double KI;
  double KD;
  double err_i;
  double prev_err_p;

    /**
     * Calculates proper velocity control values and publish
     */
    void
    velocity_control();

    /**
     * Calculates proper steering control values and publish
     */
    void
    steering_control();

    /**
     * Calculates the speed from twist's x, y, z components
     * @param twist Twist message
     * @return the current speed that the vehicle is moving
     */
    double
    get_speed(const geometry_msgs::Twist& twist);

    /**
     * Returns the angular velocity to turn the steering wheel
     *
     * If current vehicle speed below steering_vel[0], angular velocity is
     * calculated from the linear relationship of steering_vel. See the
     * comments for steering_vel for more details.
     */
    double
    get_steering_speed(const double v_cur, const double cmd_ang);
};

}  // namespace keti_controller_widget

#endif /* keti_controller_widget_QNODE_HPP_ */
