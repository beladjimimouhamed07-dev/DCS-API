#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractEventDispatcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractEventDispatcher
{
public:

    // RVA: 0x2B | Ordinal: 44
        void QAbstractEventDispatcher(class QAbstractEventDispatcherPrivate &, class QObject *);

    // RVA: 0x2C | Ordinal: 45
        void QAbstractEventDispatcher(class QObject *);

    // RVA: 0x7B6 | Ordinal: 1975
        void aboutToBlock(void);

    // RVA: 0x8D5 | Ordinal: 2262
        void awake(void);

    // RVA: 0xA0A | Ordinal: 2571
        void closingDown(void);

    // RVA: 0xB7F | Ordinal: 2944
        void d_func(void);

    // RVA: 0xB80 | Ordinal: 2945
        void d_func(void) const;

    // RVA: 0xE23 | Ordinal: 3620
        void filterEvent(void *);

    // RVA: 0xE26 | Ordinal: 3623
        void filterNativeEvent(class QByteArray const &, void *, long *);

    // RVA: 0x103C | Ordinal: 4157
        void installNativeEventFilter(class QAbstractNativeEventFilter *);

    // RVA: 0x103F | Ordinal: 4160
        void instance(class QThread *);

    // RVA: 0x1343 | Ordinal: 4932
        void metaObject(void) const;

    // RVA: 0x162C | Ordinal: 5677
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1669 | Ordinal: 5738
        void qt_metacast(char const *);

    // RVA: 0x16AF | Ordinal: 5808
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1780 | Ordinal: 6017
        void registerTimer(int, class QObject *);

    // RVA: 0x1781 | Ordinal: 6018
        void registerTimer(int, enum Qt::TimerType, class QObject *);

    // RVA: 0x1782 | Ordinal: 6019
        void registerTimer(int, int, class QObject *);

    // RVA: 0x17ED | Ordinal: 6126
        void removeNativeEventFilter(class QAbstractNativeEventFilter *);

    // RVA: 0x1BC3 | Ordinal: 7108
        void startingUp(void);

    // RVA: 0x1E72 | Ordinal: 7795
        void tr(char const *, char const *, int);

    // RVA: 0x1EB2 | Ordinal: 7859
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2D5 | Ordinal: 726
        void _QAbstractEventDispatcher(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTEVENTDISPATCHER_HPP
