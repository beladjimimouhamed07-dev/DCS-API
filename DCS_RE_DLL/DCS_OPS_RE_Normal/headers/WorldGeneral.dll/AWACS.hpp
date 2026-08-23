#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: AWACS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class AWACS
{
public:

    // RVA: 0xB | Ordinal: 12
        void AWACS(class AI::AWACS &&);

    // RVA: 0xC | Ordinal: 13
        void AWACS(class AI::AWACS const &);

    // RVA: 0xD | Ordinal: 14
        void AWACS(void);

    // RVA: 0x67C | Ordinal: 1661
        void clone(void) const;

    // RVA: 0x6E9 | Ordinal: 1770
        void create(void);

    // RVA: 0x7D6 | Ordinal: 2007
        void getCategory(void) const;

    // RVA: 0x868 | Ordinal: 2153
        void getName(void) const;

    // RVA: 0x9E7 | Ordinal: 2536
        void load(class Lua::Config &);

    // RVA: 0x22B | Ordinal: 556
        void _AWACS(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_AWACS_HPP
