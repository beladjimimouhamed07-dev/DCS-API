#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Core.dll
// Class: QRandomGenerator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QRandomGenerator
{
public:

    // RVA: 0x1BA | Ordinal: 443
        void QRandomGenerator(class std::seed_seq &);

    // RVA: 0x1BB | Ordinal: 444
        void QRandomGenerator(class QRandomGenerator const &);

    // RVA: 0x1BC | Ordinal: 445
        void QRandomGenerator(unsigned int const *, unsigned int const *);

    // RVA: 0x7A7 | Ordinal: 1960
        void _fillRange(void *, void *);

    // RVA: 0xCAA | Ordinal: 3243
        void discard(unsigned __int64);
};

// DCS_OPS_RE_QT5CORE.DLL_QRANDOMGENERATOR_HPP
