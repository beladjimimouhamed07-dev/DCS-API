#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QTransposeProxyModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QTransposeProxyModel
{
public:

    // RVA: 0x249 | Ordinal: 586
        void QTransposeProxyModel(class QTransposeProxyModelPrivate &, class QObject *);

    // RVA: 0x24A | Ordinal: 587
        void QTransposeProxyModel(class QObject *);

    // RVA: 0xA25 | Ordinal: 2598
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xBEA | Ordinal: 3051
        void d_func(void);

    // RVA: 0xBEB | Ordinal: 3052
        void d_func(void) const;

    // RVA: 0xF85 | Ordinal: 3974
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xFAE | Ordinal: 4015
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x102E | Ordinal: 4143
        void insertColumns(int, int, class QModelIndex const &);

    // RVA: 0x1037 | Ordinal: 4152
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x1231 | Ordinal: 4658
        void itemData(class QModelIndex const &) const;

    // RVA: 0x12FD | Ordinal: 4862
        void mapFromSource(class QModelIndex const &) const;

    // RVA: 0x1307 | Ordinal: 4872
        void mapToSource(class QModelIndex const &) const;

    // RVA: 0x1379 | Ordinal: 4986
        void metaObject(void) const;

    // RVA: 0x13D8 | Ordinal: 5081
        void moveColumns(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x13E2 | Ordinal: 5091
        void moveRows(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x14B3 | Ordinal: 5300
        void parent(class QModelIndex const &) const;

    // RVA: 0x1661 | Ordinal: 5730
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x169E | Ordinal: 5791
        void qt_metacast(char const *);

    // RVA: 0x16E5 | Ordinal: 5862
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17D5 | Ordinal: 6102
        void removeColumns(int, int, class QModelIndex const &);

    // RVA: 0x1804 | Ordinal: 6149
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x18B7 | Ordinal: 6328
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x19DA | Ordinal: 6619
        void setHeaderData(int, enum Qt::Orientation, class QVariant const &, int);

    // RVA: 0x19F3 | Ordinal: 6644
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x1A9A | Ordinal: 6811
        void setSourceModel(class QAbstractItemModel *);

    // RVA: 0x1B57 | Ordinal: 7000
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1B6B | Ordinal: 7020
        void span(class QModelIndex const &) const;

    // RVA: 0x1EAA | Ordinal: 7851
        void tr(char const *, char const *, int);

    // RVA: 0x1EE9 | Ordinal: 7914
        void trUtf8(char const *, char const *, int);

    // RVA: 0x378 | Ordinal: 889
        void _QTransposeProxyModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QTRANSPOSEPROXYMODEL_HPP
