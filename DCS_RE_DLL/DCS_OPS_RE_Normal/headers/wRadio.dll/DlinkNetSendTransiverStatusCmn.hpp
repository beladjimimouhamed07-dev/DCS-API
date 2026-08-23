#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: DlinkNetSendTransiverStatusCmn
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DlinkNetSendTransiverStatusCmn
{
public:

    // RVA: 0x14 | Ordinal: 21
        void DlinkNetSendTransiverStatusCmn(class DlinkNetSendTransiverStatusCmn &&);

    // RVA: 0x15 | Ordinal: 22
        void DlinkNetSendTransiverStatusCmn(class DlinkNetSendTransiverStatusCmn const &);

    // RVA: 0x16 | Ordinal: 23
        void DlinkNetSendTransiverStatusCmn(enum DatalinkTypes, class cPointerTemplate<class MovingObject>);

    // RVA: 0x240 | Ordinal: 577
        void getDL_type(void) const;

    // RVA: 0x2A8 | Ordinal: 681
        void getObject(void) const;

    // RVA: 0x3E2 | Ordinal: 995
        void send(class wRadioDevice *);

    // RVA: 0x90 | Ordinal: 145
        void _DlinkNetSendTransiverStatusCmn(void);
};

// DCS_OPS_RE_WRADIO.DLL_DLINKNETSENDTRANSIVERSTATUSCMN_HPP
