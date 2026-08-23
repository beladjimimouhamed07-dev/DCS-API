#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgText
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgText
{
public:

    // RVA: 0x65 | Ordinal: 102
        void QSvgText(class QSvgText const &);

    // RVA: 0x66 | Ordinal: 103
        void QSvgText(class QSvgNode *, class QPointF const &);

    // RVA: 0x10F | Ordinal: 272
        void addLineBreak(void);

    // RVA: 0x113 | Ordinal: 276
        void addText(class QString const &);

    // RVA: 0x115 | Ordinal: 278
        void addTspan(class QSvgTspan *);

    // RVA: 0x161 | Ordinal: 354
        void draw(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x20E | Ordinal: 527
        void setTextArea(class QSizeF const &);

    // RVA: 0x21B | Ordinal: 540
        void setWhitespaceMode(enum QSvgText::WhitespaceMode);

    // RVA: 0x255 | Ordinal: 598
        void type(void) const;

    // RVA: 0x96 | Ordinal: 151
        void _QSvgText(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGTEXT_HPP
