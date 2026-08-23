#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgFont
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgFont
{
public:

    // RVA: 0x21 | Ordinal: 34
        void QSvgFont(class QSvgFont &&);

    // RVA: 0x22 | Ordinal: 35
        void QSvgFont(class QSvgFont const &);

    // RVA: 0x23 | Ordinal: 36
        void QSvgFont(double);

    // RVA: 0x10E | Ordinal: 271
        void addGlyph(class QChar, class QPainterPath const &, double);

    // RVA: 0x158 | Ordinal: 345
        void draw(class QPainter *, class QPointF const &, class QString const &, double, class QFlags<enum Qt::AlignmentFlag>) const;

    // RVA: 0x16C | Ordinal: 365
        void familyName(void) const;

    // RVA: 0x1E6 | Ordinal: 487
        void setFamilyName(class QString const &);

    // RVA: 0x211 | Ordinal: 530
        void setUnitsPerEm(double);

    // RVA: 0x7E | Ordinal: 127
        void _QSvgFont(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGFONT_HPP
