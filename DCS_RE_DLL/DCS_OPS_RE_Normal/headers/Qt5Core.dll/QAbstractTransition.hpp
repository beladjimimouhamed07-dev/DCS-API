#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractTransition
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractTransition
{
public:

    // RVA: 0x42 | Ordinal: 67
        void QAbstractTransition(class QAbstractTransitionPrivate &, class QState *);

    // RVA: 0x43 | Ordinal: 68
        void QAbstractTransition(class QState *);

    // RVA: 0x7D6 | Ordinal: 2007
        void addAnimation(class QAbstractAnimation *);

    // RVA: 0x841 | Ordinal: 2114
        void animations(void) const;

    // RVA: 0xB89 | Ordinal: 2954
        void d_func(void);

    // RVA: 0xB8A | Ordinal: 2955
        void d_func(void) const;

    // RVA: 0xD9F | Ordinal: 3488
        void event(class QEvent *);

    // RVA: 0x12E8 | Ordinal: 4841
        void machine(void) const;

    // RVA: 0x1349 | Ordinal: 4938
        void metaObject(void) const;

    // RVA: 0x1632 | Ordinal: 5683
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166F | Ordinal: 5744
        void qt_metacast(char const *);

    // RVA: 0x16B5 | Ordinal: 5814
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17C7 | Ordinal: 6088
        void removeAnimation(class QAbstractAnimation *);

    // RVA: 0x1AB2 | Ordinal: 6835
        void setTargetState(class QAbstractState *);

    // RVA: 0x1AB3 | Ordinal: 6836
        void setTargetStates(class QList<class QAbstractState *> const &);

    // RVA: 0x1AC8 | Ordinal: 6857
        void setTransitionType(enum QAbstractTransition::TransitionType);

    // RVA: 0x1B64 | Ordinal: 7013
        void sourceState(void) const;

    // RVA: 0x1CBD | Ordinal: 7358
        void targetState(void) const;

    // RVA: 0x1CBE | Ordinal: 7359
        void targetStateChanged(struct QAbstractTransition::QPrivateSignal);

    // RVA: 0x1CBF | Ordinal: 7360
        void targetStates(void) const;

    // RVA: 0x1CC0 | Ordinal: 7361
        void targetStatesChanged(struct QAbstractTransition::QPrivateSignal);

    // RVA: 0x1E78 | Ordinal: 7801
        void tr(char const *, char const *, int);

    // RVA: 0x1EB8 | Ordinal: 7865
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1EF0 | Ordinal: 7921
        void transitionType(void) const;

    // RVA: 0x1F0F | Ordinal: 7952
        void triggered(struct QAbstractTransition::QPrivateSignal);

    // RVA: 0x2E3 | Ordinal: 740
        void _QAbstractTransition(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTTRANSITION_HPP
