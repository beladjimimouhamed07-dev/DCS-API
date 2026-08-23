#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EngageTargetsInZone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EngageTargetsInZone
{
public:

    // RVA: 0xA9 | Ordinal: 170
        void EngageTargetsInZone(class AI::EngageTargetsInZone &&);

    // RVA: 0xAA | Ordinal: 171
        void EngageTargetsInZone(class AI::EngageTargetsInZone const &);

    // RVA: 0xAB | Ordinal: 172
        void EngageTargetsInZone(void);

    // RVA: 0x6A5 | Ordinal: 1702
        void clone(void) const;

    // RVA: 0x712 | Ordinal: 1811
        void create(void);

    // RVA: 0x7ED | Ordinal: 2030
        void getCategory(void) const;

    // RVA: 0x890 | Ordinal: 2193
        void getName(void) const;

    // RVA: 0xA11 | Ordinal: 2578
        void load(class Lua::Config &);

    // RVA: 0xAD8 | Ordinal: 2777
        void params(void) const;

    // RVA: 0x262 | Ordinal: 611
        void _EngageTargetsInZone(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ENGAGETARGETSINZONE_HPP
