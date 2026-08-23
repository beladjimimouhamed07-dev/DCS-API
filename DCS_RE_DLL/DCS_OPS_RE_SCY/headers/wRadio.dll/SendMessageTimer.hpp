#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: SendMessageTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SendMessageTimer
{
public:

    // RVA: 0x1AA | Ordinal: 427
        void NextEvent(void);

    // RVA: 0x4A | Ordinal: 75
        void SendMessageTimer(unsigned int, struct wMessageData const &);

    // RVA: 0x9E | Ordinal: 159
        void _SendMessageTimer(void);
};

// DCS_OPS_RE_WRADIO.DLL_SENDMESSAGETIMER_HPP
