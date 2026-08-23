#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QVariantAnimation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QVariantAnimation
{
public:

    // RVA: 0x28D | Ordinal: 654
        void QVariantAnimation(class QVariantAnimationPrivate &, class QObject *);

    // RVA: 0x28E | Ordinal: 655
        void QVariantAnimation(class QObject *);

    // RVA: 0xB77 | Ordinal: 2936
        void currentValue(void) const;

    // RVA: 0xBEC | Ordinal: 3053
        void d_func(void);

    // RVA: 0xBED | Ordinal: 3054
        void d_func(void) const;

    // RVA: 0xCE1 | Ordinal: 3298
        void duration(void) const;

    // RVA: 0xCEC | Ordinal: 3309
        void easingCurve(void) const;

    // RVA: 0xD3D | Ordinal: 3390
        void endValue(void) const;

    // RVA: 0xDB3 | Ordinal: 3508
        void event(class QEvent *);

    // RVA: 0x104D | Ordinal: 4174
        void interpolated(class QVariant const &, class QVariant const &, double) const;

    // RVA: 0x124C | Ordinal: 4685
        void keyValueAt(double) const;

    // RVA: 0x124D | Ordinal: 4686
        void keyValues(void) const;

    // RVA: 0x137B | Ordinal: 4988
        void metaObject(void) const;

    // RVA: 0x1663 | Ordinal: 5732
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x16A0 | Ordinal: 5793
        void qt_metacast(char const *);

    // RVA: 0x16E7 | Ordinal: 5864
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1771 | Ordinal: 6002
        void registerInterpolator(class QVariant (__cdecl *)(void const *, void const *, double), int);

    // RVA: 0x1987 | Ordinal: 6536
        void setDuration(int);

    // RVA: 0x198A | Ordinal: 6539
        void setEasingCurve(class QEasingCurve const &);

    // RVA: 0x1999 | Ordinal: 6554
        void setEndValue(class QVariant const &);

    // RVA: 0x19F7 | Ordinal: 6648
        void setKeyValueAt(double, class QVariant const &);

    // RVA: 0x19F8 | Ordinal: 6649
        void setKeyValues(class QVector<struct QPair<double, class QVariant>> const &);

    // RVA: 0x1AA5 | Ordinal: 6822
        void setStartValue(class QVariant const &);

    // RVA: 0x1BBD | Ordinal: 7102
        void startValue(void) const;

    // RVA: 0x1EAC | Ordinal: 7853
        void tr(char const *, char const *, int);

    // RVA: 0x1EEB | Ordinal: 7916
        void trUtf8(char const *, char const *, int);

    // RVA: 0x1F85 | Ordinal: 8070
        void updateCurrentTime(int);

    // RVA: 0x1F87 | Ordinal: 8072
        void updateCurrentValue(class QVariant const &);

    // RVA: 0x1F92 | Ordinal: 8083
        void updateState(enum QAbstractAnimation::State, enum QAbstractAnimation::State);

    // RVA: 0x1FC8 | Ordinal: 8137
        void valueChanged(class QVariant const &);

    // RVA: 0x37E | Ordinal: 895
        void _QVariantAnimation(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QVARIANTANIMATION_HPP
