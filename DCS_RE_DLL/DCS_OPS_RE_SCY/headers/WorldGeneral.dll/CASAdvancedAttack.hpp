#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CASAdvancedAttack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CASAdvancedAttack
{
public:

    // RVA: 0x52 | Ordinal: 83
        void CASAdvancedAttack(class AI::CASAdvancedAttack &&);

    // RVA: 0x53 | Ordinal: 84
        void CASAdvancedAttack(class AI::CASAdvancedAttack const &);

    // RVA: 0x54 | Ordinal: 85
        void CASAdvancedAttack(void);

    // RVA: 0x68E | Ordinal: 1679
        void clone(void) const;

    // RVA: 0x6FB | Ordinal: 1788
        void create(void);

    // RVA: 0x7E1 | Ordinal: 2018
        void getCategory(void) const;

    // RVA: 0x87A | Ordinal: 2171
        void getName(void) const;

    // RVA: 0x9FA | Ordinal: 2555
        void load(class Lua::Config &);

    // RVA: 0x244 | Ordinal: 581
        void _CASAdvancedAttack(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CASADVANCEDATTACK_HPP
