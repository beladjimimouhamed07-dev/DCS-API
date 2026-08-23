#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXReadWriteLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXReadWriteLock
{
public:

    // RVA: 0x28B | Ordinal: 652
        void FXReadWriteLock(void);

    // RVA: 0x26F9 | Ordinal: 9978
        void readLock(void);

    // RVA: 0x26FA | Ordinal: 9979
        void readLocked(void);

    // RVA: 0x270D | Ordinal: 9998
        void readUnlock(void);

    // RVA: 0x2EDA | Ordinal: 11995
        void tryReadLock(void);

    // RVA: 0x2EDB | Ordinal: 11996
        void tryWriteLock(void);

    // RVA: 0x2FEC | Ordinal: 12269
        void writeLock(void);

    // RVA: 0x2FED | Ordinal: 12270
        void writeLocked(void);

    // RVA: 0x2FFF | Ordinal: 12288
        void writeUnlock(void);

    // RVA: 0x492 | Ordinal: 1171
        void _FXReadWriteLock(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXREADWRITELOCK_HPP
