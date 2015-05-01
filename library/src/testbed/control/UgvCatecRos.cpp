///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL:	PatrollingCV
//			Author:	Pablo R.S.
//			Date:	2015-MAR-29
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef INCLUDE_ROS_LIBRARY

#include "UgvCatecRos.h"

namespace ros_catec{
	//---------------------------------------------------------------------------------------------------------------------
	UgvCatecRos::UgvCatecRos(std::string _ugvId): RosAgent(_ugvId){
		ros::NodeHandle n;

		std::string topicname = _ugvId;
		topicname.append("/control_references_rw");
		mCommander = n.advertise<catec_msgs::ControlReferenceRwStamped>(topicname.c_str(), 0);
	}

	//---------------------------------------------------------------------------------------------------------------------
	void UgvCatecRos::move(catec_msgs::ControlReferenceRwStamped _reference){
		mReference = _reference;
		mCommander.publish(_reference);
	}

	//---------------------------------------------------------------------------------------------------------------------

}	// namespace ros_catec
#endif	//	 INCLUDE_ROS_LIBRARY

