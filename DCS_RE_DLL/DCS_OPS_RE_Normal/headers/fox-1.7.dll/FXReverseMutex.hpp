#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXReverseMutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXReverseMutex
{
public:

    // RVA: 0x2A1 | Ordinal: 674
        void FXReverseMutex(class FX::FXMutex &);

    // RVA: 0x1B8D | Ordinal: 7054
        void lock(void);

    // RVA: 0x1B94 | Ordinal: 7061
        void locked(void);

    // RVA: 0x1ED3 | Ordinal: 7892
        void mutex(void);

    // RVA: 0x2EDD | Ordinal: 11998
        void trylock(void);

    // RVA: 0x2F01 | Ordinal: 12034
        void unlock(void);

    // RVA: 0x49A | Ordinal: 1179
        void _FXReverseMutex(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREVERSEMUTEX_HPP
