#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Battery
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Battery
{
public:

    // RVA: 0x2B | Ordinal: 44
        void Battery(class EagleFM::Elec::Battery const &);

    // RVA: 0x2C | Ordinal: 45
        void Battery(int, double, double);

    // RVA: 0x388 | Ordinal: 905
        void CalculateParameters(double, double);

    // RVA: 0x38E | Ordinal: 911
        void GetCurrentCapacity(void) const;

    // RVA: 0x3A7 | Ordinal: 936
        void SetNewCapacity(double, double, double);

    // RVA: 0x3A9 | Ordinal: 938
        void SetTypeBattery(int);

    // RVA: 0x3AC | Ordinal: 941
        void Set_constR_0(double);

    // RVA: 0x3AD | Ordinal: 942
        void Set_nominalCapacity(double);

    // RVA: 0x5DA | Ordinal: 1499
        void getNominalCapacity(void) const;

    // RVA: 0x778 | Ordinal: 1913
        void isCharging(void) const;

    // RVA: 0x7A7 | Ordinal: 1960
        void post_initialize(void);

    // RVA: 0x94F | Ordinal: 2384
        void simulate(double, double);

    // RVA: 0x979 | Ordinal: 2426
        void simulateLcl(double, double);

    // RVA: 0x185 | Ordinal: 390
        void _Battery(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_BATTERY_HPP
