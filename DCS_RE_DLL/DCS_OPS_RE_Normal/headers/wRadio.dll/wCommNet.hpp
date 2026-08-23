#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wCommNet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wCommNet
{
public:

    // RVA: 0x3F0 | Ordinal: 1009
        void sendMessage(class ed::Ptr<class wMessage, struct ed::DefaultDeleter> const &, unsigned int, enum RadioMessageEvent);
};

// DCS_OPS_RE_WRADIO.DLL_WCOMMNET_HPP
