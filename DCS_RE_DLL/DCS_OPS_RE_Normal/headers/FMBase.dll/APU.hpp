#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: APU
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class APU
{
public:

    // RVA: 0x3 | Ordinal: 4
        void APU(class EagleFM::APU const &);

    // RVA: 0x4 | Ordinal: 5
        void APU(class EagleFM::DynamicBody *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x413 | Ordinal: 1044
        void calcGG_Moment(void);

    // RVA: 0x485 | Ordinal: 1158
        void doSimulate(void);

    // RVA: 0x4EB | Ordinal: 1260
        void getBlowerFlow(double &, double &) const;

    // RVA: 0x5F3 | Ordinal: 1524
        void getParam(int) const;

    // RVA: 0x814 | Ordinal: 2069
        void setBleedAirMassFlow(double);

    // RVA: 0x176 | Ordinal: 375
        void _APU(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_APU_HPP
