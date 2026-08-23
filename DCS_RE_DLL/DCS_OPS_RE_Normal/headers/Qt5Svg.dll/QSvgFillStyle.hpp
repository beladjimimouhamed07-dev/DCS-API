#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgFillStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgFillStyle
{
public:

    // RVA: 0x1B | Ordinal: 28
        void QSvgFillStyle(class QSvgFillStyle &&);

    // RVA: 0x1C | Ordinal: 29
        void QSvgFillStyle(class QSvgFillStyle const &);

    // RVA: 0x1D | Ordinal: 30
        void QSvgFillStyle(void);

    // RVA: 0x121 | Ordinal: 290
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x16E | Ordinal: 367
        void fillOpacity(void) const;

    // RVA: 0x16F | Ordinal: 368
        void fillRule(void) const;

    // RVA: 0x171 | Ordinal: 370
        void gradientId(void) const;

    // RVA: 0x17B | Ordinal: 380
        void isGradientResolved(void) const;

    // RVA: 0x1A1 | Ordinal: 418
        void qbrush(void) const;

    // RVA: 0x1C9 | Ordinal: 458
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x1DA | Ordinal: 475
        void setBrush(class QBrush);

    // RVA: 0x1E8 | Ordinal: 489
        void setFillOpacity(double);

    // RVA: 0x1E9 | Ordinal: 490
        void setFillRule(enum Qt::FillRule);

    // RVA: 0x1EA | Ordinal: 491
        void setFillStyle(class QSvgFillStyleProperty *);

    // RVA: 0x1EF | Ordinal: 496
        void setGradientId(class QString const &);

    // RVA: 0x1F1 | Ordinal: 498
        void setGradientResolved(bool);

    // RVA: 0x22A | Ordinal: 555
        void style(void) const;

    // RVA: 0x246 | Ordinal: 583
        void type(void) const;

    // RVA: 0x7C | Ordinal: 125
        void _QSvgFillStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGFILLSTYLE_HPP
