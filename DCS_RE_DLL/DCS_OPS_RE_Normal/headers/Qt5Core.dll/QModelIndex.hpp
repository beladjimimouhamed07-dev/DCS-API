#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QModelIndex
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QModelIndex
{
public:

    // RVA: 0x197 | Ordinal: 408
        void QModelIndex(int, int, void *, class QAbstractItemModel const *);

    // RVA: 0x198 | Ordinal: 409
        void QModelIndex(int, int, unsigned __int64, class QAbstractItemModel const *);

    // RVA: 0x199 | Ordinal: 410
        void QModelIndex(void);

    // RVA: 0x9BD | Ordinal: 2494
        void child(int, int) const;

    // RVA: 0xA1F | Ordinal: 2592
        void column(void) const;

    // RVA: 0xC03 | Ordinal: 3076
        void data(int) const;

    // RVA: 0xE6B | Ordinal: 3692
        void flags(void) const;

    // RVA: 0x1047 | Ordinal: 4168
        void internalId(void) const;

    // RVA: 0x1049 | Ordinal: 4170
        void internalPointer(void) const;

    // RVA: 0x1205 | Ordinal: 4614
        void isValid(void) const;

    // RVA: 0x13B9 | Ordinal: 5050
        void model(void) const;

    // RVA: 0x653 | Ordinal: 1620
        void operator_(class QModelIndex const &) const;

    // RVA: 0x14AF | Ordinal: 5296
        void parent(void) const;

    // RVA: 0x18B1 | Ordinal: 6322
        void row(void) const;

    // RVA: 0x1B0B | Ordinal: 6924
        void sibling(int, int) const;

    // RVA: 0x1B0F | Ordinal: 6928
        void siblingAtColumn(int) const;

    // RVA: 0x1B10 | Ordinal: 6929
        void siblingAtRow(int) const;
};

// DCS_OPS_RE_QT5CORE.DLL_QMODELINDEX_HPP
