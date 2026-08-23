#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wNetDatalinkCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNetDatalinkCommunicator
{
public:

    // RVA: 0x23B | Ordinal: 572
        void getCommunicator(void);

    // RVA: 0x252 | Ordinal: 595
        void getEnabledTransmissions(void) const;

    // RVA: 0x2A1 | Ordinal: 674
        void getNetState(struct DatalinkState &) const;

    // RVA: 0x2F5 | Ordinal: 758
        void get_msgs_gueue(void);

    // RVA: 0x3C9 | Ordinal: 970
        void receive_msg(struct datalink_msg const &);

    // RVA: 0x3FB | Ordinal: 1020
        void send_msg(struct datalink_msg &&);

    // RVA: 0x3FC | Ordinal: 1021
        void send_msg(struct datalink_msg const &);

    // RVA: 0x416 | Ordinal: 1047
        void setEnabledTransmissions(bool);

    // RVA: 0x435 | Ordinal: 1078
        void setNetState(struct DatalinkState const &);

    // RVA: 0x4BF | Ordinal: 1216
        void updateTransceiversBits(class std::bitset<32> const &);

    // RVA: 0x4C0 | Ordinal: 1217
        void updateTransceiversNetState(struct DatalinkState const &, unsigned char);

    // RVA: 0x79 | Ordinal: 122
        void wNetDatalinkCommunicator(class cPointerTemplate<class MovingObject>, unsigned int, unsigned int, class wNetDatalinkCommunicator::NetSendReceivedMessage *, enum DatalinkTypes);

    // RVA: 0xAF | Ordinal: 176
        void _wNetDatalinkCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WNETDATALINKCOMMUNICATOR_HPP
