#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QOpenGLTimeMonitor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QOpenGLTimeMonitor
{
public:

    // RVA: 0x1DB | Ordinal: 476
        void QOpenGLTimeMonitor(class QObject *);

    // RVA: 0xC8F | Ordinal: 3216
        void create(void);

    // RVA: 0xD49 | Ordinal: 3402
        void d_func(void);

    // RVA: 0xD4A | Ordinal: 3403
        void d_func(void) const;

    // RVA: 0xE15 | Ordinal: 3606
        void destroy(void);

    // RVA: 0x4FFE | Ordinal: 20479
        void isCreated(void) const;

    // RVA: 0x506F | Ordinal: 20592
        void isResultAvailable(void) const;

    // RVA: 0x5277 | Ordinal: 21112
        void metaObject(void) const;

    // RVA: 0x5388 | Ordinal: 21385
        void objectIds(void) const;

    // RVA: 0x558E | Ordinal: 21903
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55D2 | Ordinal: 21971
        void qt_metacast(char const *);

    // RVA: 0x5628 | Ordinal: 22057
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x5682 | Ordinal: 22147
        void recordSample(void);

    // RVA: 0x5717 | Ordinal: 22296
        void reset(void);

    // RVA: 0x5791 | Ordinal: 22418
        void sampleCount(void) const;

    // RVA: 0x5B60 | Ordinal: 23393
        void setSampleCount(int);

    // RVA: 0x5FB5 | Ordinal: 24502
        void tr(char const *, char const *, int);

    // RVA: 0x5FFC | Ordinal: 24573
        void trUtf8(char const *, char const *, int);

    // RVA: 0x613C | Ordinal: 24893
        void waitForIntervals(void) const;

    // RVA: 0x613E | Ordinal: 24895
        void waitForSamples(void) const;

    // RVA: 0x4A3 | Ordinal: 1188
        void _QOpenGLTimeMonitor(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QOPENGLTIMEMONITOR_HPP
