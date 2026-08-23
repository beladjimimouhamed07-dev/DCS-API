#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAnimationDriver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAnimationDriver
{
public:

    // RVA: 0x45 | Ordinal: 70
        void QAnimationDriver(class QAnimationDriverPrivate &, class QObject *);

    // RVA: 0x46 | Ordinal: 71
        void QAnimationDriver(class QObject *);

    // RVA: 0x826 | Ordinal: 2087
        void advance(void);

    // RVA: 0x827 | Ordinal: 2088
        void advanceAnimation(__int64);

    // RVA: 0xB8B | Ordinal: 2956
        void d_func(void);

    // RVA: 0xB8C | Ordinal: 2957
        void d_func(void) const;

    // RVA: 0xCED | Ordinal: 3310
        void elapsed(void) const;

    // RVA: 0x1038 | Ordinal: 4153
        void install(void);

    // RVA: 0x1195 | Ordinal: 4502
        void isRunning(void) const;

    // RVA: 0x134A | Ordinal: 4939
        void metaObject(void) const;

    // RVA: 0x1633 | Ordinal: 5684
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1670 | Ordinal: 5745
        void qt_metacast(char const *);

    // RVA: 0x16B6 | Ordinal: 5815
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1AA4 | Ordinal: 6821
        void setStartTime(__int64);

    // RVA: 0x1B97 | Ordinal: 7064
        void start(void);

    // RVA: 0x1BB6 | Ordinal: 7095
        void startTime(void) const;

    // RVA: 0x1BBE | Ordinal: 7103
        void started(void);

    // RVA: 0x1C3B | Ordinal: 7228
        void stop(void);

    // RVA: 0x1C45 | Ordinal: 7238
        void stopped(void);

    // RVA: 0x1E79 | Ordinal: 7802
        void tr(char const *, char const *, int);

    // RVA: 0x1EB9 | Ordinal: 7866
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F59 | Ordinal: 8026
        void uninstall(void);

    // RVA: 0x2E5 | Ordinal: 742
        void _QAnimationDriver(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QANIMATIONDRIVER_HPP
