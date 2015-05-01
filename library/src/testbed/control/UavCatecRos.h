///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL:	PatrollingCV - uav_vision
//			Author:	Pablo R.S.
//			Date:	2015-FEB-18
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef INCLUDE_ROS_LIBRARY

#ifndef UAV_CATEC_ROS_H_H
#define UAV_CATEC_ROS_H_H

// CATEC includes
#include "RosAgent.h"

#include <ros/ros.h>

#include <catec_msgs/ControlReferenceRwStamped.h>
#include <catec_msgs/UALStateStamped.h>

#include <catec_actions_msgs/TakeOffAction.h>
#include <catec_actions_msgs/LandAction.h>

#include <actionlib/client/simple_action_client.h>

// CPP includes
#include <string>
namespace ros_catec{
	class UavCatecROS: public ros_catec::RosAgent {
	public:
		UavCatecROS		(std::string _uavId);

		// Actions
		void move(catec_msgs::ControlReferenceRwStamped _reference);

		void takeOff();
		void land();

		// Getters
		catec_msgs::ControlReferenceRwStamped	reference() { return mReference; };

		bool hasTakeOff(){	return mHasTakeOff; };
	private:
		typedef actionlib::SimpleActionClient<catec_actions_msgs::TakeOffAction> TakeOffClient;
		typedef actionlib::SimpleActionClient<catec_actions_msgs::LandAction> LandClient;


	private:	// Private Members
		bool mHasTakeOff;
		catec_msgs::ControlReferenceRwStamped mReference;

		ros::Publisher	mCommander;

		TakeOffClient	mTakeOffAction;
		LandClient		mLandAction;

	};
}	//	namespace catec_ros
#endif // !UAV_CATEC_ROS_H_H

#endif	// INCLUDE_ROS_LIBRARY
