#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PistonEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class PistonEngine
{
public:

    // RVA: 0x56 | Ordinal: 87
        void PistonEngine(class EagleFM::dcswwii::propulsion::PistonEngine const &);

    // RVA: 0x57 | Ordinal: 88
        void PistonEngine(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, double, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x2D4 | Ordinal: 725
        void applyForces(void);

    // RVA: 0x2D8 | Ordinal: 729
        void calcFuelFlow(void) const;

    // RVA: 0x348 | Ordinal: 841
        void doSimulate(void);

    // RVA: 0x359 | Ordinal: 858
        void getAirFlow(void) const;

    // RVA: 0x37F | Ordinal: 896
        void getIndex(void);

    // RVA: 0x391 | Ordinal: 914
        void getOilViscFrictK(void) const;

    // RVA: 0x398 | Ordinal: 921
        void getParam(int) const;

    // RVA: 0x3C9 | Ordinal: 970
        void getThrottleLever(void) const;

    // RVA: 0x3F0 | Ordinal: 1009
        void initAirStart(void);

    // RVA: 0x3F8 | Ordinal: 1017
        void initColdStart(void);

    // RVA: 0x400 | Ordinal: 1025
        void initHotStart(void);

    // RVA: 0x40A | Ordinal: 1035
        void initPreStart(void);

    // RVA: 0x4D4 | Ordinal: 1237
        void pushSoundEffect(int, double);

    // RVA: 0x4D5 | Ordinal: 1238
        void pushSoundEffect(int, double, double, double, double, double);

    // RVA: 0x506 | Ordinal: 1287
        void repair(void);

    // RVA: 0x563 | Ordinal: 1380
        void setMagnetos(int);

    // RVA: 0x586 | Ordinal: 1415
        void setShaftOmega(double);

    // RVA: 0x590 | Ordinal: 1425
        void setThrottleLever(double);

    // RVA: 0x5EF | Ordinal: 1520
        void slow_simulate(void);

    // RVA: 0x603 | Ordinal: 1540
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x107 | Ordinal: 264
        void _PistonEngine(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PISTONENGINE_HPP
