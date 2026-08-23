#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateLink4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateLink4
{
public:

    // RVA: 0x1F | Ordinal: 32
        void ActivateLink4(class AI::ActivateLink4 &&);

    // RVA: 0x20 | Ordinal: 33
        void ActivateLink4(class AI::ActivateLink4 const &);

    // RVA: 0x21 | Ordinal: 34
        void ActivateLink4(void);

    // RVA: 0x682 | Ordinal: 1667
        void clone(void) const;

    // RVA: 0x6EF | Ordinal: 1776
        void create(void);

    // RVA: 0x86E | Ordinal: 2159
        void getName(void) const;

    // RVA: 0x9ED | Ordinal: 2542
        void load(class Lua::Config &);

    // RVA: 0xAB9 | Ordinal: 2746
        void params(void) const;

    // RVA: 0x232 | Ordinal: 563
        void _ActivateLink4(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATELINK4_HPP
