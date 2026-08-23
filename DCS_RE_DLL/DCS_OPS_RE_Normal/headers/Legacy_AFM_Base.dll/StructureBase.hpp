#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: StructureBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class StructureBase
{
public:

    // RVA: 0x326 | Ordinal: 807
        void ACSFailure(void);

    // RVA: 0x329 | Ordinal: 810
        void AerodynamicSimulation(void);

    // RVA: 0x32D | Ordinal: 814
        void AutopilotFailure(void);

    // RVA: 0x32E | Ordinal: 815
        void CalcLeftStabilizerIntegrityFactor(void);

    // RVA: 0x32F | Ordinal: 816
        void CalcLeftWingIntegrityFactor(void);

    // RVA: 0x330 | Ordinal: 817
        void CalcRightStabilizerIntegrityFactor(void);

    // RVA: 0x331 | Ordinal: 818
        void CalcRightWingIntegrityFactor(void);

    // RVA: 0x332 | Ordinal: 819
        void CalcTailIntegrityFactor(void);

    // RVA: 0x333 | Ordinal: 820
        void CheckBackDamage(void);

    // RVA: 0x334 | Ordinal: 821
        void CheckDynamicPressureDamage(double);

    // RVA: 0x335 | Ordinal: 822
        void CheckLeftEngineDamage(double);

    // RVA: 0x336 | Ordinal: 823
        void CheckLeftWingDamage(double);

    // RVA: 0x337 | Ordinal: 824
        void CheckRightEngineDamage(double);

    // RVA: 0x338 | Ordinal: 825
        void CheckRightWingDamage(double);

    // RVA: 0x339 | Ordinal: 826
        void ChekExplosion(double);

    // RVA: 0x33A | Ordinal: 827
        void ChekExternalForceDamages(double);

    // RVA: 0x33B | Ordinal: 828
        void ChekTouchGroundDamages(double);

    // RVA: 0x373 | Ordinal: 884
        void Construct(void);

    // RVA: 0x392 | Ordinal: 915
        void ControlFuelSystem(double);

    // RVA: 0x3E8 | Ordinal: 1001
        void DamageBack(int);

    // RVA: 0x3E9 | Ordinal: 1002
        void DamageCanopy(int);

    // RVA: 0x3EA | Ordinal: 1003
        void DamageLeftAileron(void);

    // RVA: 0x3EB | Ordinal: 1004
        void DamageLeftAirBrake(void);

    // RVA: 0x3EC | Ordinal: 1005
        void DamageLeftElevator(int);

    // RVA: 0x3ED | Ordinal: 1006
        void DamageLeftEngine(void);

    // RVA: 0x3EE | Ordinal: 1007
        void DamageLeftEngineBottomNacelle(int);

    // RVA: 0x3EF | Ordinal: 1008
        void DamageLeftEngineCenterNacelle(int);

    // RVA: 0x3F0 | Ordinal: 1009
        void DamageLeftInnerFlap(int);

    // RVA: 0x3F1 | Ordinal: 1010
        void DamageLeftInnerSlat(void);

    // RVA: 0x3F2 | Ordinal: 1011
        void DamageLeftLandingLightLamp(void);

    // RVA: 0x3F3 | Ordinal: 1012
        void DamageLeftMidSlat(void);

    // RVA: 0x3F4 | Ordinal: 1013
        void DamageLeftOuterFlap(int);

    // RVA: 0x3F5 | Ordinal: 1014
        void DamageLeftOuterSlat(void);

    // RVA: 0x3F6 | Ordinal: 1015
        void DamageLeftStabilizer(void);

    // RVA: 0x3F7 | Ordinal: 1016
        void DamageLeftWing(int);

    // RVA: 0x3F8 | Ordinal: 1017
        void DamageModelInit(void);

    // RVA: 0x3F9 | Ordinal: 1018
        void DamageNose(int);

    // RVA: 0x3FA | Ordinal: 1019
        void DamageRightAileron(void);

    // RVA: 0x3FB | Ordinal: 1020
        void DamageRightAirBrake(void);

    // RVA: 0x3FC | Ordinal: 1021
        void DamageRightElevator(int);

    // RVA: 0x3FD | Ordinal: 1022
        void DamageRightEngine(void);

    // RVA: 0x3FE | Ordinal: 1023
        void DamageRightEngineBottomNacelle(int);

    // RVA: 0x3FF | Ordinal: 1024
        void DamageRightEngineCenterNacelle(int);

    // RVA: 0x400 | Ordinal: 1025
        void DamageRightInnerFlap(int);

    // RVA: 0x401 | Ordinal: 1026
        void DamageRightInnerSlat(void);

    // RVA: 0x402 | Ordinal: 1027
        void DamageRightLandingLightLamp(void);

    // RVA: 0x403 | Ordinal: 1028
        void DamageRightMidSlat(void);

    // RVA: 0x404 | Ordinal: 1029
        void DamageRightOuterFlap(int);

    // RVA: 0x405 | Ordinal: 1030
        void DamageRightOuterSlat(void);

    // RVA: 0x406 | Ordinal: 1031
        void DamageRightStabilizer(void);

    // RVA: 0x407 | Ordinal: 1032
        void DamageRightWing(int);

    // RVA: 0x408 | Ordinal: 1033
        void DamageTail(int);

    // RVA: 0x409 | Ordinal: 1034
        void DamageTailRudder(void);

    // RVA: 0x40A | Ordinal: 1035
        void DamageYawDamper(void);

    // RVA: 0x420 | Ordinal: 1057
        void DropPayload(int);

    // RVA: 0x421 | Ordinal: 1058
        void DynamicSimulation(double);

    // RVA: 0x423 | Ordinal: 1060
        void EffectsSimulation(double);

    // RVA: 0x426 | Ordinal: 1063
        void EnginesSimulation(double);

    // RVA: 0x427 | Ordinal: 1064
        void Explosion(void);

    // RVA: 0x428 | Ordinal: 1065
        void FireControl(double);

    // RVA: 0x429 | Ordinal: 1066
        void FireStarted(void);

    // RVA: 0x42A | Ordinal: 1067
        void FuselageFire(void);

    // RVA: 0x42B | Ordinal: 1068
        void FuselageFireOff(void);

    // RVA: 0x42D | Ordinal: 1070
        void GearFailure(int);

    // RVA: 0x42F | Ordinal: 1072
        void GearSimulation(double);

    // RVA: 0x430 | Ordinal: 1073
        void GunFireOff(void);

    // RVA: 0x431 | Ordinal: 1074
        void GunFireOn(void);

    // RVA: 0x432 | Ordinal: 1075
        void HydroSystemFailure(int);

    // RVA: 0x438 | Ordinal: 1081
        void InitGunRounds(int);

    // RVA: 0x440 | Ordinal: 1089
        void InitInTheFlight(double *, double, double, double, double *, double *, int);

    // RVA: 0x441 | Ordinal: 1090
        void InitInsideFuel(double);

    // RVA: 0x44A | Ordinal: 1099
        void InitOnTheParking(double, double, double);

    // RVA: 0x450 | Ordinal: 1105
        void InitOnTheRunway(double, double, double);

    // RVA: 0x452 | Ordinal: 1107
        void InitPayload(int, double *);

    // RVA: 0x468 | Ordinal: 1129
        void LeftEngineFire(void);

    // RVA: 0x469 | Ordinal: 1130
        void LeftEngineFireOff(void);

    // RVA: 0x46A | Ordinal: 1131
        void LeftEngineSmoke(void);

    // RVA: 0x46B | Ordinal: 1132
        void LeftWingFire(void);

    // RVA: 0x46C | Ordinal: 1133
        void LeftWingFireOff(void);

    // RVA: 0x4BE | Ordinal: 1215
        void PilotDead(void);

    // RVA: 0x4C0 | Ordinal: 1217
        void ReFuel(double);

    // RVA: 0x4C1 | Ordinal: 1218
        void ReleaseGunRounds(int);

    // RVA: 0x4C2 | Ordinal: 1219
        void ReleasePayload(int, int);

    // RVA: 0x4C6 | Ordinal: 1223
        void RightEngineFire(void);

    // RVA: 0x4C7 | Ordinal: 1224
        void RightEngineFireOff(void);

    // RVA: 0x4C8 | Ordinal: 1225
        void RightEngineSmoke(void);

    // RVA: 0x4C9 | Ordinal: 1226
        void RightWingFire(void);

    // RVA: 0x4CA | Ordinal: 1227
        void RightWingFireOff(void);

    // RVA: 0x4F3 | Ordinal: 1268
        void Simulation(double);

    // RVA: 0xD2 | Ordinal: 211
        void StructureBase(class AFM::StructureBase &&);

    // RVA: 0xD3 | Ordinal: 212
        void StructureBase(class AFM::StructureBase const &);

    // RVA: 0xD4 | Ordinal: 213
        void StructureBase(void);

    // RVA: 0x4FD | Ordinal: 1278
        void TankDamage(int, double);

    // RVA: 0x4FE | Ordinal: 1279
        void TouchSimulation(double);

    // RVA: 0x528 | Ordinal: 1321
        void calcAtmosphereParameters(void);

    // RVA: 0x52A | Ordinal: 1323
        void calcCockpitGFactor(double);

    // RVA: 0x52B | Ordinal: 1324
        void calcFireSize(int, double *);

    // RVA: 0x52C | Ordinal: 1325
        void calcFlagInAir(double);

    // RVA: 0x54A | Ordinal: 1355
        void calcPayloadDrag(void);

    // RVA: 0x54E | Ordinal: 1359
        void calcRandom(double *);

    // RVA: 0x57B | Ordinal: 1404
        void getAerodynamicsShake(double *, double *);

    // RVA: 0x58E | Ordinal: 1423
        void getCockpitGFactor(double *);

    // RVA: 0x598 | Ordinal: 1433
        void getDamageFlags(int *);

    // RVA: 0x5A5 | Ordinal: 1446
        void getFireInfo(int, double *);

    // RVA: 0x5A6 | Ordinal: 1447
        void getFlagInAir(int *);

    // RVA: 0x5C0 | Ordinal: 1473
        void getGroundCloudInfo(int *, double *);

    // RVA: 0x5C1 | Ordinal: 1474
        void getGunRounds(int *);

    // RVA: 0x5C2 | Ordinal: 1475
        void getGunsShake(double *, double *);

    // RVA: 0x5D9 | Ordinal: 1498
        void getIPointerBrakeChute(class AFM::BrakeChute2 **);

    // RVA: 0x5ED | Ordinal: 1518
        void getIPointerControlSystem(class AFM::ControlSystem **);

    // RVA: 0x5F0 | Ordinal: 1521
        void getIPointerElectroSystem(class AFM::ElectroSystem **);

    // RVA: 0x5F8 | Ordinal: 1529
        void getIPointerFuelSystem(class AFM::FuelSystem **);

    // RVA: 0x5FA | Ordinal: 1531
        void getIPointerGear(class AFM::Gear **);

    // RVA: 0x605 | Ordinal: 1542
        void getIPointerHydroSystem(class AFM::HydroSystem **);

    // RVA: 0x608 | Ordinal: 1545
        void getIPointerIndicationSystem(class AFM::IndicationSystem **);

    // RVA: 0x633 | Ordinal: 1588
        void getIPointerLeftR195(class AFM::R195 **);

    // RVA: 0x66D | Ordinal: 1646
        void getIPointerRightR195(class AFM::R195 **);

    // RVA: 0x67E | Ordinal: 1663
        void getIPointerSensorsSystem(class AFM::SensorsSystem **);

    // RVA: 0x683 | Ordinal: 1668
        void getIPointerStructureDynamicBody(class AFM::DynamicBody **);

    // RVA: 0x6F6 | Ordinal: 1783
        void getPayloadInfo(int, double *);

    // RVA: 0x6F7 | Ordinal: 1784
        void getPiecesInfo(int *, double *);

    // RVA: 0x6F8 | Ordinal: 1785
        void getPilotStatus(bool *);

    // RVA: 0x731 | Ordinal: 1842
        void getSparkBurstInfo(int *, double *);

    // RVA: 0x744 | Ordinal: 1861
        void getSurfaceLevel(void);

    // RVA: 0x745 | Ordinal: 1862
        void getSurfaceProperties(void);

    // RVA: 0x750 | Ordinal: 1873
        void getTouchGroundForce(double *);

    // RVA: 0x7A4 | Ordinal: 1957
        void setExternalForce(double *);

    // RVA: 0x7DF | Ordinal: 2016
        void setImmortal(bool);

    // RVA: 0x84A | Ordinal: 2123
        void setPointerToObjectDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double, double *), void *);

    // RVA: 0x84F | Ordinal: 2128
        void setPointerToSurfaceDistanceFunction(void (__cdecl *)(void *, double *, double *, double, double *), void *);

    // RVA: 0x854 | Ordinal: 2133
        void setPointerToSurfaceHeightFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x859 | Ordinal: 2138
        void setPointerToSurfaceHeightNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x85E | Ordinal: 2143
        void setPointerToSurfaceLevelFunction(void (__cdecl *)(void *, double *, double, double *), void *);

    // RVA: 0x863 | Ordinal: 2148
        void setPointerToSurfaceNormalFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x868 | Ordinal: 2153
        void setPointerToSurfaceNormalNoiseFunction(void (__cdecl *)(void *, double *, unsigned int, double *), void *);

    // RVA: 0x86D | Ordinal: 2158
        void setPointerToSurfaceSpeedFunction(void (__cdecl *)(void *, double *, double *), void *);

    // RVA: 0x872 | Ordinal: 2163
        void setPointerToSurfaceTypeFunction(void (__cdecl *)(void *, double *, unsigned int *), void *);

    // RVA: 0x8ED | Ordinal: 2286
        void setVersion(unsigned long);

    // RVA: 0x148 | Ordinal: 329
        void _StructureBase(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_STRUCTUREBASE_HPP
