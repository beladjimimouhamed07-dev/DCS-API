#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTreeView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTreeView
{
public:

    // RVA: 0x186 | Ordinal: 391
        void QTreeView(class QTreeViewPrivate &, class QWidget *);

    // RVA: 0x187 | Ordinal: 392
        void QTreeView(class QWidget *);

    // RVA: 0x5C6 | Ordinal: 1479
        void allColumnsShowFocus(void) const;

    // RVA: 0x5F8 | Ordinal: 1529
        void autoExpandDelay(void) const;

    // RVA: 0x75F | Ordinal: 1888
        void collapse(class QModelIndex const &);

    // RVA: 0x761 | Ordinal: 1890
        void collapseAll(void);

    // RVA: 0x763 | Ordinal: 1892
        void collapsed(class QModelIndex const &);

    // RVA: 0x776 | Ordinal: 1911
        void columnAt(int) const;

    // RVA: 0x782 | Ordinal: 1923
        void columnCountChanged(int, int);

    // RVA: 0x787 | Ordinal: 1928
        void columnMoved(void);

    // RVA: 0x78B | Ordinal: 1932
        void columnResized(int, int, int);

    // RVA: 0x791 | Ordinal: 1938
        void columnViewportPosition(int) const;

    // RVA: 0x793 | Ordinal: 1940
        void columnWidth(int) const;

    // RVA: 0x83A | Ordinal: 2107
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x9C3 | Ordinal: 2500
        void d_func(void);

    // RVA: 0x9C4 | Ordinal: 2501
        void d_func(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void dataChanged(class QModelIndex const &, class QModelIndex const &, class QVector<int> const &);

    // RVA: 0xA34 | Ordinal: 2613
        void doItemsLayout(void);

    // RVA: 0xA88 | Ordinal: 2697
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xA9C | Ordinal: 2717
        void drawBranches(class QPainter *, class QRect const &, class QModelIndex const &) const;

    // RVA: 0xAC8 | Ordinal: 2761
        void drawRow(class QPainter *, class QStyleOptionViewItem const &, class QModelIndex const &) const;

    // RVA: 0xACD | Ordinal: 2766
        void drawTree(class QPainter *, class QRegion const &) const;

    // RVA: 0xB95 | Ordinal: 2966
        void expand(class QModelIndex const &);

    // RVA: 0xB97 | Ordinal: 2968
        void expandAll(void);

    // RVA: 0xB9A | Ordinal: 2971
        void expandRecursively(class QModelIndex const &, int);

    // RVA: 0xB9B | Ordinal: 2972
        void expandToDepth(int);

    // RVA: 0xB9C | Ordinal: 2973
        void expanded(class QModelIndex const &);

    // RVA: 0xBA5 | Ordinal: 2982
        void expandsOnDoubleClick(void) const;

    // RVA: 0xCFF | Ordinal: 3328
        void header(void) const;

    // RVA: 0xD26 | Ordinal: 3367
        void hideColumn(int);

    // RVA: 0xD5F | Ordinal: 3424
        void horizontalOffset(void) const;

    // RVA: 0xD68 | Ordinal: 3433
        void horizontalScrollbarAction(int);

    // RVA: 0xDAA | Ordinal: 3499
        void indentation(void) const;

    // RVA: 0xDB1 | Ordinal: 3506
        void indexAbove(class QModelIndex const &) const;

    // RVA: 0xDB6 | Ordinal: 3511
        void indexAt(class QPoint const &) const;

    // RVA: 0xDB8 | Ordinal: 3513
        void indexBelow(class QModelIndex const &) const;

    // RVA: 0xDCA | Ordinal: 3531
        void indexRowSizeHint(class QModelIndex const &) const;

    // RVA: 0xEAD | Ordinal: 3758
        void isAnimated(void) const;

    // RVA: 0xEC1 | Ordinal: 3778
        void isColumnHidden(int) const;

    // RVA: 0xEE0 | Ordinal: 3809
        void isExpanded(class QModelIndex const &) const;

    // RVA: 0xEE3 | Ordinal: 3812
        void isFirstColumnSpanned(int, class QModelIndex const &) const;

    // RVA: 0xEF1 | Ordinal: 3826
        void isHeaderHidden(void) const;

    // RVA: 0xEFB | Ordinal: 3836
        void isIndexHidden(class QModelIndex const &) const;

    // RVA: 0xF3D | Ordinal: 3902
        void isRowHidden(int, class QModelIndex const &) const;

    // RVA: 0xF51 | Ordinal: 3922
        void isSortingEnabled(void) const;

    // RVA: 0xFEF | Ordinal: 4080
        void itemsExpandable(void) const;

    // RVA: 0x100E | Ordinal: 4111
        void keyPressEvent(class QKeyEvent *);

    // RVA: 0x1025 | Ordinal: 4134
        void keyboardSearch(class QString const &);

    // RVA: 0x1190 | Ordinal: 4497
        void metaObject(void) const;

    // RVA: 0x120C | Ordinal: 4621
        void mouseDoubleClickEvent(class QMouseEvent *);

    // RVA: 0x122C | Ordinal: 4653
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x124F | Ordinal: 4688
        void mousePressEvent(class QMouseEvent *);

    // RVA: 0x126E | Ordinal: 4719
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x127D | Ordinal: 4734
        void moveCursor(enum QAbstractItemView::CursorAction, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1349 | Ordinal: 4938
        void paintEvent(class QPaintEvent *);

    // RVA: 0x14A9 | Ordinal: 5290
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x153C | Ordinal: 5437
        void qt_metacast(char const *);

    // RVA: 0x15D2 | Ordinal: 5587
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x160F | Ordinal: 5648
        void reexpand(void);

    // RVA: 0x1671 | Ordinal: 5746
        void reset(void);

    // RVA: 0x167D | Ordinal: 5758
        void resetIndentation(void);

    // RVA: 0x1690 | Ordinal: 5777
        void resizeColumnToContents(int);

    // RVA: 0x16E4 | Ordinal: 5861
        void rootIsDecorated(void) const;

    // RVA: 0x16FE | Ordinal: 5887
        void rowHeight(class QModelIndex const &) const;

    // RVA: 0x170E | Ordinal: 5903
        void rowsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x1713 | Ordinal: 5908
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x1714 | Ordinal: 5909
        void rowsRemoved(class QModelIndex const &, int, int);

    // RVA: 0x175F | Ordinal: 5984
        void scrollContentsBy(int, int);

    // RVA: 0x176A | Ordinal: 5995
        void scrollTo(class QModelIndex const &, enum QAbstractItemView::ScrollHint);

    // RVA: 0x1798 | Ordinal: 6041
        void selectAll(void);

    // RVA: 0x17AF | Ordinal: 6064
        void selectedIndexes(void) const;

    // RVA: 0x17C9 | Ordinal: 6090
        void selectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0x180F | Ordinal: 6160
        void setAllColumnsShowFocus(bool);

    // RVA: 0x1815 | Ordinal: 6166
        void setAnimated(bool);

    // RVA: 0x181E | Ordinal: 6175
        void setAutoExpandDelay(int);

    // RVA: 0x1889 | Ordinal: 6282
        void setColumnHidden(int, bool);

    // RVA: 0x1892 | Ordinal: 6291
        void setColumnWidth(int, int);

    // RVA: 0x1955 | Ordinal: 6486
        void setExpanded(class QModelIndex const &, bool);

    // RVA: 0x1958 | Ordinal: 6489
        void setExpandsOnDoubleClick(bool);

    // RVA: 0x1975 | Ordinal: 6518
        void setFirstColumnSpanned(int, class QModelIndex const &, bool);

    // RVA: 0x19E1 | Ordinal: 6626
        void setHeader(class QHeaderView *);

    // RVA: 0x19E2 | Ordinal: 6627
        void setHeaderHidden(bool);

    // RVA: 0x1A1A | Ordinal: 6683
        void setIndentation(int);

    // RVA: 0x1A4F | Ordinal: 6736
        void setItemsExpandable(bool);

    // RVA: 0x1ACC | Ordinal: 6861
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B9F | Ordinal: 7072
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1BA0 | Ordinal: 7073
        void setRootIsDecorated(bool);

    // RVA: 0x1BAC | Ordinal: 7085
        void setRowHidden(int, class QModelIndex const &, bool);

    // RVA: 0x1BE4 | Ordinal: 7141
        void setSelection(class QRect const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1BF1 | Ordinal: 7154
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1C2A | Ordinal: 7211
        void setSortingEnabled(bool);

    // RVA: 0x1CE7 | Ordinal: 7400
        void setTreePosition(int);

    // RVA: 0x1CEE | Ordinal: 7407
        void setUniformRowHeights(bool);

    // RVA: 0x1D5F | Ordinal: 7520
        void setWordWrap(bool);

    // RVA: 0x1D94 | Ordinal: 7573
        void showColumn(int);

    // RVA: 0x1E1D | Ordinal: 7710
        void sizeHintForColumn(int) const;

    // RVA: 0x1E37 | Ordinal: 7736
        void sortByColumn(int);

    // RVA: 0x1E38 | Ordinal: 7737
        void sortByColumn(int, enum Qt::SortOrder);

    // RVA: 0x202C | Ordinal: 8237
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20F8 | Ordinal: 8441
        void tr(char const *, char const *, int);

    // RVA: 0x218B | Ordinal: 8588
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21AD | Ordinal: 8622
        void treePosition(void) const;

    // RVA: 0x21E7 | Ordinal: 8680
        void uniformRowHeights(void) const;

    // RVA: 0x222D | Ordinal: 8750
        void updateGeometries(void);

    // RVA: 0x2283 | Ordinal: 8836
        void verticalOffset(void) const;

    // RVA: 0x228D | Ordinal: 8846
        void verticalScrollbarValueChanged(int);

    // RVA: 0x22A9 | Ordinal: 8874
        void viewportEvent(class QEvent *);

    // RVA: 0x22B0 | Ordinal: 8881
        void viewportSizeHint(void) const;

    // RVA: 0x22C0 | Ordinal: 8897
        void visualIndex(class QModelIndex const &) const;

    // RVA: 0x22CB | Ordinal: 8908
        void visualRect(class QModelIndex const &) const;

    // RVA: 0x22D0 | Ordinal: 8913
        void visualRegionForSelection(class QItemSelection const &) const;

    // RVA: 0x2338 | Ordinal: 9017
        void wordWrap(void) const;

    // RVA: 0x283 | Ordinal: 644
        void _QTreeView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTREEVIEW_HPP
