#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSocketNotifier
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSocketNotifier
{
public:

    // RVA: 0x1F5 | Ordinal: 502
        void QSocketNotifier(__int64, enum QSocketNotifier::Type, class QObject *);

    // RVA: 0x7CD | Ordinal: 1998
        void activated(int, struct QSocketNotifier::QPrivateSignal);

    // RVA: 0x7CE | Ordinal: 1999
        void activated(class QSocketDescriptor, enum QSocketNotifier::Type, struct QSocketNotifier::QPrivateSignal);

    // RVA: 0xBD6 | Ordinal: 3031
        void d_func(void);

    // RVA: 0xBD7 | Ordinal: 3032
        void d_func(void) const;

    // RVA: 0xDAF | Ordinal: 3504
        void event(class QEvent *);

    // RVA: 0x10DD | Ordinal: 4318
        void isEnabled(void) const;

    // RVA: 0x136E | Ordinal: 4975
        void metaObject(void) const;

    // RVA: 0x1656 | Ordinal: 5719
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1693 | Ordinal: 5780
        void qt_metacast(char const *);

    // RVA: 0x16DA | Ordinal: 5851
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x198D | Ordinal: 6542
        void setEnabled(bool);

    // RVA: 0x1B52 | Ordinal: 6995
        void socket(void) const;

    // RVA: 0x1E9F | Ordinal: 7840
        void tr(char const *, char const *, int);

    // RVA: 0x1EDE | Ordinal: 7903
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F3F | Ordinal: 8000
        void type(void) const;

    // RVA: 0x35B | Ordinal: 860
        void _QSocketNotifier(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSOCKETNOTIFIER_HPP
