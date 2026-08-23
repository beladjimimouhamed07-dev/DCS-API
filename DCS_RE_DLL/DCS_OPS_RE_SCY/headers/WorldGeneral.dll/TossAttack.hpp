#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: TossAttack
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class TossAttack
{
public:

    // RVA: 0x1BA | Ordinal: 443
        void TossAttack(class AI::TossAttack &&);

    // RVA: 0x1BB | Ordinal: 444
        void TossAttack(class AI::TossAttack const &);

    // RVA: 0x1BC | Ordinal: 445
        void TossAttack(void);

    // RVA: 0x6D5 | Ordinal: 1750
        void clone(void) const;

    // RVA: 0x747 | Ordinal: 1864
        void create(void);

    // RVA: 0x80B | Ordinal: 2060
        void getCategory(void) const;

    // RVA: 0x8C1 | Ordinal: 2242
        void getName(void) const;

    // RVA: 0xA46 | Ordinal: 2631
        void load(class Lua::Config &);

    // RVA: 0xAFC | Ordinal: 2813
        void params(void) const;

    // RVA: 0x2C2 | Ordinal: 707
        void _TossAttack(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TOSSATTACK_HPP
