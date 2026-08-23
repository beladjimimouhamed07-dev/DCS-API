#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ElectroInertialStarter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class ElectroInertialStarter
{
public:

    // RVA: 0x20 | Ordinal: 33
        void ElectroInertialStarter(class EagleFM::dcswwii::propulsion::ElectroInertialStarter const &);

    // RVA: 0x21 | Ordinal: 34
        void ElectroInertialStarter(class EagleFM::dcswwii::propulsion::PistonEngine *, class EagleFM::Elec::ElecMachine_wShunt *, class EagleFM::Elec::Consumer *, double, double, double, double);

    // RVA: 0x353 | Ordinal: 852
        void engageClutch(bool);

    // RVA: 0x4FB | Ordinal: 1276
        void repair(void);

    // RVA: 0x5D3 | Ordinal: 1492
        void simulate(double);

    // RVA: 0x5F9 | Ordinal: 1530
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xEF | Ordinal: 240
        void _ElectroInertialStarter(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ELECTROINERTIALSTARTER_HPP
