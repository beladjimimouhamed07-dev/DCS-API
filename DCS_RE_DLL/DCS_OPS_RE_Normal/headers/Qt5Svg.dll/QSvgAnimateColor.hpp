#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgAnimateColor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgAnimateColor
{
public:

    // RVA: 0x2 | Ordinal: 3
        void QSvgAnimateColor(class QSvgAnimateColor &&);

    // RVA: 0x3 | Ordinal: 4
        void QSvgAnimateColor(class QSvgAnimateColor const &);

    // RVA: 0x4 | Ordinal: 5
        void QSvgAnimateColor(int, int, int);

    // RVA: 0x11E | Ordinal: 287
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x1C6 | Ordinal: 455
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x1D7 | Ordinal: 472
        void setArgs(bool, class QList<class QColor> const &);

    // RVA: 0x1ED | Ordinal: 494
        void setFreeze(bool);

    // RVA: 0x1FE | Ordinal: 511
        void setRepeatCount(double);

    // RVA: 0x23E | Ordinal: 575
        void type(void) const;

    // RVA: 0x74 | Ordinal: 117
        void _QSvgAnimateColor(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGANIMATECOLOR_HPP
