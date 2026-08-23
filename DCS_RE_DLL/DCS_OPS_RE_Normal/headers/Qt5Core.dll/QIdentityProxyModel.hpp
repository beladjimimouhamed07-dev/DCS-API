#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QIdentityProxyModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QIdentityProxyModel
{
public:

    // RVA: 0x128 | Ordinal: 297
        void QIdentityProxyModel(class QIdentityProxyModelPrivate &, class QObject *);

    // RVA: 0x129 | Ordinal: 298
        void QIdentityProxyModel(class QObject *);

    // RVA: 0xA23 | Ordinal: 2596
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xBB3 | Ordinal: 2996
        void d_func(void);

    // RVA: 0xBB4 | Ordinal: 2997
        void d_func(void) const;

    // RVA: 0xCD1 | Ordinal: 3282
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xF83 | Ordinal: 3972
        void headerData(int, enum Qt::Orientation, int) const;

    // RVA: 0xFA9 | Ordinal: 4010
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x102C | Ordinal: 4141
        void insertColumns(int, int, class QModelIndex const &);

    // RVA: 0x1034 | Ordinal: 4149
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x12FB | Ordinal: 4860
        void mapFromSource(class QModelIndex const &) const;

    // RVA: 0x12FF | Ordinal: 4864
        void mapSelectionFromSource(class QItemSelection const &) const;

    // RVA: 0x1302 | Ordinal: 4867
        void mapSelectionToSource(class QItemSelection const &) const;

    // RVA: 0x1305 | Ordinal: 4870
        void mapToSource(class QModelIndex const &) const;

    // RVA: 0x131B | Ordinal: 4892
        void match(class QModelIndex const &, int, class QVariant const &, int, class QFlags<enum Qt::MatchFlag>) const;

    // RVA: 0x135B | Ordinal: 4956
        void metaObject(void) const;

    // RVA: 0x13D7 | Ordinal: 5080
        void moveColumns(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x13E0 | Ordinal: 5089
        void moveRows(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x14AC | Ordinal: 5293
        void parent(class QModelIndex const &) const;

    // RVA: 0x1644 | Ordinal: 5701
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1681 | Ordinal: 5762
        void qt_metacast(char const *);

    // RVA: 0x16C7 | Ordinal: 5832
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x17D3 | Ordinal: 6100
        void removeColumns(int, int, class QModelIndex const &);

    // RVA: 0x1801 | Ordinal: 6146
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x18B4 | Ordinal: 6325
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x1A98 | Ordinal: 6809
        void setSourceModel(class QAbstractItemModel *);

    // RVA: 0x1B0A | Ordinal: 6923
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1E8C | Ordinal: 7821
        void tr(char const *, char const *, int);

    // RVA: 0x1ECC | Ordinal: 7885
        void trUtf8(char const *, char const *, int);

    // RVA: 0x323 | Ordinal: 804
        void _QIdentityProxyModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QIDENTITYPROXYMODEL_HPP
