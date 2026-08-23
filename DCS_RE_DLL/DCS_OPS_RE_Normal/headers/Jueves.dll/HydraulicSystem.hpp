#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: HydraulicSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace hydraulics {

class HydraulicSystem
{
public:

    // RVA: 0x33 | Ordinal: 52
        void HydraulicSystem(class EagleFM::dcswwii::hydraulics::HydraulicSystem const &);

    // RVA: 0x34 | Ordinal: 53
        void HydraulicSystem(class EagleFM::dcswwii::FlightModel *, double, double, double, double, double, double, double, double, double, double);

    // RVA: 0x2C8 | Ordinal: 713
        void add(class EagleFM::HydraulicDrive *);

    // RVA: 0x345 | Ordinal: 838
        void doSimulate(void);

    // RVA: 0x4FE | Ordinal: 1279
        void repair(void);

    // RVA: 0x557 | Ordinal: 1368
        void setHydraulicReleaseValve(bool);

    // RVA: 0x5FC | Ordinal: 1533
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0xF8 | Ordinal: 249
        void _HydraulicSystem(void);
};

} // namespace hydraulics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_HYDRAULICSYSTEM_HPP
