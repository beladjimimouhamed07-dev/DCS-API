#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: PistonEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class PistonEngine
{
public:

    // RVA: 0x37E | Ordinal: 895
        void AMF_calculator(void);

    // RVA: 0x100 | Ordinal: 257
        void PistonEngine(class EagleFM::PistonEngine const &);

    // RVA: 0x101 | Ordinal: 258
        void PistonEngine(int, class EagleFM::AerodyneFM *, class EagleFM::DynamicBody *, class EagleFM::EffectManager *, class EagleFM::Propeller *, double);

    // RVA: 0x3CB | Ordinal: 972
        void after_Inlet_calc(void);

    // RVA: 0x3CC | Ordinal: 973
        void alpha_f(void) const;

    // RVA: 0x3FF | Ordinal: 1024
        void calcEngineAirMassFlow(double, double) const;

    // RVA: 0x40B | Ordinal: 1036
        void calcFuelFlow(void) const;

    // RVA: 0x417 | Ordinal: 1048
        void calcIgnitionK(double) const;

    // RVA: 0x41D | Ordinal: 1054
        void calcManifoldPressure(double, double, double);

    // RVA: 0x41E | Ordinal: 1055
        void calcManifoldTemperature(double, double, double);

    // RVA: 0x42E | Ordinal: 1071
        void calcShaftMoment(void);

    // RVA: 0x492 | Ordinal: 1171
        void doSimulate(void);

    // RVA: 0x4BD | Ordinal: 1214
        void getAirFlow(void) const;

    // RVA: 0x4EC | Ordinal: 1261
        void getBlowerPressure(void) const;

    // RVA: 0x4ED | Ordinal: 1262
        void getBlowerTemperature(void) const;

    // RVA: 0x532 | Ordinal: 1331
        void getDetonation(void) const;

    // RVA: 0x54E | Ordinal: 1359
        void getExhaustThrust(void) const;

    // RVA: 0x573 | Ordinal: 1396
        void getFuelFlow(void) const;

    // RVA: 0x583 | Ordinal: 1412
        void getHeatToOil(void) const;

    // RVA: 0x584 | Ordinal: 1413
        void getHeatToWater(void) const;

    // RVA: 0x5BF | Ordinal: 1472
        void getMainBearing(void) const;

    // RVA: 0x5C0 | Ordinal: 1473
        void getManifoldPressure(void) const;

    // RVA: 0x5C1 | Ordinal: 1474
        void getManifoldTemperature(void) const;

    // RVA: 0x5D9 | Ordinal: 1498
        void getNfrict(void) const;

    // RVA: 0x5F5 | Ordinal: 1526
        void getParam(int) const;

    // RVA: 0x61B | Ordinal: 1564
        void getPowerOverall(void) const;

    // RVA: 0x651 | Ordinal: 1618
        void getRelativeShaftRPM(void) const;

    // RVA: 0x680 | Ordinal: 1665
        void getShaftMOI(void) const;

    // RVA: 0x682 | Ordinal: 1667
        void getShaftOmega(void) const;

    // RVA: 0x684 | Ordinal: 1669
        void getShaftRPM(void) const;

    // RVA: 0x6AC | Ordinal: 1709
        void getTemperatureEquiv(void) const;

    // RVA: 0x709 | Ordinal: 1802
        void get_throttle(void) const;

    // RVA: 0x70A | Ordinal: 1803
        void increaseDestructionFrictionM(double);

    // RVA: 0x70D | Ordinal: 1806
        void indexifyFailureID(enum WorldGeneral::Failures) const;

    // RVA: 0x732 | Ordinal: 1843
        void initAirStart(void);

    // RVA: 0x73B | Ordinal: 1852
        void initColdStart(void);

    // RVA: 0x740 | Ordinal: 1857
        void initFailureProbability(enum WorldGeneral::Failures, double);

    // RVA: 0x747 | Ordinal: 1864
        void initHotStart(void);

    // RVA: 0x755 | Ordinal: 1878
        void initPreStart(void);

    // RVA: 0x77D | Ordinal: 1918
        void isDamaged(enum WorldGeneral::Failures) const;

    // RVA: 0x79B | Ordinal: 1948
        void nullifyFailureID(enum WorldGeneral::Failures) const;

    // RVA: 0x7A8 | Ordinal: 1961
        void pourIntoExhaustPort(int, struct EagleFM::Cylinder &);

    // RVA: 0x7CB | Ordinal: 1996
        void repair(void);

    // RVA: 0x7DB | Ordinal: 2012
        void requestFailure(struct Damage::Initiator &, enum WorldGeneral::Failures);

    // RVA: 0x7DC | Ordinal: 2013
        void requestFailure(enum WorldGeneral::Failures);

    // RVA: 0x7E8 | Ordinal: 2025
        void resetFailureProbability(enum WorldGeneral::Failures);

    // RVA: 0x85B | Ordinal: 2140
        void setFailureProbability(enum WorldGeneral::Failures, double, double, double);

    // RVA: 0x869 | Ordinal: 2154
        void setFuelPipeline(class EagleFM::FuelPipeline *);

    // RVA: 0x89F | Ordinal: 2208
        void setManifoldTemperature(double);

    // RVA: 0x8D4 | Ordinal: 2261
        void setPrimerPipeline(class EagleFM::FuelPipeline *);

    // RVA: 0x93E | Ordinal: 2367
        void set_init_p_t(void);

    // RVA: 0x948 | Ordinal: 2377
        void set_throttle(double);

    // RVA: 0x978 | Ordinal: 2425
        void simulateFuelFlow(void);

    // RVA: 0x97D | Ordinal: 2430
        void slow_simulate(void);

    // RVA: 0x982 | Ordinal: 2435
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x1C7 | Ordinal: 456
        void _PistonEngine(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PISTONENGINE_HPP
