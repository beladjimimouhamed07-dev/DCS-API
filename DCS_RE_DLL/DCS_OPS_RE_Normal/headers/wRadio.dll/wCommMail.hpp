#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wCommMail
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCommMail
{
public:

    // RVA: 0x3E6 | Ordinal: 999
        void sendCommChangeCommNetFlags(unsigned int, unsigned int, unsigned int, int);

    // RVA: 0x3E7 | Ordinal: 1000
        void sendCommFinishMessage(unsigned int, bool, unsigned char, int);

    // RVA: 0x3E8 | Ordinal: 1001
        void sendCommStartMessage(unsigned int, struct wMessageData const &, int);

    // RVA: 0x3E9 | Ordinal: 1002
        void sendCommTransmitter(unsigned int, bool, int, unsigned char, float, double, float, enum wModulation, int);

    // RVA: 0x3EA | Ordinal: 1003
        void sendDlnkEnabledReceiversBits(unsigned int, enum DatalinkTypes, class std::bitset<32> const &, int);

    // RVA: 0x3EB | Ordinal: 1004
        void sendDlnkMessage(unsigned int, unsigned char, struct datalink_msg const &, int);

    // RVA: 0x3EC | Ordinal: 1005
        void sendDlnkPositionError(unsigned int, unsigned char, float, float, float, int);

    // RVA: 0x3ED | Ordinal: 1006
        void sendDlnkTransceiver(unsigned int, bool, bool, unsigned char, unsigned char, float, float, double, float, enum wModulation, int);

    // RVA: 0x3EE | Ordinal: 1007
        void sendDlnkTransceiversBits(unsigned int, enum DatalinkTypes, class std::bitset<32> const &, int);
};

// DCS_OPS_RE_WRADIO.DLL_WCOMMMAIL_HPP
