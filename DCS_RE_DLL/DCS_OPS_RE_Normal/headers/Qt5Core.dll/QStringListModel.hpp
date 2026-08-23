#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QStringListModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QStringListModel
{
public:

    // RVA: 0x20F | Ordinal: 528
        void QStringListModel(class QStringList const &, class QObject *);

    // RVA: 0x210 | Ordinal: 529
        void QStringListModel(class QObject *);

    // RVA: 0xC0B | Ordinal: 3084
        void data(class QModelIndex const &, int) const;

    // RVA: 0xE6E | Ordinal: 3695
        void flags(class QModelIndex const &) const;

    // RVA: 0x1036 | Ordinal: 4151
        void insertRows(int, int, class QModelIndex const &);

    // RVA: 0x1230 | Ordinal: 4657
        void itemData(class QModelIndex const &) const;

    // RVA: 0x1372 | Ordinal: 4979
        void metaObject(void) const;

    // RVA: 0x13E1 | Ordinal: 5090
        void moveRows(class QModelIndex const &, int, int, class QModelIndex const &, int);

    // RVA: 0x165A | Ordinal: 5723
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1697 | Ordinal: 5784
        void qt_metacast(char const *);

    // RVA: 0x16DE | Ordinal: 5855
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1803 | Ordinal: 6148
        void removeRows(int, int, class QModelIndex const &);

    // RVA: 0x18B6 | Ordinal: 6327
        void rowCount(class QModelIndex const &) const;

    // RVA: 0x196C | Ordinal: 6509
        void setData(class QModelIndex const &, class QVariant const &, int);

    // RVA: 0x19F2 | Ordinal: 6643
        void setItemData(class QModelIndex const &, class QMap<int, class QVariant> const &);

    // RVA: 0x1AAC | Ordinal: 6829
        void setStringList(class QStringList const &);

    // RVA: 0x1B0E | Ordinal: 6927
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1B56 | Ordinal: 6999
        void sort(int, enum Qt::SortOrder);

    // RVA: 0x1C4D | Ordinal: 7246
        void stringList(void) const;

    // RVA: 0x1C5C | Ordinal: 7261
        void supportedDropActions(void) const;

    // RVA: 0x1EA3 | Ordinal: 7844
        void tr(char const *, char const *, int);

    // RVA: 0x1EE2 | Ordinal: 7907
        void trUtf8(char const *, char const *, int);

    // RVA: 0x363 | Ordinal: 868
        void _QStringListModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QSTRINGLISTMODEL_HPP
