#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QWriteLocker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QWriteLocker
{
public:

    // RVA: 0x297 | Ordinal: 664
        void QWriteLocker(class QReadWriteLock *);

    // RVA: 0x1745 | Ordinal: 5958
        void readWriteLock(void) const;

    // RVA: 0x179A | Ordinal: 6043
        void relock(void);

    // RVA: 0x1F6A | Ordinal: 8043
        void unlock(void);

    // RVA: 0x384 | Ordinal: 901
        void _QWriteLocker(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QWRITELOCKER_HPP
