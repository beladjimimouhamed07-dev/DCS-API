#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgStrokeStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgStrokeStyle
{
public:

    // RVA: 0x59 | Ordinal: 90
        void QSvgStrokeStyle(class QSvgStrokeStyle &&);

    // RVA: 0x5A | Ordinal: 91
        void QSvgStrokeStyle(class QSvgStrokeStyle const &);

    // RVA: 0x5B | Ordinal: 92
        void QSvgStrokeStyle(void);

    // RVA: 0x126 | Ordinal: 295
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x172 | Ordinal: 371
        void gradientId(void) const;

    // RVA: 0x17C | Ordinal: 381
        void isGradientResolved(void) const;

    // RVA: 0x1CE | Ordinal: 463
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x1DE | Ordinal: 479
        void setDashArray(class QVector<double> const &);

    // RVA: 0x1DF | Ordinal: 480
        void setDashArrayNone(void);

    // RVA: 0x1E0 | Ordinal: 481
        void setDashOffset(double);

    // RVA: 0x1F0 | Ordinal: 497
        void setGradientId(class QString const &);

    // RVA: 0x1F2 | Ordinal: 499
        void setGradientResolved(bool);

    // RVA: 0x1F6 | Ordinal: 503
        void setLineCap(enum Qt::PenCapStyle);

    // RVA: 0x1F7 | Ordinal: 504
        void setLineJoin(enum Qt::PenJoinStyle);

    // RVA: 0x1F9 | Ordinal: 506
        void setMiterLimit(double);

    // RVA: 0x1FB | Ordinal: 508
        void setOpacity(double);

    // RVA: 0x20A | Ordinal: 523
        void setStroke(class QBrush);

    // RVA: 0x20C | Ordinal: 525
        void setStyle(class QSvgFillStyleProperty *);

    // RVA: 0x213 | Ordinal: 532
        void setVectorEffect(bool);

    // RVA: 0x21D | Ordinal: 542
        void setWidth(double);

    // RVA: 0x228 | Ordinal: 553
        void stroke(void) const;

    // RVA: 0x22B | Ordinal: 556
        void style(void) const;

    // RVA: 0x253 | Ordinal: 596
        void type(void) const;

    // RVA: 0x260 | Ordinal: 609
        void width(void);

    // RVA: 0x91 | Ordinal: 146
        void _QSvgStrokeStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGSTROKESTYLE_HPP
