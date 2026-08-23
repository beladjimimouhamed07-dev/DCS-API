#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QTableWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTableWidget
{
public:

    // RVA: 0x171 | Ordinal: 370
        void QTableWidget(int, int, class QWidget *);

    // RVA: 0x172 | Ordinal: 371
        void QTableWidget(class QWidget *);

    // RVA: 0x69D | Ordinal: 1694
        void cellActivated(int, int);

    // RVA: 0x69E | Ordinal: 1695
        void cellChanged(int, int);

    // RVA: 0x69F | Ordinal: 1696
        void cellClicked(int, int);

    // RVA: 0x6A0 | Ordinal: 1697
        void cellDoubleClicked(int, int);

    // RVA: 0x6A1 | Ordinal: 1698
        void cellEntered(int, int);

    // RVA: 0x6A2 | Ordinal: 1699
        void cellPressed(int, int);

    // RVA: 0x6A4 | Ordinal: 1701
        void cellWidget(int, int) const;

    // RVA: 0x719 | Ordinal: 1818
        void clear(void);

    // RVA: 0x720 | Ordinal: 1825
        void clearContents(void);

    // RVA: 0x758 | Ordinal: 1881
        void closePersistentEditor(class QTableWidgetItem *);

    // RVA: 0x772 | Ordinal: 1907
        void column(class QTableWidgetItem const *) const;

    // RVA: 0x77D | Ordinal: 1918
        void columnCount(void) const;

    // RVA: 0x82E | Ordinal: 2095
        void currentCellChanged(int, int, int, int);

    // RVA: 0x842 | Ordinal: 2115
        void currentColumn(void) const;

    // RVA: 0x85B | Ordinal: 2140
        void currentItem(void) const;

    // RVA: 0x85E | Ordinal: 2143
        void currentItemChanged(class QTableWidgetItem *, class QTableWidgetItem *);

    // RVA: 0x865 | Ordinal: 2150
        void currentRow(void) const;

    // RVA: 0x9B3 | Ordinal: 2484
        void d_func(void);

    // RVA: 0x9B4 | Ordinal: 2485
        void d_func(void) const;

    // RVA: 0xADB | Ordinal: 2780
        void dropEvent(class QDropEvent *);

    // RVA: 0xAE3 | Ordinal: 2788
        void dropMimeData(int, int, class QMimeData const *, enum Qt::DropAction);

    // RVA: 0xAED | Ordinal: 2798
        void editItem(class QTableWidgetItem *);

    // RVA: 0xB69 | Ordinal: 2922
        void event(class QEvent *);

    // RVA: 0xBE1 | Ordinal: 3042
        void findItems(class QString const &, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0xD5A | Ordinal: 3419
        void horizontalHeaderItem(int) const;

    // RVA: 0xDBD | Ordinal: 3518
        void indexFromItem(class QTableWidgetItem *) const;

    // RVA: 0xDBE | Ordinal: 3519
        void indexFromItem(class QTableWidgetItem const *) const;

    // RVA: 0xE35 | Ordinal: 3638
        void insertColumn(int);

    // RVA: 0xE53 | Ordinal: 3668
        void insertRow(int);

    // RVA: 0xF05 | Ordinal: 3846
        void isItemSelected(class QTableWidgetItem const *) const;

    // RVA: 0xF2A | Ordinal: 3883
        void isPersistentEditorOpen(class QTableWidgetItem *) const;

    // RVA: 0xF50 | Ordinal: 3921
        void isSortingEnabled(void) const;

    // RVA: 0xF7C | Ordinal: 3965
        void item(int, int) const;

    // RVA: 0xF7F | Ordinal: 3968
        void itemActivated(class QTableWidgetItem *);

    // RVA: 0xF94 | Ordinal: 3989
        void itemAt(class QPoint const &) const;

    // RVA: 0xF95 | Ordinal: 3990
        void itemAt(int, int) const;

    // RVA: 0xF9F | Ordinal: 4000
        void itemChanged(class QTableWidgetItem *);

    // RVA: 0xFA3 | Ordinal: 4004
        void itemClicked(class QTableWidgetItem *);

    // RVA: 0xFB1 | Ordinal: 4018
        void itemDoubleClicked(class QTableWidgetItem *);

    // RVA: 0xFB6 | Ordinal: 4023
        void itemEntered(class QTableWidgetItem *);

    // RVA: 0xFBD | Ordinal: 4030
        void itemFromIndex(class QModelIndex const &) const;

    // RVA: 0xFC9 | Ordinal: 4042
        void itemPressed(class QTableWidgetItem *);

    // RVA: 0xFCB | Ordinal: 4044
        void itemPrototype(void) const;

    // RVA: 0xFCF | Ordinal: 4048
        void itemSelectionChanged(void);

    // RVA: 0xFEC | Ordinal: 4077
        void items(class QMimeData const *) const;

    // RVA: 0x1187 | Ordinal: 4488
        void metaObject(void) const;

    // RVA: 0x11A7 | Ordinal: 4520
        void mimeData(class QList<class QTableWidgetItem *>) const;

    // RVA: 0x11AD | Ordinal: 4526
        void mimeTypes(void) const;

    // RVA: 0x12E3 | Ordinal: 4836
        void openPersistentEditor(class QTableWidgetItem *);

    // RVA: 0x14A0 | Ordinal: 5281
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1533 | Ordinal: 5428
        void qt_metacast(char const *);

    // RVA: 0x15C9 | Ordinal: 5578
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x162E | Ordinal: 5679
        void removeCellWidget(int, int);

    // RVA: 0x1631 | Ordinal: 5682
        void removeColumn(int);

    // RVA: 0x1644 | Ordinal: 5701
        void removeRow(int);

    // RVA: 0x16F1 | Ordinal: 5874
        void row(class QTableWidgetItem const *) const;

    // RVA: 0x16FA | Ordinal: 5883
        void rowCount(void) const;

    // RVA: 0x176E | Ordinal: 5999
        void scrollToItem(class QTableWidgetItem const *, enum QAbstractItemView::ScrollHint);

    // RVA: 0x17B2 | Ordinal: 6067
        void selectedItems(void) const;

    // RVA: 0x17B9 | Ordinal: 6074
        void selectedRanges(void) const;

    // RVA: 0x1865 | Ordinal: 6246
        void setCellWidget(int, int, class QWidget *);

    // RVA: 0x1885 | Ordinal: 6278
        void setColumnCount(int);

    // RVA: 0x18B2 | Ordinal: 6323
        void setCurrentCell(int, int);

    // RVA: 0x18B3 | Ordinal: 6324
        void setCurrentCell(int, int, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x18C5 | Ordinal: 6342
        void setCurrentItem(class QTableWidgetItem *);

    // RVA: 0x18C6 | Ordinal: 6343
        void setCurrentItem(class QTableWidgetItem *, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x19F2 | Ordinal: 6643
        void setHorizontalHeaderItem(int, class QTableWidgetItem *);

    // RVA: 0x19F3 | Ordinal: 6644
        void setHorizontalHeaderLabels(class QStringList const &);

    // RVA: 0x1A32 | Ordinal: 6707
        void setItem(int, int, class QTableWidgetItem *);

    // RVA: 0x1A44 | Ordinal: 6725
        void setItemPrototype(class QTableWidgetItem const *);

    // RVA: 0x1A46 | Ordinal: 6727
        void setItemSelected(class QTableWidgetItem const *, bool);

    // RVA: 0x1ACB | Ordinal: 6860
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1B7B | Ordinal: 7036
        void setRangeSelected(class QTableWidgetSelectionRange const &, bool);

    // RVA: 0x1BA7 | Ordinal: 7080
        void setRowCount(int);

    // RVA: 0x1C29 | Ordinal: 7210
        void setSortingEnabled(bool);

    // RVA: 0x1D00 | Ordinal: 7425
        void setVerticalHeaderItem(int, class QTableWidgetItem *);

    // RVA: 0x1D01 | Ordinal: 7426
        void setVerticalHeaderLabels(class QStringList const &);

    // RVA: 0x1E40 | Ordinal: 7745
        void sortItems(int, enum Qt::SortOrder);

    // RVA: 0x1F67 | Ordinal: 8040
        void supportedDropActions(void) const;

    // RVA: 0x1FB9 | Ordinal: 8122
        void takeHorizontalHeaderItem(int);

    // RVA: 0x1FBB | Ordinal: 8124
        void takeItem(int, int);

    // RVA: 0x1FC1 | Ordinal: 8130
        void takeVerticalHeaderItem(int);

    // RVA: 0x20EF | Ordinal: 8432
        void tr(char const *, char const *, int);

    // RVA: 0x2182 | Ordinal: 8579
        void trUtf8(char const *, char const *, int);

    // RVA: 0x227E | Ordinal: 8831
        void verticalHeaderItem(int) const;

    // RVA: 0x22BC | Ordinal: 8893
        void visualColumn(int) const;

    // RVA: 0x22C3 | Ordinal: 8900
        void visualItemRect(class QTableWidgetItem const *) const;

    // RVA: 0x22D1 | Ordinal: 8914
        void visualRow(int) const;

    // RVA: 0x278 | Ordinal: 633
        void _QTableWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QTABLEWIDGET_HPP
