#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ElectricGearDrive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ElectricGearDrive
{
public:

    // RVA: 0x70 | Ordinal: 113
        void ElectricGearDrive(class EagleFM::Elec::ElecMachine_wShunt *, class EagleFM::GearPost *, class EagleFM::Elec::ElectricDownLock *, class EagleFM::Elec::ElectricUpLock *, struct EagleFM::Elec::ElectricDrive::ElectricDriveInit const &);

    // RVA: 0x4AE | Ordinal: 1199
        void force(bool);

    // RVA: 0x6FC | Ordinal: 1789
        void get_ext_moment(void);

    // RVA: 0x795 | Ordinal: 1942
        void locked(void) const;

    // RVA: 0x7C6 | Ordinal: 1991
        void repair(void);

    // RVA: 0x93C | Ordinal: 2365
        void set_failure(unsigned int);

    // RVA: 0x945 | Ordinal: 2374
        void set_post(class EagleFM::GearPost *);

    // RVA: 0x956 | Ordinal: 2391
        void simulate(class EagleFM::DynamicBody *, double);

    // RVA: 0x19C | Ordinal: 413
        void _ElectricGearDrive(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ELECTRICGEARDRIVE_HPP
