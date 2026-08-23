#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EWR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EWR
{
public:

    // RVA: 0x9A | Ordinal: 155
        void EWR(class AI::EWR &&);

    // RVA: 0x9B | Ordinal: 156
        void EWR(class AI::EWR const &);

    // RVA: 0x9C | Ordinal: 157
        void EWR(void);

    // RVA: 0x6A0 | Ordinal: 1697
        void clone(void) const;

    // RVA: 0x70D | Ordinal: 1806
        void create(void);

    // RVA: 0x7E8 | Ordinal: 2025
        void getCategory(void) const;

    // RVA: 0x88B | Ordinal: 2188
        void getName(void) const;

    // RVA: 0xA0C | Ordinal: 2573
        void load(class Lua::Config &);

    // RVA: 0x25D | Ordinal: 606
        void _EWR(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_EWR_HPP
