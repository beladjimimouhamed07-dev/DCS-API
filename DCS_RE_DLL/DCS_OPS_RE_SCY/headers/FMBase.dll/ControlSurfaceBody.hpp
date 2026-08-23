#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ControlSurfaceBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ControlSurfaceBody
{
public:

    // RVA: 0x5C | Ordinal: 93
        void ControlSurfaceBody(class EagleFM::ControlSurfaceBody const &);

    // RVA: 0x5D | Ordinal: 94
        void ControlSurfaceBody(class EagleFM::DynamicBody *, class EagleFM::AerodynamicBody *);

    // RVA: 0x3FD | Ordinal: 1022
        void calcDynamic(void);

    // RVA: 0x4D5 | Ordinal: 1238
        void getAxisMoment(void) const;

    // RVA: 0x6BE | Ordinal: 1727
        void getTrackForce(void) const;

    // RVA: 0x738 | Ordinal: 1849
        void initAxisType(class Math::Vector<3, double>, class Math::Vector<3, double>, double, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x76A | Ordinal: 1899
        void initTrackType(class Math::Vector<3, double>, class Math::Vector<3, double>, double, class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x810 | Ordinal: 2065
        void setBasisAngles(float, float, float);

    // RVA: 0x8B0 | Ordinal: 2225
        void setOmega(double);

    // RVA: 0x8FB | Ordinal: 2300
        void setSelfAngle(float);

    // RVA: 0x195 | Ordinal: 406
        void _ControlSurfaceBody(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONTROLSURFACEBODY_HPP
