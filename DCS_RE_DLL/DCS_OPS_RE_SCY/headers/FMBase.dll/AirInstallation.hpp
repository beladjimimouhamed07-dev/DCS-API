#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AirInstallation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class AirInstallation
{
public:

    // RVA: 0x11 | Ordinal: 18
        void AirInstallation(class EagleFM::Cooling::AirInstallation const &);

    // RVA: 0x12 | Ordinal: 19
        void AirInstallation(class EagleFM::DynamicBody *, class EagleFM::Propeller *);

    // RVA: 0x4BB | Ordinal: 1212
        void getAirDens0(void) const;

    // RVA: 0x4BF | Ordinal: 1216
        void getAirTemp0(void) const;

    // RVA: 0x4C0 | Ordinal: 1217
        void getAirVel0(void) const;

    // RVA: 0x4D1 | Ordinal: 1234
        void getAtmoTemp(void) const;

    // RVA: 0x53A | Ordinal: 1339
        void getDragRel(void) const;

    // RVA: 0x70F | Ordinal: 1808
        void init(float, float, float, class Math::Vector<3, double>);

    // RVA: 0x94A | Ordinal: 2379
        void simulate(double);

    // RVA: 0x17D | Ordinal: 382
        void _AirInstallation(void);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AIRINSTALLATION_HPP
