#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PrattWhitneyR2800_10
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class PrattWhitneyR2800_10
{
public:

    // RVA: 0x2A0 | Ordinal: 673
        void AMF_calculator(void);

    // RVA: 0x60 | Ordinal: 97
        void PrattWhitneyR2800_10(class EagleFM::dcswwii::propulsion::PrattWhitneyR2800_10 const &);

    // RVA: 0x61 | Ordinal: 98
        void PrattWhitneyR2800_10(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::Elec::Consumer *, double);

    // RVA: 0x2D2 | Ordinal: 723
        void after_Inlet_calc(void);

    // RVA: 0x34B | Ordinal: 844
        void doSimulate(void);

    // RVA: 0x39A | Ordinal: 923
        void getParam(int) const;

    // RVA: 0x3BF | Ordinal: 960
        void getTSC_NozzleP(void) const;

    // RVA: 0x3C1 | Ordinal: 962
        void getTSC_RPM(void) const;

    // RVA: 0x3C3 | Ordinal: 964
        void getTSC_Tgas(void) const;

    // RVA: 0x3C5 | Ordinal: 966
        void getTSC_TurbinePi(void) const;

    // RVA: 0x3D8 | Ordinal: 985
        void getWasteGateState(void) const;

    // RVA: 0x3F2 | Ordinal: 1011
        void initAirStart(void);

    // RVA: 0x3FA | Ordinal: 1019
        void initColdStart(void);

    // RVA: 0x402 | Ordinal: 1027
        void initHotStart(void);

    // RVA: 0x40C | Ordinal: 1037
        void initPreStart(void);

    // RVA: 0x509 | Ordinal: 1290
        void repair(void);

    // RVA: 0x58A | Ordinal: 1419
        void setSuperchargerLever(float);

    // RVA: 0x592 | Ordinal: 1427
        void setThrottleLever(double);

    // RVA: 0x606 | Ordinal: 1543
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x10C | Ordinal: 269
        void _PrattWhitneyR2800_10(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PRATTWHITNEYR2800_10_HPP
