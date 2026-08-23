#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: RollsRoyceMerlin
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class RollsRoyceMerlin
{
public:

    // RVA: 0x6B | Ordinal: 108
        void RollsRoyceMerlin(class EagleFM::dcswwii::propulsion::RollsRoyceMerlin const &);

    // RVA: 0x6C | Ordinal: 109
        void RollsRoyceMerlin(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, double, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::Elec::Consumer *, double);

    // RVA: 0x2D3 | Ordinal: 724
        void after_Inlet_calc(void);

    // RVA: 0x34C | Ordinal: 845
        void doSimulate(void);

    // RVA: 0x39B | Ordinal: 924
        void getParam(int) const;

    // RVA: 0x3F3 | Ordinal: 1012
        void initAirStart(void);

    // RVA: 0x3FB | Ordinal: 1020
        void initColdStart(void);

    // RVA: 0x403 | Ordinal: 1028
        void initHotStart(void);

    // RVA: 0x40D | Ordinal: 1038
        void initPreStart(void);

    // RVA: 0x50A | Ordinal: 1291
        void repair(void);

    // RVA: 0x593 | Ordinal: 1428
        void setThrottleLever(double);

    // RVA: 0x607 | Ordinal: 1544
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x110 | Ordinal: 273
        void _RollsRoyceMerlin(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ROLLSROYCEMERLIN_HPP
