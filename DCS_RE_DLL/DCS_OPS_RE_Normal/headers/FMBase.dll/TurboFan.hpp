#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: TurboFan
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class TurboFan
{
public:

    // RVA: 0x159 | Ordinal: 346
        void TurboFan(class EagleFM::TurboFan const &);

    // RVA: 0x15A | Ordinal: 347
        void TurboFan(class EagleFM::DynamicBody *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x3F3 | Ordinal: 1012
        void calcComprBleedAMF(double, double);

    // RVA: 0x400 | Ordinal: 1025
        void calcFanAirFlow(double, double &, double &, double &, double &, double &, double &, double, double);

    // RVA: 0x401 | Ordinal: 1026
        void calcFanBleedAMF(double, double);

    // RVA: 0x402 | Ordinal: 1027
        void calcFanMoment(void);

    // RVA: 0x40D | Ordinal: 1038
        void calcFuelHeat(void) const;

    // RVA: 0x415 | Ordinal: 1046
        void calcGG_Moment(void);

    // RVA: 0x427 | Ordinal: 1064
        void calcOwnMoment(void);

    // RVA: 0x43B | Ordinal: 1084
        void calcTurbinesAndNozzleGasFlow(struct EagleFM::AirFlow const &, double &, double &, bool);

    // RVA: 0x49C | Ordinal: 1181
        void doSimulate(void);

    // RVA: 0x517 | Ordinal: 1304
        void getCoreThrustPos_l(void) const;

    // RVA: 0x518 | Ordinal: 1305
        void getCoreThrust_l(void) const;

    // RVA: 0x519 | Ordinal: 1306
        void getCoreTurbinePower(void) const;

    // RVA: 0x552 | Ordinal: 1363
        void getFanOmega(void) const;

    // RVA: 0x555 | Ordinal: 1366
        void getFanRotationPhase(void) const;

    // RVA: 0x556 | Ordinal: 1367
        void getFanThrustPos_l(void) const;

    // RVA: 0x557 | Ordinal: 1368
        void getFanThrust_l(void) const;

    // RVA: 0x558 | Ordinal: 1369
        void getFanTurbinePower(void) const;

    // RVA: 0x59A | Ordinal: 1435
        void getInlet(void);

    // RVA: 0x5A3 | Ordinal: 1444
        void getJetFlowSpeed(void) const;

    // RVA: 0x5F6 | Ordinal: 1527
        void getParam(int) const;

    // RVA: 0x64C | Ordinal: 1613
        void getRelativeFanRPM(void) const;

    // RVA: 0x6AD | Ordinal: 1710
        void getTemperatureH(void) const;

    // RVA: 0x1E7 | Ordinal: 488
        void _TurboFan(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_TURBOFAN_HPP
