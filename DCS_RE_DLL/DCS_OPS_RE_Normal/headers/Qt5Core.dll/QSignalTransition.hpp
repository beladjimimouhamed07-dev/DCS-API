#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSignalTransition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSignalTransition
{
public:

    // RVA: 0x1EE | Ordinal: 495
        void QSignalTransition(class QState *);

    // RVA: 0x1EF | Ordinal: 496
        void QSignalTransition(class QObject const *, char const *, class QState *);

    // RVA: 0xBD4 | Ordinal: 3029
        void d_func(void);

    // RVA: 0xBD5 | Ordinal: 3030
        void d_func(void) const;

    // RVA: 0xDAE | Ordinal: 3503
        void event(class QEvent *);

    // RVA: 0xDBE | Ordinal: 3519
        void eventTest(class QEvent *);

    // RVA: 0x136D | Ordinal: 4974
        void metaObject(void) const;

    // RVA: 0x147D | Ordinal: 5246
        void onTransition(class QEvent *);

    // RVA: 0x1655 | Ordinal: 5718
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1692 | Ordinal: 5779
        void qt_metacast(char const *);

    // RVA: 0x16D9 | Ordinal: 5850
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x191D | Ordinal: 6430
        void senderObject(void) const;

    // RVA: 0x191E | Ordinal: 6431
        void senderObjectChanged(struct QSignalTransition::QPrivateSignal);

    // RVA: 0x1A84 | Ordinal: 6789
        void setSenderObject(class QObject const *);

    // RVA: 0x1A8A | Ordinal: 6795
        void setSignal(class QByteArray const &);

    // RVA: 0x1B12 | Ordinal: 6931
        void signal(void) const;

    // RVA: 0x1B13 | Ordinal: 6932
        void signalChanged(struct QSignalTransition::QPrivateSignal);

    // RVA: 0x1E9E | Ordinal: 7839
        void tr(char const *, char const *, int);

    // RVA: 0x1EDD | Ordinal: 7902
        void trUtf8(char const *, char const *, int);

    // RVA: 0x35A | Ordinal: 859
        void _QSignalTransition(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSIGNALTRANSITION_HPP
