#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: PneumaticalStarter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class PneumaticalStarter
{
public:

    // RVA: 0x5C | Ordinal: 93
        void PneumaticalStarter(class EagleFM::dcswwii::propulsion::PneumaticalStarter const &);

    // RVA: 0x5D | Ordinal: 94
        void PneumaticalStarter(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::dcswwii::pneumatics::Element *);

    // RVA: 0x507 | Ordinal: 1288
        void repair(void);

    // RVA: 0x5E5 | Ordinal: 1510
        void simulate(double);

    // RVA: 0x604 | Ordinal: 1541
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0x10A | Ordinal: 267
        void _PneumaticalStarter(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_PNEUMATICALSTARTER_HPP
