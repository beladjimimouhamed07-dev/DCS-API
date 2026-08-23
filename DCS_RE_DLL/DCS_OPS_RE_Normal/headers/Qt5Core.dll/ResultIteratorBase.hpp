#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: ResultIteratorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace QtPrivate {

class ResultIteratorBase
{
public:

    // RVA: 0x2BB | Ordinal: 700
        void ResultIteratorBase(class QMap<int, class QtPrivate::ResultItem>::const_iterator, int);

    // RVA: 0x2BC | Ordinal: 701
        void ResultIteratorBase(void);

    // RVA: 0x8E5 | Ordinal: 2278
        void batchSize(void) const;

    // RVA: 0x8E6 | Ordinal: 2279
        void batchedAdvance(void);

    // RVA: 0x956 | Ordinal: 2391
        void canIncrementVectorIndex(void) const;

    // RVA: 0x1220 | Ordinal: 4641
        void isVector(void) const;

    // RVA: 0x187F | Ordinal: 6272
        void resultIndex(void) const;

    // RVA: 0x1FD4 | Ordinal: 8149
        void vectorIndex(void) const;
};

} // namespace QtPrivate

// DCS_OPS_RE_QT5CORE.DLL_RESULTITERATORBASE_HPP
