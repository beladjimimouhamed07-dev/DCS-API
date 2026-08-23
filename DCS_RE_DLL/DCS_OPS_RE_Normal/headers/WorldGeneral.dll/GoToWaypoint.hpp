#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: GoToWaypoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class GoToWaypoint
{
public:

    // RVA: 0xDA | Ordinal: 219
        void GoToWaypoint(class AI::GoToWaypoint &&);

    // RVA: 0xDB | Ordinal: 220
        void GoToWaypoint(class AI::GoToWaypoint const &);

    // RVA: 0xDC | Ordinal: 221
        void GoToWaypoint(void);

    // RVA: 0x6B1 | Ordinal: 1714
        void clone(void) const;

    // RVA: 0x71E | Ordinal: 1823
        void create(void);

    // RVA: 0x7FB | Ordinal: 2044
        void getCategory(void) const;

    // RVA: 0x89C | Ordinal: 2205
        void getName(void) const;

    // RVA: 0xA1E | Ordinal: 2591
        void load(class Lua::Config &);

    // RVA: 0x272 | Ordinal: 627
        void _GoToWaypoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_GOTOWAYPOINT_HPP
