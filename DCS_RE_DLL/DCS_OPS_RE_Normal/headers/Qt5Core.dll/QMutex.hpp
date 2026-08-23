#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QMutex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QMutex
{
public:

    // RVA: 0x19A | Ordinal: 411
        void QMutex(enum QMutex::RecursionMode);

    // RVA: 0x19B | Ordinal: 412
        void QMutex(void);

    // RVA: 0x117D | Ordinal: 4478
        void isRecursive(void) const;

    // RVA: 0x12D2 | Ordinal: 4819
        void lock(void);

    // RVA: 0x1F26 | Ordinal: 7975
        void tryLock(int);

    // RVA: 0x1F31 | Ordinal: 7986
        void try_lock(void);

    // RVA: 0x1F65 | Ordinal: 8038
        void unlock(void);

    // RVA: 0x33B | Ordinal: 828
        void _QMutex(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QMUTEX_HPP
