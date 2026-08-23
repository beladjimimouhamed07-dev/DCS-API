#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wWeaponSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWeaponSystem
{
public:

    // RVA: 0x14F | Ordinal: 336
        void BC_trackTarget(double &);

    // RVA: 0x158 | Ordinal: 345
        void CFF_adjustTargetPoint(unsigned int, float, float);

    // RVA: 0x15C | Ordinal: 349
        void CFF_getTimeToTarget(class MovingObject *) const;

    // RVA: 0x165 | Ordinal: 358
        void CFF_switchToFFE(float);

    // RVA: 0x16E | Ordinal: 367
        void CommandSet(int);

    // RVA: 0x16F | Ordinal: 368
        void CommandSet(int, double);

    // RVA: 0x184 | Ordinal: 389
        void GetActiveLNAmmoCount1(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &, int *) const;

    // RVA: 0x186 | Ordinal: 391
        void GetActiveLNAmmoCount2(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x18D | Ordinal: 398
        void GetAmmoCount(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x190 | Ordinal: 401
        void GetArtilleryAmmoCapacity(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x19A | Ordinal: 411
        void GetMaximumWeaponDistance(enum wsystem_type);

    // RVA: 0x19C | Ordinal: 413
        void GetMaximumWeaponHeight(void);

    // RVA: 0x1C8 | Ordinal: 457
        void IsDepends(void) const;

    // RVA: 0x1CB | Ordinal: 460
        void IsDependsOn(class ed::basic_string<char> const &) const;

    // RVA: 0x1D2 | Ordinal: 467
        void IsLockedAndReady(void) const;

    // RVA: 0x1D6 | Ordinal: 471
        void IsTargetAssigned(unsigned int) const;

    // RVA: 0x1D7 | Ordinal: 472
        void IsTargetAssigned(void) const;

    // RVA: 0x1E8 | Ordinal: 489
        void PointedToTarget(void) const;

    // RVA: 0x1EE | Ordinal: 495
        void Position(void) const;

    // RVA: 0x1F1 | Ordinal: 498
        void PrintTrace(void);

    // RVA: 0x1F3 | Ordinal: 500
        void PrntPosition(double) const;

    // RVA: 0x1F4 | Ordinal: 501
        void PrntPosition(void) const;

    // RVA: 0x217 | Ordinal: 536
        void WS_is_radar_of_any_type(void) const;

    // RVA: 0x21B | Ordinal: 540
        void accept_point_target(void) const;

    // RVA: 0x225 | Ordinal: 550
        void addLauncher(class cLauncher *);

    // RVA: 0x239 | Ordinal: 570
        void adjustLauncherAimingTime(float);

    // RVA: 0x241 | Ordinal: 578
        void angleDiviationIsSmall(double, double);

    // RVA: 0x242 | Ordinal: 579
        void angleY_to_arg(double) const;

    // RVA: 0x243 | Ordinal: 580
        void angleY_within_limits(double) const;

    // RVA: 0x244 | Ordinal: 581
        void angleZ_to_arg(double) const;

    // RVA: 0x245 | Ordinal: 582
        void arg_to_angleY(double) const;

    // RVA: 0x246 | Ordinal: 583
        void arg_to_angleZ(double) const;

    // RVA: 0x247 | Ordinal: 584
        void assignAutotrackingTarget(struct wsCommonTarget const &);

    // RVA: 0x251 | Ordinal: 594
        void assignTargetEx(struct wsTarget &, class wWeaponSystemManager const *, class wWeaponSystem const *);

    // RVA: 0x281 | Ordinal: 642
        void canEmission(void) const;

    // RVA: 0x286 | Ordinal: 647
        void canExecuteCFFMission(void) const;

    // RVA: 0x28B | Ordinal: 652
        void can_TacticalDir(void) const;

    // RVA: 0x28D | Ordinal: 654
        void can_accept_missiles(void) const;

    // RVA: 0x28E | Ordinal: 655
        void can_cancel(void);

    // RVA: 0x292 | Ordinal: 659
        void can_manual(void) const;

    // RVA: 0x294 | Ordinal: 661
        void can_master_arm_off(void) const;

    // RVA: 0x295 | Ordinal: 662
        void can_master_arm_on(void) const;

    // RVA: 0x298 | Ordinal: 665
        void cancel(void);

    // RVA: 0x29D | Ordinal: 670
        void cancelAssign(void);

    // RVA: 0x2A0 | Ordinal: 673
        void cancelRestrictedTargets(int);

    // RVA: 0x2AE | Ordinal: 687
        void checkCreateRangefinder(void);

    // RVA: 0x2D0 | Ordinal: 721
        void check_suitable_trk(void) const;

    // RVA: 0x2E0 | Ordinal: 737
        void control(double &);

    // RVA: 0x2E3 | Ordinal: 740
        void copy_missiles(unsigned char, class ed::vector<struct wIds, class ed::allocator<struct wIds>> &);

    // RVA: 0x2EF | Ordinal: 752
        void debug_omega_activity(double &);

    // RVA: 0x2F4 | Ordinal: 757
        void determine_my_step(enum wsystem_type const &);

    // RVA: 0x2FD | Ordinal: 766
        void enableRangefinder(bool);

    // RVA: 0x301 | Ordinal: 770
        void findAppropriateDirector(class ed::basic_string<char> const &) const;

    // RVA: 0x304 | Ordinal: 773
        void findLauncherOnID(unsigned char) const;

    // RVA: 0x31C | Ordinal: 797
        void fullAmmoResetComplete(void);

    // RVA: 0x31F | Ordinal: 800
        void fullAmmoResetStart(double);

    // RVA: 0x32A | Ordinal: 811
        void getAmmo(class Ammo &) const;

    // RVA: 0x349 | Ordinal: 842
        void getArtilleryShellMaxHeight(unsigned int) const;

    // RVA: 0x350 | Ordinal: 849
        void getAzimuthCorrection(void) const;

    // RVA: 0x356 | Ordinal: 855
        void getBarrelsLockDelay(class cLauncher const *const) const;

    // RVA: 0x35B | Ordinal: 860
        void getCameraViewPoint(bool);

    // RVA: 0x363 | Ordinal: 868
        void getCockpitName(void) const;

    // RVA: 0x36D | Ordinal: 878
        void getCorrectionsApplyingState(void) const;

    // RVA: 0x370 | Ordinal: 881
        void getCurrentTargetHandicap(void) const;

    // RVA: 0x371 | Ordinal: 882
        void getCurrentTargetPriority(void);

    // RVA: 0x388 | Ordinal: 905
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x3A4 | Ordinal: 933
        void getDrawArg1_id(void);

    // RVA: 0x3A5 | Ordinal: 934
        void getDrawArg2_id(void);

    // RVA: 0x3A9 | Ordinal: 938
        void getElevationCorrection(void) const;

    // RVA: 0x3AA | Ordinal: 939
        void getEmissionModeForTarget(class MovingObject *, class ed::vector<struct FrequencyRange, class ed::allocator<struct FrequencyRange>> &, bool, float *, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x3B5 | Ordinal: 950
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3C4 | Ordinal: 965
        void getHost(void) const;

    // RVA: 0x3C9 | Ordinal: 970
        void getIdSystem(void) const;

    // RVA: 0x3CE | Ordinal: 975
        void getLaunchersCount(void) const;

    // RVA: 0x3D2 | Ordinal: 979
        void getManager(void) const;

    // RVA: 0x3D5 | Ordinal: 982
        void getManualLN(void) const;

    // RVA: 0x3D6 | Ordinal: 983
        void getManualLNsecondary(void) const;

    // RVA: 0x3D7 | Ordinal: 984
        void getManualStabilizer(void) const;

    // RVA: 0x3D8 | Ordinal: 985
        void getManualTarget(void) const;

    // RVA: 0x3DB | Ordinal: 988
        void getManualTargetAim(class wPosition3<double> const &, class osg::Vec3d &);

    // RVA: 0x3DE | Ordinal: 991
        void getManualTargetTemp(void) const;

    // RVA: 0x3DF | Ordinal: 992
        void getManualTargetTime(void) const;

    // RVA: 0x3E1 | Ordinal: 994
        void getManualTrackingTarget(void) const;

    // RVA: 0x3E3 | Ordinal: 996
        void getMaxBottomMaxTopAngles(double &, double &) const;

    // RVA: 0x3E7 | Ordinal: 1000
        void getMaxTacticalSpeed(void);

    // RVA: 0x3E8 | Ordinal: 1001
        void getMaxTargetPriority(class MovingObject *);

    // RVA: 0x3F0 | Ordinal: 1009
        void getMountingPos(void) const;

    // RVA: 0x3FB | Ordinal: 1020
        void getNextShotDelay(unsigned int, double &) const;

    // RVA: 0x3FE | Ordinal: 1023
        void getPPIName(void) const;

    // RVA: 0x414 | Ordinal: 1045
        void getRangeWithRangefinder(double &) const;

    // RVA: 0x415 | Ordinal: 1046
        void getRangefinderMaxRange(void) const;

    // RVA: 0x416 | Ordinal: 1047
        void getRangefinderType(unsigned char) const;

    // RVA: 0x417 | Ordinal: 1048
        void getRangerSetMode(void) const;

    // RVA: 0x418 | Ordinal: 1049
        void getReactionTime(void) const;

    // RVA: 0x41F | Ordinal: 1056
        void getSightIndicationMode(void) const;

    // RVA: 0x421 | Ordinal: 1058
        void getSightMasterMode(void) const;

    // RVA: 0x425 | Ordinal: 1062
        void getStabilizerPresent(void) const;

    // RVA: 0x427 | Ordinal: 1064
        void getStartFireTime(unsigned int, double &) const;

    // RVA: 0x43A | Ordinal: 1083
        void getThreatRange(unsigned int) const;

    // RVA: 0x445 | Ordinal: 1094
        void getType(void) const;

    // RVA: 0x451 | Ordinal: 1106
        void get_bestY(double, double) const;

    // RVA: 0x458 | Ordinal: 1113
        void get_currY_Z(double &, double &);

    // RVA: 0x459 | Ordinal: 1114
        void get_currY_fast(double) const;

    // RVA: 0x45A | Ordinal: 1115
        void get_currY_fast_(double) const;

    // RVA: 0x45B | Ordinal: 1116
        void get_currY_in_hostLCS(double);

    // RVA: 0x45C | Ordinal: 1117
        void get_currZ_fast(double) const;

    // RVA: 0x45D | Ordinal: 1118
        void get_currZ_fast_(double) const;

    // RVA: 0x463 | Ordinal: 1124
        void get_deviation(void) const;

    // RVA: 0x469 | Ordinal: 1130
        void get_moveable(void) const;

    // RVA: 0x46E | Ordinal: 1135
        void get_sight_currY_Z(double &, double &);

    // RVA: 0x472 | Ordinal: 1139
        void get_targetID(void) const;

    // RVA: 0x479 | Ordinal: 1146
        void good_to_attack(class MovingObject *, float &, class wWeaponSystemManager const *, unsigned __int64);

    // RVA: 0x484 | Ordinal: 1157
        void hasType(enum wsystem_type) const;

    // RVA: 0x485 | Ordinal: 1158
        void has_base(void) const;

    // RVA: 0x4AA | Ordinal: 1195
        void isDirector(void) const;

    // RVA: 0x4AD | Ordinal: 1198
        void isEscortTargetByMissile(void);

    // RVA: 0x4B1 | Ordinal: 1202
        void isHumanControlled(void);

    // RVA: 0x4BA | Ordinal: 1211
        void isOwner(unsigned char);

    // RVA: 0x4BE | Ordinal: 1215
        void isRangefinderValueValid(bool) const;

    // RVA: 0x4CC | Ordinal: 1229
        void isWS_SharesBarrels(void);

    // RVA: 0x4D3 | Ordinal: 1236
        void is_in_angles(double) const;

    // RVA: 0x4D4 | Ordinal: 1237
        void is_in_angles(double, double) const;

    // RVA: 0x4D5 | Ordinal: 1238
        void is_in_firePermittedAngles(int *, int *) const;

    // RVA: 0x4DB | Ordinal: 1244
        void is_rearming(void) const;

    // RVA: 0x4DF | Ordinal: 1248
        void killActivity(class cPointerTemplate<class wTime> &);

    // RVA: 0x4EB | Ordinal: 1260
        void lockBarrel(class ed::basic_string<char> const &, class cLauncher *, double);

    // RVA: 0x4ED | Ordinal: 1262
        void lockManualTarget(class MovingObject *);

    // RVA: 0x4EF | Ordinal: 1264
        void lockoff(void);

    // RVA: 0x4FF | Ordinal: 1280
        void maintain(double &);

    // RVA: 0x500 | Ordinal: 1281
        void manualFireTry(class cLauncher *);

    // RVA: 0x508 | Ordinal: 1289
        void max_number_of_tracking_missiles(void) const;

    // RVA: 0x50B | Ordinal: 1292
        void max_number_of_tracking_missiles_conditioned(void) const;

    // RVA: 0x515 | Ordinal: 1302
        void needToBeRearmed(void) const;

    // RVA: 0x536 | Ordinal: 1335
        void netIsMaster(void);

    // RVA: 0x541 | Ordinal: 1346
        void netSetManualTarget(unsigned int);

    // RVA: 0x549 | Ordinal: 1354
        void net_TrackingEmissionTurnOnOff(bool);

    // RVA: 0x557 | Ordinal: 1368
        void net_passiveAssign(struct wsTarget &);

    // RVA: 0x558 | Ordinal: 1369
        void net_passiveCancel(void);

    // RVA: 0x55C | Ordinal: 1373
        void net_rotateToReferencePositionHandler(double &);

    // RVA: 0x562 | Ordinal: 1379
        void netfire(struct FireMsgData const &);

    // RVA: 0x567 | Ordinal: 1384
        void number_of_tracking_missiles(unsigned int) const;

    // RVA: 0x568 | Ordinal: 1385
        void number_of_tracking_missiles(void) const;

    // RVA: 0x56B | Ordinal: 1388
        void onLauncherRearmed(void);

    // RVA: 0x56D | Ordinal: 1390
        void onLauncherRearming(void);

    // RVA: 0x575 | Ordinal: 1398
        void on_fire(class cLauncher *, unsigned int, class wsType const &, void *, unsigned int);

    // RVA: 0x576 | Ordinal: 1399
        void openedCockpit(void) const;

    // RVA: 0x578 | Ordinal: 1401
        void owner(void) const;

    // RVA: 0x586 | Ordinal: 1415
        void postInit(void);

    // RVA: 0x58F | Ordinal: 1424
        void preInit(class wWeaponSystemManager *, class MovingObject *, class Lua::Config &, int);

    // RVA: 0x596 | Ordinal: 1431
        void prepare_angles(double, double);

    // RVA: 0x5A0 | Ordinal: 1441
        void realAttacker(void) const;

    // RVA: 0x5A3 | Ordinal: 1444
        void rearm_all(void);

    // RVA: 0x5A8 | Ordinal: 1449
        void releaseOwnership(unsigned char);

    // RVA: 0x5AA | Ordinal: 1451
        void releaseReloadPosition(class cLauncher *);

    // RVA: 0x5B1 | Ordinal: 1458
        void removeLauncher(class cLauncher *);

    // RVA: 0x5BE | Ordinal: 1471
        void resetAimingCorrections(void);

    // RVA: 0x5C1 | Ordinal: 1474
        void resetAzimuthDirection(void);

    // RVA: 0x5C4 | Ordinal: 1477
        void resetToReferencePosition(void);

    // RVA: 0x5C7 | Ordinal: 1480
        void rotate(unsigned char, double, double);

    // RVA: 0x5C8 | Ordinal: 1481
        void rotateToReferencePosition(void);

    // RVA: 0x5CA | Ordinal: 1483
        void rotateToReloadPosition(class cLauncher *);

    // RVA: 0x5CB | Ordinal: 1484
        void rotationLauncher(double &);

    // RVA: 0x5CC | Ordinal: 1485
        void rotationLauncher_manual(double &);

    // RVA: 0x5DA | Ordinal: 1499
        void setAI_OFF(void);

    // RVA: 0x5DC | Ordinal: 1501
        void setAI_ON(void);

    // RVA: 0x5E2 | Ordinal: 1507
        void setAimingCorrectionsByInputData(void);

    // RVA: 0x5E8 | Ordinal: 1513
        void setAmmunitionLoadout(class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *);

    // RVA: 0x5ED | Ordinal: 1518
        void setCurrentTargetHandicap(float);

    // RVA: 0x5EE | Ordinal: 1519
        void setCurrentTargetPriority(float);

    // RVA: 0x5FE | Ordinal: 1535
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x613 | Ordinal: 1556
        void setManual(bool);

    // RVA: 0x62B | Ordinal: 1580
        void setRequiredDirection(class osg::Vec3d const &);

    // RVA: 0x65B | Ordinal: 1628
        void sound_update(void);

    // RVA: 0x669 | Ordinal: 1642
        void start_stop_tracking(void);

    // RVA: 0x66A | Ordinal: 1643
        void start_stop_tracking(bool);

    // RVA: 0x66C | Ordinal: 1645
        void startedRocketHasDied(unsigned int);

    // RVA: 0x672 | Ordinal: 1651
        void stopRotation(void);

    // RVA: 0x679 | Ordinal: 1658
        void takeOwnership(unsigned char);

    // RVA: 0x67A | Ordinal: 1659
        void takeRange(void);

    // RVA: 0x67F | Ordinal: 1664
        void track_missile(unsigned int, unsigned int);

    // RVA: 0x680 | Ordinal: 1665
        void trackingEmissionIsOn(void) const;

    // RVA: 0x682 | Ordinal: 1667
        void trackingEmissionRequest(bool);

    // RVA: 0x683 | Ordinal: 1668
        void tracking_target(unsigned int, bool) const;

    // RVA: 0x684 | Ordinal: 1669
        void turnSpotlight(bool);

    // RVA: 0x688 | Ordinal: 1673
        void uninitSystem(void);

    // RVA: 0x689 | Ordinal: 1674
        void unlockBarrel(class ed::basic_string<char> const &, class cLauncher *);

    // RVA: 0x692 | Ordinal: 1683
        void updateDrawArguments(double);

    // RVA: 0x699 | Ordinal: 1690
        void update_manual_stabilizer_vec(class osg::Vec3d const &);

    // RVA: 0x6A0 | Ordinal: 1697
        void validatePointerOnObjectID(unsigned int, class MovingObject *);

    // RVA: 0x51 | Ordinal: 82
        void wWeaponSystem(class wWeaponSystem const &);

    // RVA: 0x52 | Ordinal: 83
        void wWeaponSystem(void);

    // RVA: 0x7F | Ordinal: 128
        void _wWeaponSystem(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WWEAPONSYSTEM_HPP
