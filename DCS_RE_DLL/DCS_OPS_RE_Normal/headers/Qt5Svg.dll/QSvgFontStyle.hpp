#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgFontStyle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgFontStyle
{
public:

    // RVA: 0x24 | Ordinal: 37
        void QSvgFontStyle(class QSvgFontStyle &&);

    // RVA: 0x25 | Ordinal: 38
        void QSvgFontStyle(class QSvgFontStyle const &);

    // RVA: 0x26 | Ordinal: 39
        void QSvgFontStyle(class QSvgFont *, class QSvgTinyDocument *);

    // RVA: 0x27 | Ordinal: 40
        void QSvgFontStyle(void);

    // RVA: 0x10C | Ordinal: 269
        void SVGToQtWeight(int);

    // RVA: 0x123 | Ordinal: 292
        void apply(class QPainter *, class QSvgNode const *, struct QSvgExtraStates &);

    // RVA: 0x151 | Ordinal: 338
        void doc(void) const;

    // RVA: 0x1A4 | Ordinal: 421
        void qfont(void) const;

    // RVA: 0x1CB | Ordinal: 460
        void revert(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x1E5 | Ordinal: 486
        void setFamily(class QString const &);

    // RVA: 0x207 | Ordinal: 520
        void setSize(double);

    // RVA: 0x20B | Ordinal: 524
        void setStyle(enum QFont::Style);

    // RVA: 0x20D | Ordinal: 526
        void setTextAnchor(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x212 | Ordinal: 531
        void setVariant(enum QFont::Capitalization);

    // RVA: 0x21A | Ordinal: 539
        void setWeight(int);

    // RVA: 0x22E | Ordinal: 559
        void svgFont(void) const;

    // RVA: 0x247 | Ordinal: 584
        void type(void) const;

    // RVA: 0x7F | Ordinal: 128
        void _QSvgFontStyle(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGFONTSTYLE_HPP
