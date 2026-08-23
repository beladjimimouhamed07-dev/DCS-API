#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: AK14P
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class AK14P
{
public:

    // RVA: 0x0 | Ordinal: 1
        void AK14P(class EagleFM::dcswwii::propulsion::AK14P const &);

    // RVA: 0x1 | Ordinal: 2
        void AK14P(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *, class EagleFM::JetNozzle *, double &, double &);

    // RVA: 0x442 | Ordinal: 1091
        void juiceUpCylinder(struct EagleFM::Cylinder &, double);

    // RVA: 0x4F3 | Ordinal: 1268
        void repair(void);

    // RVA: 0x5C9 | Ordinal: 1482
        void simulate(double);

    // RVA: 0x5F1 | Ordinal: 1522
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xE0 | Ordinal: 225
        void _AK14P(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_AK14P_HPP
