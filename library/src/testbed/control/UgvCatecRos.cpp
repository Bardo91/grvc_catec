///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL:	PatrollingCV
//			Author:	Pablo R.S.
//			Date:	2015-MAR-29
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef INCLUDE_ROS_LIBRARY

#include "UgvCatecRos.h"

//---------------------------------------------------------------------------------------------------------------------
UgvCatecRos::UgvCatecRos(std::string _ugvId){
	ros::NodeHandle n;

	string topicname = _ugvId;
	topicname.append("/control_references_rw");
	mCommander = n.advertise<ControlReferenceRwStamped>(topicname.c_str(), 0);
}

//---------------------------------------------------------------------------------------------------------------------
void UavCatecROS::move(ControlReferenceRwStamped _reference){
	mReference = _reference;
	mCommander.publish(_reference);
}

//---------------------------------------------------------------------------------------------------------------------


#endif	//	 INCLUDE_ROS_LIBRARY