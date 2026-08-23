#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXSpinLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXSpinLock
{
public:

    // RVA: 0x2DD | Ordinal: 734
        void FXSpinLock(void);

    // RVA: 0x1B92 | Ordinal: 7059
        void lock(void);

    // RVA: 0x1B99 | Ordinal: 7066
        void locked(void);

    // RVA: 0x2EE2 | Ordinal: 12003
        void trylock(void);

    // RVA: 0x2F06 | Ordinal: 12039
        void unlock(void);

    // RVA: 0x4B6 | Ordinal: 1207
        void _FXSpinLock(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSPINLOCK_HPP
