#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: StopTransmission
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AI {

class StopTransmission
{
public:

    // RVA: 0x18B | Ordinal: 396
        void StopTransmission(class AI::StopTransmission &&);

    // RVA: 0x18C | Ordinal: 397
        void StopTransmission(class AI::StopTransmission const &);

    // RVA: 0x18D | Ordinal: 398
        void StopTransmission(void);

    // RVA: 0x6D0 | Ordinal: 1745
        void clone(void) const;

    // RVA: 0x742 | Ordinal: 1859
        void create(void);

    // RVA: 0x8BC | Ordinal: 2237
        void getName(void) const;

    // RVA: 0xA40 | Ordinal: 2625
        void load(class Lua::Config &);

    // RVA: 0xAF7 | Ordinal: 2808
        void params(void) const;

    // RVA: 0x2B1 | Ordinal: 690
        void _StopTransmission(void);
};

} // namespace AI

// DCS_OPS_RE_WORLDGENERAL.DLL_STOPTRANSMISSION_HPP
