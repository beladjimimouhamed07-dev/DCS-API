#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Orbit
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Orbit
{
public:

    // RVA: 0x138 | Ordinal: 313
        void Orbit(class AI::Orbit &&);

    // RVA: 0x139 | Ordinal: 314
        void Orbit(class AI::Orbit const &);

    // RVA: 0x13A | Ordinal: 315
        void Orbit(void);

    // RVA: 0x6BB | Ordinal: 1724
        void clone(void) const;

    // RVA: 0x72C | Ordinal: 1837
        void create(void);

    // RVA: 0x802 | Ordinal: 2051
        void getCategory(void) const;

    // RVA: 0x8A7 | Ordinal: 2216
        void getName(void) const;

    // RVA: 0xA29 | Ordinal: 2602
        void load(class Lua::Config &);

    // RVA: 0xAE8 | Ordinal: 2793
        void params(void) const;

    // RVA: 0x295 | Ordinal: 662
        void _Orbit(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ORBIT_HPP
