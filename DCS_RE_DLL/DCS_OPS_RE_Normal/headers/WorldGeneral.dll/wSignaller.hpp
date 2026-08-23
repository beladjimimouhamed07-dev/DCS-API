#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wSignaller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSignaller
{
public:

    // RVA: 0x8F9 | Ordinal: 2298
        void getState(void) const;

    // RVA: 0xB27 | Ordinal: 2856
        void processBegin(void);

    // RVA: 0xB28 | Ordinal: 2857
        void processEnd(void);

    // RVA: 0xBD1 | Ordinal: 3026
        void setState(bool);

    // RVA: 0xC4E | Ordinal: 3151
        void updateState(void);

    // RVA: 0x20B | Ordinal: 524
        void wSignaller(void);

    // RVA: 0x2E0 | Ordinal: 737
        void _wSignaller(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WSIGNALLER_HPP
