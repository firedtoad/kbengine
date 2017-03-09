/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2017 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef KBE_NETWORKTCPPACKET_RECEIVER_EX_H
#define KBE_NETWORKTCPPACKET_RECEIVER_EX_H

#include "network/tcp_packet_receiver.h"

namespace KBEngine { 

class ClientObject;

namespace Network
{

class TCPPacketReceiverEx : public TCPPacketReceiver
{
public:
	TCPPacketReceiverEx(EndPoint & endpoint, NetworkInterface & networkInterface, ClientObject* pClientObject);
	~TCPPacketReceiverEx();

	virtual Channel* getChannel();

protected:
	virtual void onGetError(Channel* pChannel);

	ClientObject* pClientObject_;
};
}
}

#endif // KBE_NETWORKTCPPACKET_RECEIVER_EX_H
