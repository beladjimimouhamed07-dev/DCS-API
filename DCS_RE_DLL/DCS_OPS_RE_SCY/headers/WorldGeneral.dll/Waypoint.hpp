#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Waypoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class Waypoint
{
public:

    // RVA: 0x1D0 | Ordinal: 465
        void Waypoint(struct AI::Waypoint &&);

    // RVA: 0x1D1 | Ordinal: 466
        void Waypoint(struct AI::Waypoint const &);

    // RVA: 0x1D2 | Ordinal: 467
        void Waypoint(void);

    // RVA: 0xA49 | Ordinal: 2634
        void load(bool, class Lua::Config &);

    // RVA: 0x2C9 | Ordinal: 714
        void _Waypoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_WAYPOINT_HPP
