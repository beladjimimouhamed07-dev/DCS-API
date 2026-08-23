#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGradient
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGradient
{
public:

    // RVA: 0x116 | Ordinal: 279
        void QGradient(class QGradient const &);

    // RVA: 0x117 | Ordinal: 280
        void QGradient(enum QGradient::Preset);

    // RVA: 0x118 | Ordinal: 281
        void QGradient(void);

    // RVA: 0xC6B | Ordinal: 3180
        void coordinateMode(void) const;

    // RVA: 0x4F92 | Ordinal: 20371
        void interpolationMode(void) const;

    // RVA: 0x58BC | Ordinal: 22717
        void setColorAt(double, class QColor const &);

    // RVA: 0x58DF | Ordinal: 22752
        void setCoordinateMode(enum QGradient::CoordinateMode);

    // RVA: 0x5A0A | Ordinal: 23051
        void setInterpolationMode(enum QGradient::InterpolationMode);

    // RVA: 0x5BA1 | Ordinal: 23458
        void setSpread(enum QGradient::Spread);

    // RVA: 0x5BC0 | Ordinal: 23489
        void setStops(class QVector<struct QPair<double, class QColor>> const &);

    // RVA: 0x5D76 | Ordinal: 23927
        void spread(void) const;

    // RVA: 0x5E10 | Ordinal: 24081
        void stops(void) const;

    // RVA: 0x6066 | Ordinal: 24679
        void type(void) const;

    // RVA: 0x443 | Ordinal: 1092
        void _QGradient(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGRADIENT_HPP
