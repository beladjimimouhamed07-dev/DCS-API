#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetInvisible
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetInvisible
{
public:

    // RVA: 0x173 | Ordinal: 372
        void SetInvisible(class AI::SetInvisible &&);

    // RVA: 0x174 | Ordinal: 373
        void SetInvisible(class AI::SetInvisible const &);

    // RVA: 0x175 | Ordinal: 374
        void SetInvisible(void);

    // RVA: 0x6C9 | Ordinal: 1738
        void clone(void) const;

    // RVA: 0x73A | Ordinal: 1851
        void create(void);

    // RVA: 0x8B5 | Ordinal: 2230
        void getName(void) const;

    // RVA: 0xA39 | Ordinal: 2618
        void load(class Lua::Config &);

    // RVA: 0xAF2 | Ordinal: 2803
        void params(void) const;

    // RVA: 0x2A9 | Ordinal: 682
        void _SetInvisible(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETINVISIBLE_HPP
