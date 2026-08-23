#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEventDispatcherWin32
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEventDispatcherWin32
{
public:

    // RVA: 0xED | Ordinal: 238
        void QEventDispatcherWin32(class QEventDispatcherWin32Private &, class QObject *);

    // RVA: 0xEE | Ordinal: 239
        void QEventDispatcherWin32(class QObject *);

    // RVA: 0x7CC | Ordinal: 1997
        void activateEventNotifiers(void);

    // RVA: 0xA0C | Ordinal: 2573
        void closingDown(void);

    // RVA: 0xB32 | Ordinal: 2867
        void createInternalHwnd(void);

    // RVA: 0xB97 | Ordinal: 2968
        void d_func(void);

    // RVA: 0xB98 | Ordinal: 2969
        void d_func(void) const;

    // RVA: 0xCC3 | Ordinal: 3268
        void doUnregisterEventNotifier(class QWinEventNotifier *);

    // RVA: 0xCC4 | Ordinal: 3269
        void doUnregisterSocketNotifier(class QSocketNotifier *);

    // RVA: 0xDA2 | Ordinal: 3491
        void event(class QEvent *);

    // RVA: 0xE74 | Ordinal: 3701
        void flush(void);

    // RVA: 0xF6B | Ordinal: 3948
        void hasPendingEvents(void);

    // RVA: 0x1046 | Ordinal: 4167
        void internalHwnd(void);

    // RVA: 0x104E | Ordinal: 4175
        void interrupt(void);

    // RVA: 0x134F | Ordinal: 4944
        void metaObject(void) const;

    // RVA: 0x1539 | Ordinal: 5434
        void processEvents(class QFlags<enum QEventLoop::ProcessEventsFlag>);

    // RVA: 0x1638 | Ordinal: 5689
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1675 | Ordinal: 5750
        void qt_metacast(char const *);

    // RVA: 0x16BB | Ordinal: 5820
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x176C | Ordinal: 5997
        void registerEventNotifier(class QWinEventNotifier *);

    // RVA: 0x177D | Ordinal: 6014
        void registerSocketNotifier(class QSocketNotifier *);

    // RVA: 0x1783 | Ordinal: 6020
        void registerTimer(int, int, enum Qt::TimerType, class QObject *);

    // RVA: 0x178C | Ordinal: 6029
        void registeredTimers(class QObject *) const;

    // RVA: 0x179C | Ordinal: 6045
        void remainingTime(int);

    // RVA: 0x1914 | Ordinal: 6421
        void sendPostedEvents(void);

    // RVA: 0x1BC5 | Ordinal: 7110
        void startingUp(void);

    // RVA: 0x1E80 | Ordinal: 7809
        void tr(char const *, char const *, int);

    // RVA: 0x1EC0 | Ordinal: 7873
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F72 | Ordinal: 8051
        void unregisterEventNotifier(class QWinEventNotifier *);

    // RVA: 0x1F78 | Ordinal: 8057
        void unregisterSocketNotifier(class QSocketNotifier *);

    // RVA: 0x1F79 | Ordinal: 8058
        void unregisterTimer(int);

    // RVA: 0x1F7B | Ordinal: 8060
        void unregisterTimers(class QObject *);

    // RVA: 0x1FF6 | Ordinal: 8183
        void wakeUp(void);

    // RVA: 0x30A | Ordinal: 779
        void _QEventDispatcherWin32(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEVENTDISPATCHERWIN32_HPP
