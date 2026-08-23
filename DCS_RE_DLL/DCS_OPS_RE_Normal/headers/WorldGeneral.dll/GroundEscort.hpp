#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: GroundEscort
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class GroundEscort
{
public:

    // RVA: 0xDE | Ordinal: 223
        void GroundEscort(class AI::GroundEscort &&);

    // RVA: 0xDF | Ordinal: 224
        void GroundEscort(class AI::GroundEscort const &);

    // RVA: 0xE0 | Ordinal: 225
        void GroundEscort(void);

    // RVA: 0x6B2 | Ordinal: 1715
        void clone(void) const;

    // RVA: 0x71F | Ordinal: 1824
        void create(void);

    // RVA: 0x7FC | Ordinal: 2045
        void getCategory(void) const;

    // RVA: 0x89D | Ordinal: 2206
        void getName(void) const;

    // RVA: 0xA1F | Ordinal: 2592
        void load(class Lua::Config &);

    // RVA: 0xAE3 | Ordinal: 2788
        void params(void) const;

    // RVA: 0x273 | Ordinal: 628
        void _GroundEscort(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_GROUNDESCORT_HPP
