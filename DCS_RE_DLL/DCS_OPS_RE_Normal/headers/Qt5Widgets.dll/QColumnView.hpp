#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QColumnView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColumnView
{
public:

    // RVA: 0x22 | Ordinal: 35
        void QColumnView(class QColumnViewPrivate &, class QWidget *);

    // RVA: 0x23 | Ordinal: 36
        void QColumnView(class QWidget *);

    // RVA: 0x794 | Ordinal: 1941
        void columnWidths(void) const;

    // RVA: 0x804 | Ordinal: 2053
        void createColumn(class QModelIndex const &);

    // RVA: 0x830 | Ordinal: 2097
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x8C3 | Ordinal: 2244
        void d_func(void);

    // RVA: 0x8C4 | Ordinal: 2245
        void d_func(void) const;

    // RVA: 0xD5B | Ordinal: 3420
        void horizontalOffset(void) const;

    // RVA: 0xDB2 | Ordinal: 3507
        void indexAt(class QPoint const &) const;

    // RVA: 0xDFF | Ordinal: 3584
        void initializeColumn(class QAbstractItemView *) const;

    // RVA: 0xEF7 | Ordinal: 3832
        void isIndexHidden(class QModelIndex const &) const;

    // RVA: 0x111B | Ordinal: 4380
        void metaObject(void) const;

    // RVA: 0x1277 | Ordinal: 4728
        void moveCursor(enum QAbstractItemView::CursorAction, class QFlags<enum Qt::KeyboardModifier>);

    // RVA: 0x13CD | Ordinal: 5070
        void previewWidget(void) const;

    // RVA: 0x1434 | Ordinal: 5173
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x14C7 | Ordinal: 5320
        void qt_metacast(char const *);

    // RVA: 0x155D | Ordinal: 5470
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1699 | Ordinal: 5786
        void resizeEvent(class QResizeEvent *);

    // RVA: 0x16B6 | Ordinal: 5815
        void resizeGripsVisible(void) const;

    // RVA: 0x1710 | Ordinal: 5905
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x1756 | Ordinal: 5975
        void scrollContentsBy(int, int);

    // RVA: 0x1764 | Ordinal: 5989
        void scrollTo(class QModelIndex const &, enum QAbstractItemView::ScrollHint);

    // RVA: 0x1794 | Ordinal: 6037
        void selectAll(void);

    // RVA: 0x1893 | Ordinal: 6292
        void setColumnWidths(class QList<int> const &);

    // RVA: 0x1AC4 | Ordinal: 6853
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B70 | Ordinal: 7025
        void setPreviewWidget(class QWidget *);

    // RVA: 0x1B90 | Ordinal: 7057
        void setResizeGripsVisible(bool);

    // RVA: 0x1B9A | Ordinal: 7067
        void setRootIndex(class QModelIndex const &);

    // RVA: 0x1BDE | Ordinal: 7135
        void setSelection(class QRect const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1BEE | Ordinal: 7151
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1DE8 | Ordinal: 7657
        void sizeHint(void) const;

    // RVA: 0x2083 | Ordinal: 8324
        void tr(char const *, char const *, int);

    // RVA: 0x2116 | Ordinal: 8471
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2243 | Ordinal: 8772
        void updatePreviewWidget(class QModelIndex const &);

    // RVA: 0x227F | Ordinal: 8832
        void verticalOffset(void) const;

    // RVA: 0x22C6 | Ordinal: 8903
        void visualRect(class QModelIndex const &) const;

    // RVA: 0x22CC | Ordinal: 8909
        void visualRegionForSelection(class QItemSelection const &) const;

    // RVA: 0x1C5 | Ordinal: 454
        void _QColumnView(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QCOLUMNVIEW_HPP
