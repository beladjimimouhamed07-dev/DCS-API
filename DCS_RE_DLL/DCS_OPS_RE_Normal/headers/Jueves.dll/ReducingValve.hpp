#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ReducingValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class ReducingValve
{
public:

    // RVA: 0x65 | Ordinal: 102
        void ReducingValve(class EagleFM::dcswwii::pneumatics::ReducingValve &&);

    // RVA: 0x66 | Ordinal: 103
        void ReducingValve(class EagleFM::dcswwii::pneumatics::ReducingValve const &);

    // RVA: 0x67 | Ordinal: 104
        void ReducingValve(double, double, double, double);

    // RVA: 0x5E7 | Ordinal: 1512
        void simulate(double);

    // RVA: 0x10E | Ordinal: 271
        void _ReducingValve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_REDUCINGVALVE_HPP
