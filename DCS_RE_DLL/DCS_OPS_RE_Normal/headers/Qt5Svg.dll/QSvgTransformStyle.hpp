#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgTransformStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgTransformStyle
{
public:

    // RVA: 0x69 | Ordinal: 106
        void QSvgTransformStyle(class QSvgTransformStyle &&);

    // RVA: 0x6A | Ordinal: 107
        void QSvgTransformStyle(class QSvgTransformStyle const &);

    // RVA: 0x6B | Ordinal: 108
        void QSvgTransformStyle(class QTransform const &);

    // RVA: 0x128 | Ordinal: 297
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x1B1 | Ordinal: 434
        void qtransform(void) const;

    // RVA: 0x1D0 | Ordinal: 465
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x257 | Ordinal: 600
        void type(void) const;

    // RVA: 0x98 | Ordinal: 153
        void _QSvgTransformStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGTRANSFORMSTYLE_HPP
