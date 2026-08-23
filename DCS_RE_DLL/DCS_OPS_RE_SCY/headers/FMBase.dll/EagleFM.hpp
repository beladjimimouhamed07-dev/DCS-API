#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: EagleFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class EagleFM
{
public:

    // RVA: 0x3EC | Ordinal: 1005
        void calcAnglesOfAttackAndSlipByVector3D(class Math::Vector<3, double>, double *, double *);

    // RVA: 0x3EE | Ordinal: 1007
        void calcAzimuthAndElevationByVector3D(class Math::Vector<3, double>, double *, double *);

    // RVA: 0x431 | Ordinal: 1074
        void calcSolidAzimuthAndSolidAngleOfAttackByVector3D(class Math::Vector<3, double>, double *, double *);

    // RVA: 0x43E | Ordinal: 1087
        void calcVector3DByAnglesOfAttackAndSlip(double, double, double);

    // RVA: 0x43F | Ordinal: 1088
        void calcVector3DByAzimuthAndElevation(double, double, double);

    // RVA: 0x440 | Ordinal: 1089
        void calcVector3DBySolidAzimuthAndSolidAngleOfAttack(double, double, double);

    // RVA: 0x772 | Ordinal: 1907
        void initialize(void);

    // RVA: 0x2E7 | Ordinal: 744
        void operator__(class EagleFM::AirDuctPart &, class EagleFM::AirDuctPart &);

    // RVA: 0x851 | Ordinal: 2130
        void setExternalAtmosphere(class Weather::IAtmosphere *);

    // RVA: 0x98F | Ordinal: 2448
        void uninitialize(void);
};

// DCS_OPS_RE_FMBASE.DLL_EAGLEFM_HPP
