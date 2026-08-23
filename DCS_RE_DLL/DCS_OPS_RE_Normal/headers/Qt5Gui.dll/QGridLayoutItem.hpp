#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGridLayoutItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGridLayoutItem
{
public:

    // RVA: 0x11C | Ordinal: 285
        void QGridLayoutItem(class QGridLayoutItem const &);

    // RVA: 0x11D | Ordinal: 286
        void QGridLayoutItem(int, int, int, int, class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x9BD | Ordinal: 2494
        void alignment(void) const;

    // RVA: 0xAFD | Ordinal: 2814
        void box(enum Qt::Orientation, bool, double) const;

    // RVA: 0xC0E | Ordinal: 3087
        void columnSpan(enum Qt::Orientation) const;

    // RVA: 0xC0F | Ordinal: 3088
        void columnSpan(void) const;

    // RVA: 0xC59 | Ordinal: 3162
        void controlTypes(enum LayoutSide) const;

    // RVA: 0xF6C | Ordinal: 3949
        void dynamicConstraintOrientation(void) const;

    // RVA: 0xF75 | Ordinal: 3958
        void effectiveMaxSize(class QSizeF const &) const;

    // RVA: 0x1082 | Ordinal: 4227
        void firstColumn(enum Qt::Orientation) const;

    // RVA: 0x1083 | Ordinal: 4228
        void firstColumn(void) const;

    // RVA: 0x108A | Ordinal: 4235
        void firstRow(enum Qt::Orientation) const;

    // RVA: 0x108B | Ordinal: 4236
        void firstRow(void) const;

    // RVA: 0x1186 | Ordinal: 4487
        void geometryWithin(double, double, double, double, double, class QFlags<enum Qt::AlignmentFlag>, bool) const;

    // RVA: 0x4E60 | Ordinal: 20065
        void hasDynamicConstraint(void) const;

    // RVA: 0x4F6A | Ordinal: 20331
        void insertOrRemoveRows(int, int, enum Qt::Orientation);

    // RVA: 0x502F | Ordinal: 20528
        void isIgnored(void) const;

    // RVA: 0x5107 | Ordinal: 20744
        void lastColumn(enum Qt::Orientation) const;

    // RVA: 0x5108 | Ordinal: 20745
        void lastColumn(void) const;

    // RVA: 0x5116 | Ordinal: 20759
        void lastRow(enum Qt::Orientation) const;

    // RVA: 0x5117 | Ordinal: 20760
        void lastRow(void) const;

    // RVA: 0x5788 | Ordinal: 22409
        void rowSpan(enum Qt::Orientation) const;

    // RVA: 0x5789 | Ordinal: 22410
        void rowSpan(void) const;

    // RVA: 0x581D | Ordinal: 22558
        void setAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x5979 | Ordinal: 22906
        void setFirstRow(int, enum Qt::Orientation);

    // RVA: 0x5B5E | Ordinal: 23391
        void setRowSpan(int, enum Qt::Orientation);

    // RVA: 0x5BC2 | Ordinal: 23491
        void setStretchFactor(int, enum Qt::Orientation);

    // RVA: 0x5E16 | Ordinal: 24087
        void stretchFactor(enum Qt::Orientation) const;

    // RVA: 0x6057 | Ordinal: 24664
        void transpose(void);

    // RVA: 0x445 | Ordinal: 1094
        void _QGridLayoutItem(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGRIDLAYOUTITEM_HPP
