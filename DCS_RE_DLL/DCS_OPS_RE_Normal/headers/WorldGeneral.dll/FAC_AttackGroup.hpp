#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FAC_AttackGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FAC_AttackGroup
{
public:

    // RVA: 0xBB | Ordinal: 188
        void FAC_AttackGroup(class AI::FAC_AttackGroup &&);

    // RVA: 0xBC | Ordinal: 189
        void FAC_AttackGroup(class AI::FAC_AttackGroup const &);

    // RVA: 0xBD | Ordinal: 190
        void FAC_AttackGroup(void);

    // RVA: 0x6AB | Ordinal: 1708
        void clone(void) const;

    // RVA: 0x718 | Ordinal: 1817
        void create(void);

    // RVA: 0x7F3 | Ordinal: 2036
        void getCategory(void) const;

    // RVA: 0x896 | Ordinal: 2199
        void getName(void) const;

    // RVA: 0xA17 | Ordinal: 2584
        void load(class Lua::Config &);

    // RVA: 0xADC | Ordinal: 2781
        void params(void) const;

    // RVA: 0x268 | Ordinal: 617
        void _FAC_AttackGroup(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FAC_ATTACKGROUP_HPP
