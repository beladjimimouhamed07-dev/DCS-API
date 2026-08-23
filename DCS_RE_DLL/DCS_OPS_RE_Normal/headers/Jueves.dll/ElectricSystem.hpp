#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: ElectricSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace electrics {

class ElectricSystem
{
public:

    // RVA: 0x1C | Ordinal: 29
        void ElectricSystem(class EagleFM::dcswwii::electrics::ElectricSystem const &);

    // RVA: 0x1D | Ordinal: 30
        void ElectricSystem(class EagleFM::dcswwii::FlightModel *, double);

    // RVA: 0x343 | Ordinal: 836
        void doSimulate(void);

    // RVA: 0x37E | Ordinal: 895
        void getIncandescenceMagnitude(void);

    // RVA: 0x525 | Ordinal: 1318
        void repairDamage(class EagleFM::Elec::ItemBase *);

    // RVA: 0x52C | Ordinal: 1325
        void set(class EagleFM::dcswwii::avionics::avDCSWWIIDevice *);

    // RVA: 0x5F0 | Ordinal: 1521
        void startDamage(class EagleFM::Elec::ItemBase *);

    // RVA: 0xED | Ordinal: 238
        void _ElectricSystem(void);
};

} // namespace electrics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ELECTRICSYSTEM_HPP
