#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QTextOption
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTextOption
{
public:

    // RVA: 0x37F | Ordinal: 896
        void QTextOption(class QTextOption const &);

    // RVA: 0x380 | Ordinal: 897
        void QTextOption(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x381 | Ordinal: 898
        void QTextOption(void);

    // RVA: 0x9C0 | Ordinal: 2497
        void alignment(void) const;

    // RVA: 0x109D | Ordinal: 4254
        void flags(void) const;

    // RVA: 0x5820 | Ordinal: 22561
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5988 | Ordinal: 22921
        void setFlags(class QFlags<enum QTextOption::Flag>);

    // RVA: 0x5BDE | Ordinal: 23519
        void setTabArray(class QList<double> const &);

    // RVA: 0x5BE1 | Ordinal: 23522
        void setTabStop(double);

    // RVA: 0x5BE2 | Ordinal: 23523
        void setTabStopDistance(double);

    // RVA: 0x5BE5 | Ordinal: 23526
        void setTabs(class QList<struct QTextOption::Tab> const &);

    // RVA: 0x5BF4 | Ordinal: 23541
        void setTextDirection(enum Qt::LayoutDirection);

    // RVA: 0x5C88 | Ordinal: 23689
        void setUseDesignMetrics(bool);

    // RVA: 0x5CD7 | Ordinal: 23768
        void setWrapMode(enum QTextOption::WrapMode);

    // RVA: 0x5EA8 | Ordinal: 24233
        void tabArray(void) const;

    // RVA: 0x5EAC | Ordinal: 24237
        void tabStop(void) const;

    // RVA: 0x5EAD | Ordinal: 24238
        void tabStopDistance(void) const;

    // RVA: 0x5EB9 | Ordinal: 24250
        void tabs(void) const;

    // RVA: 0x5EFF | Ordinal: 24320
        void textDirection(void) const;

    // RVA: 0x60DC | Ordinal: 24797
        void useDesignMetrics(void) const;

    // RVA: 0x6194 | Ordinal: 24981
        void wrapMode(void) const;

    // RVA: 0x544 | Ordinal: 1349
        void _QTextOption(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QTEXTOPTION_HPP
