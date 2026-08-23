#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: BrakeChute
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class BrakeChute
{
public:

    // RVA: 0x38 | Ordinal: 57
        void BrakeChute(class EagleFM::BrakeChute const &);

    // RVA: 0x39 | Ordinal: 58
        void BrakeChute(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *, class EagleFM::EffectManager *);

    // RVA: 0x489 | Ordinal: 1162
        void doSimulate(void);

    // RVA: 0x4D6 | Ordinal: 1239
        void getAzimuth(void) const;

    // RVA: 0x547 | Ordinal: 1352
        void getElevation(void) const;

    // RVA: 0x585 | Ordinal: 1414
        void getHorDev(void) const;

    // RVA: 0x600 | Ordinal: 1537
        void getPhase(void) const;

    // RVA: 0x6CF | Ordinal: 1744
        void getVertDev(void) const;

    // RVA: 0x7C4 | Ordinal: 1989
        void repair(void);

    // RVA: 0x7DD | Ordinal: 2014
        void reset(void);

    // RVA: 0x18A | Ordinal: 395
        void _BrakeChute(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BRAKECHUTE_HPP
