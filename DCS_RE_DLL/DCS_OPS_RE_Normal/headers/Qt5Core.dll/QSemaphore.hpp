#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSemaphore
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSemaphore
{
public:

    // RVA: 0x1DF | Ordinal: 480
        void QSemaphore(int);

    // RVA: 0x7C5 | Ordinal: 1990
        void acquire(int);

    // RVA: 0x8CD | Ordinal: 2254
        void available(void) const;

    // RVA: 0x1794 | Ordinal: 6037
        void release(int);

    // RVA: 0x1F22 | Ordinal: 7971
        void tryAcquire(int);

    // RVA: 0x1F23 | Ordinal: 7972
        void tryAcquire(int, int);

    // RVA: 0x355 | Ordinal: 854
        void _QSemaphore(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSEMAPHORE_HPP
