#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FAC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FAC
{
public:

    // RVA: 0xB8 | Ordinal: 185
        void FAC(class AI::FAC &&);

    // RVA: 0xB9 | Ordinal: 186
        void FAC(class AI::FAC const &);

    // RVA: 0xBA | Ordinal: 187
        void FAC(void);

    // RVA: 0x6AA | Ordinal: 1707
        void clone(void) const;

    // RVA: 0x717 | Ordinal: 1816
        void create(void);

    // RVA: 0x7F2 | Ordinal: 2035
        void getCategory(void) const;

    // RVA: 0x895 | Ordinal: 2198
        void getName(void) const;

    // RVA: 0xA16 | Ordinal: 2583
        void load(class Lua::Config &);

    // RVA: 0xADB | Ordinal: 2780
        void params(void) const;

    // RVA: 0x267 | Ordinal: 616
        void _FAC(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FAC_HPP
