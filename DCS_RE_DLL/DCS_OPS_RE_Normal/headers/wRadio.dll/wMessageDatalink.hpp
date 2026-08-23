#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wMessageDatalink
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMessageDatalink
{
public:

    // RVA: 0x227 | Ordinal: 552
        void get(void);

    // RVA: 0x3FD | Ordinal: 1022
        void set(struct datalink_msg const &);

    // RVA: 0x73 | Ordinal: 116
        void wMessageDatalink(class wMessage::Sender const &, struct datalink_msg &&);

    // RVA: 0x74 | Ordinal: 117
        void wMessageDatalink(class wMessage::Sender const &, struct datalink_msg const &);

    // RVA: 0x75 | Ordinal: 118
        void wMessageDatalink(void);

    // RVA: 0xAD | Ordinal: 174
        void _wMessageDatalink(void);
};

// DCS_OPS_RE_WRADIO.DLL_WMESSAGEDATALINK_HPP
