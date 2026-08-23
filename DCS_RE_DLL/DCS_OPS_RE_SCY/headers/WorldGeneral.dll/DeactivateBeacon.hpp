#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: DeactivateBeacon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class DeactivateBeacon
{
public:

    // RVA: 0x7B | Ordinal: 124
        void DeactivateBeacon(class AI::DeactivateBeacon &&);

    // RVA: 0x7C | Ordinal: 125
        void DeactivateBeacon(class AI::DeactivateBeacon const &);

    // RVA: 0x7D | Ordinal: 126
        void DeactivateBeacon(void);

    // RVA: 0x697 | Ordinal: 1688
        void clone(void) const;

    // RVA: 0x704 | Ordinal: 1797
        void create(void);

    // RVA: 0x882 | Ordinal: 2179
        void getName(void) const;

    // RVA: 0xA03 | Ordinal: 2564
        void load(class Lua::Config &);

    // RVA: 0xACB | Ordinal: 2764
        void params(void) const;

    // RVA: 0x253 | Ordinal: 596
        void _DeactivateBeacon(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_DEACTIVATEBEACON_HPP
