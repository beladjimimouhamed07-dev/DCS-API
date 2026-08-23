#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QUnifiedTimer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QUnifiedTimer
{
public:

    // RVA: 0x24D | Ordinal: 590
        void QUnifiedTimer(void);

    // RVA: 0x95C | Ordinal: 2397
        void canUninstallAnimationDriver(class QAnimationDriver *);

    // RVA: 0xA09 | Ordinal: 2570
        void closestPausedAnimationTimerTimeToFinish(void);

    // RVA: 0xCF0 | Ordinal: 3313
        void elapsed(void) const;

    // RVA: 0x1039 | Ordinal: 4154
        void installAnimationDriver(class QAnimationDriver *);

    // RVA: 0x1043 | Ordinal: 4164
        void instance(void);

    // RVA: 0x1044 | Ordinal: 4165
        void instance(bool);

    // RVA: 0x12B7 | Ordinal: 4792
        void localRestart(void);

    // RVA: 0x1338 | Ordinal: 4921
        void maybeUpdateAnimationsToCurrentTime(void);

    // RVA: 0x137A | Ordinal: 4987
        void metaObject(void) const;

    // RVA: 0x14D0 | Ordinal: 5329
        void pauseAnimationTimer(class QAbstractAnimationTimer *, int);

    // RVA: 0x1662 | Ordinal: 5731
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x169F | Ordinal: 5792
        void qt_metacast(char const *);

    // RVA: 0x16E6 | Ordinal: 5863
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1777 | Ordinal: 6008
        void registerProfilerCallback(void (__cdecl *)(__int64));

    // RVA: 0x1879 | Ordinal: 6266
        void restart(void);

    // RVA: 0x1887 | Ordinal: 6280
        void resumeAnimationTimer(class QAbstractAnimationTimer *);

    // RVA: 0x18C4 | Ordinal: 6341
        void runningAnimationCount(void);

    // RVA: 0x1955 | Ordinal: 6486
        void setConsistentTiming(bool);

    // RVA: 0x1A91 | Ordinal: 6802
        void setSlowModeEnabled(bool);

    // RVA: 0x1A92 | Ordinal: 6803
        void setSlowdownFactor(double);

    // RVA: 0x1AC1 | Ordinal: 6850
        void setTimingInterval(int);

    // RVA: 0x1BA7 | Ordinal: 7080
        void startAnimationDriver(void);

    // RVA: 0x1BA8 | Ordinal: 7081
        void startAnimationTimer(class QAbstractAnimationTimer *);

    // RVA: 0x1BBA | Ordinal: 7099
        void startTimers(void);

    // RVA: 0x1C42 | Ordinal: 7235
        void stopAnimationDriver(void);

    // RVA: 0x1C43 | Ordinal: 7236
        void stopAnimationTimer(class QAbstractAnimationTimer *);

    // RVA: 0x1C44 | Ordinal: 7237
        void stopTimer(void);

    // RVA: 0x1CDA | Ordinal: 7387
        void timerEvent(class QTimerEvent *);

    // RVA: 0x1EAB | Ordinal: 7852
        void tr(char const *, char const *, int);

    // RVA: 0x1EEA | Ordinal: 7915
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F5A | Ordinal: 8027
        void uninstallAnimationDriver(class QAnimationDriver *);

    // RVA: 0x1F81 | Ordinal: 8066
        void updateAnimationTimers(__int64);

    // RVA: 0x37A | Ordinal: 891
        void _QUnifiedTimer(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QUNIFIEDTIMER_HPP
