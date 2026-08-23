#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetInlet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetInlet
{
public:

    // RVA: 0xD2 | Ordinal: 211
        void JetInlet(class EagleFM::JetInlet const &);

    // RVA: 0xD3 | Ordinal: 212
        void JetInlet(class Math::Vector<3, double> const &, double);

    // RVA: 0x418 | Ordinal: 1049
        void calcInlet(class EagleFM::DynamicBody *, double &, double &, double *);

    // RVA: 0x419 | Ordinal: 1050
        void calcInlet(class EagleFM::DynamicBody *, double, double &, double &, double &, double &, double *, double *);

    // RVA: 0x43D | Ordinal: 1086
        void calcTurbulence(double &, double &);

    // RVA: 0x5A9 | Ordinal: 1450
        void getK_VelRec(void) const;

    // RVA: 0x614 | Ordinal: 1557
        void getPos_l(void) const;

    // RVA: 0x88F | Ordinal: 2192
        void setK_VelRec(double);

    // RVA: 0x8B7 | Ordinal: 2232
        void setP_Alpha(double);

    // RVA: 0x8CF | Ordinal: 2256
        void setPos_l(class Math::Vector<3, double> const &);

    // RVA: 0x1B9 | Ordinal: 442
        void _JetInlet(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETINLET_HPP
