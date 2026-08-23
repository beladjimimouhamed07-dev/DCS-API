#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: TouchPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class TouchPoint
{
public:

    // RVA: 0x158 | Ordinal: 345
        void TouchPoint(class EagleFM::DynamicBody *);

    // RVA: 0x56C | Ordinal: 1389
        void getForce_l(void) const;

    // RVA: 0x56E | Ordinal: 1391
        void getForce_pos_w(void) const;

    // RVA: 0x575 | Ordinal: 1398
        void getFullDepth(void) const;

    // RVA: 0x652 | Ordinal: 1619
        void getRelativeSpeed(void) const;

    // RVA: 0x653 | Ordinal: 1620
        void getRelativeVel_l(void) const;

    // RVA: 0x6A0 | Ordinal: 1697
        void getSurfaceType(void) const;

    // RVA: 0x6E7 | Ordinal: 1768
        void getWaterFactor(void) const;

    // RVA: 0x744 | Ordinal: 1861
        void initForceField(struct EagleFM::AmortizaterInit);

    // RVA: 0x826 | Ordinal: 2087
        void setContact(double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x865 | Ordinal: 2150
        void setFrictionForceFactor(double);

    // RVA: 0x8DC | Ordinal: 2269
        void setRadius(double);

    // RVA: 0x972 | Ordinal: 2419
        void simulate(double);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_TOUCHPOINT_HPP
