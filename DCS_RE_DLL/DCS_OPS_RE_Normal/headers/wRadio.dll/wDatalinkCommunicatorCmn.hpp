#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wDatalinkCommunicatorCmn
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDatalinkCommunicatorCmn
{
public:

    // RVA: 0x241 | Ordinal: 578
        void getDL_type(void) const;

    // RVA: 0x251 | Ordinal: 594
        void getEnabledReceiversBits(void) const;

    // RVA: 0x32F | Ordinal: 816
        void isAnyMsgReceiverEnabled(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &);

    // RVA: 0x415 | Ordinal: 1046
        void setEnabledReceiverBits(class std::bitset<32> const &);

    // RVA: 0x4B9 | Ordinal: 1210
        void updateEnabledReceiverBits(class std::bitset<32> const &);

    // RVA: 0x67 | Ordinal: 104
        void wDatalinkCommunicatorCmn(class cPointerTemplate<class MovingObject>, enum DatalinkTypes);

    // RVA: 0xA8 | Ordinal: 169
        void _wDatalinkCommunicatorCmn(void);
};

// DCS_OPS_RE_WRADIO.DLL_WDATALINKCOMMUNICATORCMN_HPP
