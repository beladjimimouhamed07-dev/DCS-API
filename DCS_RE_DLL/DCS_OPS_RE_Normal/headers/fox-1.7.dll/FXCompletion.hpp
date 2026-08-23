#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXCompletion
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXCompletion
{
public:

    // RVA: 0x93 | Ordinal: 148
        void FXCompletion(void);

    // RVA: 0xB97 | Ordinal: 2968
        void count(void) const;

    // RVA: 0xC33 | Ordinal: 3124
        void decrement(unsigned int);

    // RVA: 0xD0A | Ordinal: 3339
        void done(void) const;

    // RVA: 0x1881 | Ordinal: 6274
        void increment(unsigned int);

    // RVA: 0x2F69 | Ordinal: 12138
        void wait(void);

    // RVA: 0x2F6A | Ordinal: 12139
        void wait(__int64);

    // RVA: 0x3DB | Ordinal: 988
        void _FXCompletion(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOMPLETION_HPP
