#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: RotatingBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class RotatingBody
{
public:

    // RVA: 0x36B | Ordinal: 876
        void Construct(void);

    // RVA: 0x3CD | Ordinal: 974
        void Create(void);

    // RVA: 0x4CB | Ordinal: 1228
        void RotateAccelerateBody(double);

    // RVA: 0xAE | Ordinal: 175
        void RotatingBody(class AFM::RotatingBody &&);

    // RVA: 0xAF | Ordinal: 176
        void RotatingBody(class AFM::RotatingBody const &);

    // RVA: 0xB0 | Ordinal: 177
        void RotatingBody(void);

    // RVA: 0x510 | Ordinal: 1297
        void calcAcceleration_ocsInPoint_ocs(double *, double *);

    // RVA: 0x534 | Ordinal: 1333
        void calcForce_ocsByMoment_ocsAndForcePosition_ocs(double *, double *, double *);

    // RVA: 0x543 | Ordinal: 1348
        void calcMoment_bcsByMoment_ocs(void);

    // RVA: 0x545 | Ordinal: 1350
        void calcMoment_ocsByForce_ocsAndForcePosition_ocs(double *, double *, double *);

    // RVA: 0x546 | Ordinal: 1351
        void calcMoment_ocsByMoment_bcs(void);

    // RVA: 0x547 | Ordinal: 1352
        void calcMoment_ocsByRotateAcceleration_ocs(void);

    // RVA: 0x551 | Ordinal: 1362
        void calcRotateAcceleration_bcsByRotateAcceleration_ocs(void);

    // RVA: 0x552 | Ordinal: 1363
        void calcRotateAcceleration_ocsByMoment_ocs(void);

    // RVA: 0x553 | Ordinal: 1364
        void calcRotateAcceleration_ocsByRotateAcceleration_bcs(void);

    // RVA: 0x5C3 | Ordinal: 1476
        void getGyroEffectFlag(int *);

    // RVA: 0x6E4 | Ordinal: 1765
        void getMomentX_bcs(double *);

    // RVA: 0x6E5 | Ordinal: 1766
        void getMomentX_ocs(double *);

    // RVA: 0x6E6 | Ordinal: 1767
        void getMomentY_bcs(double *);

    // RVA: 0x6E7 | Ordinal: 1768
        void getMomentY_ocs(double *);

    // RVA: 0x6E8 | Ordinal: 1769
        void getMomentZ_bcs(double *);

    // RVA: 0x6E9 | Ordinal: 1770
        void getMomentZ_ocs(double *);

    // RVA: 0x6EA | Ordinal: 1771
        void getMoment_bcs(double *);

    // RVA: 0x6EB | Ordinal: 1772
        void getMoment_ocs(double *);

    // RVA: 0x713 | Ordinal: 1812
        void getRotateAccelerationX_bcs(double *);

    // RVA: 0x714 | Ordinal: 1813
        void getRotateAccelerationX_ocs(double *);

    // RVA: 0x715 | Ordinal: 1814
        void getRotateAccelerationY_bcs(double *);

    // RVA: 0x716 | Ordinal: 1815
        void getRotateAccelerationY_ocs(double *);

    // RVA: 0x717 | Ordinal: 1816
        void getRotateAccelerationZ_bcs(double *);

    // RVA: 0x718 | Ordinal: 1817
        void getRotateAccelerationZ_ocs(double *);

    // RVA: 0x719 | Ordinal: 1818
        void getRotateAcceleration_bcs(double *);

    // RVA: 0x71A | Ordinal: 1819
        void getRotateAcceleration_ocs(double *);

    // RVA: 0x7C9 | Ordinal: 1994
        void setGyroEffectOff(void);

    // RVA: 0x7CA | Ordinal: 1995
        void setGyroEffectOn(void);

    // RVA: 0x82D | Ordinal: 2094
        void setMomentX_bcs(double);

    // RVA: 0x82E | Ordinal: 2095
        void setMomentX_ocs(double);

    // RVA: 0x82F | Ordinal: 2096
        void setMomentY_bcs(double);

    // RVA: 0x830 | Ordinal: 2097
        void setMomentY_ocs(double);

    // RVA: 0x831 | Ordinal: 2098
        void setMomentZ_bcs(double);

    // RVA: 0x832 | Ordinal: 2099
        void setMomentZ_ocs(double);

    // RVA: 0x833 | Ordinal: 2100
        void setMoment_bcs(double *);

    // RVA: 0x834 | Ordinal: 2101
        void setMoment_ocs(double *);

    // RVA: 0x897 | Ordinal: 2200
        void setRotateAccelerationX_bcs(double);

    // RVA: 0x898 | Ordinal: 2201
        void setRotateAccelerationX_ocs(double);

    // RVA: 0x899 | Ordinal: 2202
        void setRotateAccelerationY_bcs(double);

    // RVA: 0x89A | Ordinal: 2203
        void setRotateAccelerationY_ocs(double);

    // RVA: 0x89B | Ordinal: 2204
        void setRotateAccelerationZ_bcs(double);

    // RVA: 0x89C | Ordinal: 2205
        void setRotateAccelerationZ_ocs(double);

    // RVA: 0x89D | Ordinal: 2206
        void setRotateAcceleration_bcs(double *);

    // RVA: 0x89E | Ordinal: 2207
        void setRotateAcceleration_ocs(double *);

    // RVA: 0x13C | Ordinal: 317
        void _RotatingBody(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_ROTATINGBODY_HPP
