#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScopedReadLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScopedReadLock
{
public:

    // RVA: 0x2AF | Ordinal: 688
        void FXScopedReadLock(class FX::FXReadWriteLock &);

    // RVA: 0x1B8F | Ordinal: 7056
        void lock(void);

    // RVA: 0x1B96 | Ordinal: 7063
        void locked(void);

    // RVA: 0x270E | Ordinal: 9999
        void readwritelock(void);

    // RVA: 0x2EDF | Ordinal: 12000
        void trylock(void);

    // RVA: 0x2F03 | Ordinal: 12036
        void unlock(void);

    // RVA: 0x4A1 | Ordinal: 1186
        void _FXScopedReadLock(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCOPEDREADLOCK_HPP
