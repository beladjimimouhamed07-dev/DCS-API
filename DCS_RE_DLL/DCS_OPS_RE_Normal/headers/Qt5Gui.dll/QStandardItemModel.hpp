#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QStandardItemModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStandardItemModel
{
public:

    // RVA: 0x30D | Ordinal: 782
        void QStandardItemModel(class QStandardItemModelPrivate &, class QObject *);

    // RVA: 0x30E | Ordinal: 783
        void QStandardItemModel(int, int, class QObject *);

    // RVA: 0x30F | Ordinal: 784
        void QStandardItemModel(class QObject *);

    // RVA: 0x9FB | Ordinal: 2556
        void appendColumn(class QList<class QStandardItem *> const &);

    // RVA: 0x9FF | Ordinal: 2560
        void appendRow(class QList<class QStandardItem *> const &);

    // RVA: 0xA00 | Ordinal: 2561
        void appendRow(class QStandardItem *);

    // RVA: 0xBA6 | Ordinal: 2983
        void clear(void);

    // RVA: 0xBB7 | Ordinal: 3000
        void clearItemData(class QModelIndex const &);

    // RVA: 0xC0C | Ordinal: 3085
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xD80 | Ordinal: 3457
        void d_func(void);

    // RVA: 0xD81 | Ordinal: 3458
        void d_func(void) const;

    // RVA: 0xDAA | Ordinal: 3499
        void data(class QModelIndex const &, int) const;

    // RVA: 0xF67 | Ordinal: 3944
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0x107B | Ordinal: 4220
        void findItems(class QString const &, class QFlags<enum Qt::MatchFlag>, int) const;

    // RVA: 0x109C | Ordinal: 4253
        void flags(class QModelIndex const &) const;

    // RVA: 0x4E58 | Ordinal: 20057
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0x4E8A | Ordinal: 20107
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0x4EB6 | Ordinal: 20151
        void horizontalHeaderItem(int) const;

    // RVA: 0x4EF9 | Ordinal: 20218
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x4EFC | Ordinal: 20221
        void indexFromItem(class QStandardItem const *) const;

    // RVA: 0x4F56 | Ordinal: 20311
        void insertColumn(int, class QList<class QStandardItem *> const &);

    // RVA: 0x4F57 | Ordinal: 20312
        void insertColumn(int, class QModelIndex const &);

    // RVA: 0x4F59 | Ordinal: 20314
        void insertColumns(int, int, class QModelIndex const &);

    // RVA: 0x4F6E | Ordinal: 20335
        void insertRow(int, class QList<class QStandardItem *> const &);

    // RVA: 0x4F6F | Ordinal: 20336
        void insertRow(int, class QStandardItem *);

    // RVA: 0x4F70 | Ordinal: 20337
        void insertRow(int, class QModelIndex const &);

    // RVA: 0x4F73 | Ordinal: 20340
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x4FB5 | Ordinal: 20406
        void invisibleRootItem(void) const;

    // RVA: 0x50C6 | Ordinal: 20679
        void item(int, int) const;

    // RVA: 0x50CA | Ordinal: 20683
        void itemChanged(class QStandardItem *);

    // RVA: 0x50CC | Ordinal: 20685
        void itemData(class QModelIndex const &) const;

    // RVA: 0x50CD | Ordinal: 20686
        void itemFromIndex(class QModelIndex const &) const;

    // RVA: 0x50CF | Ordinal: 20688
        void itemPrototype(void) const;

    // RVA: 0x5294 | Ordinal: 21141
        void metaObject(void) const;

    // RVA: 0x52B6 | Ordinal: 21175
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x52B8 | Ordinal: 21177
        void mimeTypes(void) const;

    // RVA: 0x5407 | Ordinal: 21512
        void parent(class QModelIndex const &) const;

    // RVA: 0x55AB | Ordinal: 21932
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x55EF | Ordinal: 22000
        void qt_metacast(char const *);

    // RVA: 0x5646 | Ordinal: 22087
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x56CF | Ordinal: 22224
        void removeColumns(int, int, class QModelIndex const &);

    // RVA: 0x56E6 | Ordinal: 22247
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x5783 | Ordinal: 22404
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x58C7 | Ordinal: 22728
        void setColumnCount(int);

    // RVA: 0x5910 | Ordinal: 22801
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x59E0 | Ordinal: 23009
        void setHeaderData(int, enum Qt::Orientation, class QVariant const &, int);

    // RVA: 0x59EB | Ordinal: 23020
        void setHorizontalHeaderItem(int, class QStandardItem *);

    // RVA: 0x59EC | Ordinal: 23021
        void setHorizontalHeaderLabels(class QStringList const &);

    // RVA: 0x5A0F | Ordinal: 23056
        void setItem(int, int, class QStandardItem *);

    // RVA: 0x5A10 | Ordinal: 23057
        void setItem(int, class QStandardItem *);

    // RVA: 0x5A12 | Ordinal: 23059
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x5A13 | Ordinal: 23060
        void setItemPrototype(class QStandardItem const *);

    // RVA: 0x5A14 | Ordinal: 23061
        void setItemRoleNames(class QHash<int, class QByteArray> const &);

    // RVA: 0x5B5A | Ordinal: 23387
        void setRowCount(int);

    // RVA: 0x5B95 | Ordinal: 23446
        void setSortRole(int);

    // RVA: 0x5C9D | Ordinal: 23710
        void setVerticalHeaderItem(int, class QStandardItem *);

    // RVA: 0x5C9E | Ordinal: 23711
        void setVerticalHeaderLabels(class QStringList const &);

    // RVA: 0x5D25 | Ordinal: 23846
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x5D5A | Ordinal: 23899
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x5D5C | Ordinal: 23901
        void sortRole(void) const;

    // RVA: 0x5E52 | Ordinal: 24147
        void supportedDropActions(void) const;

    // RVA: 0x5EBE | Ordinal: 24255
        void takeColumn(int);

    // RVA: 0x5EBF | Ordinal: 24256
        void takeHorizontalHeaderItem(int);

    // RVA: 0x5EC0 | Ordinal: 24257
        void takeItem(int, int);

    // RVA: 0x5EC2 | Ordinal: 24259
        void takeRow(int);

    // RVA: 0x5EC5 | Ordinal: 24262
        void takeVerticalHeaderItem(int);

    // RVA: 0x5FD2 | Ordinal: 24531
        void tr(char const *, char const *, int);

    // RVA: 0x6019 | Ordinal: 24602
        void trUtf8(char const *, char const *, int);

    // RVA: 0x611D | Ordinal: 24862
        void verticalHeaderItem(int) const;

    // RVA: 0x51D | Ordinal: 1310
        void _QStandardItemModel(void);
};

// DCS_OPS_RE_QT5GUI.DLL_QSTANDARDITEMMODEL_HPP
