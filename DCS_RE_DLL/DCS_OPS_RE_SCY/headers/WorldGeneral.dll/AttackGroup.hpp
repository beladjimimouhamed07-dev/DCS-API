#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AttackGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AttackGroup
{
public:

    // RVA: 0x34 | Ordinal: 53
        void AttackGroup(class AI::AttackGroup &&);

    // RVA: 0x35 | Ordinal: 54
        void AttackGroup(class AI::AttackGroup const &);

    // RVA: 0x36 | Ordinal: 55
        void AttackGroup(void);

    // RVA: 0x686 | Ordinal: 1671
        void clone(void) const;

    // RVA: 0x6F3 | Ordinal: 1780
        void create(void);

    // RVA: 0x7D9 | Ordinal: 2010
        void getCategory(void) const;

    // RVA: 0x872 | Ordinal: 2163
        void getName(void) const;

    // RVA: 0x9F1 | Ordinal: 2546
        void load(class Lua::Config &);

    // RVA: 0xABD | Ordinal: 2750
        void params(void) const;

    // RVA: 0x23A | Ordinal: 571
        void _AttackGroup(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ATTACKGROUP_HPP
