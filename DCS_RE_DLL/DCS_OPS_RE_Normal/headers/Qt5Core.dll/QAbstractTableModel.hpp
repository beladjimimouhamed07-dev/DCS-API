#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractTableModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractTableModel
{
public:

    // RVA: 0x40 | Ordinal: 65
        void QAbstractTableModel(class QAbstractItemModelPrivate &, class QObject *);

    // RVA: 0x41 | Ordinal: 66
        void QAbstractTableModel(class QObject *);

    // RVA: 0xCCF | Ordinal: 3280
        void dropMimeData(class QMimeData const *, enum Qt::DropAction, int, int, class QModelIndex const &);

    // RVA: 0xE66 | Ordinal: 3687
        void flags(class QModelIndex const &) const;

    // RVA: 0xF4E | Ordinal: 3919
        void hasChildren(class QModelIndex const &) const;

    // RVA: 0xFA7 | Ordinal: 4008
        void index(int, int, class QModelIndex const &) const;

    // RVA: 0x1348 | Ordinal: 4937
        void metaObject(void) const;

    // RVA: 0x14AA | Ordinal: 5291
        void parent(class QModelIndex const &) const;

    // RVA: 0x1631 | Ordinal: 5682
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x166E | Ordinal: 5743
        void qt_metacast(char const *);

    // RVA: 0x16B4 | Ordinal: 5813
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1B09 | Ordinal: 6922
        void sibling(int, int, class QModelIndex const &) const;

    // RVA: 0x1E77 | Ordinal: 7800
        void tr(char const *, char const *, int);

    // RVA: 0x1EB7 | Ordinal: 7864
        void trUtf8(char const *, char const *, int);

    // RVA: 0x2E2 | Ordinal: 739
        void _QAbstractTableModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTTABLEMODEL_HPP
