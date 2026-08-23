#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QConcatenateTablesProxyModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QConcatenateTablesProxyModel
{
public:

    // RVA: 0xB8 | Ordinal: 185
        void QConcatenateTablesProxyModel(class QObject *);

    // RVA: 0x815 | Ordinal: 2070
        void addSourceModel(class QAbstractItemModel *);

    // RVA: 0x94F | Ordinal: 2384
        void canDropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &) const;

    // RVA: 0xA22 | Ordinal: 2595
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xB91 | Ordinal: 2962
        void d_func(void);

    // RVA: 0xB92 | Ordinal: 2963
        void d_func(void) const;

    // RVA: 0xC00 | Ordinal: 3073
        void data(class QModelIndex const &, int) const;

    // RVA: 0xCD0 | Ordinal: 3281
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xE68 | Ordinal: 3689
        void flags(class QModelIndex const &) const;

    // RVA: 0xF82 | Ordinal: 3971
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xFA8 | Ordinal: 4009
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x122F | Ordinal: 4656
        void itemData(class QModelIndex const &) const;

    // RVA: 0x12FA | Ordinal: 4859
        void mapFromSource(class QModelIndex const &) const;

    // RVA: 0x1304 | Ordinal: 4869
        void mapToSource(class QModelIndex const &) const;

    // RVA: 0x134D | Ordinal: 4942
        void metaObject(void) const;

    // RVA: 0x1399 | Ordinal: 5018
        void mimeData(class QList<class QModelIndex> const &) const;

    // RVA: 0x13A5 | Ordinal: 5030
        void mimeTypes(void) const;

    // RVA: 0x14AB | Ordinal: 5292
        void parent(class QModelIndex const &) const;

    // RVA: 0x1636 | Ordinal: 5687
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1673 | Ordinal: 5748
        void qt_metacast(char const *);

    // RVA: 0x16B9 | Ordinal: 5818
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1805 | Ordinal: 6150
        void removeSourceModel(class QAbstractItemModel *);

    // RVA: 0x18B3 | Ordinal: 6324
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x1969 | Ordinal: 6506
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x19F1 | Ordinal: 6642
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x1B63 | Ordinal: 7012
        void sourceModels(void) const;

    // RVA: 0x1B69 | Ordinal: 7018
        void span(class QModelIndex const &) const;

    // RVA: 0x1E7D | Ordinal: 7806
        void tr(char const *, char const *, int);

    // RVA: 0x1EBD | Ordinal: 7870
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2F9 | Ordinal: 762
        void _QConcatenateTablesProxyModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QCONCATENATETABLESPROXYMODEL_HPP
