#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QReadWriteLock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QReadWriteLock
{
public:

    // RVA: 0x1BE | Ordinal: 447
        void QReadWriteLock(enum QReadWriteLock::RecursionMode);

    // RVA: 0x12D4 | Ordinal: 4821
        void lockForRead(void);

    // RVA: 0x12D5 | Ordinal: 4822
        void lockForWrite(void);

    // RVA: 0x1BE6 | Ordinal: 7143
        void stateForWaitCondition(void) const;

    // RVA: 0x1F27 | Ordinal: 7976
        void tryLockForRead(int);

    // RVA: 0x1F28 | Ordinal: 7977
        void tryLockForRead(void);

    // RVA: 0x1F29 | Ordinal: 7978
        void tryLockForWrite(int);

    // RVA: 0x1F2A | Ordinal: 7979
        void tryLockForWrite(void);

    // RVA: 0x1F68 | Ordinal: 8041
        void unlock(void);

    // RVA: 0x34B | Ordinal: 844
        void _QReadWriteLock(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QREADWRITELOCK_HPP
