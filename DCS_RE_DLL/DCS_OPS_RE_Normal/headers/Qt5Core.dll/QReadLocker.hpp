#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QReadLocker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QReadLocker
{
public:

    // RVA: 0x1BD | Ordinal: 446
        void QReadLocker(class QReadWriteLock *);

    // RVA: 0x1744 | Ordinal: 5957
        void readWriteLock(void) const;

    // RVA: 0x1799 | Ordinal: 6042
        void relock(void);

    // RVA: 0x1F67 | Ordinal: 8040
        void unlock(void);

    // RVA: 0x34A | Ordinal: 843
        void _QReadLocker(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QREADLOCKER_HPP
