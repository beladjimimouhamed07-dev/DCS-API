#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ParatroopersDrop
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ParatroopersDrop
{
public:

    // RVA: 0x13D | Ordinal: 318
        void ParatroopersDrop(class AI::ParatroopersDrop &&);

    // RVA: 0x13E | Ordinal: 319
        void ParatroopersDrop(class AI::ParatroopersDrop const &);

    // RVA: 0x13F | Ordinal: 320
        void ParatroopersDrop(void);

    // RVA: 0x6BC | Ordinal: 1725
        void clone(void) const;

    // RVA: 0x72D | Ordinal: 1838
        void create(void);

    // RVA: 0x803 | Ordinal: 2052
        void getCategory(void) const;

    // RVA: 0x8A8 | Ordinal: 2217
        void getName(void) const;

    // RVA: 0xA2B | Ordinal: 2604
        void load(class Lua::Config &);

    // RVA: 0x297 | Ordinal: 664
        void _ParatroopersDrop(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_PARATROOPERSDROP_HPP
