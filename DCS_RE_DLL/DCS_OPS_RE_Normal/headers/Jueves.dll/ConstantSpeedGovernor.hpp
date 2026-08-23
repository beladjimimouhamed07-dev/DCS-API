#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ConstantSpeedGovernor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class ConstantSpeedGovernor
{
public:

    // RVA: 0x14 | Ordinal: 21
        void ConstantSpeedGovernor(class EagleFM::dcswwii::propulsion::ConstantSpeedGovernor const &);

    // RVA: 0x15 | Ordinal: 22
        void ConstantSpeedGovernor(class EagleFM::dcswwii::propulsion::PistonEngine *, double, double, enum EagleFM::dcswwii::propulsion::ConstantSpeedGovernor::DriverChannels, enum EagleFM::dcswwii::propulsion::ConstantSpeedGovernor::SpecialityControls, double);

    // RVA: 0x4F7 | Ordinal: 1272
        void repair(void);

    // RVA: 0x5D1 | Ordinal: 1490
        void simulate(double);

    // RVA: 0x5F5 | Ordinal: 1526
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xE9 | Ordinal: 234
        void _ConstantSpeedGovernor(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_CONSTANTSPEEDGOVERNOR_HPP
