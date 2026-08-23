#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QAbstractItemModelPrivate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QAbstractItemModelPrivate
{
public:

    // RVA: 0x35 | Ordinal: 54
        void QAbstractItemModelPrivate(void);

    // RVA: 0x837 | Ordinal: 2104
        void allowMove(class QModelIndex const &, int, int, class QModelIndex const &, int, enum Qt::Orientation);

    // RVA: 0xA29 | Ordinal: 2602
        void columnsAboutToBeInserted(class QModelIndex const &, int, int);

    // RVA: 0xA2C | Ordinal: 2605
        void columnsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0xA2E | Ordinal: 2607
        void columnsInserted(class QModelIndex const &, int, int);

    // RVA: 0xA31 | Ordinal: 2610
        void columnsRemoved(class QModelIndex const &, int, int);

    // RVA: 0xB2F | Ordinal: 2864
        void createIndex(int, int, int) const;

    // RVA: 0xB30 | Ordinal: 2865
        void createIndex(int, int, void *) const;

    // RVA: 0xC5C | Ordinal: 3165
        void defaultRoleNames(void);

    // RVA: 0xFDD | Ordinal: 4062
        void indexValid(class QModelIndex const &) const;

    // RVA: 0x105F | Ordinal: 4192
        void invalidatePersistentIndex(class QModelIndex const &);

    // RVA: 0x1060 | Ordinal: 4193
        void invalidatePersistentIndexes(void);

    // RVA: 0x121F | Ordinal: 4640
        void isVariantLessThan(class QVariant const &, class QVariant const &, enum Qt::CaseSensitivity, bool);

    // RVA: 0x1232 | Ordinal: 4659
        void itemsAboutToBeMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, enum Qt::Orientation);

    // RVA: 0x1233 | Ordinal: 4660
        void itemsMoved(class QModelIndex const &, int, int, class QModelIndex const &, int, enum Qt::Orientation);

    // RVA: 0x13DB | Ordinal: 5084
        void movePersistentIndexes(class QVector<class QPersistentModelIndexData *> const &, int, class QModelIndex const &, enum Qt::Orientation);

    // RVA: 0x15EA | Ordinal: 5611
        void q_func(void);

    // RVA: 0x15EB | Ordinal: 5612
        void q_func(void) const;

    // RVA: 0x17F6 | Ordinal: 6135
        void removePersistentIndexData(class QPersistentModelIndexData *);

    // RVA: 0x18BA | Ordinal: 6331
        void rowsAboutToBeInserted(class QModelIndex const &, int, int);

    // RVA: 0x18BD | Ordinal: 6334
        void rowsAboutToBeRemoved(class QModelIndex const &, int, int);

    // RVA: 0x18BF | Ordinal: 6336
        void rowsInserted(class QModelIndex const &, int, int);

    // RVA: 0x18C2 | Ordinal: 6339
        void rowsRemoved(class QModelIndex const &, int, int);

    // RVA: 0x1BE8 | Ordinal: 7145
        void staticEmptyModel(void);

    // RVA: 0x1FD2 | Ordinal: 8147
        void variantLessThan(class QVariant const &, class QVariant const &);

    // RVA: 0x2DB | Ordinal: 732
        void _QAbstractItemModelPrivate(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QABSTRACTITEMMODELPRIVATE_HPP
