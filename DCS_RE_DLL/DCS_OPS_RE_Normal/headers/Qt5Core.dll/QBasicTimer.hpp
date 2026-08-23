#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QBasicTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QBasicTimer
{
public:

    // RVA: 0x4D | Ordinal: 78
        void QBasicTimer(class QBasicTimer &&);

    // RVA: 0x4E | Ordinal: 79
        void QBasicTimer(class QBasicTimer const &);

    // RVA: 0x4F | Ordinal: 80
        void QBasicTimer(void);

    // RVA: 0x1070 | Ordinal: 4209
        void isActive(void) const;

    // RVA: 0x1B98 | Ordinal: 7065
        void start(int, class QObject *);

    // RVA: 0x1B99 | Ordinal: 7066
        void start(int, enum Qt::TimerType, class QObject *);

    // RVA: 0x1C3C | Ordinal: 7229
        void stop(void);

    // RVA: 0x1C66 | Ordinal: 7271
        void swap(class QBasicTimer &);

    // RVA: 0x1CDB | Ordinal: 7388
        void timerId(void) const;

    // RVA: 0x2E8 | Ordinal: 745
        void _QBasicTimer(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QBASICTIMER_HPP
