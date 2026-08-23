#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Barcap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Barcap
{
public:

    // RVA: 0x49 | Ordinal: 74
        void Barcap(class AI::Barcap &&);

    // RVA: 0x4A | Ordinal: 75
        void Barcap(class AI::Barcap const &);

    // RVA: 0x4B | Ordinal: 76
        void Barcap(void);

    // RVA: 0x68B | Ordinal: 1676
        void clone(void) const;

    // RVA: 0x6F8 | Ordinal: 1785
        void create(void);

    // RVA: 0x7DE | Ordinal: 2015
        void getCategory(void) const;

    // RVA: 0x877 | Ordinal: 2168
        void getName(void) const;

    // RVA: 0x9F7 | Ordinal: 2552
        void load(class Lua::Config &);

    // RVA: 0x241 | Ordinal: 578
        void _Barcap(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_BARCAP_HPP
