#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttackUnit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttackUnit
{
public:

    // RVA: 0x40 | Ordinal: 65
        void AttackUnit(class AI::AttackUnit &&);

    // RVA: 0x41 | Ordinal: 66
        void AttackUnit(class AI::AttackUnit const &);

    // RVA: 0x42 | Ordinal: 67
        void AttackUnit(void);

    // RVA: 0x68A | Ordinal: 1675
        void clone(void) const;

    // RVA: 0x6F7 | Ordinal: 1784
        void create(void);

    // RVA: 0x7DD | Ordinal: 2014
        void getCategory(void) const;

    // RVA: 0x876 | Ordinal: 2167
        void getName(void) const;

    // RVA: 0x9F6 | Ordinal: 2551
        void load(class Lua::Config &);

    // RVA: 0xAC1 | Ordinal: 2754
        void params(void) const;

    // RVA: 0x23E | Ordinal: 575
        void _AttackUnit(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACKUNIT_HPP
