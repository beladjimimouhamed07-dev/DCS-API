#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QState
{
public:

    // RVA: 0x1F7 | Ordinal: 504
        void QState(class QStatePrivate &, class QState *);

    // RVA: 0x1F8 | Ordinal: 505
        void QState(class QState *);

    // RVA: 0x1F9 | Ordinal: 506
        void QState(enum QState::ChildMode, class QState *);

    // RVA: 0x819 | Ordinal: 2074
        void addTransition(class QAbstractState *);

    // RVA: 0x81A | Ordinal: 2075
        void addTransition(class QObject const *, char const *, class QAbstractState *);

    // RVA: 0x81B | Ordinal: 2076
        void addTransition(class QAbstractTransition *);

    // RVA: 0x8AB | Ordinal: 2220
        void assignProperty(class QObject *, char const *, class QVariant const &);

    // RVA: 0x9C2 | Ordinal: 2499
        void childMode(void) const;

    // RVA: 0x9C3 | Ordinal: 2500
        void childModeChanged(struct QState::QPrivateSignal);

    // RVA: 0xBDA | Ordinal: 3035
        void d_func(void);

    // RVA: 0xBDB | Ordinal: 3036
        void d_func(void) const;

    // RVA: 0xD89 | Ordinal: 3466
        void errorState(void) const;

    // RVA: 0xD8A | Ordinal: 3467
        void errorStateChanged(struct QState::QPrivateSignal);

    // RVA: 0xDB0 | Ordinal: 3505
        void event(class QEvent *);

    // RVA: 0xE50 | Ordinal: 3665
        void finished(struct QState::QPrivateSignal);

    // RVA: 0xFEF | Ordinal: 4080
        void initialState(void) const;

    // RVA: 0xFF0 | Ordinal: 4081
        void initialStateChanged(struct QState::QPrivateSignal);

    // RVA: 0x1370 | Ordinal: 4977
        void metaObject(void) const;

    // RVA: 0x1476 | Ordinal: 5239
        void onEntry(class QEvent *);

    // RVA: 0x147A | Ordinal: 5243
        void onExit(class QEvent *);

    // RVA: 0x1553 | Ordinal: 5460
        void propertiesAssigned(struct QState::QPrivateSignal);

    // RVA: 0x1658 | Ordinal: 5721
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1695 | Ordinal: 5782
        void qt_metacast(char const *);

    // RVA: 0x16DC | Ordinal: 5853
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1808 | Ordinal: 6153
        void removeTransition(class QAbstractTransition *);

    // RVA: 0x194C | Ordinal: 6477
        void setChildMode(enum QState::ChildMode);

    // RVA: 0x19A1 | Ordinal: 6562
        void setErrorState(class QAbstractState *);

    // RVA: 0x19E8 | Ordinal: 6633
        void setInitialState(class QAbstractState *);

    // RVA: 0x1EA1 | Ordinal: 7842
        void tr(char const *, char const *, int);

    // RVA: 0x1EE0 | Ordinal: 7905
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1EF1 | Ordinal: 7922
        void transitions(void) const;

    // RVA: 0x35D | Ordinal: 862
        void _QState(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTATE_HPP
