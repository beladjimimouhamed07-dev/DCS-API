#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ElectricDrive
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class ElectricDrive
{
public:

    // RVA: 0x6E | Ordinal: 111
        void ElectricDrive(class EagleFM::Elec::ElecMachine_wShunt *, struct EagleFM::Elec::ElectricDrive::ElectricDriveInit const &);

    // RVA: 0x6F | Ordinal: 112
        void ElectricDrive(class EagleFM::Elec::ElectricDrive const &);

    // RVA: 0x3B6 | Ordinal: 951
        void active(void) const;

    // RVA: 0x6FB | Ordinal: 1788
        void get_ext_moment(void);

    // RVA: 0x6FF | Ordinal: 1792
        void get_motor(void) const;

    // RVA: 0x700 | Ordinal: 1793
        void get_motor_omega(void) const;

    // RVA: 0x702 | Ordinal: 1795
        void get_output_omega(void) const;

    // RVA: 0x703 | Ordinal: 1796
        void get_pos(void) const;

    // RVA: 0x705 | Ordinal: 1798
        void get_rel_pos(void) const;

    // RVA: 0x7A0 | Ordinal: 1953
        void onNegative(struct lwl::CSignalInfo const *);

    // RVA: 0x7A1 | Ordinal: 1954
        void onPositive(struct lwl::CSignalInfo const *);

    // RVA: 0x2E8 | Ordinal: 745
        void operator__(class EagleFM::Elec::ItemBase &);

    // RVA: 0x7C5 | Ordinal: 1990
        void repair(void);

    // RVA: 0x93B | Ordinal: 2364
        void set_failure(unsigned int);

    // RVA: 0x955 | Ordinal: 2390
        void simulate(class EagleFM::DynamicBody *, double);

    // RVA: 0x19B | Ordinal: 412
        void _ElectricDrive(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ELECTRICDRIVE_HPP
