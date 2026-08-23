#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: RestrictorValve
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class RestrictorValve
{
public:

    // RVA: 0x68 | Ordinal: 105
        void RestrictorValve(class EagleFM::dcswwii::pneumatics::RestrictorValve &&);

    // RVA: 0x69 | Ordinal: 106
        void RestrictorValve(class EagleFM::dcswwii::pneumatics::RestrictorValve const &);

    // RVA: 0x6A | Ordinal: 107
        void RestrictorValve(double, double, double);

    // RVA: 0x5E8 | Ordinal: 1513
        void simulate(double);

    // RVA: 0x10F | Ordinal: 272
        void _RestrictorValve(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_RESTRICTORVALVE_HPP
