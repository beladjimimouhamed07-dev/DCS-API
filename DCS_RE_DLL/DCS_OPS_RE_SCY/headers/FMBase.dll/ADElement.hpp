#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: ADElement
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class ADElement
{
public:

    // RVA: 0x0 | Ordinal: 1
        void ADElement(class EagleFM::ADElement const &);

    // RVA: 0x1 | Ordinal: 2
        void ADElement(class EagleFM::AerodynamicBody *);

    // RVA: 0x2 | Ordinal: 3
        void ADElement(class EagleFM::AerodynamicBody *, struct EagleFM::DynamicState const &);

    // RVA: 0x3B9 | Ordinal: 954
        void addControlSurface(class EagleFM::AerodynamicBody *, class EagleFM::ControlSurface *);

    // RVA: 0x3DD | Ordinal: 990
        void calcAerodynamicForces(double, double, double, double, class Math::Vector<3, double>, class Math::Vector<3, double> *, class Math::Vector<3, double> *, class Math::Vector<3, double> *, double *, double *);

    // RVA: 0x3FE | Ordinal: 1023
        void calcElementsAerodynamics(class EagleFM::DynamicBody *, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, bool);

    // RVA: 0x457 | Ordinal: 1112
        void checkFailureLoad(double);

    // RVA: 0x484 | Ordinal: 1157
        void doSetIF(class EagleFM::DynamicBody *, double, double);

    // RVA: 0x4B1 | Ordinal: 1202
        void getADBody(void) const;

    // RVA: 0x4B2 | Ordinal: 1203
        void getADForce_l(void) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void getADForce_pos_l(void) const;

    // RVA: 0x4C8 | Ordinal: 1225
        void getAoA(void) const;

    // RVA: 0x4CA | Ordinal: 1227
        void getAoS(void) const;

    // RVA: 0x53D | Ordinal: 1342
        void getDynamicState(void) const;

    // RVA: 0x550 | Ordinal: 1361
        void getExternalIF(void) const;

    // RVA: 0x5B7 | Ordinal: 1464
        void getMach(void) const;

    // RVA: 0x5DF | Ordinal: 1504
        void getNormalHeight(void) const;

    // RVA: 0x5F0 | Ordinal: 1521
        void getOwnADDamperMoment_l(void) const;

    // RVA: 0x602 | Ordinal: 1539
        void getPitch(void) const;

    // RVA: 0x65F | Ordinal: 1632
        void getRoll(void) const;

    // RVA: 0x685 | Ordinal: 1670
        void getShakeAmplitude(void) const;

    // RVA: 0x691 | Ordinal: 1682
        void getSpeedVim(void) const;

    // RVA: 0x69A | Ordinal: 1691
        void getStructuralIF(void) const;

    // RVA: 0x6F3 | Ordinal: 1780
        void getYaw(void) const;

    // RVA: 0x70E | Ordinal: 1807
        void init(class EagleFM::AerodynamicBody *);

    // RVA: 0x750 | Ordinal: 1873
        void initMachCrit(double, double, double, double, double);

    // RVA: 0x75C | Ordinal: 1885
        void initShakeFilter(double, double);

    // RVA: 0x75D | Ordinal: 1886
        void initShakeFilterAoA0(double *, double *, int);

    // RVA: 0x762 | Ordinal: 1891
        void initStrengthProp(class EagleFM::RigidBody *, int, double, double);

    // RVA: 0x7B9 | Ordinal: 1978
        void reduceIF(class EagleFM::DynamicBody *, double, double);

    // RVA: 0x7C1 | Ordinal: 1986
        void repair(class EagleFM::DynamicBody *);

    // RVA: 0x7D5 | Ordinal: 2006
        void replaceAD(class EagleFM::AerodynamicBody *);

    // RVA: 0x7F8 | Ordinal: 2041
        void setADFactor(int, double);

    // RVA: 0x803 | Ordinal: 2052
        void setAlphaChiV(float, float, float);

    // RVA: 0x8C2 | Ordinal: 2243
        void setPitch(float);

    // RVA: 0x8CA | Ordinal: 2251
        void setPos(class Math::Vector<3, double>);

    // RVA: 0x8F2 | Ordinal: 2291
        void setRoll(float);

    // RVA: 0x932 | Ordinal: 2355
        void setYaw(float);

    // RVA: 0x934 | Ordinal: 2357
        void setYawPitchRoll(float, float, float);

    // RVA: 0x175 | Ordinal: 374
        void _ADElement(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_ADELEMENT_HPP
