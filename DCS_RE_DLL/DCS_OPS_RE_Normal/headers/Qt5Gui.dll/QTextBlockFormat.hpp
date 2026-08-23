#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextBlockFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextBlockFormat
{
public:

    // RVA: 0x32C | Ordinal: 813
        void QTextBlockFormat(class QTextFormat const &);

    // RVA: 0x32D | Ordinal: 814
        void QTextBlockFormat(class QTextBlockFormat &&);

    // RVA: 0x32E | Ordinal: 815
        void QTextBlockFormat(class QTextBlockFormat const &);

    // RVA: 0x32F | Ordinal: 816
        void QTextBlockFormat(void);

    // RVA: 0x9BF | Ordinal: 2496
        void alignment(void) const;

    // RVA: 0xADE | Ordinal: 2783
        void bottomMargin(void) const;

    // RVA: 0x4E8C | Ordinal: 20109
        void headingLevel(void) const;

    // RVA: 0x4EF5 | Ordinal: 20214
        void indent(void) const;

    // RVA: 0x50A8 | Ordinal: 20649
        void isValid(void) const;

    // RVA: 0x513B | Ordinal: 20796
        void leftMargin(void) const;

    // RVA: 0x5166 | Ordinal: 20839
        void lineHeight(double, double) const;

    // RVA: 0x5167 | Ordinal: 20840
        void lineHeight(void) const;

    // RVA: 0x5168 | Ordinal: 20841
        void lineHeightType(void) const;

    // RVA: 0x5225 | Ordinal: 21030
        void marker(void) const;

    // RVA: 0x5355 | Ordinal: 21334
        void nonBreakableLines(void) const;

    // RVA: 0x53D2 | Ordinal: 21459
        void pageBreakPolicy(void) const;

    // RVA: 0x5769 | Ordinal: 22378
        void rightMargin(void) const;

    // RVA: 0x581F | Ordinal: 22560
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5880 | Ordinal: 22657
        void setBottomMargin(double);

    // RVA: 0x59E2 | Ordinal: 23011
        void setHeadingLevel(int);

    // RVA: 0x59FE | Ordinal: 23039
        void setIndent(int);

    // RVA: 0x5A36 | Ordinal: 23095
        void setLeftMargin(double);

    // RVA: 0x5A40 | Ordinal: 23105
        void setLineHeight(double, int);

    // RVA: 0x5A54 | Ordinal: 23125
        void setMarker(enum QTextBlockFormat::MarkerType);

    // RVA: 0x5A9C | Ordinal: 23197
        void setNonBreakableLines(bool);

    // RVA: 0x5ACB | Ordinal: 23244
        void setPageBreakPolicy(class QFlags<enum QTextFormat::PageBreakFlag>);

    // RVA: 0x5B50 | Ordinal: 23377
        void setRightMargin(double);

    // RVA: 0x5BE0 | Ordinal: 23521
        void setTabPositions(class QList<struct QTextOption::Tab> const &);

    // RVA: 0x5BF6 | Ordinal: 23543
        void setTextIndent(double);

    // RVA: 0x5C14 | Ordinal: 23573
        void setTopMargin(double);

    // RVA: 0x5EAB | Ordinal: 24236
        void tabPositions(void) const;

    // RVA: 0x5F02 | Ordinal: 24323
        void textIndent(void) const;

    // RVA: 0x5F8F | Ordinal: 24464
        void topMargin(void) const;

    // RVA: 0x52A | Ordinal: 1323
        void _QTextBlockFormat(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTBLOCKFORMAT_HPP
