#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: RouteFinalAction
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class RouteFinalAction
{
public:

    // RVA: 0x152 | Ordinal: 339
        void RouteFinalAction(class AI::RouteFinalAction &&);

    // RVA: 0x153 | Ordinal: 340
        void RouteFinalAction(class AI::RouteFinalAction const &);

    // RVA: 0x154 | Ordinal: 341
        void RouteFinalAction(void);

    // RVA: 0x6C1 | Ordinal: 1730
        void clone(void) const;

    // RVA: 0x732 | Ordinal: 1843
        void create(void);

    // RVA: 0x806 | Ordinal: 2055
        void getCategory(void) const;

    // RVA: 0x8AD | Ordinal: 2222
        void getName(void) const;

    // RVA: 0xA31 | Ordinal: 2610
        void load(class Lua::Config &);

    // RVA: 0x29F | Ordinal: 672
        void _RouteFinalAction(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ROUTEFINALACTION_HPP
