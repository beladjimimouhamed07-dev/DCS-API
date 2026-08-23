#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: MovingStabilizerAndVator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace trims {

class MovingStabilizerAndVator
{
public:

    // RVA: 0x49 | Ordinal: 74
        void MovingStabilizerAndVator(class EagleFM::dcswwii::trims::MovingStabilizerAndVator &&);

    // RVA: 0x4A | Ordinal: 75
        void MovingStabilizerAndVator(class EagleFM::dcswwii::trims::MovingStabilizerAndVator const &);

    // RVA: 0x4B | Ordinal: 76
        void MovingStabilizerAndVator(class EagleFM::dcswwii::FlightModel *, double, double, double, double);

    // RVA: 0x3D2 | Ordinal: 979
        void getVisualDeflection(void);

    // RVA: 0x5E1 | Ordinal: 1506
        void simulate(double, double, double);

    // RVA: 0x102 | Ordinal: 259
        void _MovingStabilizerAndVator(void);
};

} // namespace trims
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_MOVINGSTABILIZERANDVATOR_HPP
