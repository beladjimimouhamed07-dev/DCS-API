#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: CarpetBombing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class CarpetBombing
{
public:

    // RVA: 0x5E | Ordinal: 95
        void CarpetBombing(class AI::CarpetBombing &&);

    // RVA: 0x5F | Ordinal: 96
        void CarpetBombing(class AI::CarpetBombing const &);

    // RVA: 0x60 | Ordinal: 97
        void CarpetBombing(void);

    // RVA: 0x692 | Ordinal: 1683
        void clone(void) const;

    // RVA: 0x6FF | Ordinal: 1792
        void create(void);

    // RVA: 0x7E5 | Ordinal: 2022
        void getCategory(void) const;

    // RVA: 0x87E | Ordinal: 2175
        void getName(void) const;

    // RVA: 0x9FE | Ordinal: 2559
        void load(class Lua::Config &);

    // RVA: 0xAC7 | Ordinal: 2760
        void params(void) const;

    // RVA: 0x248 | Ordinal: 585
        void _CarpetBombing(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_CARPETBOMBING_HPP
