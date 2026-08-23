#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractProxyModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractProxyModel
{
public:

    // RVA: 0x3B | Ordinal: 60
        void QAbstractProxyModel(class QAbstractProxyModelPrivate &, class QObject *);

    // RVA: 0x3C | Ordinal: 61
        void QAbstractProxyModel(class QObject *);

    // RVA: 0x92B | Ordinal: 2348
        void buddy(class QModelIndex const &) const;

    // RVA: 0x94E | Ordinal: 2383
        void canDropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &) const;

    // RVA: 0x954 | Ordinal: 2389
        void canFetchMore(class QModelIndex const &) const;

    // RVA: 0xB85 | Ordinal: 2950
        void d_func(void);

    // RVA: 0xB86 | Ordinal: 2951
        void d_func(void) const;

    // RVA: 0xBFA | Ordinal: 3067
        void data(class QModelIndex const &, int) const;

    // RVA: 0xCCE | Ordinal: 3279
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xDF4 | Ordinal: 3573
        void fetchMore(class QModelIndex const &);

    // RVA: 0xE65 | Ordinal: 3686
        void flags(class QModelIndex const &) const;

    // RVA: 0xF4D | Ordinal: 3918
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xF81 | Ordinal: 3970
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0x122E | Ordinal: 4655
        void itemData(class QModelIndex const &) const;

    // RVA: 0x12FE | Ordinal: 4863
        void mapSelectionFromSource(class QItemSelection const &) const;

    // RVA: 0x1301 | Ordinal: 4866
        void mapSelectionToSource(class QItemSelection const &) const;

    // RVA: 0x1346 | Ordinal: 4935
        void metaObject(void) const;

    // RVA: 0x1398 | Ordinal: 5017
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x13A4 | Ordinal: 5029
        void mimeTypes(void) const;

    // RVA: 0x162F | Ordinal: 5680
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166C | Ordinal: 5741
        void qt_metacast(char const *);

    // RVA: 0x16B2 | Ordinal: 5811
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1862 | Ordinal: 6243
        void resetInternalData(void);

    // RVA: 0x188D | Ordinal: 6286
        void revert(void);

    // RVA: 0x1966 | Ordinal: 6503
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x19D8 | Ordinal: 6617
        void setHeaderData(int, enum Qt::Orientation, class QVariant const &, int);

    // RVA: 0x19F0 | Ordinal: 6641
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x1A97 | Ordinal: 6808
        void setSourceModel(class QAbstractItemModel *);

    // RVA: 0x1B08 | Ordinal: 6921
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1B54 | Ordinal: 6997
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1B61 | Ordinal: 7010
        void sourceModel(void) const;

    // RVA: 0x1B62 | Ordinal: 7011
        void sourceModelChanged(struct QAbstractProxyModel::QPrivateSignal);

    // RVA: 0x1B68 | Ordinal: 7017
        void span(class QModelIndex const &) const;

    // RVA: 0x1C50 | Ordinal: 7249
        void submit(void);

    // RVA: 0x1C58 | Ordinal: 7257
        void supportedDragActions(void) const;

    // RVA: 0x1C5A | Ordinal: 7259
        void supportedDropActions(void) const;

    // RVA: 0x1E75 | Ordinal: 7798
        void tr(char const *, char const *, int);

    // RVA: 0x1EB5 | Ordinal: 7862
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2DF | Ordinal: 736
        void _QAbstractProxyModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTPROXYMODEL_HPP
