#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QHistoryState
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QHistoryState
{
public:

    // RVA: 0x122 | Ordinal: 291
        void QHistoryState(class QState *);

    // RVA: 0x123 | Ordinal: 292
        void QHistoryState(enum QHistoryState::HistoryType, class QState *);

    // RVA: 0xBAF | Ordinal: 2992
        void d_func(void);

    // RVA: 0xBB0 | Ordinal: 2993
        void d_func(void) const;

    // RVA: 0xC5D | Ordinal: 3166
        void defaultState(void) const;

    // RVA: 0xC5E | Ordinal: 3167
        void defaultStateChanged(struct QHistoryState::QPrivateSignal);

    // RVA: 0xC5F | Ordinal: 3168
        void defaultTransition(void) const;

    // RVA: 0xC60 | Ordinal: 3169
        void defaultTransitionChanged(struct QHistoryState::QPrivateSignal);

    // RVA: 0xDA7 | Ordinal: 3496
        void event(class QEvent *);

    // RVA: 0xF92 | Ordinal: 3987
        void historyType(void) const;

    // RVA: 0xF93 | Ordinal: 3988
        void historyTypeChanged(struct QHistoryState::QPrivateSignal);

    // RVA: 0x1359 | Ordinal: 4954
        void metaObject(void) const;

    // RVA: 0x1475 | Ordinal: 5238
        void onEntry(class QEvent *);

    // RVA: 0x1479 | Ordinal: 5242
        void onExit(class QEvent *);

    // RVA: 0x1642 | Ordinal: 5699
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x167F | Ordinal: 5760
        void qt_metacast(char const *);

    // RVA: 0x16C5 | Ordinal: 5830
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1975 | Ordinal: 6518
        void setDefaultState(class QAbstractState *);

    // RVA: 0x1976 | Ordinal: 6519
        void setDefaultTransition(class QAbstractTransition *);

    // RVA: 0x19E0 | Ordinal: 6625
        void setHistoryType(enum QHistoryState::HistoryType);

    // RVA: 0x1E8A | Ordinal: 7819
        void tr(char const *, char const *, int);

    // RVA: 0x1ECA | Ordinal: 7883
        void trUtf8(char const *, char const *, int);

    // RVA: 0x320 | Ordinal: 801
        void _QHistoryState(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QHISTORYSTATE_HPP
