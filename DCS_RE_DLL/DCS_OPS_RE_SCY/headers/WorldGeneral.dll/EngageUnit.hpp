#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EngageUnit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EngageUnit
{
public:

    // RVA: 0xAC | Ordinal: 173
        void EngageUnit(class AI::EngageUnit &&);

    // RVA: 0xAD | Ordinal: 174
        void EngageUnit(class AI::EngageUnit const &);

    // RVA: 0xAE | Ordinal: 175
        void EngageUnit(void);

    // RVA: 0x6A6 | Ordinal: 1703
        void clone(void) const;

    // RVA: 0x713 | Ordinal: 1812
        void create(void);

    // RVA: 0x7EE | Ordinal: 2031
        void getCategory(void) const;

    // RVA: 0x891 | Ordinal: 2194
        void getName(void) const;

    // RVA: 0xA12 | Ordinal: 2579
        void load(class Lua::Config &);

    // RVA: 0xAD9 | Ordinal: 2778
        void params(void) const;

    // RVA: 0x263 | Ordinal: 612
        void _EngageUnit(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ENGAGEUNIT_HPP
