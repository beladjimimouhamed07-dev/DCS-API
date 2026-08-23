#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: DynamicBody
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class DynamicBody
{
public:

    // RVA: 0x327 | Ordinal: 808
        void AccelerateBody(double);

    // RVA: 0x351 | Ordinal: 850
        void Construct(void);

    // RVA: 0x3AB | Ordinal: 940
        void Create(void);

    // RVA: 0x48 | Ordinal: 73
        void DynamicBody(class AFM::DynamicBody &&);

    // RVA: 0x49 | Ordinal: 74
        void DynamicBody(class AFM::DynamicBody const &);

    // RVA: 0x4A | Ordinal: 75
        void DynamicBody(void);

    // RVA: 0x4BA | Ordinal: 1211
        void MoveObject(double);

    // RVA: 0x4CC | Ordinal: 1229
        void RotateObject(double);

    // RVA: 0x50A | Ordinal: 1291
        void calcAcceleration_bcsByAcceleration_ocs(void);

    // RVA: 0x50B | Ordinal: 1292
        void calcAcceleration_bcsByForce_bcs(void);

    // RVA: 0x50C | Ordinal: 1293
        void calcAcceleration_bcsInPoint_bcs(double *, double *);

    // RVA: 0x50D | Ordinal: 1294
        void calcAcceleration_ocsByAcceleration_bcs(void);

    // RVA: 0x50E | Ordinal: 1295
        void calcAcceleration_ocsByForce_ocs(void);

    // RVA: 0x50F | Ordinal: 1296
        void calcAcceleration_ocsInPoint_ocs(double *, double *);

    // RVA: 0x52F | Ordinal: 1328
        void calcForce_bcsByAcceleration_bcs(void);

    // RVA: 0x530 | Ordinal: 1329
        void calcForce_bcsByForce_ocs(void);

    // RVA: 0x531 | Ordinal: 1330
        void calcForce_ocsByAcceleration_ocs(void);

    // RVA: 0x532 | Ordinal: 1331
        void calcForce_ocsByForce_bcs(void);

    // RVA: 0x533 | Ordinal: 1332
        void calcForce_ocsByMoment_ocsAndForcePosition_ocs(double *, double *, double *);

    // RVA: 0x544 | Ordinal: 1349
        void calcMoment_ocsByForce_ocsAndForcePosition_ocs(double *, double *, double *);

    // RVA: 0x558 | Ordinal: 1369
        void calcSpeed_bcsBySpeed_ocs(void);

    // RVA: 0x559 | Ordinal: 1370
        void calcSpeed_bcsInPoint_bcs(double *, double *);

    // RVA: 0x55A | Ordinal: 1371
        void calcSpeed_ocsBySpeed_bcs(void);

    // RVA: 0x55B | Ordinal: 1372
        void calcSpeed_ocsInPoint_ocs(double *, double *);

    // RVA: 0x56D | Ordinal: 1390
        void changeMassAndMassPosition_ocsAndRotateInertia_ocs(double, double *, double *);

    // RVA: 0x56E | Ordinal: 1391
        void getAccelerationX_bcs(double *);

    // RVA: 0x56F | Ordinal: 1392
        void getAccelerationX_ocs(double *);

    // RVA: 0x570 | Ordinal: 1393
        void getAccelerationY_bcs(double *);

    // RVA: 0x571 | Ordinal: 1394
        void getAccelerationY_ocs(double *);

    // RVA: 0x572 | Ordinal: 1395
        void getAccelerationZ_bcs(double *);

    // RVA: 0x573 | Ordinal: 1396
        void getAccelerationZ_ocs(double *);

    // RVA: 0x574 | Ordinal: 1397
        void getAcceleration_bcs(double *);

    // RVA: 0x575 | Ordinal: 1398
        void getAcceleration_ocs(double *);

    // RVA: 0x5AE | Ordinal: 1455
        void getForceX_bcs(double *);

    // RVA: 0x5AF | Ordinal: 1456
        void getForceX_ocs(double *);

    // RVA: 0x5B0 | Ordinal: 1457
        void getForceY_bcs(double *);

    // RVA: 0x5B1 | Ordinal: 1458
        void getForceY_ocs(double *);

    // RVA: 0x5B2 | Ordinal: 1459
        void getForceZ_bcs(double *);

    // RVA: 0x5B3 | Ordinal: 1460
        void getForceZ_ocs(double *);

    // RVA: 0x5B4 | Ordinal: 1461
        void getForce_bcs(double *);

    // RVA: 0x5B5 | Ordinal: 1462
        void getForce_ocs(double *);

    // RVA: 0x6BE | Ordinal: 1727
        void getMassPositionX_ocs(double *);

    // RVA: 0x6C0 | Ordinal: 1729
        void getMassPositionY_ocs(double *);

    // RVA: 0x6C2 | Ordinal: 1731
        void getMassPositionZ_ocs(double *);

    // RVA: 0x6C4 | Ordinal: 1733
        void getMassPosition_ocs(double *);

    // RVA: 0x736 | Ordinal: 1847
        void getSpeedX_bcs(double *);

    // RVA: 0x737 | Ordinal: 1848
        void getSpeedX_ocs(double *);

    // RVA: 0x739 | Ordinal: 1850
        void getSpeedY_bcs(double *);

    // RVA: 0x73A | Ordinal: 1851
        void getSpeedY_ocs(double *);

    // RVA: 0x73B | Ordinal: 1852
        void getSpeedZ_bcs(double *);

    // RVA: 0x73C | Ordinal: 1853
        void getSpeedZ_ocs(double *);

    // RVA: 0x73E | Ordinal: 1855
        void getSpeed_bcs(double *);

    // RVA: 0x73F | Ordinal: 1856
        void getSpeed_ocs(double *);

    // RVA: 0x772 | Ordinal: 1907
        void setAccelerationX_bcs(double);

    // RVA: 0x773 | Ordinal: 1908
        void setAccelerationX_ocs(double);

    // RVA: 0x774 | Ordinal: 1909
        void setAccelerationY_bcs(double);

    // RVA: 0x775 | Ordinal: 1910
        void setAccelerationY_ocs(double);

    // RVA: 0x776 | Ordinal: 1911
        void setAccelerationZ_bcs(double);

    // RVA: 0x777 | Ordinal: 1912
        void setAccelerationZ_ocs(double);

    // RVA: 0x778 | Ordinal: 1913
        void setAcceleration_bcs(double *);

    // RVA: 0x779 | Ordinal: 1914
        void setAcceleration_ocs(double *);

    // RVA: 0x7B9 | Ordinal: 1978
        void setForceX_bcs(double);

    // RVA: 0x7BA | Ordinal: 1979
        void setForceX_ocs(double);

    // RVA: 0x7BB | Ordinal: 1980
        void setForceY_bcs(double);

    // RVA: 0x7BC | Ordinal: 1981
        void setForceY_ocs(double);

    // RVA: 0x7BD | Ordinal: 1982
        void setForceZ_bcs(double);

    // RVA: 0x7BE | Ordinal: 1983
        void setForceZ_ocs(double);

    // RVA: 0x7BF | Ordinal: 1984
        void setForce_bcs(double *);

    // RVA: 0x7C0 | Ordinal: 1985
        void setForce_ocs(double *);

    // RVA: 0x804 | Ordinal: 2053
        void setMassPositionX_ocs(double);

    // RVA: 0x806 | Ordinal: 2055
        void setMassPositionY_ocs(double);

    // RVA: 0x808 | Ordinal: 2057
        void setMassPositionZ_ocs(double);

    // RVA: 0x80A | Ordinal: 2059
        void setMassPosition_ocs(double *);

    // RVA: 0x8B6 | Ordinal: 2231
        void setSpeedX_bcs(double);

    // RVA: 0x8B7 | Ordinal: 2232
        void setSpeedX_ocs(double);

    // RVA: 0x8B9 | Ordinal: 2234
        void setSpeedY_bcs(double);

    // RVA: 0x8BA | Ordinal: 2235
        void setSpeedY_ocs(double);

    // RVA: 0x8BB | Ordinal: 2236
        void setSpeedZ_bcs(double);

    // RVA: 0x8BC | Ordinal: 2237
        void setSpeedZ_ocs(double);

    // RVA: 0x8BE | Ordinal: 2239
        void setSpeed_bcs(double *);

    // RVA: 0x8BF | Ordinal: 2240
        void setSpeed_ocs(double *);

    // RVA: 0x8EB | Ordinal: 2284
        void setVersion(unsigned long);

    // RVA: 0x11A | Ordinal: 283
        void _DynamicBody(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_DYNAMICBODY_HPP
