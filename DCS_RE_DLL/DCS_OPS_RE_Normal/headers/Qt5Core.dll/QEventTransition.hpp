#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEventTransition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEventTransition
{
public:

    // RVA: 0xF4 | Ordinal: 245
        void QEventTransition(class QEventTransitionPrivate &, class QObject *, enum QEvent::Type, class QState *);

    // RVA: 0xF5 | Ordinal: 246
        void QEventTransition(class QEventTransitionPrivate &, class QState *);

    // RVA: 0xF6 | Ordinal: 247
        void QEventTransition(class QObject *, enum QEvent::Type, class QState *);

    // RVA: 0xF7 | Ordinal: 248
        void QEventTransition(class QState *);

    // RVA: 0xB9B | Ordinal: 2972
        void d_func(void);

    // RVA: 0xB9C | Ordinal: 2973
        void d_func(void) const;

    // RVA: 0xDA4 | Ordinal: 3493
        void event(class QEvent *);

    // RVA: 0xDBC | Ordinal: 3517
        void eventSource(void) const;

    // RVA: 0xDBD | Ordinal: 3518
        void eventTest(class QEvent *);

    // RVA: 0xDBF | Ordinal: 3520
        void eventType(void) const;

    // RVA: 0x1351 | Ordinal: 4946
        void metaObject(void) const;

    // RVA: 0x147C | Ordinal: 5245
        void onTransition(class QEvent *);

    // RVA: 0x163A | Ordinal: 5691
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1677 | Ordinal: 5752
        void qt_metacast(char const *);

    // RVA: 0x16BD | Ordinal: 5822
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x19A5 | Ordinal: 6566
        void setEventSource(class QObject *);

    // RVA: 0x19A7 | Ordinal: 6568
        void setEventType(enum QEvent::Type);

    // RVA: 0x1E82 | Ordinal: 7811
        void tr(char const *, char const *, int);

    // RVA: 0x1EC2 | Ordinal: 7875
        void trUtf8(char const *, char const *, int);

    // RVA: 0x30E | Ordinal: 783
        void _QEventTransition(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEVENTTRANSITION_HPP
