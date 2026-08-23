#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Carburettor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class Carburettor
{
public:

    // RVA: 0xE | Ordinal: 15
        void Carburettor(class EagleFM::dcswwii::propulsion::Carburettor const &);

    // RVA: 0xF | Ordinal: 16
        void Carburettor(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *);

    // RVA: 0x2EC | Ordinal: 749
        void chokeForTime(double);

    // RVA: 0x443 | Ordinal: 1092
        void juiceUpCylinder(struct EagleFM::Cylinder &, double);

    // RVA: 0x4F6 | Ordinal: 1271
        void repair(void);

    // RVA: 0x5CF | Ordinal: 1488
        void simulate(double);

    // RVA: 0x5F4 | Ordinal: 1525
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xE6 | Ordinal: 231
        void _Carburettor(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_CARBURETTOR_HPP
