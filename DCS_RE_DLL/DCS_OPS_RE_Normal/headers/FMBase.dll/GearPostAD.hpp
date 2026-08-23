#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: GearPostAD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class GearPostAD
{
public:

    // RVA: 0x94 | Ordinal: 149
        void GearPostAD(class EagleFM::GearPostAD &&);

    // RVA: 0x95 | Ordinal: 150
        void GearPostAD(class EagleFM::GearPostAD const &);

    // RVA: 0x96 | Ordinal: 151
        void GearPostAD(double, double);

    // RVA: 0x97 | Ordinal: 152
        void GearPostAD(void);

    // RVA: 0x3E4 | Ordinal: 997
        void calcAerodynamics(double *, double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x51D | Ordinal: 1310
        void getCxa(void) const;

    // RVA: 0x834 | Ordinal: 2101
        void setCxa(double);

    // RVA: 0x1AA | Ordinal: 427
        void _GearPostAD(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_GEARPOSTAD_HPP
