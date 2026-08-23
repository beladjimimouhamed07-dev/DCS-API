#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextTableFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextTableFormat
{
public:

    // RVA: 0x38A | Ordinal: 907
        void QTextTableFormat(class QTextFormat const &);

    // RVA: 0x38B | Ordinal: 908
        void QTextTableFormat(class QTextTableFormat &&);

    // RVA: 0x38C | Ordinal: 909
        void QTextTableFormat(class QTextTableFormat const &);

    // RVA: 0x38D | Ordinal: 910
        void QTextTableFormat(void);

    // RVA: 0x9C1 | Ordinal: 2498
        void alignment(void) const;

    // RVA: 0xACE | Ordinal: 2767
        void borderCollapse(void) const;

    // RVA: 0xB68 | Ordinal: 2921
        void cellPadding(void) const;

    // RVA: 0xB6A | Ordinal: 2923
        void cellSpacing(void) const;

    // RVA: 0xBAE | Ordinal: 2991
        void clearColumnWidthConstraints(void);

    // RVA: 0xC11 | Ordinal: 3090
        void columnWidthConstraints(void) const;

    // RVA: 0xC13 | Ordinal: 3092
        void columns(void) const;

    // RVA: 0x4E8B | Ordinal: 20108
        void headerRowCount(void) const;

    // RVA: 0x50B3 | Ordinal: 20660
        void isValid(void) const;

    // RVA: 0x5821 | Ordinal: 22562
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5873 | Ordinal: 22644
        void setBorderCollapse(bool);

    // RVA: 0x589A | Ordinal: 22683
        void setCellPadding(double);

    // RVA: 0x589B | Ordinal: 22684
        void setCellSpacing(double);

    // RVA: 0x58C8 | Ordinal: 22729
        void setColumnWidthConstraints(class QVector<class QTextLength> const &);

    // RVA: 0x58C9 | Ordinal: 22730
        void setColumns(int);

    // RVA: 0x59E1 | Ordinal: 23010
        void setHeaderRowCount(int);

    // RVA: 0x548 | Ordinal: 1353
        void _QTextTableFormat(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTTABLEFORMAT_HPP
