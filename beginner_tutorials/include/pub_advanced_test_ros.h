// using vector type data
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <vector>

// essential header for ROS-OpenCV operation
#include <ros/ros.h>

// for using custom messages
#include "beginner_tutorials/RectArray.h"
#include "beginner_tutorials/RectInfo.h"

// for using custom define enum variable
#include "beginner_tutorials/Define.h"

using namespace std;
using namespace ros;
using namespace beginner_tutorials;

class PubAdvancedTestNode
{
public:
  PubAdvancedTestNode();
  ~PubAdvancedTestNode();

  void MainLoop();

private:
  void PubAdvancedTestFunc();

  string strTpNameRectInfo_;

  // publisher, custom msg
  Publisher pubRectArray_;
  RectArray msgRectArray_;

  int nRectSize_;
  int nRectType_;

  // node handler in class
  NodeHandle nh_;
};