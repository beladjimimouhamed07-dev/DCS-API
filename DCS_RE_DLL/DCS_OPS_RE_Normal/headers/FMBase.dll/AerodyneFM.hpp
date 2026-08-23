#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: AerodyneFM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class AerodyneFM
{
public:

    // RVA: 0xE | Ordinal: 15
        void AerodyneFM(class IwoLA *, double);

    // RVA: 0x39D | Ordinal: 926
        void NetCrewMemberAttachDetach(unsigned char, unsigned char, bool);

    // RVA: 0x39E | Ordinal: 927
        void NetCrewMemberChangeSeat(unsigned char, unsigned char);

    // RVA: 0x39F | Ordinal: 928
        void NetCrewMemberUpdateStream(unsigned char, unsigned char, class Mail::Stream &);

    // RVA: 0x3B7 | Ordinal: 952
        void addBoostMixt(double);

    // RVA: 0x3C2 | Ordinal: 963
        void addFuel(double);

    // RVA: 0x410 | Ordinal: 1041
        void calcGFactor(class Math::Vector<3, double> const &);

    // RVA: 0x411 | Ordinal: 1042
        void calcGFactor(void);

    // RVA: 0x465 | Ordinal: 1126
        void collect_external_forces(double);

    // RVA: 0x480 | Ordinal: 1153
        void debugWatch(int, char *, unsigned __int64);

    // RVA: 0x4BE | Ordinal: 1215
        void getAirRush(int, class osg::Vec3d const &, struct WorldGeneral::VRHeadsetAudibilitySetup::EarAirRush &) const;

    // RVA: 0x4C1 | Ordinal: 1218
        void getAirplane(void);

    // RVA: 0x4C7 | Ordinal: 1224
        void getAnyData(class ed::basic_string<char> const &, void *) const;

    // RVA: 0x4F0 | Ordinal: 1265
        void getBoostMixt(void) const;

    // RVA: 0x507 | Ordinal: 1288
        void getCommonAoA(void);

    // RVA: 0x508 | Ordinal: 1289
        void getCommonAoS(void);

    // RVA: 0x50B | Ordinal: 1292
        void getConsumablesList(class ed::vector<enum WorldGeneral::StockpileResources, class ed::allocator<enum WorldGeneral::StockpileResources>> *) const;

    // RVA: 0x523 | Ordinal: 1316
        void getDamageContacts(class ed::vector<struct EagleFM::DamageContact, class ed::allocator<struct EagleFM::DamageContact>> &);

    // RVA: 0x52B | Ordinal: 1324
        void getDebugRenderObjects(void) const;

    // RVA: 0x531 | Ordinal: 1330
        void getDestroyedFlag(void) const;

    // RVA: 0x53C | Ordinal: 1341
        void getDynamicBody(void);

    // RVA: 0x541 | Ordinal: 1346
        void getEffectManager(void);

    // RVA: 0x549 | Ordinal: 1354
        void getEngineParam(enum EagleFM::EngineIDs, int) const;

    // RVA: 0x54A | Ordinal: 1355
        void getEngineRelativeRPM(enum EagleFM::EngineIDs, bool) const;

    // RVA: 0x54D | Ordinal: 1358
        void getEnumeratedData(unsigned int) const;

    // RVA: 0x54F | Ordinal: 1360
        void getExternalFuel(void) const;

    // RVA: 0x560 | Ordinal: 1377
        void getFlowVelocity(int) const;

    // RVA: 0x574 | Ordinal: 1397
        void getFuelLeakage(int) const;

    // RVA: 0x578 | Ordinal: 1401
        void getFuselageControlState(enum WorldGeneral::FuselageControlSurfaces) const;

    // RVA: 0x57D | Ordinal: 1406
        void getGearDoorState(int) const;

    // RVA: 0x580 | Ordinal: 1409
        void getGearNumBySegment(class ed::basic_string<char> const &) const;

    // RVA: 0x581 | Ordinal: 1410
        void getGearPostState(int) const;

    // RVA: 0x59E | Ordinal: 1439
        void getInternalFuel(void) const;

    // RVA: 0x5CC | Ordinal: 1485
        void getModelingDeltaTime(void) const;

    // RVA: 0x5D6 | Ordinal: 1495
        void getMovingFreezed(void) const;

    // RVA: 0x5D8 | Ordinal: 1497
        void getNetIsMaster(void) const;

    // RVA: 0x5E0 | Ordinal: 1505
        void getNoseGearPostYaw(void) const;

    // RVA: 0x5E5 | Ordinal: 1510
        void getOrientation(void) const;

    // RVA: 0x5F2 | Ordinal: 1523
        void getOxygenSystem(void);

    // RVA: 0x5F9 | Ordinal: 1530
        void getPayload(unsigned int) const;

    // RVA: 0x603 | Ordinal: 1540
        void getPitch(void) const;

    // RVA: 0x616 | Ordinal: 1559
        void getPosition(void) const;

    // RVA: 0x63E | Ordinal: 1599
        void getRefuelFlow(bool, double *) const;

    // RVA: 0x65E | Ordinal: 1631
        void getRigidBody(void);

    // RVA: 0x660 | Ordinal: 1633
        void getRoll(void) const;

    // RVA: 0x664 | Ordinal: 1637
        void getRotateSpeed_l(void) const;

    // RVA: 0x666 | Ordinal: 1639
        void getRotateSpeed_w(void) const;

    // RVA: 0x67B | Ordinal: 1660
        void getSectorAudibility(int, float, class osg::Vec3d const &, struct WorldGeneral::VRHeadsetAudibilitySetup &) const;

    // RVA: 0x686 | Ordinal: 1671
        void getShakeValue(void) const;

    // RVA: 0x694 | Ordinal: 1685
        void getStabilizerControlState(enum WorldGeneral::StabilizerControlSurfaces) const;

    // RVA: 0x69B | Ordinal: 1692
        void getStrutCompression(int) const;

    // RVA: 0x69F | Ordinal: 1696
        void getSurfaceNormalGearCoeff(int) const;

    // RVA: 0x6A6 | Ordinal: 1703
        void getTailControlState(enum WorldGeneral::KeelControlSurfaces) const;

    // RVA: 0x6B5 | Ordinal: 1718
        void getTimePosition(void) const;

    // RVA: 0x6B8 | Ordinal: 1721
        void getTireCompression(int) const;

    // RVA: 0x6CB | Ordinal: 1740
        void getVelocity_l(void) const;

    // RVA: 0x6CD | Ordinal: 1742
        void getVelocity_w(void) const;

    // RVA: 0x6EF | Ordinal: 1776
        void getWheelRotationPhase(int) const;

    // RVA: 0x6F2 | Ordinal: 1779
        void getWingControlState(enum WorldGeneral::WingControlSurfaces) const;

    // RVA: 0x6F4 | Ordinal: 1781
        void getYaw(void) const;

    // RVA: 0x731 | Ordinal: 1842
        void initAirStart(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, float, float, float);

    // RVA: 0x73A | Ordinal: 1851
        void initColdStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x746 | Ordinal: 1863
        void initHotStart(class Math::Vector<3, double> const &, float, float, class Math::Vector<3, double> const &);

    // RVA: 0x754 | Ordinal: 1877
        void initPreStart(void);

    // RVA: 0x777 | Ordinal: 1912
        void isAirRefuelConnectionAvailable(void) const;

    // RVA: 0x787 | Ordinal: 1928
        void isSlavedToPosition(void) const;

    // RVA: 0x788 | Ordinal: 1929
        void isSystemsDamaged(void) const;

    // RVA: 0x79C | Ordinal: 1949
        void onBurstFinished(signed char, signed char);

    // RVA: 0x79D | Ordinal: 1950
        void onBurstStarted(signed char, signed char);

    // RVA: 0x79E | Ordinal: 1951
        void onGunFired(signed char, signed char);

    // RVA: 0x79F | Ordinal: 1952
        void onMissileLaunched(int);

    // RVA: 0x7A2 | Ordinal: 1955
        void onRocketLaunched(void);

    // RVA: 0x7A3 | Ordinal: 1956
        void onTankerConnect(bool);

    // RVA: 0x7A4 | Ordinal: 1957
        void oscilloscope_init(class IcChart *);

    // RVA: 0x7A5 | Ordinal: 1958
        void oscilloscope_init(void);

    // RVA: 0x7C2 | Ordinal: 1987
        void repair(void);

    // RVA: 0x805 | Ordinal: 2054
        void setAnyData(class ed::basic_string<char> const &, void *);

    // RVA: 0x807 | Ordinal: 2056
        void setArcadeFlight(bool);

    // RVA: 0x815 | Ordinal: 2070
        void setBoostMixt(double);

    // RVA: 0x81C | Ordinal: 2077
        void setCellIF(int, float, float);

    // RVA: 0x823 | Ordinal: 2084
        void setCommand(int, float);

    // RVA: 0x848 | Ordinal: 2121
        void setDrawArgs(float *, unsigned __int64);

    // RVA: 0x849 | Ordinal: 2122
        void setDustFlag(bool);

    // RVA: 0x852 | Ordinal: 2131
        void setExternalForce(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, bool, bool);

    // RVA: 0x853 | Ordinal: 2132
        void setExternalForce(class Math::Vector<3, double> const &, bool);

    // RVA: 0x854 | Ordinal: 2133
        void setExternalMoment(class Math::Vector<3, double> const &, bool);

    // RVA: 0x866 | Ordinal: 2151
        void setFuel(double);

    // RVA: 0x86B | Ordinal: 2156
        void setGearContact(int, class Math::Vector<3, double> const &, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x86C | Ordinal: 2157
        void setGearContact(int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x87D | Ordinal: 2174
        void setImmortal(bool);

    // RVA: 0x8A6 | Ordinal: 2215
        void setMovingFreeze(bool);

    // RVA: 0x8A7 | Ordinal: 2216
        void setNetIsMaster(bool);

    // RVA: 0x8B3 | Ordinal: 2228
        void setOrientaion(class Math::Matrix<3, float> const &);

    // RVA: 0x8BE | Ordinal: 2239
        void setPayload(int, struct EagleFM::Payload const &);

    // RVA: 0x8BF | Ordinal: 2240
        void setPayload(double, class Math::Vector<3, double> const &);

    // RVA: 0x8D1 | Ordinal: 2258
        void setPosition(class Math::Vector<3, double> const &);

    // RVA: 0x8D5 | Ordinal: 2262
        void setProperty(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x8D6 | Ordinal: 2263
        void setProperty(class ed::basic_string<char> const &, float);

    // RVA: 0x8E1 | Ordinal: 2274
        void setRefuelFlow(bool, double);

    // RVA: 0x8F0 | Ordinal: 2289
        void setRigidContact(class ed::basic_string<char> const &, int, double, double, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, int, double);

    // RVA: 0x913 | Ordinal: 2324
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x912 | Ordinal: 2323
        void setUnderlyingSurface2(double, double, unsigned int);

    // RVA: 0x918 | Ordinal: 2329
        void setUnitType(class ed::basic_string<char> const &);

    // RVA: 0x919 | Ordinal: 2330
        void setUnlimitedFuel(bool);

    // RVA: 0x949 | Ordinal: 2378
        void simulate(double);

    // RVA: 0x97C | Ordinal: 2429
        void slaveToPosition(struct Math::Rotation3<float> const *, class Math::Vector<3, double> const *, class Math::Vector<3, double> const *);

    // RVA: 0x980 | Ordinal: 2433
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x991 | Ordinal: 2450
        void updateAoAandAoS(void);

    // RVA: 0x17B | Ordinal: 380
        void _AerodyneFM(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_AERODYNEFM_HPP
