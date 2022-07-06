#include "register_types.h"
#include "src/WebRTCLibDataChannel.hpp"
#include "src/WebRTCLibPeerConnection.hpp"

void register_webrtcnative_types() {
	ClassDB::register_class<godot_webrtc::WebRTCLibPeerConnection>();
	ClassDB::register_class<godot_webrtc::WebRTCLibDataChannel>();
}

void unregister_webrtcnative_types() {

}

