///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL:	PatrollingCV - uav_vision
//			Author:	Pablo R.S.
//			Date:	2015-FEB-18
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef INCLUDE_ROS_LIBRARY

#include "UavCatecRos.h"
#include <iostream>

using namespace std;
using namespace catec_msgs;
using namespace catec_actions_msgs;
using namespace ros_catec;

void tOff_Active_CB();
void tOff_Feedback_CB(const TakeOffFeedbackConstPtr& feedback);
void tOff_Done_CB(const actionlib::SimpleClientGoalState& state, const TakeOffResultConstPtr& result);
void land_Active_CB();
void land_Feedback_CB(const LandFeedbackConstPtr& feedback);
void land_Done_CB(const actionlib::SimpleClientGoalState& state, const LandResultConstPtr& result);

namespace ros_catec{
	//---------------------------------------------------------------------------------------------------------------------
	UavCatecROS::UavCatecROS(string _uavId): 	RosAgent(_uavId),
												mHasTakeOff(false),
												mTakeOffAction(_uavId + "/take_off_action", true),
												mLandAction(_uavId+"/land_action",true){
		ros::NodeHandle n;

		string topicname = _uavId;
		topicname.append("/control_references_rw");
		mCommander = n.advertise<ControlReferenceRwStamped>(topicname.c_str(), 0);

		mTakeOffAction.waitForServer(ros::Duration(0));
		mLandAction.waitForServer(ros::Duration(0));
	}

	//---------------------------------------------------------------------------------------------------------------------
	void UavCatecROS::move(ControlReferenceRwStamped _reference){
		mReference = _reference;
		mCommander.publish(_reference);
	}

	//---------------------------------------------------------------------------------------------------------------------
	void UavCatecROS::takeOff(){
		//Send take-off
		TakeOffGoal toff_goal;
		mTakeOffAction.sendGoal(toff_goal, &tOff_Done_CB, &tOff_Active_CB, &tOff_Feedback_CB);

		//Wait untill takeoff is completed
		mTakeOffAction.waitForResult();
		mHasTakeOff = true;
	}

	//---------------------------------------------------------------------------------------------------------------------
	void UavCatecROS::land(){
		LandGoal land_goal;
		mLandAction.sendGoal(land_goal, &land_Done_CB, &land_Active_CB, &land_Feedback_CB);
	
		//Wait untill land is completed
		mLandAction.waitForResult();
		mHasTakeOff = false;
	}
}	//	namespace ros_catec
//---------------------------------------------------------------------------------------------------------------------
// Unimplemented actions

void tOff_Active_CB(){

}

void tOff_Feedback_CB(const TakeOffFeedbackConstPtr& feedback){

}

void tOff_Done_CB(const actionlib::SimpleClientGoalState& state, const TakeOffResultConstPtr& result){

}

void land_Active_CB(){

}

void land_Feedback_CB(const LandFeedbackConstPtr& feedback){

}

void land_Done_CB(const actionlib::SimpleClientGoalState& state, const LandResultConstPtr& result){

}

#endif	// INCLUDE_ROS_LIBRARY
