#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: BoschInjectorApparatus
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class BoschInjectorApparatus
{
public:

    // RVA: 0xC | Ordinal: 13
        void BoschInjectorApparatus(class EagleFM::dcswwii::propulsion::BoschInjectorApparatus const &);

    // RVA: 0xD | Ordinal: 14
        void BoschInjectorApparatus(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::FuelPipeline *);

    // RVA: 0x5CE | Ordinal: 1487
        void simulate(double);

    // RVA: 0xE5 | Ordinal: 230
        void _BoschInjectorApparatus(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_BOSCHINJECTORAPPARATUS_HPP
