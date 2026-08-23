#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: EngageGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class EngageGroup
{
public:

    // RVA: 0xA3 | Ordinal: 164
        void EngageGroup(class AI::EngageGroup &&);

    // RVA: 0xA4 | Ordinal: 165
        void EngageGroup(class AI::EngageGroup const &);

    // RVA: 0xA5 | Ordinal: 166
        void EngageGroup(void);

    // RVA: 0x6A3 | Ordinal: 1700
        void clone(void) const;

    // RVA: 0x710 | Ordinal: 1809
        void create(void);

    // RVA: 0x7EB | Ordinal: 2028
        void getCategory(void) const;

    // RVA: 0x88E | Ordinal: 2191
        void getName(void) const;

    // RVA: 0xA0F | Ordinal: 2576
        void load(class Lua::Config &);

    // RVA: 0xAD6 | Ordinal: 2775
        void params(void) const;

    // RVA: 0x260 | Ordinal: 609
        void _EngageGroup(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ENGAGEGROUP_HPP
