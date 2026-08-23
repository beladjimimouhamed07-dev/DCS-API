#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetUnlimitedFuel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetUnlimitedFuel
{
public:

    // RVA: 0x179 | Ordinal: 378
        void SetUnlimitedFuel(class AI::SetUnlimitedFuel &&);

    // RVA: 0x17A | Ordinal: 379
        void SetUnlimitedFuel(class AI::SetUnlimitedFuel const &);

    // RVA: 0x17B | Ordinal: 380
        void SetUnlimitedFuel(void);

    // RVA: 0x6CB | Ordinal: 1740
        void clone(void) const;

    // RVA: 0x73C | Ordinal: 1853
        void create(void);

    // RVA: 0x8B7 | Ordinal: 2232
        void getName(void) const;

    // RVA: 0xA3B | Ordinal: 2620
        void load(class Lua::Config &);

    // RVA: 0xAF4 | Ordinal: 2805
        void params(void) const;

    // RVA: 0x2AB | Ordinal: 684
        void _SetUnlimitedFuel(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETUNLIMITEDFUEL_HPP
