#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PrattWhitneyR2800
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class PrattWhitneyR2800
{
public:

    // RVA: 0x29F | Ordinal: 672
        void AMF_calculator(void);

    // RVA: 0x5E | Ordinal: 95
        void PrattWhitneyR2800(class EagleFM::dcswwii::propulsion::PrattWhitneyR2800 const &);

    // RVA: 0x5F | Ordinal: 96
        void PrattWhitneyR2800(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::Elec::Consumer *, double);

    // RVA: 0x2D1 | Ordinal: 722
        void after_Inlet_calc(void);

    // RVA: 0x34A | Ordinal: 843
        void doSimulate(void);

    // RVA: 0x399 | Ordinal: 922
        void getParam(int) const;

    // RVA: 0x3BE | Ordinal: 959
        void getTSC_NozzleP(void) const;

    // RVA: 0x3C0 | Ordinal: 961
        void getTSC_RPM(void) const;

    // RVA: 0x3C2 | Ordinal: 963
        void getTSC_Tgas(void) const;

    // RVA: 0x3C4 | Ordinal: 965
        void getTSC_TurbinePi(void) const;

    // RVA: 0x3D7 | Ordinal: 984
        void getWasteGateState(void) const;

    // RVA: 0x3F1 | Ordinal: 1010
        void initAirStart(void);

    // RVA: 0x3F9 | Ordinal: 1018
        void initColdStart(void);

    // RVA: 0x401 | Ordinal: 1026
        void initHotStart(void);

    // RVA: 0x40B | Ordinal: 1036
        void initPreStart(void);

    // RVA: 0x508 | Ordinal: 1289
        void repair(void);

    // RVA: 0x589 | Ordinal: 1418
        void setSuperchargerLever(float);

    // RVA: 0x591 | Ordinal: 1426
        void setThrottleLever(double);

    // RVA: 0x605 | Ordinal: 1542
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x10B | Ordinal: 268
        void _PrattWhitneyR2800(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PRATTWHITNEYR2800_HPP
