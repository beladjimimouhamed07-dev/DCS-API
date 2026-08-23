#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractItemModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractItemModel
{
public:

    // RVA: 0x33 | Ordinal: 52
        void QAbstractItemModel(class QAbstractItemModelPrivate &, class QObject *);

    // RVA: 0x34 | Ordinal: 53
        void QAbstractItemModel(class QObject *);

    // RVA: 0x907 | Ordinal: 2312
        void beginInsertColumns(class QModelIndex const &, int, int);

    // RVA: 0x908 | Ordinal: 2313
        void beginInsertRows(class QModelIndex const &, int, int);

    // RVA: 0x90B | Ordinal: 2316
        void beginMoveColumns(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x90C | Ordinal: 2317
        void beginMoveRows(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x90E | Ordinal: 2319
        void beginRemoveColumns(class QModelIndex const &, int, int);

    // RVA: 0x90F | Ordinal: 2320
        void beginRemoveRows(class QModelIndex const &, int, int);

    // RVA: 0x910 | Ordinal: 2321
        void beginResetModel(void);

    // RVA: 0x92A | Ordinal: 2347
        void buddy(class QModelIndex const &) const;

    // RVA: 0x94D | Ordinal: 2382
        void canDropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &) const;

    // RVA: 0x953 | Ordinal: 2388
        void canFetchMore(class QModelIndex const &) const;

    // RVA: 0x9AF | Ordinal: 2480
        void changePersistentIndex(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x9B0 | Ordinal: 2481
        void changePersistentIndexList(class QList<class QModelIndex> const &, class QList<class QModelIndex> const &);

    // RVA: 0x9B7 | Ordinal: 2488
        void checkIndex(class QModelIndex const &, class QFlags<enum QAbstractItemModel::CheckIndexOption>) const;

    // RVA: 0xA28 | Ordinal: 2601
        void columnsAboutToBeInserted(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xA2A | Ordinal: 2603
        void columnsAboutToBeMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xA2B | Ordinal: 2604
        void columnsAboutToBeRemoved(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xA2D | Ordinal: 2606
        void columnsInserted(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xA2F | Ordinal: 2608
        void columnsMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xA30 | Ordinal: 2609
        void columnsRemoved(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0xB2D | Ordinal: 2862
        void createIndex(int, int, void *) const;

    // RVA: 0xB2E | Ordinal: 2863
        void createIndex(int, int, unsigned __int64) const;

    // RVA: 0xB83 | Ordinal: 2948
        void d_func(void);

    // RVA: 0xB84 | Ordinal: 2949
        void d_func(void) const;

    // RVA: 0xC0F | Ordinal: 3088
        void dataChanged(class QModelIndex const &, class QModelIndex const &, class QVector<int> const &);

    // RVA: 0xC4A | Ordinal: 3147
        void decodeData(int, int, class QModelIndex const &, class QDataStream &);

    // RVA: 0xCC1 | Ordinal: 3266
        void doSetRoleNames(class QHash<int, class QByteArray> const &);

    // RVA: 0xCC2 | Ordinal: 3267
        void doSetSupportedDragActions(class QFlags<enum Qt::DropAction>);

    // RVA: 0xCCC | Ordinal: 3277
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xD05 | Ordinal: 3334
        void encodeData(class QList<class QModelIndex> const &, class QDataStream &) const;

    // RVA: 0xD30 | Ordinal: 3377
        void endInsertColumns(void);

    // RVA: 0xD31 | Ordinal: 3378
        void endInsertRows(void);

    // RVA: 0xD35 | Ordinal: 3382
        void endMoveColumns(void);

    // RVA: 0xD36 | Ordinal: 3383
        void endMoveRows(void);

    // RVA: 0xD39 | Ordinal: 3386
        void endRemoveColumns(void);

    // RVA: 0xD3A | Ordinal: 3387
        void endRemoveRows(void);

    // RVA: 0xD3B | Ordinal: 3388
        void endResetModel(void);

    // RVA: 0xDF3 | Ordinal: 3572
        void fetchMore(class QModelIndex const &);

    // RVA: 0xE63 | Ordinal: 3684
        void flags(class QModelIndex const &) const;

    // RVA: 0xF4B | Ordinal: 3916
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xF5E | Ordinal: 3935
        void hasIndex(int, int, class QModelIndex const &) const;

    // RVA: 0xF80 | Ordinal: 3969
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xF86 | Ordinal: 3975
        void headerDataChanged(enum Qt::Orientation, int, int);

    // RVA: 0x102A | Ordinal: 4139
        void insertColumn(int, class QModelIndex const &);

    // RVA: 0x102B | Ordinal: 4140
        void insertColumns(int, int, class QModelIndex const &);

    // RVA: 0x1032 | Ordinal: 4147
        void insertRow(int, class QModelIndex const &);

    // RVA: 0x1033 | Ordinal: 4148
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x122D | Ordinal: 4654
        void itemData(class QModelIndex const &) const;

    // RVA: 0x1286 | Ordinal: 4743
        void layoutAboutToBeChanged(class QList<class QPersistentModelIndex> const &, enum QAbstractItemModel::LayoutChangeHint);

    // RVA: 0x1287 | Ordinal: 4744
        void layoutChanged(class QList<class QPersistentModelIndex> const &, enum QAbstractItemModel::LayoutChangeHint);

    // RVA: 0x1318 | Ordinal: 4889
        void match(class QModelIndex const &, int, class QVariant const &, int, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0x1344 | Ordinal: 4933
        void metaObject(void) const;

    // RVA: 0x1397 | Ordinal: 5016
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x13A3 | Ordinal: 5028
        void mimeTypes(void) const;

    // RVA: 0x13BB | Ordinal: 5052
        void modelAboutToBeReset(struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x13BD | Ordinal: 5054
        void modelReset(struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x13D5 | Ordinal: 5078
        void moveColumn(class QModelIndex const &, int, class QModelIndex const &, int);

    // RVA: 0x13D6 | Ordinal: 5079
        void moveColumns(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x13DE | Ordinal: 5087
        void moveRow(class QModelIndex const &, int, class QModelIndex const &, int);

    // RVA: 0x13DF | Ordinal: 5088
        void moveRows(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x14E0 | Ordinal: 5345
        void persistentIndexList(void) const;

    // RVA: 0x162D | Ordinal: 5678
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166A | Ordinal: 5739
        void qt_metacast(char const *);

    // RVA: 0x16B0 | Ordinal: 5809
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17D1 | Ordinal: 6098
        void removeColumn(int, class QModelIndex const &);

    // RVA: 0x17D2 | Ordinal: 6099
        void removeColumns(int, int, class QModelIndex const &);

    // RVA: 0x17FF | Ordinal: 6144
        void removeRow(int, class QModelIndex const &);

    // RVA: 0x1800 | Ordinal: 6145
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x1855 | Ordinal: 6230
        void reset(void);

    // RVA: 0x1861 | Ordinal: 6242
        void resetInternalData(void);

    // RVA: 0x188C | Ordinal: 6285
        void revert(void);

    // RVA: 0x18A4 | Ordinal: 6309
        void roleNames(void) const;

    // RVA: 0x18B9 | Ordinal: 6330
        void rowsAboutToBeInserted(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x18BB | Ordinal: 6332
        void rowsAboutToBeMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x18BC | Ordinal: 6333
        void rowsAboutToBeRemoved(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x18BE | Ordinal: 6335
        void rowsInserted(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x18C0 | Ordinal: 6337
        void rowsMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x18C1 | Ordinal: 6338
        void rowsRemoved(class QModelIndex const &, int, int, struct QAbstractItemModel::QPrivateSignal);

    // RVA: 0x1965 | Ordinal: 6502
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x19D7 | Ordinal: 6616
        void setHeaderData(int, enum Qt::Orientation, class QVariant const &, int);

    // RVA: 0x19EF | Ordinal: 6640
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x1A7B | Ordinal: 6780
        void setRoleNames(class QHash<int, class QByteArray> const &);

    // RVA: 0x1AAE | Ordinal: 6831
        void setSupportedDragActions(class QFlags<enum Qt::DropAction>);

    // RVA: 0x1B06 | Ordinal: 6919
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1B53 | Ordinal: 6996
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1B67 | Ordinal: 7016
        void span(class QModelIndex const &) const;

    // RVA: 0x1C4F | Ordinal: 7248
        void submit(void);

    // RVA: 0x1C57 | Ordinal: 7256
        void supportedDragActions(void) const;

    // RVA: 0x1C59 | Ordinal: 7258
        void supportedDropActions(void) const;

    // RVA: 0x1E73 | Ordinal: 7796
        void tr(char const *, char const *, int);

    // RVA: 0x1EB3 | Ordinal: 7860
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2DA | Ordinal: 731
        void _QAbstractItemModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTITEMMODEL_HPP
