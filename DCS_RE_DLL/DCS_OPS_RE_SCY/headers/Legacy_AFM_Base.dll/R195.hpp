#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: R195
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class R195
{
public:

    // RVA: 0x367 | Ordinal: 872
        void Construct(void);

    // RVA: 0x3C9 | Ordinal: 970
        void Create(void);

    // RVA: 0x424 | Ordinal: 1061
        void EngineFireOff(void);

    // RVA: 0x425 | Ordinal: 1062
        void EngineFireOn(void);

    // RVA: 0x43E | Ordinal: 1087
        void InitInTheFlight(double);

    // RVA: 0x448 | Ordinal: 1097
        void InitOnTheParking(void);

    // RVA: 0x44E | Ordinal: 1103
        void InitOnTheRunway(void);

    // RVA: 0x451 | Ordinal: 1106
        void InitParameters(double, double);

    // RVA: 0x453 | Ordinal: 1108
        void InitStatus(void);

    // RVA: 0x4B9 | Ordinal: 1210
        void ModeControl(double, double, int *, double *);

    // RVA: 0xA2 | Ordinal: 163
        void R195(class AFM::R195 &&);

    // RVA: 0xA3 | Ordinal: 164
        void R195(class AFM::R195 const &);

    // RVA: 0xA4 | Ordinal: 165
        void R195(void);

    // RVA: 0x4EB | Ordinal: 1260
        void Simulation(double);

    // RVA: 0x535 | Ordinal: 1334
        void calcFuelConsumption(int, double, double);

    // RVA: 0x536 | Ordinal: 1335
        void calcInputAirParameters(void);

    // RVA: 0x53C | Ordinal: 1341
        void calcMachFuelConsumptionFactor(double *);

    // RVA: 0x542 | Ordinal: 1347
        void calcMinRPMpercentage(double *);

    // RVA: 0x548 | Ordinal: 1353
        void calcOverTemperatureAfterTurbine(double *);

    // RVA: 0x54B | Ordinal: 1356
        void calcPressureAndMachThrustFactor(double *);

    // RVA: 0x54F | Ordinal: 1360
        void calcRelativeRPMFuelConsumptionFactor(double, double *);

    // RVA: 0x550 | Ordinal: 1361
        void calcRelativeRPMThrustFactor(double, double *);

    // RVA: 0x560 | Ordinal: 1377
        void calcThrust(int, double, double, double);

    // RVA: 0x561 | Ordinal: 1378
        void calcTurboCompressorMoment(double, double, double *);

    // RVA: 0x59C | Ordinal: 1437
        void getEngineFireFlag(int *);

    // RVA: 0x59D | Ordinal: 1438
        void getEngineFireTime(double *);

    // RVA: 0x616 | Ordinal: 1559
        void getIPointerJetEngine(class AFM::JetEngine **);

    // RVA: 0x754 | Ordinal: 1877
        void getTurboCompressorFrictionMoment(double *);

    // RVA: 0x8DB | Ordinal: 2268
        void setTurboCompressorFrictionMoment(double);

    // RVA: 0x138 | Ordinal: 313
        void _R195(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_R195_HPP
