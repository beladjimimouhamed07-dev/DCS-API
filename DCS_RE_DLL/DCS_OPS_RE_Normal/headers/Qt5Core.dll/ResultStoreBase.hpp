#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: ResultStoreBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QtPrivate {

class ResultStoreBase
{
public:

    // RVA: 0x2BD | Ordinal: 702
        void ResultStoreBase(class QtPrivate::ResultStoreBase const &);

    // RVA: 0x2BE | Ordinal: 703
        void ResultStoreBase(void);

    // RVA: 0x7D8 | Ordinal: 2009
        void addCanceledResult(int);

    // RVA: 0x80D | Ordinal: 2062
        void addResult(int, void const *);

    // RVA: 0x80E | Ordinal: 2063
        void addResults(int, void const *, int, int);

    // RVA: 0x901 | Ordinal: 2306
        void begin(void) const;

    // RVA: 0xAE1 | Ordinal: 2786
        void contains(int) const;

    // RVA: 0xB0F | Ordinal: 2832
        void count(void) const;

    // RVA: 0xD27 | Ordinal: 3368
        void end(void) const;

    // RVA: 0xE25 | Ordinal: 3622
        void filterMode(void) const;

    // RVA: 0xF66 | Ordinal: 3943
        void hasNextResult(void) const;

    // RVA: 0x1030 | Ordinal: 4145
        void insertResultItem(int, class QtPrivate::ResultItem &);

    // RVA: 0x1031 | Ordinal: 4146
        void insertResultItemIfValid(int, class QtPrivate::ResultItem &);

    // RVA: 0x187D | Ordinal: 6270
        void resultAt(int) const;

    // RVA: 0x19C4 | Ordinal: 6597
        void setFilterMode(bool);

    // RVA: 0x1C92 | Ordinal: 7315
        void syncPendingResults(void);

    // RVA: 0x1C93 | Ordinal: 7316
        void syncResultCount(void);

    // RVA: 0x1F8B | Ordinal: 8076
        void updateInsertIndex(int, int);

    // RVA: 0x38E | Ordinal: 911
        void _ResultStoreBase(void);
};

} // namespace QtPrivate

// DCS_OPS_RE_QT5CORE.DLL_RESULTSTOREBASE_HPP
