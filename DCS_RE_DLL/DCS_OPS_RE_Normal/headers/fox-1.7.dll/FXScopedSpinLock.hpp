#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXScopedSpinLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXScopedSpinLock
{
public:

    // RVA: 0x2B0 | Ordinal: 689
        void FXScopedSpinLock(class FX::FXSpinLock &);

    // RVA: 0x1B90 | Ordinal: 7057
        void lock(void);

    // RVA: 0x1B97 | Ordinal: 7064
        void locked(void);

    // RVA: 0x2E4E | Ordinal: 11855
        void spinlock(void);

    // RVA: 0x2EE0 | Ordinal: 12001
        void trylock(void);

    // RVA: 0x2F04 | Ordinal: 12037
        void unlock(void);

    // RVA: 0x4A2 | Ordinal: 1187
        void _FXScopedSpinLock(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSCOPEDSPINLOCK_HPP
