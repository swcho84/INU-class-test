// using vector type data
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <vector>

// essential header for ROS-OpenCV operation
#include <ros/ros.h>

// for using service messages
#include "beginner_tutorials/AddTwoInts.h"
#include "beginner_tutorials/SetMissionInfo.h"

using namespace std;
using namespace ros;

class SrvClientTestNode
{
public:
  SrvClientTestNode();
  ~SrvClientTestNode();

  int GetCaseNum();

  bool CallAddSrvLoop();
  void MissionLoop();

private:
  void ReadParam();

  ServiceClient srvClientAdd_;
  ServiceClient srvClientSetMissionInfo_;

  int nNum1_;
  int nNum2_;
  int nSumRes_;
  int nMissionNum_;
  int nCaseNum_;

  bool bMissionPerfStat_;
  bool bMissionSetStat_;

  double dXref_;
  double dYref_;
  double dZref_;
  double dYawRef_;
  string strYawRef_;

  // node handler in class
  NodeHandle nh_;
};