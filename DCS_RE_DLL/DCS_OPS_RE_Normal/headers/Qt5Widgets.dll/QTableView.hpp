#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTableView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTableView
{
public:

    // RVA: 0x16F | Ordinal: 368
        void QTableView(class QTableViewPrivate &, class QWidget *);

    // RVA: 0x170 | Ordinal: 369
        void QTableView(class QWidget *);

    // RVA: 0x735 | Ordinal: 1846
        void clearSpans(void);

    // RVA: 0x775 | Ordinal: 1910
        void columnAt(int) const;

    // RVA: 0x781 | Ordinal: 1922
        void columnCountChanged(int, int);

    // RVA: 0x786 | Ordinal: 1927
        void columnMoved(int, int, int);

    // RVA: 0x78A | Ordinal: 1931
        void columnResized(int, int, int);

    // RVA: 0x78D | Ordinal: 1934
        void columnSpan(int, int) const;

    // RVA: 0x790 | Ordinal: 1937
        void columnViewportPosition(int) const;

    // RVA: 0x792 | Ordinal: 1939
        void columnWidth(int) const;

    // RVA: 0x838 | Ordinal: 2105
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x9B1 | Ordinal: 2482
        void d_func(void);

    // RVA: 0x9B2 | Ordinal: 2483
        void d_func(void) const;

    // RVA: 0xA33 | Ordinal: 2612
        void doItemsLayout(void);

    // RVA: 0xCCE | Ordinal: 3279
        void gridStyle(void) const;

    // RVA: 0xD25 | Ordinal: 3366
        void hideColumn(int);

    // RVA: 0xD35 | Ordinal: 3382
        void hideRow(int);

    // RVA: 0xD58 | Ordinal: 3417
        void horizontalHeader(void) const;

    // RVA: 0xD5E | Ordinal: 3423
        void horizontalOffset(void) const;

    // RVA: 0xD67 | Ordinal: 3432
        void horizontalScrollbarAction(int);

    // RVA: 0xDB5 | Ordinal: 3510
        void indexAt(class QPoint const &) const;

    // RVA: 0xEC0 | Ordinal: 3777
        void isColumnHidden(int) const;

    // RVA: 0xEC5 | Ordinal: 3782
        void isCornerButtonEnabled(void) const;

    // RVA: 0xEFA | Ordinal: 3835
        void isIndexHidden(class QModelIndex const &) const;

    // RVA: 0xF3C | Ordinal: 3901
        void isRowHidden(int) const;

    // RVA: 0xF4F | Ordinal: 3920
        void isSortingEnabled(void) const;

    // RVA: 0x1186 | Ordinal: 4487
        void metaObject(void) const;

    // RVA: 0x127B | Ordinal: 4732
        void moveCursor(enum QAbstractItemView::CursorAction, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x1344 | Ordinal: 4933
        void paintEvent(class QPaintEvent *);

    // RVA: 0x149F | Ordinal: 5280
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1532 | Ordinal: 5427
        void qt_metacast(char const *);

    // RVA: 0x15C8 | Ordinal: 5577
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x168F | Ordinal: 5776
        void resizeColumnToContents(int);

    // RVA: 0x1691 | Ordinal: 5778
        void resizeColumnsToContents(void);

    // RVA: 0x16B9 | Ordinal: 5818
        void resizeRowToContents(int);

    // RVA: 0x16BA | Ordinal: 5819
        void resizeRowsToContents(void);

    // RVA: 0x16F4 | Ordinal: 5877
        void rowAt(int) const;

    // RVA: 0x16FC | Ordinal: 5885
        void rowCountChanged(int, int);

    // RVA: 0x16FD | Ordinal: 5886
        void rowHeight(int) const;

    // RVA: 0x1702 | Ordinal: 5891
        void rowMoved(int, int, int);

    // RVA: 0x1704 | Ordinal: 5893
        void rowResized(int, int, int);

    // RVA: 0x1706 | Ordinal: 5895
        void rowSpan(int, int) const;

    // RVA: 0x1709 | Ordinal: 5898
        void rowViewportPosition(int) const;

    // RVA: 0x175D | Ordinal: 5982
        void scrollContentsBy(int, int);

    // RVA: 0x1769 | Ordinal: 5994
        void scrollTo(class QModelIndex const &, enum QAbstractItemView::ScrollHint);

    // RVA: 0x179B | Ordinal: 6044
        void selectColumn(int);

    // RVA: 0x17A3 | Ordinal: 6052
        void selectRow(int);

    // RVA: 0x17AE | Ordinal: 6063
        void selectedIndexes(void) const;

    // RVA: 0x17C7 | Ordinal: 6088
        void selectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0x1888 | Ordinal: 6281
        void setColumnHidden(int, bool);

    // RVA: 0x1891 | Ordinal: 6290
        void setColumnWidth(int, int);

    // RVA: 0x18AD | Ordinal: 6318
        void setCornerButtonEnabled(bool);

    // RVA: 0x19DA | Ordinal: 6619
        void setGridStyle(enum Qt::PenStyle);

    // RVA: 0x19F0 | Ordinal: 6641
        void setHorizontalHeader(class QHeaderView *);

    // RVA: 0x1ACA | Ordinal: 6859
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B9E | Ordinal: 7071
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1BA9 | Ordinal: 7082
        void setRowHeight(int, int);

    // RVA: 0x1BAB | Ordinal: 7084
        void setRowHidden(int, bool);

    // RVA: 0x1BE3 | Ordinal: 7140
        void setSelection(class QRect const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1BF0 | Ordinal: 7153
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1C05 | Ordinal: 7174
        void setShowGrid(bool);

    // RVA: 0x1C28 | Ordinal: 7209
        void setSortingEnabled(bool);

    // RVA: 0x1C38 | Ordinal: 7225
        void setSpan(int, int, int, int);

    // RVA: 0x1CFE | Ordinal: 7423
        void setVerticalHeader(class QHeaderView *);

    // RVA: 0x1D5E | Ordinal: 7519
        void setWordWrap(bool);

    // RVA: 0x1D93 | Ordinal: 7572
        void showColumn(int);

    // RVA: 0x1DAC | Ordinal: 7597
        void showGrid(void) const;

    // RVA: 0x1DBD | Ordinal: 7614
        void showRow(int);

    // RVA: 0x1E1C | Ordinal: 7709
        void sizeHintForColumn(int) const;

    // RVA: 0x1E20 | Ordinal: 7713
        void sizeHintForRow(int) const;

    // RVA: 0x1E35 | Ordinal: 7734
        void sortByColumn(int);

    // RVA: 0x1E36 | Ordinal: 7735
        void sortByColumn(int, enum Qt::SortOrder);

    // RVA: 0x2029 | Ordinal: 8234
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20EE | Ordinal: 8431
        void tr(char const *, char const *, int);

    // RVA: 0x2181 | Ordinal: 8578
        void trUtf8(char const *, char const *, int);

    // RVA: 0x222C | Ordinal: 8749
        void updateGeometries(void);

    // RVA: 0x227C | Ordinal: 8829
        void verticalHeader(void) const;

    // RVA: 0x2282 | Ordinal: 8835
        void verticalOffset(void) const;

    // RVA: 0x228B | Ordinal: 8844
        void verticalScrollbarAction(int);

    // RVA: 0x22A0 | Ordinal: 8865
        void viewOptions(void) const;

    // RVA: 0x22AF | Ordinal: 8880
        void viewportSizeHint(void) const;

    // RVA: 0x22BF | Ordinal: 8896
        void visualIndex(class QModelIndex const &) const;

    // RVA: 0x22CA | Ordinal: 8907
        void visualRect(class QModelIndex const &) const;

    // RVA: 0x22CF | Ordinal: 8912
        void visualRegionForSelection(class QItemSelection const &) const;

    // RVA: 0x2337 | Ordinal: 9016
        void wordWrap(void) const;

    // RVA: 0x277 | Ordinal: 632
        void _QTableView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABLEVIEW_HPP
