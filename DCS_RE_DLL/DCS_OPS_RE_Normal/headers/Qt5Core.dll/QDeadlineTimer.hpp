#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QDeadlineTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QDeadlineTimer
{
public:

    // RVA: 0xD0 | Ordinal: 209
        void QDeadlineTimer(enum QDeadlineTimer::ForeverConstant, enum Qt::TimerType);

    // RVA: 0xD1 | Ordinal: 210
        void QDeadlineTimer(enum Qt::TimerType);

    // RVA: 0xD2 | Ordinal: 211
        void QDeadlineTimer(__int64, enum Qt::TimerType);

    // RVA: 0x7A9 | Ordinal: 1962
        void _q_data(void) const;

    // RVA: 0x7FF | Ordinal: 2048
        void addNSecs(class QDeadlineTimer, __int64);

    // RVA: 0xB55 | Ordinal: 2902
        void current(enum Qt::TimerType);

    // RVA: 0xC3A | Ordinal: 3131
        void deadline(void) const;

    // RVA: 0xC3B | Ordinal: 3132
        void deadlineNSecs(void) const;

    // RVA: 0xF56 | Ordinal: 3927
        void hasExpired(void) const;

    // RVA: 0x10F9 | Ordinal: 4346
        void isForever(void) const;

    // RVA: 0x1708 | Ordinal: 5897
        void rawRemainingTimeNSecs(void) const;

    // RVA: 0x179B | Ordinal: 6044
        void remainingTime(void) const;

    // RVA: 0x179E | Ordinal: 6047
        void remainingTimeAsDuration(void) const;

    // RVA: 0x17A0 | Ordinal: 6049
        void remainingTimeNSecs(void) const;

    // RVA: 0x1970 | Ordinal: 6513
        void setDeadline(__int64, enum Qt::TimerType);

    // RVA: 0x1A55 | Ordinal: 6742
        void setPreciseDeadline(__int64, __int64, enum Qt::TimerType);

    // RVA: 0x1A56 | Ordinal: 6743
        void setPreciseRemainingTime(__int64, __int64, enum Qt::TimerType);

    // RVA: 0x1A74 | Ordinal: 6773
        void setRemainingTime(__int64, enum Qt::TimerType);

    // RVA: 0x1ABF | Ordinal: 6848
        void setTimerType(enum Qt::TimerType);

    // RVA: 0x1C70 | Ordinal: 7281
        void swap(class QDeadlineTimer &);

    // RVA: 0x1CDE | Ordinal: 7391
        void timerType(void) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QDEADLINETIMER_HPP
