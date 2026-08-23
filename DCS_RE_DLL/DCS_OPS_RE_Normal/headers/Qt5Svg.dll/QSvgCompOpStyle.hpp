#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgCompOpStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgCompOpStyle
{
public:

    // RVA: 0x11 | Ordinal: 18
        void QSvgCompOpStyle(class QSvgCompOpStyle &&);

    // RVA: 0x12 | Ordinal: 19
        void QSvgCompOpStyle(class QSvgCompOpStyle const &);

    // RVA: 0x13 | Ordinal: 20
        void QSvgCompOpStyle(enum QPainter::CompositionMode);

    // RVA: 0x120 | Ordinal: 289
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x13D | Ordinal: 318
        void compOp(void) const;

    // RVA: 0x1C8 | Ordinal: 457
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x243 | Ordinal: 580
        void type(void) const;

    // RVA: 0x79 | Ordinal: 122
        void _QSvgCompOpStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGCOMPOPSTYLE_HPP
