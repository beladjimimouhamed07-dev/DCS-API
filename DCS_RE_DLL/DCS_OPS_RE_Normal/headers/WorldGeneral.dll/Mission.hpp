#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Mission
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Mission
{
public:

    // RVA: 0x115 | Ordinal: 278
        void Mission(class AI::Mission const &);

    // RVA: 0x116 | Ordinal: 279
        void Mission(void);

    // RVA: 0x6B6 | Ordinal: 1719
        void clone(void) const;

    // RVA: 0x727 | Ordinal: 1832
        void create(void);

    // RVA: 0x8A1 | Ordinal: 2210
        void getName(void) const;

    // RVA: 0xA23 | Ordinal: 2596
        void load(class Lua::Config &);

    // RVA: 0x287 | Ordinal: 648
        void _Mission(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_MISSION_HPP
