#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: StructureMember
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class StructureMember
{
public:

    // RVA: 0x374 | Ordinal: 885
        void Construct(void);

    // RVA: 0x37E | Ordinal: 895
        void ConstructControlSurface_01(class AFM::AerodynamicBody *);

    // RVA: 0x37F | Ordinal: 896
        void ConstructControlSurface_02(class AFM::AerodynamicBody *);

    // RVA: 0x380 | Ordinal: 897
        void ConstructControlSurface_03(class AFM::AerodynamicBody *);

    // RVA: 0x381 | Ordinal: 898
        void ConstructControlSurface_04(class AFM::AerodynamicBody *);

    // RVA: 0x382 | Ordinal: 899
        void ConstructControlSurface_05(class AFM::AerodynamicBody *);

    // RVA: 0x383 | Ordinal: 900
        void ConstructControlSurface_06(class AFM::AerodynamicBody *);

    // RVA: 0x384 | Ordinal: 901
        void ConstructControlSurface_07(class AFM::AerodynamicBody *);

    // RVA: 0x385 | Ordinal: 902
        void ConstructControlSurface_08(class AFM::AerodynamicBody *);

    // RVA: 0x386 | Ordinal: 903
        void ConstructControlSurface_09(class AFM::AerodynamicBody *);

    // RVA: 0x387 | Ordinal: 904
        void ConstructControlSurface_10(class AFM::AerodynamicBody *);

    // RVA: 0x3D9 | Ordinal: 986
        void Create(void);

    // RVA: 0x480 | Ordinal: 1153
        void LockDynamicStructure(class AFM::DynamicBody *);

    // RVA: 0x4B1 | Ordinal: 1202
        void LockStructureMemberAerodynamics(class AFM::AerodynamicBody *);

    // RVA: 0xD5 | Ordinal: 214
        void StructureMember(class AFM::StructureMember &&);

    // RVA: 0xD6 | Ordinal: 215
        void StructureMember(class AFM::StructureMember const &);

    // RVA: 0xD7 | Ordinal: 216
        void StructureMember(void);

    // RVA: 0x55F | Ordinal: 1376
        void calcStructureMemberAerodynamics(double, double, double *, double *, int);

    // RVA: 0x578 | Ordinal: 1401
        void getAerodynamicFactor(int, double *);

    // RVA: 0x579 | Ordinal: 1402
        void getAerodynamicForcePosition_scs(double *);

    // RVA: 0x57A | Ordinal: 1403
        void getAerodynamicForce_scs(double *);

    // RVA: 0x57E | Ordinal: 1407
        void getAngleOfAttack(double *);

    // RVA: 0x57F | Ordinal: 1408
        void getAngleOfSlip(double *);

    // RVA: 0x5E3 | Ordinal: 1508
        void getIPointerControlSurface_01(class AFM::ControlSurface **);

    // RVA: 0x5E4 | Ordinal: 1509
        void getIPointerControlSurface_02(class AFM::ControlSurface **);

    // RVA: 0x5E5 | Ordinal: 1510
        void getIPointerControlSurface_03(class AFM::ControlSurface **);

    // RVA: 0x5E6 | Ordinal: 1511
        void getIPointerControlSurface_04(class AFM::ControlSurface **);

    // RVA: 0x5E7 | Ordinal: 1512
        void getIPointerControlSurface_05(class AFM::ControlSurface **);

    // RVA: 0x5E8 | Ordinal: 1513
        void getIPointerControlSurface_06(class AFM::ControlSurface **);

    // RVA: 0x5E9 | Ordinal: 1514
        void getIPointerControlSurface_07(class AFM::ControlSurface **);

    // RVA: 0x5EA | Ordinal: 1515
        void getIPointerControlSurface_08(class AFM::ControlSurface **);

    // RVA: 0x5EB | Ordinal: 1516
        void getIPointerControlSurface_09(class AFM::ControlSurface **);

    // RVA: 0x5EC | Ordinal: 1517
        void getIPointerControlSurface_10(class AFM::ControlSurface **);

    // RVA: 0x685 | Ordinal: 1670
        void getIPointerStructureMemberBody(class AFM::Body **);

    // RVA: 0x686 | Ordinal: 1671
        void getIPointerStructureMemberOrientation(class AFM::Orientation **);

    // RVA: 0x687 | Ordinal: 1672
        void getIPointerStructureMemberPosition(class AFM::Position **);

    // RVA: 0x6A3 | Ordinal: 1700
        void getIntegrityFactor(double *);

    // RVA: 0x6BA | Ordinal: 1723
        void getMach(double *);

    // RVA: 0x6F4 | Ordinal: 1781
        void getOwnAerodynamicDamperMoment_scs(double *);

    // RVA: 0x72D | Ordinal: 1838
        void getShakeAmplitude(double *);

    // RVA: 0x72E | Ordinal: 1839
        void getShakeFrequency(double *);

    // RVA: 0x735 | Ordinal: 1846
        void getSpeedVim(double *);

    // RVA: 0x77E | Ordinal: 1919
        void setAerodynamicFactor(int, double);

    // RVA: 0x7EC | Ordinal: 2029
        void setIntegrityFactor(double);

    // RVA: 0x8E1 | Ordinal: 2274
        void setTurbulenceOff(void);

    // RVA: 0x8E3 | Ordinal: 2276
        void setTurbulenceOn(void);

    // RVA: 0x149 | Ordinal: 330
        void _StructureMember(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_STRUCTUREMEMBER_HPP
