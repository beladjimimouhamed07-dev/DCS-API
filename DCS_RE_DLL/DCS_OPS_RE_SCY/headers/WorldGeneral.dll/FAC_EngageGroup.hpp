#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: FAC_EngageGroup
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class FAC_EngageGroup
{
public:

    // RVA: 0xBE | Ordinal: 191
        void FAC_EngageGroup(class AI::FAC_EngageGroup &&);

    // RVA: 0xBF | Ordinal: 192
        void FAC_EngageGroup(class AI::FAC_EngageGroup const &);

    // RVA: 0xC0 | Ordinal: 193
        void FAC_EngageGroup(void);

    // RVA: 0x6AC | Ordinal: 1709
        void clone(void) const;

    // RVA: 0x719 | Ordinal: 1818
        void create(void);

    // RVA: 0x7F4 | Ordinal: 2037
        void getCategory(void) const;

    // RVA: 0x897 | Ordinal: 2200
        void getName(void) const;

    // RVA: 0xA18 | Ordinal: 2585
        void load(class Lua::Config &);

    // RVA: 0xADD | Ordinal: 2782
        void params(void) const;

    // RVA: 0x269 | Ordinal: 618
        void _FAC_EngageGroup(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_FAC_ENGAGEGROUP_HPP
