#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wMovObjRadioDeviceCallback
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMovObjRadioDeviceCallback
{
public:

    // RVA: 0x211 | Ordinal: 530
        void excludeTransceiver(unsigned __int64, bool);

    // RVA: 0x351 | Ordinal: 850
        void makeTransmitterData(class wRadioTransmitter *, bool);

    // RVA: 0x160 | Ordinal: 353
        void operator()(class wRadioDevice *, enum wRadioDevice::Event);

    // RVA: 0x3E4 | Ordinal: 997
        void sendAllTransmitters(int);

    // RVA: 0x3E5 | Ordinal: 998
        void sendAllTransmitters_(class cPointerTemplate<class MovingObject>, class wMovObjRadioDeviceCallback *, int);

    // RVA: 0x76 | Ordinal: 119
        void wMovObjRadioDeviceCallback(class wMovObjRadioDeviceCallback &&);

    // RVA: 0x77 | Ordinal: 120
        void wMovObjRadioDeviceCallback(class wMovObjRadioDeviceCallback const &);

    // RVA: 0x78 | Ordinal: 121
        void wMovObjRadioDeviceCallback(class cPointerTemplate<class MovingObject>);

    // RVA: 0xAE | Ordinal: 175
        void _wMovObjRadioDeviceCallback(void);
};

// DCS_OPS_RE_WRADIO.DLL_WMOVOBJRADIODEVICECALLBACK_HPP
