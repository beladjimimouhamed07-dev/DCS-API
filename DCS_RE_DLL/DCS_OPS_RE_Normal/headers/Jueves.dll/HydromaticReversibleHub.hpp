#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: HydromaticReversibleHub
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class HydromaticReversibleHub
{
public:

    // RVA: 0x35 | Ordinal: 54
        void HydromaticReversibleHub(class EagleFM::dcswwii::propulsion::HydromaticReversibleHub const &);

    // RVA: 0x36 | Ordinal: 55
        void HydromaticReversibleHub(class EagleFM::dcswwii::propulsion::PistonEngine *, double, double, double, class EagleFM::Elec::Consumer *, class EagleFM::Elec::Switch *);

    // RVA: 0x4FF | Ordinal: 1280
        void repair(void);

    // RVA: 0x5DA | Ordinal: 1499
        void simulate(double);

    // RVA: 0x5FD | Ordinal: 1534
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xF9 | Ordinal: 250
        void _HydromaticReversibleHub(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_HYDROMATICREVERSIBLEHUB_HPP
