#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DetachTrailer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DetachTrailer
{
public:

    // RVA: 0x8D | Ordinal: 142
        void DetachTrailer(class AI::DetachTrailer &&);

    // RVA: 0x8E | Ordinal: 143
        void DetachTrailer(class AI::DetachTrailer const &);

    // RVA: 0x8F | Ordinal: 144
        void DetachTrailer(void);

    // RVA: 0x69D | Ordinal: 1694
        void clone(void) const;

    // RVA: 0x70A | Ordinal: 1803
        void create(void);

    // RVA: 0x7E6 | Ordinal: 2023
        void getCategory(void) const;

    // RVA: 0x888 | Ordinal: 2185
        void getName(void) const;

    // RVA: 0xA09 | Ordinal: 2570
        void load(class Lua::Config &);

    // RVA: 0xAD1 | Ordinal: 2770
        void params(void) const;

    // RVA: 0x259 | Ordinal: 602
        void _DetachTrailer(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DETACHTRAILER_HPP
