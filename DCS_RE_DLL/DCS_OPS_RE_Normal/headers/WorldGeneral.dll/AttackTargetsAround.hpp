#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttackTargetsAround
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttackTargetsAround
{
public:

    // RVA: 0x3A | Ordinal: 59
        void AttackTargetsAround(class AI::AttackTargetsAround &&);

    // RVA: 0x3B | Ordinal: 60
        void AttackTargetsAround(class AI::AttackTargetsAround const &);

    // RVA: 0x3C | Ordinal: 61
        void AttackTargetsAround(void);

    // RVA: 0x688 | Ordinal: 1673
        void clone(void) const;

    // RVA: 0x6F5 | Ordinal: 1782
        void create(void);

    // RVA: 0x7DB | Ordinal: 2012
        void getCategory(void) const;

    // RVA: 0x874 | Ordinal: 2165
        void getName(void) const;

    // RVA: 0x9F4 | Ordinal: 2549
        void load(class Lua::Config &);

    // RVA: 0xABF | Ordinal: 2752
        void params(void) const;

    // RVA: 0x23C | Ordinal: 573
        void _AttackTargetsAround(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACKTARGETSAROUND_HPP
