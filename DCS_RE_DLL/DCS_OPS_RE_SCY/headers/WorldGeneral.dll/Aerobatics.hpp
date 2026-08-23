#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Aerobatics
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Aerobatics
{
public:

    // RVA: 0x25 | Ordinal: 38
        void Aerobatics(class AI::Aerobatics &&);

    // RVA: 0x26 | Ordinal: 39
        void Aerobatics(class AI::Aerobatics const &);

    // RVA: 0x27 | Ordinal: 40
        void Aerobatics(void);

    // RVA: 0x684 | Ordinal: 1669
        void clone(void) const;

    // RVA: 0x6F1 | Ordinal: 1778
        void create(void);

    // RVA: 0x7D7 | Ordinal: 2008
        void getCategory(void) const;

    // RVA: 0x870 | Ordinal: 2161
        void getName(void) const;

    // RVA: 0x9EF | Ordinal: 2544
        void load(class Lua::Config &);

    // RVA: 0xABB | Ordinal: 2748
        void params(void) const;

    // RVA: 0x234 | Ordinal: 565
        void _Aerobatics(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_AEROBATICS_HPP
