#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractListModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractListModel
{
public:

    // RVA: 0x36 | Ordinal: 55
        void QAbstractListModel(class QAbstractItemModelPrivate &, class QObject *);

    // RVA: 0x37 | Ordinal: 56
        void QAbstractListModel(class QObject *);

    // RVA: 0xA21 | Ordinal: 2594
        void columnCount(class QModelIndex const &) const;

    // RVA: 0xCCD | Ordinal: 3278
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xE64 | Ordinal: 3685
        void flags(class QModelIndex const &) const;

    // RVA: 0xF4C | Ordinal: 3917
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xFA6 | Ordinal: 4007
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x1345 | Ordinal: 4934
        void metaObject(void) const;

    // RVA: 0x14A9 | Ordinal: 5290
        void parent(class QModelIndex const &) const;

    // RVA: 0x162E | Ordinal: 5679
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166B | Ordinal: 5740
        void qt_metacast(char const *);

    // RVA: 0x16B1 | Ordinal: 5810
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1B07 | Ordinal: 6920
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1E74 | Ordinal: 7797
        void tr(char const *, char const *, int);

    // RVA: 0x1EB4 | Ordinal: 7861
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2DC | Ordinal: 733
        void _QAbstractListModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTLISTMODEL_HPP
