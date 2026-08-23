#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: StatorValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class StatorValve
{
public:

    // RVA: 0x6F | Ordinal: 112
        void StatorValve(class EagleFM::dcswwii::pneumatics::StatorValve &&);

    // RVA: 0x70 | Ordinal: 113
        void StatorValve(class EagleFM::dcswwii::pneumatics::StatorValve const &);

    // RVA: 0x71 | Ordinal: 114
        void StatorValve(double, double, double, double);

    // RVA: 0x56A | Ordinal: 1387
        void setOperatingPressure(double);

    // RVA: 0x5E9 | Ordinal: 1514
        void simulate(double);

    // RVA: 0x112 | Ordinal: 275
        void _StatorValve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_STATORVALVE_HPP
