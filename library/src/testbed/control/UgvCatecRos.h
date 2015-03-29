///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL:	PatrollingCV
//			Author:	Pablo R.S.
//			Date:	2015-MAR-29
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef INCLUDE_ROS_LIBRARY

#ifndef GRVC_CATEC_TESTBED_CONTROL_UGV_CATEC_ROS_H_
#define GRVC_CATEC_TESTBED_CONTROL_UGV_CATEC_ROS_H_

#include "RosAgent.h"

#include "ros/ros.h"

class UgvCatecRos: public RosAgent{
public:
	UgvCatecRos		(std::string _ugvId);

	// Actions
	void move(catec_msgs::ControlReferenceRwStamped _reference);

	// Getters
	catec_msgs::ControlReferenceRwStamped	reference() { return mReference; };
private:

private:	// Private Members
	catec_msgs::ControlReferenceRwStamped mReference;

	ros::Publisher	mCommander;
};


#endif	//	GRVC_CATEC_TESTBED_CONTROL_UGV_CATEC_ROS_H_

#endif	//	INCLUDE_ROS_LIBRARY
