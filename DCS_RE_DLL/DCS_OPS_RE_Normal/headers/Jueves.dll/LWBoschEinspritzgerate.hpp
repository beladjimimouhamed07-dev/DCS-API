#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: LWBoschEinspritzgerate
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class LWBoschEinspritzgerate
{
public:

    // RVA: 0x40 | Ordinal: 65
        void LWBoschEinspritzgerate(class EagleFM::dcswwii::propulsion::LWBoschEinspritzgerate const &);

    // RVA: 0x41 | Ordinal: 66
        void LWBoschEinspritzgerate(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *, double);

    // RVA: 0x3DF | Ordinal: 992
        void get_control(void) const;

    // RVA: 0x502 | Ordinal: 1283
        void repair(void);

    // RVA: 0x5DE | Ordinal: 1503
        void simulate(double);

    // RVA: 0x5FF | Ordinal: 1536
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xFE | Ordinal: 255
        void _LWBoschEinspritzgerate(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_LWBOSCHEINSPRITZGERATE_HPP
