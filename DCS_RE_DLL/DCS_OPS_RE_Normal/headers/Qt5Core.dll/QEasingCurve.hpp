#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QEasingCurve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QEasingCurve
{
public:

    // RVA: 0xE7 | Ordinal: 232
        void QEasingCurve(class QEasingCurve &&);

    // RVA: 0xE8 | Ordinal: 233
        void QEasingCurve(class QEasingCurve const &);

    // RVA: 0xE9 | Ordinal: 234
        void QEasingCurve(enum QEasingCurve::Type);

    // RVA: 0x7DD | Ordinal: 2014
        void addCubicBezierSegment(class QPointF const &, class QPointF const &, class QPointF const &);

    // RVA: 0x818 | Ordinal: 2073
        void addTCBSegment(class QPointF const &, double, double, double);

    // RVA: 0x839 | Ordinal: 2106
        void amplitude(void) const;

    // RVA: 0xB53 | Ordinal: 2900
        void cubicBezierSpline(void) const;

    // RVA: 0xB7C | Ordinal: 2941
        void customType(void) const)(double);

    // RVA: 0x1497 | Ordinal: 5272
        void overshoot(void) const;

    // RVA: 0x14DA | Ordinal: 5339
        void period(void) const;

    // RVA: 0x1926 | Ordinal: 6439
        void setAmplitude(double);

    // RVA: 0x1964 | Ordinal: 6501
        void setCustomType(double (__cdecl *)(double));

    // RVA: 0x1A30 | Ordinal: 6705
        void setOvershoot(double);

    // RVA: 0x1A4B | Ordinal: 6732
        void setPeriod(double);

    // RVA: 0x1AC9 | Ordinal: 6858
        void setType(enum QEasingCurve::Type);

    // RVA: 0x1C73 | Ordinal: 7284
        void swap(class QEasingCurve &);

    // RVA: 0x1D0C | Ordinal: 7437
        void toCubicSpline(void) const;

    // RVA: 0x1F36 | Ordinal: 7991
        void type(void) const;

    // RVA: 0x1FC9 | Ordinal: 8138
        void valueForProgress(double) const;

    // RVA: 0x308 | Ordinal: 777
        void _QEasingCurve(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QEASINGCURVE_HPP
