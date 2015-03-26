////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL: Particle Filter
//			Author: Pablo Ramon Soria
//			Date:	2015-MAR-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////ç
//

#ifndef PARTICLE_FILTER_INPUT_VICON_CLIENT_H_
#define PARTICLE_FILTER_INPUT_VICON_CLIENT_H_
#include "../../core/comm/Socket.h"

#include <cstdint>
#include <map>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

struct TState {
	uint32_t uiIdInterface;
	uint32_t uiDataOk;
};

struct TviconProxy{
	TState state;
	char  name[32];
	float dAttitude[3];
	float dPosition[3];
	unsigned int uiHeartbeat;

};

struct DataPacket{
	DataPacket(std::string _data);
	~DataPacket();
	int32_t numObjects;
	TviconProxy *viconData;
};

class ViconReceiver{
public:		// Public interface.
	ViconReceiver	(std::string _port);
	~ViconReceiver	();

	TviconProxy operator[](std::string _key);
	std::vector<std::string> keys();

private:	// Private methods.
	void listenCallback();

private:	// Private members.
	unsigned							mNumTargets;
	std::map<std::string, TviconProxy>	mTargetDictionary;

	BOViL::comm::Socket					*mServer;
	std::mutex							mMutex;
	volatile bool						mListening = true;
	std::thread							*mListenThread;

};

#endif	//	PARTICLE_FILTER_INPUT_VICON_CLIENT_H_
