#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractState
{
public:

    // RVA: 0x3E | Ordinal: 63
        void QAbstractState(class QAbstractStatePrivate &, class QState *);

    // RVA: 0x3F | Ordinal: 64
        void QAbstractState(class QState *);

    // RVA: 0x7D0 | Ordinal: 2001
        void active(void) const;

    // RVA: 0x7D1 | Ordinal: 2002
        void activeChanged(bool);

    // RVA: 0xB87 | Ordinal: 2952
        void d_func(void);

    // RVA: 0xB88 | Ordinal: 2953
        void d_func(void) const;

    // RVA: 0xD5B | Ordinal: 3420
        void entered(struct QAbstractState::QPrivateSignal);

    // RVA: 0xD9E | Ordinal: 3487
        void event(class QEvent *);

    // RVA: 0xDD9 | Ordinal: 3546
        void exited(struct QAbstractState::QPrivateSignal);

    // RVA: 0x12E7 | Ordinal: 4840
        void machine(void) const;

    // RVA: 0x1347 | Ordinal: 4936
        void metaObject(void) const;

    // RVA: 0x14B7 | Ordinal: 5304
        void parentState(void) const;

    // RVA: 0x1630 | Ordinal: 5681
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166D | Ordinal: 5742
        void qt_metacast(char const *);

    // RVA: 0x16B3 | Ordinal: 5812
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1E76 | Ordinal: 7799
        void tr(char const *, char const *, int);

    // RVA: 0x1EB6 | Ordinal: 7863
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2E1 | Ordinal: 738
        void _QAbstractState(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTSTATE_HPP
