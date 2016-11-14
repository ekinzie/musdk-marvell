/******************************************************************************
	Copyright (C) 2016 Marvell International Ltd.

  If you received this File from Marvell, you may opt to use, redistribute
  and/or modify this File under the following licensing terms.
  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright
	  notice, this list of conditions and the following disclaimer.

	* Redistributions in binary form must reproduce the above copyright
	  notice, this list of conditions and the following disclaimer in the
	  documentation and/or other materials provided with the distribution.

	* Neither the name of Marvell nor the names of its contributors may be
	  used to endorse or promote products derived from this software
	  without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

#ifndef __MV_NET_H__
#define __MV_NET_H__

enum mv_net_eth_fields {
	MV_NET_ETH_F_SA = 0,
	MV_NET_ETH_F_DA,
	MV_NET_ETH_F_TYPE
};

enum mv_net_vlan_fields {
	MV_NET_VLAN_F_PRI = 0,
	MV_NET_VLAN_F_ID,
	MV_NET_VLAN_F_TCI
};

enum mv_net_ipv4_fields {
	MV_NET_IP4_F_TOS = 0,
	MV_NET_IP4_F_SA,
	MV_NET_IP4_F_DA,
	MV_NET_IP4_F_PROTO
};

enum mv_net_ipv6_fields {
	MV_NET_IP6_F_TC = 0,
	MV_NET_IP6_F_SA,
	MV_NET_IP6_F_DA,
	MV_NET_IP6_F_FLOW,
	MV_NET_IP6_F_NEXT_HDR
};

enum mv_net_l4_fields {
	MV_NET_L4_F_SP = 0,
	MV_NET_L4_F_DP,
	MV_NET_L4_F_CSUM
};

enum mv_net_udp_fields {
	MV_NET_UDP_F_SP = 0,
	MV_NET_UDP_F_DP,
	MV_NET_UDP_F_CSUM
};

enum mv_net_tcp_fields {
	MV_NET_TCP_F_SP = 0,
	MV_NET_TCP_F_DP,
	MV_NET_TCP_F_CSUM
};

enum mv_net_proto {
	MV_NET_PROTO_NONE	= 0,
	MV_NET_PROTO_ETH,
	MV_NET_PROTO_VLAN,
	MV_NET_PROTO_PPPOE,
	MV_NET_PROTO_IP,
	MV_NET_PROTO_IP4,
	MV_NET_PROTO_IP6,
	MV_NET_PROTO_L4,
	MV_NET_PROTO_TCP,
	MV_NET_PROTO_UDP,
	MV_NET_PROTO_ICMP,
	MV_NET_PROTO_ARP,
	MV_NET_PROTO_LAST
};

union mv_net_proto_fields {
	enum mv_net_eth_fields	eth;
	enum mv_net_vlan_fields	vlan;
	enum mv_net_ipv4_fields	ipv4;
	enum mv_net_ipv6_fields	ipv6;
	enum mv_net_l4_fields	l4;
	enum mv_net_udp_fields	udp;
	enum mv_net_tcp_fields	tcp;
};

#endif /* __MV_NET_H__ */
