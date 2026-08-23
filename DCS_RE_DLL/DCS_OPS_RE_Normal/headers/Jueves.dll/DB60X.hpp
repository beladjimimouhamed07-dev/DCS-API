#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: DB60X
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class DB60X
{
public:

    // RVA: 0x29D | Ordinal: 670
        void AMF_calculator(void);

    // RVA: 0x1A | Ordinal: 27
        void DB60X(class EagleFM::dcswwii::propulsion::DB60X const &);

    // RVA: 0x1B | Ordinal: 28
        void DB60X(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, double, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::Elec::Consumer *, class EagleFM::Elec::Consumer *, double);

    // RVA: 0x342 | Ordinal: 835
        void doSimulate(void);

    // RVA: 0x396 | Ordinal: 919
        void getParam(int) const;

    // RVA: 0x3EC | Ordinal: 1005
        void initAirStart(void);

    // RVA: 0x3F4 | Ordinal: 1013
        void initColdStart(void);

    // RVA: 0x3FC | Ordinal: 1021
        void initHotStart(void);

    // RVA: 0x406 | Ordinal: 1031
        void initPreStart(void);

    // RVA: 0x4F9 | Ordinal: 1274
        void repair(void);

    // RVA: 0x58E | Ordinal: 1423
        void setThrottleLever(double);

    // RVA: 0x5EE | Ordinal: 1519
        void slow_simulate(void);

    // RVA: 0x5F7 | Ordinal: 1528
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0xEC | Ordinal: 237
        void _DB60X(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_DB60X_HPP
