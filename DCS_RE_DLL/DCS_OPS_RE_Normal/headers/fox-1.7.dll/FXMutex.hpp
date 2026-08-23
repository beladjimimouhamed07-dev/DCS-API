#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMutex
{
public:

    // RVA: 0x227 | Ordinal: 552
        void FXMutex(bool);

    // RVA: 0x1B8C | Ordinal: 7053
        void lock(void);

    // RVA: 0x1B93 | Ordinal: 7060
        void locked(void);

    // RVA: 0x2EDC | Ordinal: 11997
        void trylock(void);

    // RVA: 0x2F00 | Ordinal: 12033
        void unlock(void);

    // RVA: 0x470 | Ordinal: 1137
        void _FXMutex(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMUTEX_HPP
