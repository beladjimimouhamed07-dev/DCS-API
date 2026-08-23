#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgImage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgImage
{
public:

    // RVA: 0x36 | Ordinal: 55
        void QSvgImage(class QSvgImage &&);

    // RVA: 0x37 | Ordinal: 56
        void QSvgImage(class QSvgImage const &);

    // RVA: 0x38 | Ordinal: 57
        void QSvgImage(class QSvgNode *, class QImage const &, class QRectF const &);

    // RVA: 0x12F | Ordinal: 304
        void bounds(class QPainter *, struct QSvgExtraStates &) const;

    // RVA: 0x15A | Ordinal: 347
        void draw(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x24A | Ordinal: 587
        void type(void) const;

    // RVA: 0x85 | Ordinal: 134
        void _QSvgImage(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGIMAGE_HPP
