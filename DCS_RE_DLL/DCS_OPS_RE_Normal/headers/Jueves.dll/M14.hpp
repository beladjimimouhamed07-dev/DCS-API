#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: M14
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class M14
{
public:

    // RVA: 0x29E | Ordinal: 671
        void AMF_calculator(void);

    // RVA: 0x44 | Ordinal: 69
        void M14(class EagleFM::dcswwii::propulsion::M14 const &);

    // RVA: 0x45 | Ordinal: 70
        void M14(int, class EagleFM::dcswwii::FlightModel *, class EagleFM::Propeller *, class EagleFM::FuelPipeline *, class EagleFM::FuelPipeline *, class EagleFM::Elec::Consumer *, double);

    // RVA: 0x2D0 | Ordinal: 721
        void after_Inlet_calc(void);

    // RVA: 0x346 | Ordinal: 839
        void doSimulate(void);

    // RVA: 0x397 | Ordinal: 920
        void getParam(int) const;

    // RVA: 0x3EF | Ordinal: 1008
        void initAirStart(void);

    // RVA: 0x3F7 | Ordinal: 1016
        void initColdStart(void);

    // RVA: 0x3FF | Ordinal: 1024
        void initHotStart(void);

    // RVA: 0x408 | Ordinal: 1033
        void initPreStart(void);

    // RVA: 0x503 | Ordinal: 1284
        void repair(void);

    // RVA: 0x58F | Ordinal: 1424
        void setThrottleLever(double);

    // RVA: 0x600 | Ordinal: 1537
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x100 | Ordinal: 257
        void _M14(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_M14_HPP
