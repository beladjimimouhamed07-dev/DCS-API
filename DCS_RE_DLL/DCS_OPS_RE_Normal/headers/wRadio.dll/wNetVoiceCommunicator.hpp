#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wNetVoiceCommunicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wNetVoiceCommunicator
{
public:

    // RVA: 0x3BE | Ordinal: 959
        void procVoiceCommTransmitter_asyncnet(bool, int, unsigned char, float, double, float, enum wModulation);

    // RVA: 0x436 | Ordinal: 1079
        void setNetState(struct VoiceCommNetState const &);

    // RVA: 0x43B | Ordinal: 1084
        void setOnOff(bool);

    // RVA: 0x43E | Ordinal: 1087
        void setOnOffByIdx(bool, unsigned char);

    // RVA: 0x7A | Ordinal: 123
        void wNetVoiceCommunicator(class MovingObject *);

    // RVA: 0xB0 | Ordinal: 177
        void _wNetVoiceCommunicator(void);
};

// DCS_OPS_RE_WRADIO.DLL_WNETVOICECOMMUNICATOR_HPP
