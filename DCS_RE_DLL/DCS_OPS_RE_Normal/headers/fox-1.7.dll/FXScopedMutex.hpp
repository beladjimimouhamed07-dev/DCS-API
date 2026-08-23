#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScopedMutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScopedMutex
{
public:

    // RVA: 0x2AE | Ordinal: 687
        void FXScopedMutex(class FX::FXMutex &);

    // RVA: 0x1B8E | Ordinal: 7055
        void lock(void);

    // RVA: 0x1B95 | Ordinal: 7062
        void locked(void);

    // RVA: 0x1ED4 | Ordinal: 7893
        void mutex(void);

    // RVA: 0x2EDE | Ordinal: 11999
        void trylock(void);

    // RVA: 0x2F02 | Ordinal: 12035
        void unlock(void);

    // RVA: 0x4A0 | Ordinal: 1185
        void _FXScopedMutex(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCOPEDMUTEX_HPP
