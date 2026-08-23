#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScopedWriteLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScopedWriteLock
{
public:

    // RVA: 0x2B2 | Ordinal: 691
        void FXScopedWriteLock(class FX::FXReadWriteLock &);

    // RVA: 0x1B91 | Ordinal: 7058
        void lock(void);

    // RVA: 0x1B98 | Ordinal: 7065
        void locked(void);

    // RVA: 0x270F | Ordinal: 10000
        void readwritelock(void);

    // RVA: 0x2EE1 | Ordinal: 12002
        void trylock(void);

    // RVA: 0x2F05 | Ordinal: 12038
        void unlock(void);

    // RVA: 0x4A4 | Ordinal: 1189
        void _FXScopedWriteLock(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCOPEDWRITELOCK_HPP
