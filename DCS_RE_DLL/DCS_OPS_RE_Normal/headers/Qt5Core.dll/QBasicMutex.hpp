#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QBasicMutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBasicMutex
{
public:

    // RVA: 0x4C | Ordinal: 77
        void QBasicMutex(void);

    // RVA: 0xCD8 | Ordinal: 3289
        void dummyLocked(void);

    // RVA: 0xDEE | Ordinal: 3567
        void fastTryLock(class QMutexData *&);

    // RVA: 0xDEF | Ordinal: 3568
        void fastTryLock(void);

    // RVA: 0xDF0 | Ordinal: 3569
        void fastTryUnlock(class QMutexData *&);

    // RVA: 0xDF1 | Ordinal: 3570
        void fastTryUnlock(void);

    // RVA: 0x117B | Ordinal: 4476
        void isRecursive(void);

    // RVA: 0x117C | Ordinal: 4477
        void isRecursive(void) const;

    // RVA: 0x12D0 | Ordinal: 4817
        void lock(void);

    // RVA: 0x12D6 | Ordinal: 4823
        void lockInternal(void);

    // RVA: 0x12D7 | Ordinal: 4824
        void lockInternal(int);

    // RVA: 0x1F24 | Ordinal: 7973
        void tryLock(void);

    // RVA: 0x1F30 | Ordinal: 7985
        void try_lock(void);

    // RVA: 0x1F63 | Ordinal: 8036
        void unlock(void);

    // RVA: 0x1F6B | Ordinal: 8044
        void unlockInternal(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBASICMUTEX_HPP
