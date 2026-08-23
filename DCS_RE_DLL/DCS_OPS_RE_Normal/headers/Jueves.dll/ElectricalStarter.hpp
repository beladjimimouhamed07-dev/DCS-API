#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ElectricalStarter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace propulsion {

class ElectricalStarter
{
public:

    // RVA: 0x1E | Ordinal: 31
        void ElectricalStarter(class EagleFM::dcswwii::propulsion::ElectricalStarter const &);

    // RVA: 0x1F | Ordinal: 32
        void ElectricalStarter(class EagleFM::dcswwii::propulsion::PistonEngine *, bool, class EagleFM::Elec::ElecMachine_wShunt *, double, double, double &);

    // RVA: 0x4FA | Ordinal: 1275
        void repair(void);

    // RVA: 0x5D2 | Ordinal: 1491
        void simulate(double);

    // RVA: 0x5F8 | Ordinal: 1529
        void startFailure(enum WorldGeneral::Failures);

    // RVA: 0xEE | Ordinal: 239
        void _ElectricalStarter(void);
};

} // namespace propulsion
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ELECTRICALSTARTER_HPP
