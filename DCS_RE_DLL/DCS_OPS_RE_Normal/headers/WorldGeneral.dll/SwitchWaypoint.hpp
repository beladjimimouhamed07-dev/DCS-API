#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SwitchWaypoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SwitchWaypoint
{
public:

    // RVA: 0x19A | Ordinal: 411
        void SwitchWaypoint(class AI::SwitchWaypoint &&);

    // RVA: 0x19B | Ordinal: 412
        void SwitchWaypoint(class AI::SwitchWaypoint const &);

    // RVA: 0x19C | Ordinal: 413
        void SwitchWaypoint(void);

    // RVA: 0x6D3 | Ordinal: 1748
        void clone(void) const;

    // RVA: 0x745 | Ordinal: 1862
        void create(void);

    // RVA: 0x795 | Ordinal: 1942
        void exec(class AI::Controller *) const;

    // RVA: 0x8BF | Ordinal: 2240
        void getName(void) const;

    // RVA: 0xA43 | Ordinal: 2628
        void load(class Lua::Config &);

    // RVA: 0xAFA | Ordinal: 2811
        void params(void) const;

    // RVA: 0x2B6 | Ordinal: 695
        void _SwitchWaypoint(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SWITCHWAYPOINT_HPP
