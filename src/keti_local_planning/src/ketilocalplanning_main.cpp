#include "cketilocalplanning.h"
#include <iostream>


using namespace std;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "keti_local_planning");
  CKetiLocalPlanning local_planner;
  local_planner.PlannerMainLoop();
  return 0;
}
