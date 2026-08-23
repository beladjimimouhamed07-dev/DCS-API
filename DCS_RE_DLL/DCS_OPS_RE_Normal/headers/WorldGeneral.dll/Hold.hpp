#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Hold
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Hold
{
public:

    // RVA: 0xE9 | Ordinal: 234
        void Hold(class AI::Hold &&);

    // RVA: 0xEA | Ordinal: 235
        void Hold(class AI::Hold const &);

    // RVA: 0xEB | Ordinal: 236
        void Hold(void);

    // RVA: 0x6B3 | Ordinal: 1716
        void clone(void) const;

    // RVA: 0x720 | Ordinal: 1825
        void create(void);

    // RVA: 0x7FD | Ordinal: 2046
        void getCategory(void) const;

    // RVA: 0x89E | Ordinal: 2207
        void getName(void) const;

    // RVA: 0xA20 | Ordinal: 2593
        void load(class Lua::Config &);

    // RVA: 0xAE4 | Ordinal: 2789
        void params(void) const;

    // RVA: 0x277 | Ordinal: 632
        void _Hold(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_HOLD_HPP
