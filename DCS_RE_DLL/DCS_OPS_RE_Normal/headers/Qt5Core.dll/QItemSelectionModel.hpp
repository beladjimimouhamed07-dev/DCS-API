#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QItemSelectionModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QItemSelectionModel
{
public:

    // RVA: 0x131 | Ordinal: 306
        void QItemSelectionModel(class QItemSelectionModelPrivate &, class QAbstractItemModel *);

    // RVA: 0x132 | Ordinal: 307
        void QItemSelectionModel(class QAbstractItemModel *);

    // RVA: 0x133 | Ordinal: 308
        void QItemSelectionModel(class QAbstractItemModel *, class QObject *);

    // RVA: 0x9E2 | Ordinal: 2531
        void clear(void);

    // RVA: 0x9F4 | Ordinal: 2549
        void clearCurrentIndex(void);

    // RVA: 0x9F8 | Ordinal: 2553
        void clearSelection(void);

    // RVA: 0xA26 | Ordinal: 2599
        void columnIntersectsSelection(int, class QModelIndex const &) const;

    // RVA: 0xB5A | Ordinal: 2907
        void currentChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0xB5B | Ordinal: 2908
        void currentColumnChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0xB63 | Ordinal: 2916
        void currentIndex(void) const;

    // RVA: 0xB6C | Ordinal: 2925
        void currentRowChanged(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0xBB5 | Ordinal: 2998
        void d_func(void);

    // RVA: 0xBB6 | Ordinal: 2999
        void d_func(void) const;

    // RVA: 0xCF5 | Ordinal: 3318
        void emitSelectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0xF73 | Ordinal: 3956
        void hasSelection(void) const;

    // RVA: 0x1091 | Ordinal: 4242
        void isColumnSelected(int, class QModelIndex const &) const;

    // RVA: 0x1194 | Ordinal: 4501
        void isRowSelected(int, class QModelIndex const &) const;

    // RVA: 0x119F | Ordinal: 4512
        void isSelected(class QModelIndex const &) const;

    // RVA: 0x135C | Ordinal: 4957
        void metaObject(void) const;

    // RVA: 0x13B6 | Ordinal: 5047
        void model(void);

    // RVA: 0x13B7 | Ordinal: 5048
        void model(void) const;

    // RVA: 0x13BC | Ordinal: 5053
        void modelChanged(class QAbstractItemModel *);

    // RVA: 0x1645 | Ordinal: 5702
        void qt_metacall(enum QMetaObject::Call, int, void **);

    // RVA: 0x1682 | Ordinal: 5763
        void qt_metacast(char const *);

    // RVA: 0x16C8 | Ordinal: 5833
        void qt_static_metacall(class QObject *, enum QMetaObject::Call, int, void **);

    // RVA: 0x1859 | Ordinal: 6234
        void reset(void);

    // RVA: 0x18B8 | Ordinal: 6329
        void rowIntersectsSelection(int, class QModelIndex const &) const;

    // RVA: 0x1906 | Ordinal: 6407
        void select(class QItemSelection const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1907 | Ordinal: 6408
        void select(class QModelIndex const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x190A | Ordinal: 6411
        void selectedColumns(int) const;

    // RVA: 0x190B | Ordinal: 6412
        void selectedIndexes(void) const;

    // RVA: 0x190C | Ordinal: 6413
        void selectedRows(int) const;

    // RVA: 0x190D | Ordinal: 6414
        void selection(void) const;

    // RVA: 0x190E | Ordinal: 6415
        void selectionChanged(class QItemSelection const &, class QItemSelection const &);

    // RVA: 0x195B | Ordinal: 6492
        void setCurrentIndex(class QModelIndex const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1A0E | Ordinal: 6671
        void setModel(class QAbstractItemModel *);

    // RVA: 0x1E8D | Ordinal: 7822
        void tr(char const *, char const *, int);

    // RVA: 0x1ECD | Ordinal: 7886
        void trUtf8(char const *, char const *, int);

    // RVA: 0x326 | Ordinal: 807
        void _QItemSelectionModel(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QITEMSELECTIONMODEL_HPP
