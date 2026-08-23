#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Propeller
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class Propeller
{
public:

    // RVA: 0x10F | Ordinal: 272
        void Propeller(class EagleFM::DynamicBody *, class EagleFM::PlaneAD **);

    // RVA: 0x110 | Ordinal: 273
        void Propeller(class EagleFM::DynamicBody *, class EagleFM::PlaneAD **, class EagleFM::BaseOptions::PropellerOptions &);

    // RVA: 0x42F | Ordinal: 1072
        void calcSlipstreamVelocity(struct EagleFM::Propeller::SlipstreamPoint &) const;

    // RVA: 0x58D | Ordinal: 1422
        void getIF(void) const;

    // RVA: 0x627 | Ordinal: 1576
        void getPropellerData(void);

    // RVA: 0x68E | Ordinal: 1679
        void getSlipstreamAverage(void);

    // RVA: 0x6F8 | Ordinal: 1785
        void get_N(void) const;

    // RVA: 0x7BA | Ordinal: 1979
        void reduceIF(double);

    // RVA: 0x7CC | Ordinal: 1997
        void repair(void);

    // RVA: 0x900 | Ordinal: 2305
        void setSkewH0(double);

    // RVA: 0x901 | Ordinal: 2306
        void setSkew_x0(double);

    // RVA: 0x902 | Ordinal: 2307
        void setSlipstreamCoeffs(float, float, float, float);

    // RVA: 0x916 | Ordinal: 2327
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x1CD | Ordinal: 462
        void _Propeller(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_PROPELLER_HPP
