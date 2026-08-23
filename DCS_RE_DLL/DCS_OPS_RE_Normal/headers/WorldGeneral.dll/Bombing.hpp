#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Bombing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Bombing
{
public:

    // RVA: 0x4C | Ordinal: 77
        void Bombing(class AI::Bombing &&);

    // RVA: 0x4D | Ordinal: 78
        void Bombing(class AI::Bombing const &);

    // RVA: 0x4E | Ordinal: 79
        void Bombing(void);

    // RVA: 0x68C | Ordinal: 1677
        void clone(void) const;

    // RVA: 0x6F9 | Ordinal: 1786
        void create(void);

    // RVA: 0x7DF | Ordinal: 2016
        void getCategory(void) const;

    // RVA: 0x878 | Ordinal: 2169
        void getName(void) const;

    // RVA: 0x9F8 | Ordinal: 2553
        void load(class Lua::Config &);

    // RVA: 0xAC2 | Ordinal: 2755
        void params(void) const;

    // RVA: 0x242 | Ordinal: 579
        void _Bombing(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_BOMBING_HPP
