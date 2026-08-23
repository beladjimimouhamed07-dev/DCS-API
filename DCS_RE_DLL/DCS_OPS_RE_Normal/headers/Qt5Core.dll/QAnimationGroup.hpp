#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAnimationGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAnimationGroup
{
public:

    // RVA: 0x48 | Ordinal: 73
        void QAnimationGroup(class QAnimationGroupPrivate &, class QObject *);

    // RVA: 0x49 | Ordinal: 74
        void QAnimationGroup(class QObject *);

    // RVA: 0x7D7 | Ordinal: 2008
        void addAnimation(class QAbstractAnimation *);

    // RVA: 0x83F | Ordinal: 2112
        void animationAt(int) const;

    // RVA: 0x840 | Ordinal: 2113
        void animationCount(void) const;

    // RVA: 0x9DC | Ordinal: 2525
        void clear(void);

    // RVA: 0xB8D | Ordinal: 2958
        void d_func(void);

    // RVA: 0xB8E | Ordinal: 2959
        void d_func(void) const;

    // RVA: 0xDA0 | Ordinal: 3489
        void event(class QEvent *);

    // RVA: 0xFCD | Ordinal: 4046
        void indexOfAnimation(class QAbstractAnimation *) const;

    // RVA: 0x1029 | Ordinal: 4138
        void insertAnimation(int, class QAbstractAnimation *);

    // RVA: 0x134B | Ordinal: 4940
        void metaObject(void) const;

    // RVA: 0x1634 | Ordinal: 5685
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1671 | Ordinal: 5746
        void qt_metacast(char const *);

    // RVA: 0x16B7 | Ordinal: 5816
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17C8 | Ordinal: 6089
        void removeAnimation(class QAbstractAnimation *);

    // RVA: 0x1CAB | Ordinal: 7340
        void takeAnimation(int);

    // RVA: 0x1E7A | Ordinal: 7803
        void tr(char const *, char const *, int);

    // RVA: 0x1EBA | Ordinal: 7867
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2E7 | Ordinal: 744
        void _QAnimationGroup(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QANIMATIONGROUP_HPP
