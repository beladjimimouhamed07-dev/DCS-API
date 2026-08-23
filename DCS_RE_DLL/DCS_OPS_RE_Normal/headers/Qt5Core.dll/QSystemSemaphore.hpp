#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSystemSemaphore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSystemSemaphore
{
public:

    // RVA: 0x21E | Ordinal: 543
        void QSystemSemaphore(class QString const &, int, enum QSystemSemaphore::AccessMode);

    // RVA: 0x7C6 | Ordinal: 1991
        void acquire(void);

    // RVA: 0xD86 | Ordinal: 3463
        void error(void) const;

    // RVA: 0xD95 | Ordinal: 3478
        void errorString(void) const;

    // RVA: 0x1245 | Ordinal: 4678
        void key(void) const;

    // RVA: 0x1795 | Ordinal: 6038
        void release(int);

    // RVA: 0x19F6 | Ordinal: 6647
        void setKey(class QString const &, int, enum QSystemSemaphore::AccessMode);

    // RVA: 0x367 | Ordinal: 872
        void _QSystemSemaphore(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSYSTEMSEMAPHORE_HPP
