#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: hands_tracker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class hands_tracker
{
public:

    // RVA: 0x32 | Ordinal: 51
        void get(void);

    // RVA: 0x6B | Ordinal: 108
        void register_provider(class IHandTracker &);

    // RVA: 0x76 | Ordinal: 119
        void unregister_provider(class IHandTracker &);
};

// DCS_OPS_RE_INTER.DLL_HANDS_TRACKER_HPP
