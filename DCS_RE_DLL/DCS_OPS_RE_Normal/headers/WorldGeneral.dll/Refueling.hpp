#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Refueling
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Refueling
{
public:

    // RVA: 0x147 | Ordinal: 328
        void Refueling(class AI::Refueling &&);

    // RVA: 0x148 | Ordinal: 329
        void Refueling(class AI::Refueling const &);

    // RVA: 0x149 | Ordinal: 330
        void Refueling(void);

    // RVA: 0x6BE | Ordinal: 1727
        void clone(void) const;

    // RVA: 0x72F | Ordinal: 1840
        void create(void);

    // RVA: 0x805 | Ordinal: 2054
        void getCategory(void) const;

    // RVA: 0x8AA | Ordinal: 2219
        void getName(void) const;

    // RVA: 0xA2D | Ordinal: 2606
        void load(class Lua::Config &);

    // RVA: 0x29B | Ordinal: 668
        void _Refueling(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_REFUELING_HPP
