#include "mobileye_input_generator/mobileye_input_generator.h"



int main(int argc, char **argv)
{
  ros::init(argc,argv, "mobileye_input_generator");
  MobileyeInputGenerator mobileye;
  mobileye.MainLoop();

  return 0;

}
