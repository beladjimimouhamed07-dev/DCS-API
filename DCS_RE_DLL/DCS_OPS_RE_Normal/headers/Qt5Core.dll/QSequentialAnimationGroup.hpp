#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QSequentialAnimationGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSequentialAnimationGroup
{
public:

    // RVA: 0x1E0 | Ordinal: 481
        void QSequentialAnimationGroup(class QSequentialAnimationGroupPrivate &, class QObject *);

    // RVA: 0x1E1 | Ordinal: 482
        void QSequentialAnimationGroup(class QObject *);

    // RVA: 0x804 | Ordinal: 2053
        void addPause(int);

    // RVA: 0xB58 | Ordinal: 2905
        void currentAnimation(void) const;

    // RVA: 0xB59 | Ordinal: 2906
        void currentAnimationChanged(class QAbstractAnimation *);

    // RVA: 0xBCC | Ordinal: 3021
        void d_func(void);

    // RVA: 0xBCD | Ordinal: 3022
        void d_func(void) const;

    // RVA: 0xCDF | Ordinal: 3296
        void duration(void) const;

    // RVA: 0xDAC | Ordinal: 3501
        void event(class QEvent *);

    // RVA: 0x102F | Ordinal: 4144
        void insertPause(int, int);

    // RVA: 0x1369 | Ordinal: 4970
        void metaObject(void) const;

    // RVA: 0x1651 | Ordinal: 5714
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x168E | Ordinal: 5775
        void qt_metacast(char const *);

    // RVA: 0x16D5 | Ordinal: 5846
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1E9A | Ordinal: 7835
        void tr(char const *, char const *, int);

    // RVA: 0x1ED9 | Ordinal: 7898
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F84 | Ordinal: 8069
        void updateCurrentTime(int);

    // RVA: 0x1F8A | Ordinal: 8075
        void updateDirection(enum QAbstractAnimation::Direction);

    // RVA: 0x1F91 | Ordinal: 8082
        void updateState(enum QAbstractAnimation::State, enum QAbstractAnimation::State);

    // RVA: 0x356 | Ordinal: 855
        void _QSequentialAnimationGroup(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSEQUENTIALANIMATIONGROUP_HPP
