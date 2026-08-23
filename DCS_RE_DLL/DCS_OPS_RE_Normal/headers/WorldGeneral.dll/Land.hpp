#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Land
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Land
{
public:

    // RVA: 0x106 | Ordinal: 263
        void Land(class AI::Land &&);

    // RVA: 0x107 | Ordinal: 264
        void Land(class AI::Land const &);

    // RVA: 0x108 | Ordinal: 265
        void Land(void);

    // RVA: 0x6B4 | Ordinal: 1717
        void clone(void) const;

    // RVA: 0x723 | Ordinal: 1828
        void create(void);

    // RVA: 0x7FE | Ordinal: 2047
        void getCategory(void) const;

    // RVA: 0x89F | Ordinal: 2208
        void getName(void) const;

    // RVA: 0xA21 | Ordinal: 2594
        void load(class Lua::Config &);

    // RVA: 0xAE5 | Ordinal: 2790
        void params(void) const;

    // RVA: 0x281 | Ordinal: 642
        void _Land(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_LAND_HPP
