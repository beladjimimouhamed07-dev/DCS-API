#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wDatalinkCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDatalinkCommunicator
{
public:

    // RVA: 0x205 | Ordinal: 518
        void disablePeriodicAutoTransmissions(void) const;

    // RVA: 0x20E | Ordinal: 527
        void enablePeriodicAutoTransmissions(bool);

    // RVA: 0x23A | Ordinal: 571
        void getCommunicator(void);

    // RVA: 0x2A0 | Ordinal: 673
        void getNetState(struct DatalinkState &) const;

    // RVA: 0x2F4 | Ordinal: 757
        void get_msgs_gueue(void);

    // RVA: 0x3C8 | Ordinal: 969
        void receive_msg(struct datalink_msg const &);

    // RVA: 0x3E3 | Ordinal: 996
        void sendAllTransceiversAsyncnet(int);

    // RVA: 0x3F4 | Ordinal: 1013
        void sendTransceiverAsyncnet(class wRadioDevice *);

    // RVA: 0x3F9 | Ordinal: 1018
        void send_msg(struct datalink_msg &&);

    // RVA: 0x3FA | Ordinal: 1019
        void send_msg(struct datalink_msg const &);

    // RVA: 0x414 | Ordinal: 1045
        void setEnabledReceiverBits(class std::bitset<32> const &);

    // RVA: 0x434 | Ordinal: 1077
        void setNetState(struct DatalinkState const &, class wTransiver *);

    // RVA: 0x66 | Ordinal: 103
        void wDatalinkCommunicator(class cPointerTemplate<class MovingObject>, unsigned int, unsigned int, class IwTransiver *, enum DatalinkTypes, class wDatalinkCommunicator::NetSendTransiverStatus *);

    // RVA: 0xA7 | Ordinal: 168
        void _wDatalinkCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WDATALINKCOMMUNICATOR_HPP
