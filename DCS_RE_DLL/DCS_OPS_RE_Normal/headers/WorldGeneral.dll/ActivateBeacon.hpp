#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: ActivateBeacon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class ActivateBeacon
{
public:

    // RVA: 0x13 | Ordinal: 20
        void ActivateBeacon(class AI::ActivateBeacon &&);

    // RVA: 0x14 | Ordinal: 21
        void ActivateBeacon(class AI::ActivateBeacon const &);

    // RVA: 0x15 | Ordinal: 22
        void ActivateBeacon(void);

    // RVA: 0x67E | Ordinal: 1663
        void clone(void) const;

    // RVA: 0x6EB | Ordinal: 1772
        void create(void);

    // RVA: 0x86A | Ordinal: 2155
        void getName(void) const;

    // RVA: 0x9E9 | Ordinal: 2538
        void load(class Lua::Config &);

    // RVA: 0xAB5 | Ordinal: 2742
        void params(void) const;

    // RVA: 0x22E | Ordinal: 559
        void _ActivateBeacon(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_ACTIVATEBEACON_HPP
