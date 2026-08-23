#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MovingObject
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class MovingObject
{
public:

    // RVA: 0x53A | Ordinal: 1339
        void ChangePos(class wPosition3<float> const &);

    // RVA: 0x53C | Ordinal: 1341
        void Class(void) const;

    // RVA: 0x543 | Ordinal: 1348
        void Coalition(enum wcCoalitionName);

    // RVA: 0x544 | Ordinal: 1349
        void Coalition(void) const;

    // RVA: 0x547 | Ordinal: 1352
        void CommandSet(int);

    // RVA: 0x548 | Ordinal: 1353
        void CommandSet(int, double);

    // RVA: 0x550 | Ordinal: 1361
        void Course(void);

    // RVA: 0x55C | Ordinal: 1373
        void EventSet(unsigned int, unsigned int, int);

    // RVA: 0x55E | Ordinal: 1375
        void Flags(void) const;

    // RVA: 0x55F | Ordinal: 1376
        void ForceID(unsigned int, unsigned int, class ed::basic_string<char> const &);

    // RVA: 0x560 | Ordinal: 1377
        void ForcePosition(class wPosition3<double> const &);

    // RVA: 0x564 | Ordinal: 1381
        void GetCommander(void) const;

    // RVA: 0x56C | Ordinal: 1389
        void GetKillRadius(class osg::Vec3f const &, class wsType const &, float *);

    // RVA: 0x56D | Ordinal: 1390
        void GetLastPosition(void) const;

    // RVA: 0x57B | Ordinal: 1404
        void GetPoint(double);

    // RVA: 0x57C | Ordinal: 1405
        void GetPoint(void);

    // RVA: 0x588 | Ordinal: 1417
        void GetPosition(void);

    // RVA: 0x592 | Ordinal: 1427
        void GunId(void) const;

    // RVA: 0x593 | Ordinal: 1428
        void Hbar(void);

    // RVA: 0x597 | Ordinal: 1432
        void Hrad(void);

    // RVA: 0x59C | Ordinal: 1437
        void In_Air_(void) const;

    // RVA: 0x5A3 | Ordinal: 1444
        void IsDead(void) const;

    // RVA: 0x5A5 | Ordinal: 1446
        void IsFlag(int) const;

    // RVA: 0x5A7 | Ordinal: 1448
        void IsTarget(class MovingObject *) const;

    // RVA: 0x5A8 | Ordinal: 1449
        void Is_Target(void);

    // RVA: 0x5B1 | Ordinal: 1458
        void Life(float);

    // RVA: 0x5B2 | Ordinal: 1459
        void Life(void) const;

    // RVA: 0x5B0 | Ordinal: 1457
        void Life0(void) const;

    // RVA: 0x5B3 | Ordinal: 1460
        void LinkToTarget(unsigned int, unsigned int);

    // RVA: 0x5B4 | Ordinal: 1461
        void LinkToTarget(unsigned int, class MovingObject const *);

    // RVA: 0x11D | Ordinal: 286
        void MovingObject(void);

    // RVA: 0x11E | Ordinal: 287
        void MovingObject(bool);

    // RVA: 0x5BC | Ordinal: 1469
        void Nx(void) const;

    // RVA: 0x5BD | Ordinal: 1470
        void Ny(void) const;

    // RVA: 0x5BE | Ordinal: 1471
        void Nz(void) const;

    // RVA: 0x5BF | Ordinal: 1472
        void Om(void) const;

    // RVA: 0x5C0 | Ordinal: 1473
        void Omx(void) const;

    // RVA: 0x5C1 | Ordinal: 1474
        void Omy(void) const;

    // RVA: 0x5C2 | Ordinal: 1475
        void Omz(void) const;

    // RVA: 0x5CA | Ordinal: 1483
        void Position(double);

    // RVA: 0x5CB | Ordinal: 1484
        void Position(void);

    // RVA: 0x5D3 | Ordinal: 1492
        void PostCollisionProcessing(struct wsCollisionData *);

    // RVA: 0x5D6 | Ordinal: 1495
        void PrintTrace(void);

    // RVA: 0x5DB | Ordinal: 1500
        void ResetFlag(int);

    // RVA: 0x5DC | Ordinal: 1501
        void ResetFlag(void);

    // RVA: 0x5DE | Ordinal: 1503
        void Roll(void);

    // RVA: 0x5DF | Ordinal: 1504
        void ScalarVelocity(void) const;

    // RVA: 0x5E1 | Ordinal: 1506
        void SetCommand(class MovingObjectCommand const *);

    // RVA: 0x5E2 | Ordinal: 1507
        void SetCommand(class SwitchEPLRS const *);

    // RVA: 0x5E3 | Ordinal: 1508
        void SetCommand(class SwitchSMOKE_ON_OFF const *);

    // RVA: 0x5E4 | Ordinal: 1509
        void SetFlag(int);

    // RVA: 0x5EC | Ordinal: 1517
        void State(unsigned char);

    // RVA: 0x5ED | Ordinal: 1518
        void State(void) const;

    // RVA: 0x5F2 | Ordinal: 1523
        void Tang(void);

    // RVA: 0x5F3 | Ordinal: 1524
        void Target_ID(void) const;

    // RVA: 0x5F4 | Ordinal: 1525
        void Task_Number(void);

    // RVA: 0x5F5 | Ordinal: 1526
        void Type(class wsType const &);

    // RVA: 0x5F6 | Ordinal: 1527
        void Type(void) const;

    // RVA: 0x5F9 | Ordinal: 1530
        void VectorAngular(void) const;

    // RVA: 0x5FA | Ordinal: 1531
        void VectorVelocity(class osg::Vec3f const &);

    // RVA: 0x5FB | Ordinal: 1532
        void VectorVelocity(void) const;

    // RVA: 0x5FD | Ordinal: 1534
        void Vy(void) const;

    // RVA: 0x643 | Ordinal: 1604
        void calculateYawPitchRoll(void);

    // RVA: 0x645 | Ordinal: 1606
        void cast_MovingObject(void);

    // RVA: 0x647 | Ordinal: 1608
        void checkAddGroupDescent(unsigned int, bool, bool);

    // RVA: 0x64B | Ordinal: 1612
        void checkDrawingInCockpit(void);

    // RVA: 0x74F | Ordinal: 1872
        void createCrashEvent(void);

    // RVA: 0x751 | Ordinal: 1874
        void createKillEvent(void);

    // RVA: 0x769 | Ordinal: 1898
        void destroy(bool);

    // RVA: 0x77E | Ordinal: 1919
        void doSoundUpdate(void);

    // RVA: 0x7BA | Ordinal: 1979
        void formOrientation(class wPosition3<float> &, float, float, float);

    // RVA: 0x7BB | Ordinal: 1980
        void formPositionOnSurface(class wPosition3<float> *, class osg::Vec3f *, class osg::Vec3f *);

    // RVA: 0x7C7 | Ordinal: 1992
        void getAimPoint(void);

    // RVA: 0x7CA | Ordinal: 1995
        void getAmmo(void) const;

    // RVA: 0x7CB | Ordinal: 1996
        void getArmoredInterface(void) const;

    // RVA: 0x7D4 | Ordinal: 2005
        void getCameraMaxDist(class osg::Vec3d const &, double const &, bool);

    // RVA: 0x7D5 | Ordinal: 2006
        void getCameraViewPoint(bool);

    // RVA: 0x81B | Ordinal: 2076
        void getCommunicator(void);

    // RVA: 0x81F | Ordinal: 2080
        void getCrewMemberName(int) const;

    // RVA: 0x820 | Ordinal: 2081
        void getDatalinkTerminal(unsigned char) const;

    // RVA: 0x824 | Ordinal: 2085
        void getDescentCap(void);

    // RVA: 0x826 | Ordinal: 2087
        void getDetectable(void);

    // RVA: 0x82A | Ordinal: 2091
        void getDetectionPoint(void);

    // RVA: 0x82E | Ordinal: 2095
        void getECM(void);

    // RVA: 0x833 | Ordinal: 2100
        void getFindingDistance(void) const;

    // RVA: 0x835 | Ordinal: 2102
        void getFuel(bool) const;

    // RVA: 0x846 | Ordinal: 2119
        void getInternalCargoConst(void) const;

    // RVA: 0x84B | Ordinal: 2124
        void getKillingDistance(void) const;

    // RVA: 0x84C | Ordinal: 2125
        void getKillingDistanceMin(void) const;

    // RVA: 0x861 | Ordinal: 2146
        void getMissionId(void) const;

    // RVA: 0x867 | Ordinal: 2152
        void getN_obj(void) const;

    // RVA: 0x8A2 | Ordinal: 2211
        void getName(void) const;

    // RVA: 0x8D7 | Ordinal: 2264
        void getPlayerTaskIndicator(void) const;

    // RVA: 0x8DB | Ordinal: 2268
        void getPosUpdateTime(void) const;

    // RVA: 0x8ED | Ordinal: 2286
        void getRelativeLife(void) const;

    // RVA: 0x8F6 | Ordinal: 2295
        void getSkill(void) const;

    // RVA: 0x8F7 | Ordinal: 2296
        void getSounderRef(void);

    // RVA: 0x8FB | Ordinal: 2300
        void getSurfInfo(void);

    // RVA: 0x8FC | Ordinal: 2301
        void getSurfInfo(void) const;

    // RVA: 0x99B | Ordinal: 2460
        void isAI_ON(void) const;

    // RVA: 0x9AF | Ordinal: 2480
        void isEffective(void) const;

    // RVA: 0x9B4 | Ordinal: 2485
        void isHumanControlled(void) const;

    // RVA: 0x9BE | Ordinal: 2495
        void isRadiatedByRadar(unsigned int, float &) const;

    // RVA: 0x9C9 | Ordinal: 2506
        void isUncontrollableFlag(void) const;

    // RVA: 0xA5D | Ordinal: 2654
        void log(void);

    // RVA: 0xA77 | Ordinal: 2680
        void netDiscard(void);

    // RVA: 0xA7D | Ordinal: 2686
        void netGetHost(void) const;

    // RVA: 0xA7E | Ordinal: 2687
        void netGetPeer(void) const;

    // RVA: 0xA7F | Ordinal: 2688
        void netIsMaster(void) const;

    // RVA: 0xA82 | Ordinal: 2691
        void netSetMaster(bool);

    // RVA: 0xB25 | Ordinal: 2854
        void procTrackSnapshotData(struct woObjectTrackSnapshotData const &);

    // RVA: 0xB97 | Ordinal: 2968
        void setAI_OFF(void);

    // RVA: 0xB98 | Ordinal: 2969
        void setAI_ON(void);

    // RVA: 0xBA6 | Ordinal: 2983
        void setDrawArgumentValue(int, float);

    // RVA: 0xBA7 | Ordinal: 2984
        void setECM(class wECM *);

    // RVA: 0xBAC | Ordinal: 2989
        void setInitCoalition(enum wcCoalitionName);

    // RVA: 0xBB3 | Ordinal: 2996
        void setMissionId(class ed::basic_string<char> const &);

    // RVA: 0xBB4 | Ordinal: 2997
        void setMissionId(unsigned int);

    // RVA: 0xBB5 | Ordinal: 2998
        void setName(class ed::basic_string<char> const &);

    // RVA: 0xBBD | Ordinal: 3006
        void setOrientation(void);

    // RVA: 0xC04 | Ordinal: 3077
        void soundInit(char const *, char const *);

    // RVA: 0xC05 | Ordinal: 3078
        void soundInitWithAutoName(char const *);

    // RVA: 0xC06 | Ordinal: 3079
        void soundUpdate(void);

    // RVA: 0xC07 | Ordinal: 3080
        void sound_exit(void);

    // RVA: 0xC08 | Ordinal: 3081
        void sound_get_params(struct SND_HostParams *);

    // RVA: 0xC09 | Ordinal: 3082
        void sound_host(void);

    // RVA: 0xC0A | Ordinal: 3083
        void sound_init(char const *);

    // RVA: 0xC0B | Ordinal: 3084
        void sound_update(void);

    // RVA: 0xC29 | Ordinal: 3114
        void takeMoraleHit(float, class osg::Vec3f const &);

    // RVA: 0xC2F | Ordinal: 3120
        void tryToDisEmbark(class wControl *);

    // RVA: 0xC30 | Ordinal: 3121
        void tryToEmbark(class wControl *);

    // RVA: 0xC47 | Ordinal: 3144
        void updateCommandMenu(void);

    // RVA: 0x28B | Ordinal: 652
        void _MovingObject(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_MOVINGOBJECT_HPP
