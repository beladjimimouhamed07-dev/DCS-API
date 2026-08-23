#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Svg.dll
// Class: QSvgTspan
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QSvgTspan
{
public:

    // RVA: 0x6C | Ordinal: 109
        void QSvgTspan(class QSvgTspan const &);

    // RVA: 0x6D | Ordinal: 110
        void QSvgTspan(class QSvgNode *, bool);

    // RVA: 0x114 | Ordinal: 277
        void addText(class QString const &);

    // RVA: 0x166 | Ordinal: 359
        void draw(class QPainter *, struct QSvgExtraStates &);

    // RVA: 0x17D | Ordinal: 382
        void isTspan(void) const;

    // RVA: 0x21C | Ordinal: 541
        void setWhitespaceMode(enum QSvgText::WhitespaceMode);

    // RVA: 0x230 | Ordinal: 561
        void text(void) const;

    // RVA: 0x258 | Ordinal: 601
        void type(void) const;

    // RVA: 0x25F | Ordinal: 608
        void whitespaceMode(void) const;

    // RVA: 0x99 | Ordinal: 154
        void _QSvgTspan(void);
};

// DCS_OPS_RE_QT5SVG.DLL_QSVGTSPAN_HPP
