#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncher
{
public:

    // RVA: 0x154 | Ordinal: 341
        void CFF_adjustTargetPoint(float, float);

    // RVA: 0x15E | Ordinal: 351
        void CFF_inAimingAdjustMode(void) const;

    // RVA: 0x161 | Ordinal: 354
        void CFF_switchToFFE(float);

    // RVA: 0x17F | Ordinal: 384
        void DetermineDependenceType(void);

    // RVA: 0x189 | Ordinal: 394
        void GetAmmoCapacity(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x18C | Ordinal: 397
        void GetAmmoCount(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x18A | Ordinal: 395
        void GetAmmoCount1(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &, int *) const;

    // RVA: 0x18B | Ordinal: 396
        void GetAmmoCount2(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x18F | Ordinal: 400
        void GetArtilleryAmmoCapacity(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x1C7 | Ordinal: 456
        void IsDepends(void) const;

    // RVA: 0x1CA | Ordinal: 459
        void IsDependsOn(class ed::basic_string<char> const &) const;

    // RVA: 0x1CE | Ordinal: 463
        void IsIndirect(void) const;

    // RVA: 0x1D1 | Ordinal: 466
        void IsLockedAndReady(void) const;

    // RVA: 0x1D4 | Ordinal: 469
        void IsMyTargetInRange(void) const;

    // RVA: 0x1EB | Ordinal: 492
        void Position(double) const;

    // RVA: 0x1EC | Ordinal: 493
        void Position(void) const;

    // RVA: 0x1FC | Ordinal: 509
        void ScalarVelocity(void) const;

    // RVA: 0x216 | Ordinal: 535
        void VectorVelocity(void) const;

    // RVA: 0x219 | Ordinal: 538
        void acceptImpulse(class osg::Vec3d const &, class osg::Vec3d const &);

    // RVA: 0x222 | Ordinal: 547
        void addBarrel(class wBarrel *);

    // RVA: 0x229 | Ordinal: 554
        void addStowage(class wStowage *);

    // RVA: 0x236 | Ordinal: 567
        void adjustAimingTime(float);

    // RVA: 0x23D | Ordinal: 574
        void aim(void);

    // RVA: 0x23E | Ordinal: 575
        void alignPlatformToTarget(double, double) const;

    // RVA: 0x24C | Ordinal: 589
        void assignTargetEx(struct wsTarget const &);

    // RVA: 0x25F | Ordinal: 608
        void barrelFire(struct FireMsgData const &);

    // RVA: 0x28 | Ordinal: 41
        void cLauncher(class cLauncher const &);

    // RVA: 0x29 | Ordinal: 42
        void cLauncher(void);

    // RVA: 0x268 | Ordinal: 617
        void calcAndSetPlatformAlignment(class MovingObject *);

    // RVA: 0x26C | Ordinal: 621
        void calculateAimingCorrections(struct BC_InputData const &, double &, double &);

    // RVA: 0x271 | Ordinal: 626
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x27E | Ordinal: 639
        void calculate_new_deviations(bool);

    // RVA: 0x280 | Ordinal: 641
        void canDelayedReloadingBePerformed(void) const;

    // RVA: 0x282 | Ordinal: 643
        void canExecuteCFFMission(void) const;

    // RVA: 0x28C | Ordinal: 653
        void can_accept_missiles(void) const;

    // RVA: 0x291 | Ordinal: 658
        void can_manual(void) const;

    // RVA: 0x29A | Ordinal: 667
        void cancelAssign(void);

    // RVA: 0x29E | Ordinal: 671
        void cancelRestrictedTargets(int);

    // RVA: 0x2A5 | Ordinal: 678
        void checkAimingDeviation(double) const;

    // RVA: 0x2A7 | Ordinal: 680
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x2AD | Ordinal: 686
        void checkAimingStaticParameters(class MovingObject *) const;

    // RVA: 0x2AF | Ordinal: 688
        void checkIfLockingAvailable(bool) const;

    // RVA: 0x2B0 | Ordinal: 689
        void checkMaintenanceRequirements(void);

    // RVA: 0x2B6 | Ordinal: 695
        void checkTrgAltitude(class MovingObject *) const;

    // RVA: 0x2BA | Ordinal: 699
        void checkTrgAnglePossible(class MovingObject *) const;

    // RVA: 0x2BB | Ordinal: 700
        void checkTrgAngleReal(class MovingObject *) const;

    // RVA: 0x2BC | Ordinal: 701
        void checkTrgDistancePossible(class MovingObject *, class wWeaponSystem const *) const;

    // RVA: 0x2BF | Ordinal: 704
        void checkTrgDistanceReal(class MovingObject *, double) const;

    // RVA: 0x2C2 | Ordinal: 707
        void checkTrgReflectionLimit(class MovingObject *) const;

    // RVA: 0x2C3 | Ordinal: 708
        void checkTrgSpeed(class MovingObject *) const;

    // RVA: 0x2C4 | Ordinal: 709
        void checkTrgVisibility(class MovingObject *);

    // RVA: 0x2C9 | Ordinal: 714
        void check_dependences(class MovingObject *, class wWeaponSystem const *) const;

    // RVA: 0x2CA | Ordinal: 715
        void check_local_slaves(void) const;

    // RVA: 0x2CB | Ordinal: 716
        void check_lock(class MovingObject *, double);

    // RVA: 0x2CC | Ordinal: 717
        void check_lock(class MovingObject *);

    // RVA: 0x2CF | Ordinal: 720
        void check_suitable_trk(void) const;

    // RVA: 0x2DA | Ordinal: 731
        void collectBarrelsLoaded(class Mail::Writer &);

    // RVA: 0x2DB | Ordinal: 732
        void conditionsOfShootingAreExecuted(void);

    // RVA: 0x2DF | Ordinal: 736
        void conditionsOfTrackingAreExecuted(unsigned char);

    // RVA: 0x2E2 | Ordinal: 739
        void control_fire(double &);

    // RVA: 0x2E5 | Ordinal: 742
        void countTheShot(void) const;

    // RVA: 0x2F2 | Ordinal: 755
        void delayFire(double &);

    // RVA: 0x303 | Ordinal: 772
        void findBarrel(unsigned char);

    // RVA: 0x305 | Ordinal: 774
        void findOnID(unsigned char);

    // RVA: 0x30A | Ordinal: 779
        void fire(void);

    // RVA: 0x310 | Ordinal: 785
        void fireStart(void);

    // RVA: 0x313 | Ordinal: 788
        void fireStop(void);

    // RVA: 0x31B | Ordinal: 796
        void fullAmmoResetComplete(void);

    // RVA: 0x31E | Ordinal: 799
        void fullAmmoResetStart(double);

    // RVA: 0x323 | Ordinal: 804
        void getActiveBarrel(void);

    // RVA: 0x329 | Ordinal: 810
        void getAmmo(class Ammo &) const;

    // RVA: 0x330 | Ordinal: 817
        void getAmmoLiveryHandle(void) const;

    // RVA: 0x332 | Ordinal: 819
        void getAmmoName(void) const;

    // RVA: 0x33A | Ordinal: 827
        void getAmmunition_wsType(void) const;

    // RVA: 0x342 | Ordinal: 835
        void getArtilleryAngleByDist(double const &);

    // RVA: 0x345 | Ordinal: 838
        void getArtilleryDistByAngle(double const &) const;

    // RVA: 0x347 | Ordinal: 840
        void getArtilleryShellMaxHeight(unsigned int) const;

    // RVA: 0x355 | Ordinal: 854
        void getBarrelReadyState(struct std::pair<int, class ed::basic_string<char>> &, int *) const;

    // RVA: 0x357 | Ordinal: 856
        void getBeamWidth(void) const;

    // RVA: 0x35A | Ordinal: 859
        void getCameraViewPoint(void);

    // RVA: 0x362 | Ordinal: 867
        void getCockpitName(void) const;

    // RVA: 0x367 | Ordinal: 872
        void getCombatRange(void) const;

    // RVA: 0x36B | Ordinal: 876
        void getConnectorPosDouble(class Graphics::ModelConnector &) const;

    // RVA: 0x37D | Ordinal: 894
        void getDeviation(void) const;

    // RVA: 0x380 | Ordinal: 897
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x38F | Ordinal: 912
        void getDistanceMaxForFCS(void) const;

    // RVA: 0x3AE | Ordinal: 943
        void getEstimatedHitTime(void) const;

    // RVA: 0x3B1 | Ordinal: 946
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3BC | Ordinal: 957
        void getFrequencyRange(void) const;

    // RVA: 0x3C8 | Ordinal: 969
        void getIdLauncher(void) const;

    // RVA: 0x3DA | Ordinal: 987
        void getManualTargetAim(class wPosition3<double> const &, class osg::Vec3d &);

    // RVA: 0x3E0 | Ordinal: 993
        void getManualTrackingTarget(void) const;

    // RVA: 0x3E6 | Ordinal: 999
        void getMaxTacticalSpeed(void);

    // RVA: 0x3F6 | Ordinal: 1015
        void getNewTargetTime(class MovingObject *) const;

    // RVA: 0x3F9 | Ordinal: 1018
        void getNextShotDelay(void) const;

    // RVA: 0x404 | Ordinal: 1029
        void getPosBarrel(class wBarrel *, bool, class wPosition3<double> &, bool) const;

    // RVA: 0x406 | Ordinal: 1031
        void getPositionCMDBarrel(class wBarrel *, bool, class wPosition3<double> &) const;

    // RVA: 0x40A | Ordinal: 1035
        void getPriorityByAngle(class MovingObject *) const;

    // RVA: 0x40B | Ordinal: 1036
        void getPriorityByPosition(class MovingObject *) const;

    // RVA: 0x40C | Ordinal: 1037
        void getPriorityByType(class MovingObject *) const;

    // RVA: 0x413 | Ordinal: 1044
        void getRangePriorityK(void) const;

    // RVA: 0x419 | Ordinal: 1050
        void getReadyToFireSignal(void);

    // RVA: 0x41B | Ordinal: 1052
        void getReloadingType(void) const;

    // RVA: 0x41E | Ordinal: 1055
        void getSightIndicationMode(void) const;

    // RVA: 0x420 | Ordinal: 1057
        void getSightMasterMode(void) const;

    // RVA: 0x426 | Ordinal: 1063
        void getStartFireTime(void);

    // RVA: 0x42C | Ordinal: 1069
        void getSystem(void) const;

    // RVA: 0x433 | Ordinal: 1076
        void getTargetID(void) const;

    // RVA: 0x434 | Ordinal: 1077
        void getTargetPriority(class MovingObject *);

    // RVA: 0x439 | Ordinal: 1082
        void getThreatRange(unsigned int) const;

    // RVA: 0x444 | Ordinal: 1093
        void getType(void) const;

    // RVA: 0x44B | Ordinal: 1100
        void getZone(float &, float &, float &, float &);

    // RVA: 0x44C | Ordinal: 1101
        void get_aiming_delay(void) const;

    // RVA: 0x465 | Ordinal: 1126
        void get_host(void);

    // RVA: 0x467 | Ordinal: 1128
        void get_loaded_barrels_num(void) const;

    // RVA: 0x468 | Ordinal: 1129
        void get_max_acquiring_distance(void) const;

    // RVA: 0x46B | Ordinal: 1132
        void get_noised_target_params(class wPosition3<double> const &, class wPosition3<double> &, class osg::Vec3f &) const;

    // RVA: 0x46C | Ordinal: 1133
        void get_reflection_limit(void) const;

    // RVA: 0x46F | Ordinal: 1136
        void get_skill(void) const;

    // RVA: 0x470 | Ordinal: 1137
        void get_suitable_trk(unsigned int, class wWeaponSystemManager const *) const;

    // RVA: 0x476 | Ordinal: 1143
        void good_to_attack(class MovingObject *, float &, class wWeaponSystem const *, unsigned __int64);

    // RVA: 0x48A | Ordinal: 1163
        void informTargetIfInRRCBeam(class osg::Vec3d const &, class MovingObject *) const;

    // RVA: 0x4A3 | Ordinal: 1188
        void interrupt_ammo_maintenance(void);

    // RVA: 0x4A4 | Ordinal: 1189
        void isActivityFire(void);

    // RVA: 0x4A9 | Ordinal: 1194
        void isDirector(void) const;

    // RVA: 0x4AB | Ordinal: 1196
        void isDirectorFor(class ed::basic_string<char> const &) const;

    // RVA: 0x4B5 | Ordinal: 1206
        void isLineOfFireClear(void);

    // RVA: 0x4BF | Ordinal: 1216
        void isReadyToFire(void) const;

    // RVA: 0x4C8 | Ordinal: 1225
        void isTargetInBeam(class osg::Vec3d const &, float &) const;

    // RVA: 0x4C9 | Ordinal: 1226
        void isTargetInertial(class MovingObject *) const;

    // RVA: 0x4DD | Ordinal: 1246
        void is_reloading(void) const;

    // RVA: 0x4E0 | Ordinal: 1249
        void launcherEscortTarget(void) const;

    // RVA: 0x4EC | Ordinal: 1261
        void lockBarrels(double);

    // RVA: 0x4EE | Ordinal: 1263
        void lockoff(void);

    // RVA: 0x4F0 | Ordinal: 1265
        void lockon(bool, double);

    // RVA: 0x4F1 | Ordinal: 1266
        void lockon(void);

    // RVA: 0x4F5 | Ordinal: 1270
        void mailRearmingInterrupt(void);

    // RVA: 0x4F6 | Ordinal: 1271
        void mailRearmingStart(void);

    // RVA: 0x4F7 | Ordinal: 1272
        void mailReloadingStart(double, class ed::deque<double, class ed::allocator<double>> const *);

    // RVA: 0x4FA | Ordinal: 1275
        void maintain(void);

    // RVA: 0x507 | Ordinal: 1288
        void max_number_of_tracking_missiles(void) const;

    // RVA: 0x50A | Ordinal: 1291
        void max_number_of_tracking_missiles_conditioned(void) const;

    // RVA: 0x514 | Ordinal: 1301
        void needToBeRearmed(void) const;

    // RVA: 0x53E | Ordinal: 1343
        void netSendFireWeaponStart(void);

    // RVA: 0x54C | Ordinal: 1357
        void net_assignTargetEx(struct wsTarget const &);

    // RVA: 0x551 | Ordinal: 1362
        void net_cancelAssign(void);

    // RVA: 0x553 | Ordinal: 1364
        void net_fireStop(short, int);

    // RVA: 0x555 | Ordinal: 1366
        void net_getBarrelsAndStowagesStatus(class Mail::Writer &);

    // RVA: 0x556 | Ordinal: 1367
        void net_pTargetInit(void);

    // RVA: 0x559 | Ordinal: 1370
        void net_rearmingStart(class Mail::Reader);

    // RVA: 0x55A | Ordinal: 1371
        void net_reloadingStart(class Mail::Reader);

    // RVA: 0x55E | Ordinal: 1375
        void net_setBarrelsAndStowagesStatus(class Mail::Reader &);

    // RVA: 0x560 | Ordinal: 1377
        void net_setManualTrackingTarget(unsigned int);

    // RVA: 0x561 | Ordinal: 1378
        void net_setSpotlightState(bool);

    // RVA: 0x565 | Ordinal: 1382
        void number_of_tracking_missiles(unsigned int) const;

    // RVA: 0x566 | Ordinal: 1383
        void number_of_tracking_missiles(void) const;

    // RVA: 0x56A | Ordinal: 1387
        void onLauncherRearmed(void);

    // RVA: 0x56C | Ordinal: 1389
        void onLauncherRearming(void);

    // RVA: 0x570 | Ordinal: 1393
        void onReloadPosition(void);

    // RVA: 0x57F | Ordinal: 1408
        void postInit(void);

    // RVA: 0x587 | Ordinal: 1416
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x590 | Ordinal: 1425
        void prefireBarrelSound(void);

    // RVA: 0x591 | Ordinal: 1426
        void prefireSound(void);

    // RVA: 0x5A1 | Ordinal: 1442
        void rearm_all(void);

    // RVA: 0x5A7 | Ordinal: 1448
        void releaseBarrelsLock(double &);

    // RVA: 0x5A9 | Ordinal: 1450
        void releaseReloadPosition(void);

    // RVA: 0x5AB | Ordinal: 1452
        void reloadSoundStart(class WeaponSounder *);

    // RVA: 0x5AC | Ordinal: 1453
        void reloadSoundUpdate(double &);

    // RVA: 0x5AD | Ordinal: 1454
        void reload_barrels(void);

    // RVA: 0x5B2 | Ordinal: 1459
        void removeRail(class wMLRSRail *);

    // RVA: 0x5B3 | Ordinal: 1460
        void removeRails(void);

    // RVA: 0x5C9 | Ordinal: 1482
        void rotateToReloadPosition(void);

    // RVA: 0x5D3 | Ordinal: 1492
        void selectActiveBarrel(unsigned char);

    // RVA: 0x5D4 | Ordinal: 1493
        void selectFeedSlot(unsigned int);

    // RVA: 0x5D5 | Ordinal: 1494
        void select_new_stowage(void);

    // RVA: 0x5D7 | Ordinal: 1496
        void select_stowage(int);

    // RVA: 0x5E7 | Ordinal: 1512
        void setAmmunitionLoadout(class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *);

    // RVA: 0x5F1 | Ordinal: 1522
        void setDesignationParams(struct TargetDesignationParams *);

    // RVA: 0x5F6 | Ordinal: 1527
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x604 | Ordinal: 1541
        void setEmissionOnOff(bool);

    // RVA: 0x60C | Ordinal: 1549
        void setIDS(class ed::vector<struct wIds, class ed::allocator<struct wIds>> &);

    // RVA: 0x611 | Ordinal: 1554
        void setManual(bool);

    // RVA: 0x629 | Ordinal: 1578
        void setReadyToFireSignal(bool);

    // RVA: 0x66B | Ordinal: 1644
        void startedRocketHasDied(unsigned int);

    // RVA: 0x67C | Ordinal: 1661
        void target_locked(unsigned char) const;

    // RVA: 0x67E | Ordinal: 1663
        void track_missile(unsigned int, unsigned int);

    // RVA: 0x681 | Ordinal: 1666
        void trackingEmissionRequest(bool);

    // RVA: 0x687 | Ordinal: 1672
        void uninitLauncher(void);

    // RVA: 0x68A | Ordinal: 1675
        void unlockBarrels(void);

    // RVA: 0x68E | Ordinal: 1679
        void updateAimingCorrections(double, double &, double &);

    // RVA: 0x691 | Ordinal: 1682
        void updateDrawArguments(double) const;

    // RVA: 0x69D | Ordinal: 1694
        void update_true_target_vel(class osg::Vec3d const &);

    // RVA: 0x69E | Ordinal: 1695
        void validatePointerOnObjectID(unsigned int, class MovingObject *);

    // RVA: 0x65 | Ordinal: 102
        void _cLauncher(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHER_HPP
