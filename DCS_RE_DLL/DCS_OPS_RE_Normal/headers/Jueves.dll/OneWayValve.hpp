#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: OneWayValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class OneWayValve
{
public:

    // RVA: 0x4E | Ordinal: 79
        void OneWayValve(class EagleFM::dcswwii::pneumatics::OneWayValve &&);

    // RVA: 0x4F | Ordinal: 80
        void OneWayValve(class EagleFM::dcswwii::pneumatics::OneWayValve const &);

    // RVA: 0x50 | Ordinal: 81
        void OneWayValve(double, double, bool);

    // RVA: 0x5E3 | Ordinal: 1508
        void simulate(double);

    // RVA: 0x104 | Ordinal: 261
        void _OneWayValve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ONEWAYVALVE_HPP
