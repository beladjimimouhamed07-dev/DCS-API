#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgGradientStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgGradientStyle
{
public:

    // RVA: 0x30 | Ordinal: 49
        void QSvgGradientStyle(class QSvgGradientStyle const &);

    // RVA: 0x31 | Ordinal: 50
        void QSvgGradientStyle(class QGradient *);

    // RVA: 0x139 | Ordinal: 314
        void brush(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x173 | Ordinal: 372
        void gradientStopsSet(void) const;

    // RVA: 0x1A5 | Ordinal: 422
        void qgradient(void) const;

    // RVA: 0x1B0 | Ordinal: 433
        void qtransform(void) const;

    // RVA: 0x1C3 | Ordinal: 452
        void resolveStops(void);

    // RVA: 0x1C4 | Ordinal: 453
        void resolveStops_helper(class QStringList *);

    // RVA: 0x1F3 | Ordinal: 500
        void setGradientStopsSet(bool);

    // RVA: 0x209 | Ordinal: 522
        void setStopLink(class QString const &, class QSvgTinyDocument *);

    // RVA: 0x210 | Ordinal: 529
        void setTransform(class QTransform const &);

    // RVA: 0x227 | Ordinal: 552
        void stopLink(void) const;

    // RVA: 0x249 | Ordinal: 586
        void type(void) const;

    // RVA: 0x83 | Ordinal: 132
        void _QSvgGradientStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGGRADIENTSTYLE_HPP
