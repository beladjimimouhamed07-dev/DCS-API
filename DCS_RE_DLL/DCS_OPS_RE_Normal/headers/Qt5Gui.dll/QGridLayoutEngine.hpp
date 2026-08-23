#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QGridLayoutEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QGridLayoutEngine
{
public:

    // RVA: 0x11A | Ordinal: 283
        void QGridLayoutEngine(class QGridLayoutEngine const &);

    // RVA: 0x11B | Ordinal: 284
        void QGridLayoutEngine(class QFlags<enum Qt::AlignmentFlag>, bool);

    // RVA: 0x97F | Ordinal: 2432
        void addItem(class QGridLayoutItem *);

    // RVA: 0xB69 | Ordinal: 2922
        void cellRect(class QRectF const &, int, int, int, int, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0xC09 | Ordinal: 3082
        void columnCount(enum Qt::Orientation) const;

    // RVA: 0xC0A | Ordinal: 3083
        void columnCount(void) const;

    // RVA: 0xC3C | Ordinal: 3133
        void constraintOrientation(void) const;

    // RVA: 0xC58 | Ordinal: 3161
        void controlTypes(enum LayoutSide) const;

    // RVA: 0xDE3 | Ordinal: 3556
        void deleteItems(void);

    // RVA: 0xF71 | Ordinal: 3954
        void effectiveAlignment(class QGridLayoutItem const *) const;

    // RVA: 0xF72 | Ordinal: 3955
        void effectiveFirstRow(enum Qt::Orientation) const;

    // RVA: 0xF73 | Ordinal: 3956
        void effectiveLastRow(enum Qt::Orientation) const;

    // RVA: 0xFCB | Ordinal: 4044
        void ensureColumnAndRowData(class QGridLayoutRowData *, class QGridLayoutBox *, double const *, double const *, enum Qt::Orientation, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0xFCE | Ordinal: 4047
        void ensureDynamicConstraint(void) const;

    // RVA: 0xFCF | Ordinal: 4048
        void ensureEffectiveFirstAndLastRows(void) const;

    // RVA: 0xFD2 | Ordinal: 4051
        void ensureGeometries(class QSizeF const &, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0x105B | Ordinal: 4188
        void fillRowData(class QGridLayoutRowData *, double const *, double const *, enum Qt::Orientation, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0x4E15 | Ordinal: 19990
        void grossRoundUp(int);

    // RVA: 0x4E5F | Ordinal: 20064
        void hasDynamicConstraint(void) const;

    // RVA: 0x4F66 | Ordinal: 20327
        void insertItem(class QGridLayoutItem *, int);

    // RVA: 0x4F69 | Ordinal: 20330
        void insertOrRemoveRows(int, int, enum Qt::Orientation);

    // RVA: 0x4F6B | Ordinal: 20332
        void insertRow(int, enum Qt::Orientation);

    // RVA: 0x4F8F | Ordinal: 20368
        void internalGridColumnCount(void) const;

    // RVA: 0x4F90 | Ordinal: 20369
        void internalGridRowCount(void) const;

    // RVA: 0x4FA5 | Ordinal: 20390
        void invalidate(void);

    // RVA: 0x50C8 | Ordinal: 20681
        void itemAt(int) const;

    // RVA: 0x50C9 | Ordinal: 20682
        void itemAt(int, int, enum Qt::Orientation) const;

    // RVA: 0x50CB | Ordinal: 20684
        void itemCount(void) const;

    // RVA: 0x524F | Ordinal: 21072
        void maybeExpandGrid(int, int, enum Qt::Orientation);

    // RVA: 0x56A2 | Ordinal: 22179
        void regenerateGrid(void);

    // RVA: 0x56DB | Ordinal: 22236
        void removeItem(class QGridLayoutItem *);

    // RVA: 0x56E4 | Ordinal: 22245
        void removeRows(int, int, enum Qt::Orientation);

    // RVA: 0x577F | Ordinal: 22400
        void rowAlignment(int, enum Qt::Orientation) const;

    // RVA: 0x5780 | Ordinal: 22401
        void rowCount(enum Qt::Orientation) const;

    // RVA: 0x5781 | Ordinal: 22402
        void rowCount(void) const;

    // RVA: 0x5786 | Ordinal: 22407
        void rowSizeHint(enum Qt::SizeHint, int, enum Qt::Orientation) const;

    // RVA: 0x5787 | Ordinal: 22408
        void rowSpacing(int, enum Qt::Orientation) const;

    // RVA: 0x578C | Ordinal: 22413
        void rowStretchFactor(int, enum Qt::Orientation) const;

    // RVA: 0x59D1 | Ordinal: 22994
        void setGeometries(class QRectF const &, class QAbstractLayoutStyleInfo const *);

    // RVA: 0x5A11 | Ordinal: 23058
        void setItemAt(int, int, class QGridLayoutItem *);

    // RVA: 0x5B58 | Ordinal: 23385
        void setRowAlignment(int, class QFlags<enum Qt::AlignmentFlag>, enum Qt::Orientation);

    // RVA: 0x5B5C | Ordinal: 23389
        void setRowSizeHint(enum Qt::SizeHint, int, double, enum Qt::Orientation);

    // RVA: 0x5B5D | Ordinal: 23390
        void setRowSpacing(int, double, enum Qt::Orientation);

    // RVA: 0x5B5F | Ordinal: 23392
        void setRowStretchFactor(int, int, enum Qt::Orientation);

    // RVA: 0x5B9F | Ordinal: 23456
        void setSpacing(double, class QFlags<enum Qt::Orientation>);

    // RVA: 0x5CB0 | Ordinal: 23729
        void setVisualDirection(enum Qt::LayoutDirection);

    // RVA: 0x5D43 | Ordinal: 23876
        void sizeHint(enum Qt::SizeHint, class QSizeF const &, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0x5D6F | Ordinal: 23920
        void spacing(enum Qt::Orientation, class QAbstractLayoutStyleInfo const *) const;

    // RVA: 0x6056 | Ordinal: 24663
        void transpose(void);

    // RVA: 0x6139 | Ordinal: 24890
        void visualDirection(void) const;

    // RVA: 0x444 | Ordinal: 1093
        void _QGridLayoutEngine(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QGRIDLAYOUTENGINE_HPP
