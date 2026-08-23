#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: JetNozzle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class JetNozzle
{
public:

    // RVA: 0xD4 | Ordinal: 213
        void JetNozzle(class EagleFM::JetNozzle const &);

    // RVA: 0xD5 | Ordinal: 214
        void JetNozzle(double, bool);

    // RVA: 0x3E9 | Ordinal: 1002
        void calcAirMassFlow(double, double, double) const;

    // RVA: 0x404 | Ordinal: 1029
        void calcFlowRelativeVelocity(class EagleFM::DynamicBody *, double, double, double, double);

    // RVA: 0x405 | Ordinal: 1030
        void calcFlowVelocity(double, double, double);

    // RVA: 0x534 | Ordinal: 1333
        void getDir_l(void) const;

    // RVA: 0x615 | Ordinal: 1558
        void getPos_l(void) const;

    // RVA: 0x642 | Ordinal: 1603
        void getRelativeArea(void) const;

    // RVA: 0x726 | Ordinal: 1831
        void init(double, bool);

    // RVA: 0x80C | Ordinal: 2061
        void setAzimuth(double);

    // RVA: 0x842 | Ordinal: 2115
        void setDir_l(class Math::Vector<3, double>);

    // RVA: 0x84E | Ordinal: 2127
        void setElevation(double);

    // RVA: 0x88E | Ordinal: 2191
        void setK_Vel(double);

    // RVA: 0x8D0 | Ordinal: 2257
        void setPos_l(class Math::Vector<3, double>);

    // RVA: 0x8E4 | Ordinal: 2277
        void setRelativeArea(double);

    // RVA: 0x1BA | Ordinal: 443
        void _JetNozzle(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_JETNOZZLE_HPP
