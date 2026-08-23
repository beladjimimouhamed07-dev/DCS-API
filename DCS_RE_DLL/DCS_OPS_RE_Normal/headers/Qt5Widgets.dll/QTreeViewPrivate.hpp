#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTreeViewPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTreeViewPrivate
{
public:

    // RVA: 0x188 | Ordinal: 393
        void QTreeViewPrivate(void);

    // RVA: 0x4AB | Ordinal: 1196
        void _q_columnsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x4AC | Ordinal: 1197
        void _q_columnsRemoved(class QModelIndex const &, int, int);

    // RVA: 0x4B3 | Ordinal: 1204
        void _q_endAnimatedOperation(void);

    // RVA: 0x4BA | Ordinal: 1211
        void _q_modelAboutToBeReset(void);

    // RVA: 0x4BB | Ordinal: 1212
        void _q_modelDestroyed(void);

    // RVA: 0x4CF | Ordinal: 1232
        void _q_sortIndicatorChanged(int, enum Qt::SortOrder);

    // RVA: 0x4DD | Ordinal: 1246
        void above(int) const;

    // RVA: 0x4F4 | Ordinal: 1269
        void accessibleTable2Index(class QModelIndex const &) const;

    // RVA: 0x4F5 | Ordinal: 1270
        void accessibleTree2Index(class QModelIndex const &) const;

    // RVA: 0x5B1 | Ordinal: 1458
        void adjustViewOptionsForIndex(class QStyleOptionViewItem *, class QModelIndex const &) const;

    // RVA: 0x628 | Ordinal: 1577
        void beginAnimatedOperation(void);

    // RVA: 0x62C | Ordinal: 1581
        void below(int) const;

    // RVA: 0x67A | Ordinal: 1659
        void calcLogicalIndices(class QVector<int> *, class QVector<enum QStyleOptionViewItem::ViewItemPosition> *, int, int) const;

    // RVA: 0x760 | Ordinal: 1889
        void collapse(int, bool);

    // RVA: 0x777 | Ordinal: 1912
        void columnAt(int) const;

    // RVA: 0x789 | Ordinal: 1930
        void columnRanges(class QModelIndex const &, class QModelIndex const &) const;

    // RVA: 0x7DE | Ordinal: 2015
        void coordinateForItem(int) const;

    // RVA: 0xA8A | Ordinal: 2699
        void draggablePaintPairs(class QList<class QModelIndex> const &, class QRect *) const;

    // RVA: 0xA96 | Ordinal: 2711
        void drawAnimatedOperation(class QPainter *) const;

    // RVA: 0xB96 | Ordinal: 2967
        void expand(int, bool);

    // RVA: 0xB99 | Ordinal: 2970
        void expandOrCollapseItemAtPos(class QPoint const &);

    // RVA: 0xBEA | Ordinal: 3051
        void firstVisibleItem(int *) const;

    // RVA: 0xCFC | Ordinal: 3325
        void hasVisibleChildren(class QModelIndex const &) const;

    // RVA: 0xDAB | Ordinal: 3500
        void indentationForItem(int) const;

    // RVA: 0xDFE | Ordinal: 3583
        void initialize(void);

    // RVA: 0xE66 | Ordinal: 3687
        void insertViewItems(int, int, struct QTreeViewItem const &);

    // RVA: 0xE94 | Ordinal: 3733
        void invalidateHeightCache(int) const;

    // RVA: 0xEF6 | Ordinal: 3831
        void isIndexExpanded(class QModelIndex const &) const;

    // RVA: 0xF03 | Ordinal: 3844
        void isItemHiddenOrDisabled(int) const;

    // RVA: 0xF3E | Ordinal: 3903
        void isRowHidden(class QModelIndex const &) const;

    // RVA: 0xF5C | Ordinal: 3933
        void isTreePosition(int) const;

    // RVA: 0xF98 | Ordinal: 3993
        void itemAtCoordinate(int) const;

    // RVA: 0xFA7 | Ordinal: 4008
        void itemDecorationAt(class QPoint const &) const;

    // RVA: 0xFA8 | Ordinal: 4009
        void itemDecorationRect(class QModelIndex const &) const;

    // RVA: 0xFB9 | Ordinal: 4026
        void itemForKeyEnd(void) const;

    // RVA: 0xFBA | Ordinal: 4027
        void itemForKeyHome(void) const;

    // RVA: 0xFBF | Ordinal: 4032
        void itemHeight(int) const;

    // RVA: 0x103B | Ordinal: 4156
        void lastVisibleItem(int, int) const;

    // RVA: 0x103F | Ordinal: 4160
        void layout(int, bool, bool);

    // RVA: 0x1074 | Ordinal: 4213
        void logicalIndexForTree(void) const;

    // RVA: 0x11F4 | Ordinal: 4597
        void modelIndex(int, int) const;

    // RVA: 0x130A | Ordinal: 4875
        void pageDown(int) const;

    // RVA: 0x130E | Ordinal: 4879
        void pageUp(int) const;

    // RVA: 0x131C | Ordinal: 4893
        void paintAlternatingRowColors(class QPainter *, class QStyleOptionViewItem *, int, int) const;

    // RVA: 0x13C6 | Ordinal: 5063
        void prepareAnimatedOperation(int, enum QAbstractAnimation::Direction);

    // RVA: 0x1419 | Ordinal: 5146
        void q_func(void);

    // RVA: 0x141A | Ordinal: 5147
        void q_func(void) const;

    // RVA: 0x164E | Ordinal: 5711
        void removeViewItems(int, int);

    // RVA: 0x1658 | Ordinal: 5721
        void renderTreeToPixmapForAnimation(class QRect const &) const;

    // RVA: 0x1791 | Ordinal: 6034
        void select(class QModelIndex const &, class QModelIndex const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1E7A | Ordinal: 7803
        void startAndEndColumns(class QRect const &) const;

    // RVA: 0x1F37 | Ordinal: 7992
        void storeExpanded(class QPersistentModelIndex const &);

    // RVA: 0x2233 | Ordinal: 8756
        void updateIndentationFromStyle(void);

    // RVA: 0x224E | Ordinal: 8783
        void updateScrollBars(void);

    // RVA: 0x2297 | Ordinal: 8856
        void viewIndex(class QModelIndex const &) const;

    // RVA: 0x2314 | Ordinal: 8981
        void widthHintForIndex(class QModelIndex const &, int, class QStyleOptionViewItem const &, int) const;

    // RVA: 0x284 | Ordinal: 645
        void _QTreeViewPrivate(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTREEVIEWPRIVATE_HPP
