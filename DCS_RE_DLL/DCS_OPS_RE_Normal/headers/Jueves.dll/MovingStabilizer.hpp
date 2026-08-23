#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: MovingStabilizer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace trims {

class MovingStabilizer
{
public:

    // RVA: 0x46 | Ordinal: 71
        void MovingStabilizer(class EagleFM::dcswwii::trims::MovingStabilizer &&);

    // RVA: 0x47 | Ordinal: 72
        void MovingStabilizer(class EagleFM::dcswwii::trims::MovingStabilizer const &);

    // RVA: 0x48 | Ordinal: 73
        void MovingStabilizer(class EagleFM::dcswwii::FlightModel *, double, double, double, double);

    // RVA: 0x3D1 | Ordinal: 978
        void getVisualDeflection(void);

    // RVA: 0x5E0 | Ordinal: 1505
        void simulate(double, double, double);

    // RVA: 0x101 | Ordinal: 258
        void _MovingStabilizer(void);
};

} // namespace trims
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_MOVINGSTABILIZER_HPP
