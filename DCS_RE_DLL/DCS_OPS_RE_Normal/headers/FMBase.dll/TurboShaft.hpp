#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: TurboShaft
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class TurboShaft
{
public:

    // RVA: 0x15B | Ordinal: 348
        void TurboShaft(class EagleFM::TurboShaft const &);

    // RVA: 0x15C | Ordinal: 349
        void TurboShaft(class EagleFM::DynamicBody *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x3F4 | Ordinal: 1013
        void calcComprBleedAMF(double, double);

    // RVA: 0x40E | Ordinal: 1039
        void calcFuelHeat(void) const;

    // RVA: 0x416 | Ordinal: 1047
        void calcGG_Moment(void);

    // RVA: 0x43C | Ordinal: 1085
        void calcTurbinesGasFlow(struct EagleFM::AirFlow const &, double &, double &, double);

    // RVA: 0x49D | Ordinal: 1182
        void doSimulate(void);

    // RVA: 0x57B | Ordinal: 1404
        void getGGT_Moment(void) const;

    // RVA: 0x59B | Ordinal: 1436
        void getInlet(void);

    // RVA: 0x5F7 | Ordinal: 1528
        void getParam(int) const;

    // RVA: 0x6C1 | Ordinal: 1730
        void getTurbineMOI(void) const;

    // RVA: 0x6C2 | Ordinal: 1731
        void getTurbineMoment(void) const;

    // RVA: 0x6C3 | Ordinal: 1732
        void getTurbineOmega(void) const;

    // RVA: 0x6C4 | Ordinal: 1733
        void getTurbineRPM(void) const;

    // RVA: 0x8B6 | Ordinal: 2231
        void setPT_RPM(double);

    // RVA: 0x1E8 | Ordinal: 489
        void _TurboShaft(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_TURBOSHAFT_HPP
