#ifndef COMS_COMMANDER_H_
#define COMS_COMMANDER_H_

#include <ros/ros.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/TwistStamped.h>

#include <thread>
#include <mutex>
#include "prius_msgs/Control.h"
#include <fstream>
using namespace std;

class ComsCommander {
public:
    /* Constructors, Destructor, and Assignment operators {{{ */
    ComsCommander(const float steering_gear_ratio,
                  const float wheel_base,
                  const float update_rate,
                  const std::vector<float>& steering_vel,
                  const float cmd_ang_acc);

    // Copy constructor
    ComsCommander(const ComsCommander& other) = delete;

    // Move constructor
    ComsCommander(ComsCommander&& other) = delete;

    // Destructor
    ~ComsCommander();

    // Assignment operator
    ComsCommander&
    operator=(const ComsCommander& other) = delete;

    // Move assignment operator
    ComsCommander&
    operator=(ComsCommander&& other) = delete;
    /* }}} */

    void
    set_pid(const double KP, const double KI, const double KD);

    /**
     * Starts publishing the command topics upon receiving cmd_vel
     */
    void
    begin_commanding();

    /**
     * Finish publishing the topics by joining the threads
     */
    void
    end_commanding();

    void
    odom_callback(const nav_msgs::Odometry& odom);

    void
    cmd_vel_callback(const geometry_msgs::Twist& cmd_vel);

    void
    twist_cmd_callback(const geometry_msgs::TwistStamped& cmd_vel);

    // For debugging
    ofstream throttle_file;
    ofstream current_vel_file;
    ofstream brake_file;
    ofstream cmd_percentage_file;
    ofstream cmd_angle_file;
    ofstream cmd_steer_file;
    ofstream current_angular_vel_file;
    ofstream cmd_angular_vel_file;

private:
    // Gear, Accelerator, Brake controller */
    /*
    ros::Publisher gab_pub;
    // Steering controller
    ros::Publisher steer_pub;
    */
    ros::Publisher control_pub;
    prius_msgs::Control control_msg;


    /* Odometry */
    ros::Subscriber odom_sub;
    /* Target velocity and angular velocity */
    //ros::Subscriber cmd_vel_sub;
    ros::Subscriber twist_cmd_sub;

    nav_msgs::Odometry current_odom;
    std::mutex odom_mutex;
    geometry_msgs::Twist target_twist;
    std::mutex twist_mutex;
    /* Don't go into drive until first cmd_vel is received */
    bool first_twist_received;

    std::thread velocity_thread;
    //std::thread steering_thread;

    float steering_gear_ratio;
    float wheel_base;
    // Really, we should be using a mutex but oh well...
    float update_rate;

    /**
     * Angular velocity limit for turning the steering wheel
     *
     * We don't want to turn the steering wheel when at rest, nor do we want
     * to turn it very fast when moving slowly. We create a linear
     * relationship for the steering wheel angular velocity vs vehicle speed.
     *
     * The first element of steering_vel is the velocity, second is the
     * angular velocity in rad/s.
     *
     * omega (rad/s)
     * ^
     * |       (steering_vel[1], steering_vel[2])
     * |       v
     * |       ------------
     * |      /
     * |     /
     * |    /
     * |___/
     * +---------------------> v (m/s)
     *     ^
     *     steering_vel[0]
     */
    std::vector<float> steering_vel;
    float cmd_ang_acc;

    // Ideally, use a mutex
    bool is_ready;

    /* PID parameters */
    double KP;
    double KI;
    double KD;

    /* For calculating integral and derivative values */
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
    //void
    //steering_control();

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

#endif /* end of include guard */
