#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Tanker
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Tanker
{
public:

    // RVA: 0x19D | Ordinal: 414
        void Tanker(class AI::Tanker &&);

    // RVA: 0x19E | Ordinal: 415
        void Tanker(class AI::Tanker const &);

    // RVA: 0x19F | Ordinal: 416
        void Tanker(void);

    // RVA: 0x6D4 | Ordinal: 1749
        void clone(void) const;

    // RVA: 0x746 | Ordinal: 1863
        void create(void);

    // RVA: 0x809 | Ordinal: 2058
        void getCategory(void) const;

    // RVA: 0x8C0 | Ordinal: 2241
        void getName(void) const;

    // RVA: 0xA44 | Ordinal: 2629
        void load(class Lua::Config &);

    // RVA: 0x2B7 | Ordinal: 696
        void _Tanker(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_TANKER_HPP
