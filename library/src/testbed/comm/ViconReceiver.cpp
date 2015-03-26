///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//		EC-SAFEMOBIL: Particle Filter
//			Author: Pablo Ramon Soria
//			Date:	2015-MAR-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//


#include "ViconReceiver.h"

using namespace BOViL::comm;
using namespace std;

//---------------------------------------------------------------------------------------------------------------------
// Structs definitions
DataPacket::DataPacket(string _data){
	const char *rawData = _data.c_str();
	numObjects = rawData[0] + 10 * rawData[1] + 100 * rawData[2] + 1000 * rawData[3];
	rawData = &rawData[4];

	viconData = new TviconProxy[numObjects];
	memcpy(viconData, rawData, sizeof(TviconProxy) * numObjects);
}
//---------------------------------------------------------------------------------------------------------------------
DataPacket::~DataPacket(){
	delete[] viconData;
}

//---------------------------------------------------------------------------------------------------------------------
// Class definitions
ViconReceiver::ViconReceiver(std::string _port){
	mServer = Socket::createSocket(BOViL::comm::eSocketType::serverUDP, _port);
	mListenThread = new thread(&ViconReceiver::listenCallback, this);
}

//---------------------------------------------------------------------------------------------------------------------
ViconReceiver::~ViconReceiver(){
	mListening = false;
	while (mListenThread->joinable()){ }
	delete mListenThread;
}

//---------------------------------------------------------------------------------------------------------------------
void ViconReceiver::listenCallback(){
	std::string msg;
	while (mListening){
		if (mServer->receiveMsg(msg)){
			DataPacket packet(msg);
			mNumTargets = packet.numObjects;

			for (unsigned i = 0; i < mNumTargets; i++){				
				mTargetDictionary[string(packet.viconData[i].name)] = packet.viconData[i];
			}
		}
	}
}
