#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QItemSelection
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QItemSelection
{
public:

    // RVA: 0x12D | Ordinal: 302
        void QItemSelection(class QItemSelection &&);

    // RVA: 0x12E | Ordinal: 303
        void QItemSelection(class QItemSelection const &);

    // RVA: 0x12F | Ordinal: 304
        void QItemSelection(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x130 | Ordinal: 305
        void QItemSelection(void);

    // RVA: 0xAC2 | Ordinal: 2755
        void contains(class QModelIndex const &) const;

    // RVA: 0xFDE | Ordinal: 4063
        void indexes(void) const;

    // RVA: 0x133B | Ordinal: 4924
        void merge(class QItemSelection const &, class QFlags<enum QItemSelectionModel::SelectionFlag>);

    // RVA: 0x1905 | Ordinal: 6406
        void select(class QModelIndex const &, class QModelIndex const &);

    // RVA: 0x1B6D | Ordinal: 7022
        void split(class QItemSelectionRange const &, class QItemSelectionRange const &, class QItemSelection *);

    // RVA: 0x325 | Ordinal: 806
        void _QItemSelection(void);
};

// DCS_OPS_RE_QT5CORE.DLL_QITEMSELECTION_HPP
