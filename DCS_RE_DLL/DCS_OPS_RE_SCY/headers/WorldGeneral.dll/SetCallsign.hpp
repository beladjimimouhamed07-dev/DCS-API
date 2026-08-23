#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: SetCallsign
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class SetCallsign
{
public:

    // RVA: 0x167 | Ordinal: 360
        void SetCallsign(class AI::SetCallsign &&);

    // RVA: 0x168 | Ordinal: 361
        void SetCallsign(class AI::SetCallsign const &);

    // RVA: 0x169 | Ordinal: 362
        void SetCallsign(void);

    // RVA: 0x6C5 | Ordinal: 1734
        void clone(void) const;

    // RVA: 0x736 | Ordinal: 1847
        void create(void);

    // RVA: 0x8B1 | Ordinal: 2226
        void getName(void) const;

    // RVA: 0xA35 | Ordinal: 2614
        void load(class Lua::Config &);

    // RVA: 0xAEE | Ordinal: 2799
        void params(void) const;

    // RVA: 0x2A5 | Ordinal: 678
        void _SetCallsign(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_SETCALLSIGN_HPP
