#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextLine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextLine
{
public:

    // RVA: 0x36D | Ordinal: 878
        void QTextLine(int, class QTextEngine *);

    // RVA: 0x36E | Ordinal: 879
        void QTextLine(void);

    // RVA: 0xA27 | Ordinal: 2600
        void ascent(void) const;

    // RVA: 0xD04 | Ordinal: 3333
        void cursorToX(int, enum QTextLine::Edge) const;

    // RVA: 0xD05 | Ordinal: 3334
        void cursorToX(int *, enum QTextLine::Edge) const;

    // RVA: 0xE01 | Ordinal: 3586
        void descent(void) const;

    // RVA: 0xEA0 | Ordinal: 3745
        void draw(class QPainter *, class QPointF const &, struct QTextLayout::FormatRange const *) const;

    // RVA: 0x4E01 | Ordinal: 19970
        void glyphRuns(int, int) const;

    // RVA: 0x4E9A | Ordinal: 20123
        void height(void) const;

    // RVA: 0x4EB5 | Ordinal: 20150
        void horizontalAdvance(void) const;

    // RVA: 0x50AF | Ordinal: 20656
        void isValid(void) const;

    // RVA: 0x5129 | Ordinal: 20778
        void layout_helper(int);

    // RVA: 0x5130 | Ordinal: 20785
        void leading(void) const;

    // RVA: 0x5131 | Ordinal: 20786
        void leadingIncluded(void) const;

    // RVA: 0x5169 | Ordinal: 20842
        void lineNumber(void) const;

    // RVA: 0x5335 | Ordinal: 21302
        void naturalTextRect(void) const;

    // RVA: 0x5336 | Ordinal: 21303
        void naturalTextWidth(void) const;

    // RVA: 0x54A0 | Ordinal: 21665
        void position(void) const;

    // RVA: 0x568B | Ordinal: 22156
        void rect(void) const;

    // RVA: 0x5A30 | Ordinal: 23089
        void setLeadingIncluded(bool);

    // RVA: 0x5A43 | Ordinal: 23108
        void setLineWidth(double);

    // RVA: 0x5AA0 | Ordinal: 23201
        void setNumColumns(int);

    // RVA: 0x5AA1 | Ordinal: 23202
        void setNumColumns(int, double);

    // RVA: 0x5B0D | Ordinal: 23310
        void setPosition(class QPointF const &);

    // RVA: 0x5F09 | Ordinal: 24330
        void textLength(void) const;

    // RVA: 0x5F12 | Ordinal: 24339
        void textStart(void) const;

    // RVA: 0x615D | Ordinal: 24926
        void width(void) const;

    // RVA: 0x61BC | Ordinal: 25021
        void x(void) const;

    // RVA: 0x61C9 | Ordinal: 25034
        void xToCursor(double, enum QTextLine::CursorPosition) const;

    // RVA: 0x61D2 | Ordinal: 25043
        void y(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTLINE_HPP
