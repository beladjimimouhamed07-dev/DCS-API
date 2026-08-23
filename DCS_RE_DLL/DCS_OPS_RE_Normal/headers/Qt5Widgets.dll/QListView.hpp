#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QListView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QListView
{
public:

    // RVA: 0xC7 | Ordinal: 200
        void QListView(class QListViewPrivate &, class QWidget *);

    // RVA: 0xC8 | Ordinal: 201
        void QListView(class QWidget *);

    // RVA: 0x625 | Ordinal: 1574
        void batchSize(void) const;

    // RVA: 0x731 | Ordinal: 1842
        void clearPropertyFlags(void);

    // RVA: 0x7C3 | Ordinal: 1988
        void contentsSize(void) const;

    // RVA: 0x833 | Ordinal: 2100
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x957 | Ordinal: 2392
        void d_func(void);

    // RVA: 0x958 | Ordinal: 2393
        void d_func(void) const;

    // RVA: 0x9E6 | Ordinal: 2535
        void dataChanged(class QModelIndex const &, class QModelIndex const &, class QVector<int> const &);

    // RVA: 0xA32 | Ordinal: 2611
        void doItemsLayout(void);

    // RVA: 0xA78 | Ordinal: 2681
        void dragLeaveEvent(class QDragLeaveEvent *);

    // RVA: 0xA85 | Ordinal: 2694
        void dragMoveEvent(class QDragMoveEvent *);

    // RVA: 0xAD8 | Ordinal: 2777
        void dropEvent(class QDropEvent *);

    // RVA: 0xB4C | Ordinal: 2893
        void event(class QEvent *);

    // RVA: 0xBFD | Ordinal: 3070
        void flow(void) const;

    // RVA: 0xCCD | Ordinal: 3278
        void gridSize(void) const;

    // RVA: 0xD5D | Ordinal: 3422
        void horizontalOffset(void) const;

    // RVA: 0xDB4 | Ordinal: 3509
        void indexAt(class QPoint const &) const;

    // RVA: 0xDCC | Ordinal: 3533
        void indexesMoved(class QList<class QModelIndex> const &);

    // RVA: 0xEF9 | Ordinal: 3834
        void isIndexHidden(class QModelIndex const &) const;

    // RVA: 0xF3B | Ordinal: 3900
        void isRowHidden(int) const;

    // RVA: 0xF44 | Ordinal: 3909
        void isSelectionRectVisible(void) const;

    // RVA: 0xF79 | Ordinal: 3962
        void isWrapping(void) const;

    // RVA: 0xF81 | Ordinal: 3970
        void itemAlignment(void) const;

    // RVA: 0x1048 | Ordinal: 4169
        void layoutMode(void) const;

    // RVA: 0x1154 | Ordinal: 4437
        void metaObject(void) const;

    // RVA: 0x11F3 | Ordinal: 4596
        void modelColumn(void) const;

    // RVA: 0x121F | Ordinal: 4640
        void mouseMoveEvent(class QMouseEvent *);

    // RVA: 0x1261 | Ordinal: 4706
        void mouseReleaseEvent(class QMouseEvent *);

    // RVA: 0x1279 | Ordinal: 4730
        void moveCursor(enum QAbstractItemView::CursorAction, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x128C | Ordinal: 4749
        void movement(void) const;

    // RVA: 0x1332 | Ordinal: 4915
        void paintEvent(class QPaintEvent *);

    // RVA: 0x146D | Ordinal: 5230
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1500 | Ordinal: 5377
        void qt_metacast(char const *);

    // RVA: 0x1596 | Ordinal: 5527
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x15F8 | Ordinal: 5625
        void rectForIndex(class QModelIndex const &) const;

    // RVA: 0x166E | Ordinal: 5743
        void reset(void);

    // RVA: 0x1692 | Ordinal: 5779
        void resizeContents(int, int);

    // RVA: 0x16A3 | Ordinal: 5796
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16B8 | Ordinal: 5817
        void resizeMode(void) const;

    // RVA: 0x170D | Ordinal: 5902
        void rowsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x1712 | Ordinal: 5907
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x1759 | Ordinal: 5978
        void scrollContentsBy(int, int);

    // RVA: 0x1766 | Ordinal: 5991
        void scrollTo(class QModelIndex const &, enum QAbstractItemView::ScrollHint);

    // RVA: 0x17AD | Ordinal: 6062
        void selectedIndexes(void) const;

    // RVA: 0x17C5 | Ordinal: 6086
        void selectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0x183F | Ordinal: 6208
        void setBatchSize(int);

    // RVA: 0x1988 | Ordinal: 6537
        void setFlow(enum QListView::Flow);

    // RVA: 0x19D9 | Ordinal: 6618
        void setGridSize(class QSize const &);

    // RVA: 0x1A33 | Ordinal: 6708
        void setItemAlignment(class QFlags<enum Qt::AlignmentFlag>);

    // RVA: 0x1A71 | Ordinal: 6770
        void setLayoutMode(enum QListView::LayoutMode);

    // RVA: 0x1ACF | Ordinal: 6864
        void setModelColumn(int);

    // RVA: 0x1AE3 | Ordinal: 6884
        void setMovement(enum QListView::Movement);

    // RVA: 0x1B67 | Ordinal: 7016
        void setPositionForIndex(class QPoint const &, class QModelIndex const &);

    // RVA: 0x1B93 | Ordinal: 7060
        void setResizeMode(enum QListView::ResizeMode);

    // RVA: 0x1B9D | Ordinal: 7070
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1BAA | Ordinal: 7083
        void setRowHidden(int, bool);

    // RVA: 0x1BE2 | Ordinal: 7139
        void setSelection(class QRect const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1BF3 | Ordinal: 7156
        void setSelectionRectVisible(bool);

    // RVA: 0x1C37 | Ordinal: 7224
        void setSpacing(int);

    // RVA: 0x1CED | Ordinal: 7406
        void setUniformItemSizes(bool);

    // RVA: 0x1D0F | Ordinal: 7440
        void setViewMode(enum QListView::ViewMode);

    // RVA: 0x1D5D | Ordinal: 7518
        void setWordWrap(bool);

    // RVA: 0x1D65 | Ordinal: 7526
        void setWrapping(bool);

    // RVA: 0x1E58 | Ordinal: 7769
        void spacing(void) const;

    // RVA: 0x1E80 | Ordinal: 7809
        void startDrag(class QFlags<enum Qt::DropAction>);

    // RVA: 0x2022 | Ordinal: 8227
        void timerEvent(class QTimerEvent *);

    // RVA: 0x20BC | Ordinal: 8381
        void tr(char const *, char const *, int);

    // RVA: 0x214F | Ordinal: 8528
        void trUtf8(char const *, char const *, int);

    // RVA: 0x21E6 | Ordinal: 8679
        void uniformItemSizes(void) const;

    // RVA: 0x222B | Ordinal: 8748
        void updateGeometries(void);

    // RVA: 0x2281 | Ordinal: 8834
        void verticalOffset(void) const;

    // RVA: 0x229C | Ordinal: 8861
        void viewMode(void) const;

    // RVA: 0x229F | Ordinal: 8864
        void viewOptions(void) const;

    // RVA: 0x22AD | Ordinal: 8878
        void viewportSizeHint(void) const;

    // RVA: 0x22BE | Ordinal: 8895
        void visualIndex(class QModelIndex const &) const;

    // RVA: 0x22C8 | Ordinal: 8905
        void visualRect(class QModelIndex const &) const;

    // RVA: 0x22CE | Ordinal: 8911
        void visualRegionForSelection(class QItemSelection const &) const;

    // RVA: 0x22E8 | Ordinal: 8937
        void wheelEvent(class QWheelEvent *);

    // RVA: 0x2336 | Ordinal: 9015
        void wordWrap(void) const;

    // RVA: 0x225 | Ordinal: 550
        void _QListView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLISTVIEW_HPP
