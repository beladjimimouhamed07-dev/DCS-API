#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEventLoop
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEventLoop
{
public:

    // RVA: 0xF0 | Ordinal: 241
        void QEventLoop(class QObject *);

    // RVA: 0xB99 | Ordinal: 2970
        void d_func(void);

    // RVA: 0xB9A | Ordinal: 2971
        void d_func(void) const;

    // RVA: 0xDA3 | Ordinal: 3492
        void event(class QEvent *);

    // RVA: 0xDC5 | Ordinal: 3526
        void exec(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0xDD3 | Ordinal: 3540
        void exit(int);

    // RVA: 0x1196 | Ordinal: 4503
        void isRunning(void) const;

    // RVA: 0x1350 | Ordinal: 4945
        void metaObject(void) const;

    // RVA: 0x153A | Ordinal: 5435
        void processEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>, int);

    // RVA: 0x153B | Ordinal: 5436
        void processEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x1639 | Ordinal: 5690
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1676 | Ordinal: 5751
        void qt_metacast(char const *);

    // RVA: 0x16BC | Ordinal: 5821
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x16F9 | Ordinal: 5882
        void quit(void);

    // RVA: 0x1E81 | Ordinal: 7810
        void tr(char const *, char const *, int);

    // RVA: 0x1EC1 | Ordinal: 7874
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1FF7 | Ordinal: 8184
        void wakeUp(void);

    // RVA: 0x30C | Ordinal: 781
        void _QEventLoop(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEVENTLOOP_HPP
