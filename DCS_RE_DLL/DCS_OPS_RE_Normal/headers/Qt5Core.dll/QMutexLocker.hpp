#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMutexLocker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMutexLocker
{
public:

    // RVA: 0x19C | Ordinal: 413
        void QMutexLocker(class QBasicMutex *);

    // RVA: 0x19D | Ordinal: 414
        void QMutexLocker(class QRecursiveMutex *);

    // RVA: 0x13FB | Ordinal: 5116
        void mutex(void) const;

    // RVA: 0x1798 | Ordinal: 6041
        void relock(void);

    // RVA: 0x1F66 | Ordinal: 8039
        void unlock(void);

    // RVA: 0x33C | Ordinal: 829
        void _QMutexLocker(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMUTEXLOCKER_HPP
