#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTreeWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTreeWidget
{
public:

    // RVA: 0x189 | Ordinal: 394
        void QTreeWidget(class QWidget *);

    // RVA: 0x59D | Ordinal: 1438
        void addTopLevelItem(class QTreeWidgetItem *);

    // RVA: 0x59E | Ordinal: 1439
        void addTopLevelItems(class QList<class QTreeWidgetItem *> const &);

    // RVA: 0x71C | Ordinal: 1821
        void clear(void);

    // RVA: 0x759 | Ordinal: 1882
        void closePersistentEditor(class QTreeWidgetItem *, int);

    // RVA: 0x762 | Ordinal: 1891
        void collapseItem(class QTreeWidgetItem const *);

    // RVA: 0x77F | Ordinal: 1920
        void columnCount(void) const;

    // RVA: 0x843 | Ordinal: 2116
        void currentColumn(void) const;

    // RVA: 0x85C | Ordinal: 2141
        void currentItem(void) const;

    // RVA: 0x85F | Ordinal: 2144
        void currentItemChanged(class QTreeWidgetItem *, class QTreeWidgetItem *);

    // RVA: 0x9C5 | Ordinal: 2502
        void d_func(void);

    // RVA: 0x9C6 | Ordinal: 2503
        void d_func(void) const;

    // RVA: 0xADD | Ordinal: 2782
        void dropEvent(class QDropEvent *);

    // RVA: 0xAE4 | Ordinal: 2789
        void dropMimeData(class QTreeWidgetItem *, int, class QMimeData const *, enum Qt::DropAction);

    // RVA: 0xAEE | Ordinal: 2799
        void editItem(class QTreeWidgetItem *, int);

    // RVA: 0xB6F | Ordinal: 2928
        void event(class QEvent *);

    // RVA: 0xB98 | Ordinal: 2969
        void expandItem(class QTreeWidgetItem const *);

    // RVA: 0xBE2 | Ordinal: 3043
        void findItems(class QString const &, class QFlags<enum Qt::MatchFlag>, int) const;

    // RVA: 0xD03 | Ordinal: 3332
        void headerItem(void) const;

    // RVA: 0xDBF | Ordinal: 3520
        void indexFromItem(class QTreeWidgetItem *, int) const;

    // RVA: 0xDC0 | Ordinal: 3521
        void indexFromItem(class QTreeWidgetItem const *, int) const;

    // RVA: 0xDC9 | Ordinal: 3530
        void indexOfTopLevelItem(class QTreeWidgetItem *) const;

    // RVA: 0xE64 | Ordinal: 3685
        void insertTopLevelItem(int, class QTreeWidgetItem *);

    // RVA: 0xE65 | Ordinal: 3686
        void insertTopLevelItems(int, class QList<class QTreeWidgetItem *> const &);

    // RVA: 0xE9B | Ordinal: 3740
        void invisibleRootItem(void) const;

    // RVA: 0xEE5 | Ordinal: 3814
        void isFirstItemColumnSpanned(class QTreeWidgetItem const *) const;

    // RVA: 0xF00 | Ordinal: 3841
        void isItemExpanded(class QTreeWidgetItem const *) const;

    // RVA: 0xF02 | Ordinal: 3843
        void isItemHidden(class QTreeWidgetItem const *) const;

    // RVA: 0xF06 | Ordinal: 3847
        void isItemSelected(class QTreeWidgetItem const *) const;

    // RVA: 0xF2B | Ordinal: 3884
        void isPersistentEditorOpen(class QTreeWidgetItem *, int) const;

    // RVA: 0xF7D | Ordinal: 3966
        void itemAbove(class QTreeWidgetItem const *) const;

    // RVA: 0xF80 | Ordinal: 3969
        void itemActivated(class QTreeWidgetItem *, int);

    // RVA: 0xF96 | Ordinal: 3991
        void itemAt(class QPoint const &) const;

    // RVA: 0xF97 | Ordinal: 3992
        void itemAt(int, int) const;

    // RVA: 0xF9A | Ordinal: 3995
        void itemBelow(class QTreeWidgetItem const *) const;

    // RVA: 0xFA0 | Ordinal: 4001
        void itemChanged(class QTreeWidgetItem *, int);

    // RVA: 0xFA4 | Ordinal: 4005
        void itemClicked(class QTreeWidgetItem *, int);

    // RVA: 0xFA5 | Ordinal: 4006
        void itemCollapsed(class QTreeWidgetItem *);

    // RVA: 0xFB2 | Ordinal: 4019
        void itemDoubleClicked(class QTreeWidgetItem *, int);

    // RVA: 0xFB7 | Ordinal: 4024
        void itemEntered(class QTreeWidgetItem *, int);

    // RVA: 0xFB8 | Ordinal: 4025
        void itemExpanded(class QTreeWidgetItem *);

    // RVA: 0xFBE | Ordinal: 4031
        void itemFromIndex(class QModelIndex const &) const;

    // RVA: 0xFCA | Ordinal: 4043
        void itemPressed(class QTreeWidgetItem *, int);

    // RVA: 0xFD0 | Ordinal: 4049
        void itemSelectionChanged(void);

    // RVA: 0xFDC | Ordinal: 4061
        void itemWidget(class QTreeWidgetItem *, int) const;

    // RVA: 0xFED | Ordinal: 4078
        void items(class QMimeData const *) const;

    // RVA: 0x1191 | Ordinal: 4498
        void metaObject(void) const;

    // RVA: 0x11A8 | Ordinal: 4521
        void mimeData(class QList<class QTreeWidgetItem *>) const;

    // RVA: 0x11AE | Ordinal: 4527
        void mimeTypes(void) const;

    // RVA: 0x12E4 | Ordinal: 4837
        void openPersistentEditor(class QTreeWidgetItem *, int);

    // RVA: 0x14AA | Ordinal: 5291
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x153D | Ordinal: 5438
        void qt_metacast(char const *);

    // RVA: 0x15D3 | Ordinal: 5588
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163E | Ordinal: 5695
        void removeItemWidget(class QTreeWidgetItem *, int);

    // RVA: 0x176F | Ordinal: 6000
        void scrollToItem(class QTreeWidgetItem const *, enum QAbstractItemView::ScrollHint);

    // RVA: 0x17B3 | Ordinal: 6068
        void selectedItems(void) const;

    // RVA: 0x1886 | Ordinal: 6279
        void setColumnCount(int);

    // RVA: 0x18C7 | Ordinal: 6344
        void setCurrentItem(class QTreeWidgetItem *);

    // RVA: 0x18C8 | Ordinal: 6345
        void setCurrentItem(class QTreeWidgetItem *, int);

    // RVA: 0x18C9 | Ordinal: 6346
        void setCurrentItem(class QTreeWidgetItem *, int, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1978 | Ordinal: 6521
        void setFirstItemColumnSpanned(class QTreeWidgetItem const *, bool);

    // RVA: 0x19E3 | Ordinal: 6628
        void setHeaderItem(class QTreeWidgetItem *);

    // RVA: 0x19E4 | Ordinal: 6629
        void setHeaderLabel(class QString const &);

    // RVA: 0x19E5 | Ordinal: 6630
        void setHeaderLabels(class QStringList const &);

    // RVA: 0x1A3E | Ordinal: 6719
        void setItemExpanded(class QTreeWidgetItem const *, bool);

    // RVA: 0x1A40 | Ordinal: 6721
        void setItemHidden(class QTreeWidgetItem const *, bool);

    // RVA: 0x1A47 | Ordinal: 6728
        void setItemSelected(class QTreeWidgetItem const *, bool);

    // RVA: 0x1A4E | Ordinal: 6735
        void setItemWidget(class QTreeWidgetItem *, int, class QWidget *);

    // RVA: 0x1ACD | Ordinal: 6862
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1BF2 | Ordinal: 7155
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1E3B | Ordinal: 7740
        void sortColumn(void) const;

    // RVA: 0x1E41 | Ordinal: 7746
        void sortItems(int, enum Qt::SortOrder);

    // RVA: 0x1F68 | Ordinal: 8041
        void supportedDropActions(void) const;

    // RVA: 0x1FC0 | Ordinal: 8129
        void takeTopLevelItem(int);

    // RVA: 0x2065 | Ordinal: 8294
        void topLevelItem(int) const;

    // RVA: 0x2066 | Ordinal: 8295
        void topLevelItemCount(void) const;

    // RVA: 0x20F9 | Ordinal: 8442
        void tr(char const *, char const *, int);

    // RVA: 0x218C | Ordinal: 8589
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22C4 | Ordinal: 8901
        void visualItemRect(class QTreeWidgetItem const *) const;

    // RVA: 0x285 | Ordinal: 646
        void _QTreeWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTREEWIDGET_HPP
