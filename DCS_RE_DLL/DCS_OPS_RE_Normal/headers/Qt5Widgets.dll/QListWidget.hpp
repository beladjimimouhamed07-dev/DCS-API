#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Widgets.dll
// Class: QListWidget
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QListWidget
{
public:

    // RVA: 0xC9 | Ordinal: 202
        void QListWidget(class QWidget *);

    // RVA: 0x562 | Ordinal: 1379
        void addItem(class QString const &);

    // RVA: 0x563 | Ordinal: 1380
        void addItem(class QListWidgetItem *);

    // RVA: 0x568 | Ordinal: 1385
        void addItems(class QStringList const &);

    // RVA: 0x714 | Ordinal: 1813
        void clear(void);

    // RVA: 0x757 | Ordinal: 1880
        void closePersistentEditor(class QListWidgetItem *);

    // RVA: 0x7F7 | Ordinal: 2040
        void count(void) const;

    // RVA: 0x85A | Ordinal: 2139
        void currentItem(void) const;

    // RVA: 0x85D | Ordinal: 2142
        void currentItemChanged(class QListWidgetItem *, class QListWidgetItem *);

    // RVA: 0x864 | Ordinal: 2149
        void currentRow(void) const;

    // RVA: 0x866 | Ordinal: 2151
        void currentRowChanged(int);

    // RVA: 0x86C | Ordinal: 2157
        void currentTextChanged(class QString const &);

    // RVA: 0x959 | Ordinal: 2394
        void d_func(void);

    // RVA: 0x95A | Ordinal: 2395
        void d_func(void) const;

    // RVA: 0xAD9 | Ordinal: 2778
        void dropEvent(class QDropEvent *);

    // RVA: 0xAE2 | Ordinal: 2787
        void dropMimeData(int, class QMimeData const *, enum Qt::DropAction);

    // RVA: 0xAEC | Ordinal: 2797
        void editItem(class QListWidgetItem *);

    // RVA: 0xB4D | Ordinal: 2894
        void event(class QEvent *);

    // RVA: 0xBE0 | Ordinal: 3041
        void findItems(class QString const &, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0xDBB | Ordinal: 3516
        void indexFromItem(class QListWidgetItem *) const;

    // RVA: 0xDBC | Ordinal: 3517
        void indexFromItem(class QListWidgetItem const *) const;

    // RVA: 0xE3F | Ordinal: 3648
        void insertItem(int, class QString const &);

    // RVA: 0xE40 | Ordinal: 3649
        void insertItem(int, class QListWidgetItem *);

    // RVA: 0xE44 | Ordinal: 3653
        void insertItems(int, class QStringList const &);

    // RVA: 0xF01 | Ordinal: 3842
        void isItemHidden(class QListWidgetItem const *) const;

    // RVA: 0xF04 | Ordinal: 3845
        void isItemSelected(class QListWidgetItem const *) const;

    // RVA: 0xF29 | Ordinal: 3882
        void isPersistentEditorOpen(class QListWidgetItem *) const;

    // RVA: 0xF4E | Ordinal: 3919
        void isSortingEnabled(void) const;

    // RVA: 0xF7B | Ordinal: 3964
        void item(int) const;

    // RVA: 0xF7E | Ordinal: 3967
        void itemActivated(class QListWidgetItem *);

    // RVA: 0xF91 | Ordinal: 3986
        void itemAt(class QPoint const &) const;

    // RVA: 0xF92 | Ordinal: 3987
        void itemAt(int, int) const;

    // RVA: 0xF9E | Ordinal: 3999
        void itemChanged(class QListWidgetItem *);

    // RVA: 0xFA2 | Ordinal: 4003
        void itemClicked(class QListWidgetItem *);

    // RVA: 0xFB0 | Ordinal: 4017
        void itemDoubleClicked(class QListWidgetItem *);

    // RVA: 0xFB5 | Ordinal: 4022
        void itemEntered(class QListWidgetItem *);

    // RVA: 0xFBC | Ordinal: 4029
        void itemFromIndex(class QModelIndex const &) const;

    // RVA: 0xFC8 | Ordinal: 4041
        void itemPressed(class QListWidgetItem *);

    // RVA: 0xFCE | Ordinal: 4047
        void itemSelectionChanged(void);

    // RVA: 0xFDB | Ordinal: 4060
        void itemWidget(class QListWidgetItem *) const;

    // RVA: 0xFEB | Ordinal: 4076
        void items(class QMimeData const *) const;

    // RVA: 0x1155 | Ordinal: 4438
        void metaObject(void) const;

    // RVA: 0x11A6 | Ordinal: 4519
        void mimeData(class QList<class QListWidgetItem *>) const;

    // RVA: 0x11AC | Ordinal: 4525
        void mimeTypes(void) const;

    // RVA: 0x12E2 | Ordinal: 4835
        void openPersistentEditor(class QListWidgetItem *);

    // RVA: 0x146E | Ordinal: 5231
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1501 | Ordinal: 5378
        void qt_metacast(char const *);

    // RVA: 0x1597 | Ordinal: 5528
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x163D | Ordinal: 5694
        void removeItemWidget(class QListWidgetItem *);

    // RVA: 0x16F0 | Ordinal: 5873
        void row(class QListWidgetItem const *) const;

    // RVA: 0x176D | Ordinal: 5998
        void scrollToItem(class QListWidgetItem const *, enum QAbstractItemView::ScrollHint);

    // RVA: 0x17B1 | Ordinal: 6066
        void selectedItems(void) const;

    // RVA: 0x18C3 | Ordinal: 6340
        void setCurrentItem(class QListWidgetItem *);

    // RVA: 0x18C4 | Ordinal: 6341
        void setCurrentItem(class QListWidgetItem *, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x18CE | Ordinal: 6351
        void setCurrentRow(int);

    // RVA: 0x18CF | Ordinal: 6352
        void setCurrentRow(int, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1A3F | Ordinal: 6720
        void setItemHidden(class QListWidgetItem const *, bool);

    // RVA: 0x1A45 | Ordinal: 6726
        void setItemSelected(class QListWidgetItem const *, bool);

    // RVA: 0x1A4D | Ordinal: 6734
        void setItemWidget(class QListWidgetItem *, class QWidget *);

    // RVA: 0x1AC9 | Ordinal: 6858
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1BEF | Ordinal: 7152
        void setSelectionModel(class QItemSelectionModel *);

    // RVA: 0x1C27 | Ordinal: 7208
        void setSortingEnabled(bool);

    // RVA: 0x1E3F | Ordinal: 7744
        void sortItems(enum Qt::SortOrder);

    // RVA: 0x1E42 | Ordinal: 7747
        void sortOrder(void) const;

    // RVA: 0x1F66 | Ordinal: 8039
        void supportedDropActions(void) const;

    // RVA: 0x1FBA | Ordinal: 8123
        void takeItem(int);

    // RVA: 0x20BD | Ordinal: 8382
        void tr(char const *, char const *, int);

    // RVA: 0x2150 | Ordinal: 8529
        void trUtf8(char const *, char const *, int);

    // RVA: 0x22C2 | Ordinal: 8899
        void visualItemRect(class QListWidgetItem const *) const;

    // RVA: 0x226 | Ordinal: 551
        void _QListWidget(void);
};

// DCS_OPS_RE_QT5WIDGETS.DLL_QLISTWIDGET_HPP
