#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PressureMaintainingValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class PressureMaintainingValve
{
public:

    // RVA: 0x62 | Ordinal: 99
        void PressureMaintainingValve(class EagleFM::dcswwii::pneumatics::PressureMaintainingValve &&);

    // RVA: 0x63 | Ordinal: 100
        void PressureMaintainingValve(class EagleFM::dcswwii::pneumatics::PressureMaintainingValve const &);

    // RVA: 0x64 | Ordinal: 101
        void PressureMaintainingValve(double, double, double, double);

    // RVA: 0x5E6 | Ordinal: 1511
        void simulate(double);

    // RVA: 0x10D | Ordinal: 270
        void _PressureMaintainingValve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PRESSUREMAINTAININGVALVE_HPP
