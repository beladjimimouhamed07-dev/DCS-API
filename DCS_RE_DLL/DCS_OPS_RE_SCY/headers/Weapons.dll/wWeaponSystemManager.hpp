#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wWeaponSystemManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wWeaponSystemManager
{
public:

    // RVA: 0x159 | Ordinal: 346
        void CFF_adjustTargetPoint(class woTargetPoint *, float, float, float);

    // RVA: 0x15A | Ordinal: 347
        void CFF_calcAdjustTargetPoint(class woTargetPoint *, float, float, float);

    // RVA: 0x15D | Ordinal: 350
        void CFF_getTimeToTarget(class MovingObject *) const;

    // RVA: 0x166 | Ordinal: 359
        void CFF_switchToFFE(class woTargetPoint *, float);

    // RVA: 0x170 | Ordinal: 369
        void CommandSet(int);

    // RVA: 0x171 | Ordinal: 370
        void CommandSet(int, double);

    // RVA: 0x185 | Ordinal: 390
        void GetActiveLNAmmoCount1(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &, int *) const;

    // RVA: 0x187 | Ordinal: 392
        void GetActiveLNAmmoCount2(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x18E | Ordinal: 399
        void GetAmmoCount(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x191 | Ordinal: 402
        void GetArtilleryAmmoCapacity(class ed::vector<struct std::pair<int, class ed::basic_string<char>>, class ed::allocator<struct std::pair<int, class ed::basic_string<char>>>> &) const;

    // RVA: 0x19B | Ordinal: 412
        void GetMaximumWeaponDistance(void);

    // RVA: 0x19D | Ordinal: 414
        void GetMaximumWeaponHeight(void);

    // RVA: 0x1A3 | Ordinal: 420
        void GetNumberOfAttackersWS(int, enum wsystem_type) const;

    // RVA: 0x1C9 | Ordinal: 458
        void IsDepends(void) const;

    // RVA: 0x1CC | Ordinal: 461
        void IsDependsOn(class ed::basic_string<char> const &) const;

    // RVA: 0x1CD | Ordinal: 462
        void IsInReferencedPosition(void) const;

    // RVA: 0x1D3 | Ordinal: 468
        void IsLockedAndReady(void) const;

    // RVA: 0x1D8 | Ordinal: 473
        void IsTargetAssigned(unsigned int) const;

    // RVA: 0x1D9 | Ordinal: 474
        void IsTargetAssigned(void) const;

    // RVA: 0x1DA | Ordinal: 475
        void Item(int) const;

    // RVA: 0x1F2 | Ordinal: 499
        void PrintTrace(void);

    // RVA: 0x1F5 | Ordinal: 502
        void RearmingAllowed(void) const;

    // RVA: 0x1F6 | Ordinal: 503
        void RndEvenlyGet(char const *);

    // RVA: 0x1F7 | Ordinal: 504
        void RndOrderlyGet(char const *);

    // RVA: 0x21C | Ordinal: 541
        void accept_point_target(void) const;

    // RVA: 0x224 | Ordinal: 549
        void addHeatToPart(int, float);

    // RVA: 0x226 | Ordinal: 551
        void addPotentialTarget(unsigned int const &);

    // RVA: 0x22A | Ordinal: 555
        void addSystem(class wWeaponSystem *);

    // RVA: 0x22F | Ordinal: 560
        void add_jtac_sensors(void);

    // RVA: 0x233 | Ordinal: 564
        void add_target(struct wsCommonTarget &);

    // RVA: 0x234 | Ordinal: 565
        void add_weapon_system(class Lua::Config &, int);

    // RVA: 0x235 | Ordinal: 566
        void add_weapon_system_manager(class Lua::Config &, class std::map<unsigned char, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *>>> *);

    // RVA: 0x23A | Ordinal: 571
        void adjustLaunchersAimingTime(float);

    // RVA: 0x23C | Ordinal: 573
        void after_remove_target(unsigned int, bool);

    // RVA: 0x23F | Ordinal: 576
        void allowAssign(void) const;

    // RVA: 0x240 | Ordinal: 577
        void allowShoot(float) const;

    // RVA: 0x248 | Ordinal: 585
        void assignAutotrackingTarget(class MovingObject *);

    // RVA: 0x257 | Ordinal: 600
        void assign_target(struct wsCommonTarget &, float &, class wWeaponSystemManager const *, unsigned __int64);

    // RVA: 0x259 | Ordinal: 602
        void assign_target_to_ws(struct wsCommonTarget &, class wWeaponSystem *, float &, class wWeaponSystemManager const *, unsigned __int64);

    // RVA: 0x287 | Ordinal: 648
        void canExecuteCFFMission(void) const;

    // RVA: 0x28A | Ordinal: 651
        void canShoot(void) const;

    // RVA: 0x28F | Ordinal: 656
        void can_child_cancel(int);

    // RVA: 0x290 | Ordinal: 657
        void can_children_cancel(void) const;

    // RVA: 0x293 | Ordinal: 660
        void can_manual(void) const;

    // RVA: 0x297 | Ordinal: 664
        void can_we_launch(class wsType const &);

    // RVA: 0x299 | Ordinal: 666
        void cancel(void);

    // RVA: 0x2A1 | Ordinal: 674
        void cancelRestrictedTargets(int);

    // RVA: 0x2A2 | Ordinal: 675
        void cancel_base(int);

    // RVA: 0x2B2 | Ordinal: 691
        void checkPRRMissileThreat(void);

    // RVA: 0x2B3 | Ordinal: 692
        void checkRequiredUnits(void);

    // RVA: 0x2B4 | Ordinal: 693
        void checkShooter(class MovingObject *, struct wsCommonTarget &, class wsType const &, void *, unsigned int);

    // RVA: 0x2B5 | Ordinal: 694
        void checkTargetForCleanup(struct wsCommonTarget &);

    // RVA: 0x2C6 | Ordinal: 711
        void check_areas_flooded(class wPosition3<float> const &, float);

    // RVA: 0x2C7 | Ordinal: 712
        void check_available_dependencies(int) const;

    // RVA: 0x2CE | Ordinal: 719
        void check_potentialTarget(class MovingObject *);

    // RVA: 0x2D2 | Ordinal: 723
        void clean_up_obsolete_targets(void);

    // RVA: 0x2D4 | Ordinal: 725
        void cleanupAmmunitionLoadout(class std::map<unsigned char, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *>>> *);

    // RVA: 0x2D5 | Ordinal: 726
        void cleanupTargetPriorities(class wWeaponSystem const *);

    // RVA: 0x2D9 | Ordinal: 730
        void clear_targets(void);

    // RVA: 0x2E1 | Ordinal: 738
        void controlSystems(void);

    // RVA: 0x2E9 | Ordinal: 746
        void createAreaFire(char const *, class osg::Vec3f const &, float);

    // RVA: 0x2F3 | Ordinal: 756
        void deleteSystems(void);

    // RVA: 0x302 | Ordinal: 771
        void findAppropriateDirector(class ed::basic_string<char> const &) const;

    // RVA: 0x308 | Ordinal: 777
        void findTargets(void);

    // RVA: 0x31D | Ordinal: 798
        void fullAmmoResetComplete(void);

    // RVA: 0x320 | Ordinal: 801
        void fullAmmoResetStart(double);

    // RVA: 0x32B | Ordinal: 812
        void getAmmo(void) const;

    // RVA: 0x338 | Ordinal: 825
        void getAmmunitionLoadout(void);

    // RVA: 0x34A | Ordinal: 843
        void getArtilleryShellMaxHeight(unsigned int) const;

    // RVA: 0x359 | Ordinal: 858
        void getCameraPosition(int);

    // RVA: 0x35C | Ordinal: 861
        void getCameraViewPoint(bool);

    // RVA: 0x360 | Ordinal: 865
        void getCmdBox(class viObjectShape *);

    // RVA: 0x364 | Ordinal: 869
        void getCockpitName(void) const;

    // RVA: 0x369 | Ordinal: 874
        void getCommonTarget(unsigned int, struct wsCommonTarget &);

    // RVA: 0x373 | Ordinal: 884
        void getDamageAreaIdx(int);

    // RVA: 0x374 | Ordinal: 885
        void getDamageAreaMax(void);

    // RVA: 0x375 | Ordinal: 886
        void getDamageAreaMin(void);

    // RVA: 0x376 | Ordinal: 887
        void getDamageAreaSize(void);

    // RVA: 0x377 | Ordinal: 888
        void getDamageAreas(void);

    // RVA: 0x389 | Ordinal: 906
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x3AB | Ordinal: 940
        void getEmissionModeForTarget(class MovingObject *, float *, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x3AC | Ordinal: 941
        void getEmissionState(void) const;

    // RVA: 0x3B6 | Ordinal: 951
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3B7 | Ordinal: 952
        void getFindTargetsDelay(void) const;

    // RVA: 0x3B8 | Ordinal: 953
        void getFindingDistance(void) const;

    // RVA: 0x3B9 | Ordinal: 954
        void getFireOnMarch(void) const;

    // RVA: 0x3CC | Ordinal: 973
        void getKillingDistance(void) const;

    // RVA: 0x3CD | Ordinal: 974
        void getKillingDistanceMin(void) const;

    // RVA: 0x3D3 | Ordinal: 980
        void getManagerSensorHeight(void) const;

    // RVA: 0x3D4 | Ordinal: 981
        void getManual(void) const;

    // RVA: 0x3D9 | Ordinal: 986
        void getManualTarget(void) const;

    // RVA: 0x3DC | Ordinal: 989
        void getManualTargetAim(class wPosition3<double> const &, class osg::Vec3d &);

    // RVA: 0x3DD | Ordinal: 990
        void getManualTargetDisplayParams(struct ManualTargetDisplayParams &) const;

    // RVA: 0x3E2 | Ordinal: 995
        void getManualWS(void) const;

    // RVA: 0x3EC | Ordinal: 1005
        void getMissileThreatID(void);

    // RVA: 0x3FF | Ordinal: 1024
        void getPPIName(void) const;

    // RVA: 0x400 | Ordinal: 1025
        void getPlatform(void) const;

    // RVA: 0x409 | Ordinal: 1034
        void getPreviouslyCollectedFrequencyRangesForTarget(void);

    // RVA: 0x40F | Ordinal: 1040
        void getRadarRotationType(void) const;

    // RVA: 0x410 | Ordinal: 1041
        void getRadarType(void) const;

    // RVA: 0x411 | Ordinal: 1042
        void getRangeFindingTarget(void) const;

    // RVA: 0x412 | Ordinal: 1043
        void getRangeFindingTargetRaw(void) const;

    // RVA: 0x423 | Ordinal: 1060
        void getSkill(void) const;

    // RVA: 0x424 | Ordinal: 1061
        void getSounder(void) const;

    // RVA: 0x42D | Ordinal: 1070
        void getSystem(char);

    // RVA: 0x432 | Ordinal: 1075
        void getTargetDetectionStatus(unsigned int, class wTargetDetectionStatus &);

    // RVA: 0x435 | Ordinal: 1078
        void getTargetPriority(class MovingObject *);

    // RVA: 0x436 | Ordinal: 1079
        void getTargetPriority(struct wsCommonTarget &, bool);

    // RVA: 0x43C | Ordinal: 1085
        void getTimeToAlarmedState(void) const;

    // RVA: 0x442 | Ordinal: 1091
        void getTrackingTarget(void) const;

    // RVA: 0x449 | Ordinal: 1098
        void getWS_quantity(void) const;

    // RVA: 0x44A | Ordinal: 1099
        void getWeaponStatus(class ed::vector<struct wsNetStatus, class ed::allocator<struct wsNetStatus>> &, bool);

    // RVA: 0x450 | Ordinal: 1105
        void get_base(int);

    // RVA: 0x464 | Ordinal: 1125
        void get_group_manager(void) const;

    // RVA: 0x471 | Ordinal: 1138
        void get_swings(double &, double &, double &) const;

    // RVA: 0x483 | Ordinal: 1156
        void hasPPI(void) const;

    // RVA: 0x487 | Ordinal: 1160
        void humanWeaponControlRelease(void);

    // RVA: 0x488 | Ordinal: 1161
        void humanWeaponControlTake(int);

    // RVA: 0x489 | Ordinal: 1162
        void in_PPI_Mode(void) const;

    // RVA: 0x49E | Ordinal: 1183
        void initialSearchForPotentialTargets(void);

    // RVA: 0x4AC | Ordinal: 1197
        void isEmissionEnabled(void) const;

    // RVA: 0x4AE | Ordinal: 1199
        void isExternalLavaliere(void);

    // RVA: 0x4AF | Ordinal: 1200
        void isFirstTargetsSearch(void);

    // RVA: 0x4B0 | Ordinal: 1201
        void isHuman(void) const;

    // RVA: 0x4B2 | Ordinal: 1203
        void isHumanWeaponController(void) const;

    // RVA: 0x4B3 | Ordinal: 1204
        void isInKnownTargetsList(unsigned int) const;

    // RVA: 0x4B4 | Ordinal: 1205
        void isInPotentialTargetsList(unsigned int const &) const;

    // RVA: 0x4BB | Ordinal: 1212
        void isPlaceholder(void) const;

    // RVA: 0x4BD | Ordinal: 1214
        void isRadiatedByRadar(unsigned int, float &, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *) const;

    // RVA: 0x4C3 | Ordinal: 1220
        void isScanningWithRadar(void) const;

    // RVA: 0x4CA | Ordinal: 1227
        void isTargetOverTheHorizon(class MovingObject *) const;

    // RVA: 0x4CB | Ordinal: 1228
        void isThreatForTheTarget(struct wsCommonTarget const &) const;

    // RVA: 0x4CD | Ordinal: 1230
        void isWeaponHumanControlled(void) const;

    // RVA: 0x4CE | Ordinal: 1231
        void is_TR_tracking_target(char, unsigned int, bool *) const;

    // RVA: 0x4CF | Ordinal: 1232
        void is_area_alive(class ed::basic_string<char> const &) const;

    // RVA: 0x4D6 | Ordinal: 1239
        void is_in_firePermittedAngles(int *, int *) const;

    // RVA: 0x4D7 | Ordinal: 1240
        void is_master_arm_off(void) const;

    // RVA: 0x4D8 | Ordinal: 1241
        void is_master_arm_off_or_deactivating(void) const;

    // RVA: 0x4D9 | Ordinal: 1242
        void is_master_arm_on(bool) const;

    // RVA: 0x4DA | Ordinal: 1243
        void is_master_arm_on_or_activating(void) const;

    // RVA: 0x4DC | Ordinal: 1245
        void is_rearming(void) const;

    // RVA: 0x4E5 | Ordinal: 1254
        void loadAmmunitionLoadout(class Lua::Config &, class std::map<unsigned char, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *>>> **);

    // RVA: 0x4E6 | Ordinal: 1255
        void loadRequiredUnits(class Lua::Config &);

    // RVA: 0x501 | Ordinal: 1282
        void master_arm_off(bool);

    // RVA: 0x502 | Ordinal: 1283
        void master_arm_on(bool);

    // RVA: 0x509 | Ordinal: 1290
        void max_number_of_tracking_missiles(unsigned int) const;

    // RVA: 0x547 | Ordinal: 1352
        void net_CFF_adjustTargetPoint(unsigned int, float, float);

    // RVA: 0x548 | Ordinal: 1353
        void net_EmissionEnabledTurnOnOff(bool);

    // RVA: 0x54A | Ordinal: 1355
        void net_UpdateThreatToTarget(struct wsCommonTarget const &);

    // RVA: 0x54B | Ordinal: 1356
        void net_addTarget(unsigned int);

    // RVA: 0x55B | Ordinal: 1372
        void net_removeTarget(unsigned int);

    // RVA: 0x569 | Ordinal: 1386
        void number_of_tracking_missiles(unsigned int) const;

    // RVA: 0x573 | Ordinal: 1396
        void onWeaponSystemRearmed(void);

    // RVA: 0x574 | Ordinal: 1397
        void onWeaponSystemRearming(void);

    // RVA: 0x577 | Ordinal: 1400
        void openedCockpit(void) const;

    // RVA: 0x579 | Ordinal: 1402
        void pickTargetPriorityForWS(unsigned int, unsigned int);

    // RVA: 0x595 | Ordinal: 1430
        void prepareTargets(void);

    // RVA: 0x599 | Ordinal: 1434
        void process_damage(class ed::basic_string<char> const &, double, bool *);

    // RVA: 0x5A4 | Ordinal: 1445
        void rearm_all(void);

    // RVA: 0x5B4 | Ordinal: 1461
        void removeSystem(class wWeaponSystem *);

    // RVA: 0x5B7 | Ordinal: 1464
        void remove_jtac_sensors(void);

    // RVA: 0x5B9 | Ordinal: 1466
        void remove_potentialTarget(unsigned int);

    // RVA: 0x5BC | Ordinal: 1469
        void remove_target(unsigned int, bool);

    // RVA: 0x5BF | Ordinal: 1472
        void resetAllWSToReferencePosition_immediately(void);

    // RVA: 0x5C2 | Ordinal: 1475
        void resetAzimuthDirection(void);

    // RVA: 0x5C6 | Ordinal: 1479
        void reset_priority_handicaps(void);

    // RVA: 0x5D0 | Ordinal: 1489
        void searchTrgsInList(bool, bool);

    // RVA: 0x5D8 | Ordinal: 1497
        void sensors_off(void);

    // RVA: 0x5D9 | Ordinal: 1498
        void sensors_on(void);

    // RVA: 0x5DB | Ordinal: 1500
        void setAI_OFF(void);

    // RVA: 0x5DD | Ordinal: 1502
        void setAI_ON(void);

    // RVA: 0x5E9 | Ordinal: 1514
        void setAmmunitionLoadout(class std::map<unsigned char, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *>>> *);

    // RVA: 0x5FF | Ordinal: 1536
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x603 | Ordinal: 1540
        void setEmissionEnabled(bool);

    // RVA: 0x60B | Ordinal: 1548
        void setHost(class MovingObject *);

    // RVA: 0x614 | Ordinal: 1557
        void setManual(bool);

    // RVA: 0x617 | Ordinal: 1560
        void setMissileEvasionPossible(bool);

    // RVA: 0x618 | Ordinal: 1561
        void setMissileThreat(unsigned int);

    // RVA: 0x61D | Ordinal: 1566
        void setNoAssignTargetTime(double);

    // RVA: 0x61F | Ordinal: 1568
        void setOnlyAmmunitionLoadout(class std::map<unsigned char, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, class std::map<unsigned char, int, struct std::less<unsigned char>, class ed::allocator<struct std::pair<unsigned char const, int>>> *>>> *>>> *);

    // RVA: 0x62A | Ordinal: 1579
        void setReconMode(bool);

    // RVA: 0x62C | Ordinal: 1581
        void setRequiredDirection(class osg::Vec3d const &);

    // RVA: 0x632 | Ordinal: 1587
        void setSkill(int);

    // RVA: 0x641 | Ordinal: 1602
        void setWeaponStatus(class ed::vector<struct wsNetStatus, class ed::allocator<struct wsNetStatus>> const &);

    // RVA: 0x643 | Ordinal: 1604
        void set_manager(class wGroupTargetManager *);

    // RVA: 0x659 | Ordinal: 1626
        void sizeSystem(void) const;

    // RVA: 0x65C | Ordinal: 1629
        void sound_update(void);

    // RVA: 0x66D | Ordinal: 1646
        void startedRocketHasDied(unsigned int);

    // RVA: 0x677 | Ordinal: 1656
        void switchToCockpit(class ed::basic_string<char> const &, bool);

    // RVA: 0x685 | Ordinal: 1670
        void turnSpotlight(bool);

    // RVA: 0x693 | Ordinal: 1684
        void updateDrawArguments(void);

    // RVA: 0x697 | Ordinal: 1688
        void updateTacticalSpeed(double &);

    // RVA: 0x69A | Ordinal: 1691
        void update_systems_by_damage(class ed::basic_string<char> const &);

    // RVA: 0x69C | Ordinal: 1693
        void update_target_priority(unsigned int, float, unsigned int);

    // RVA: 0x6A1 | Ordinal: 1698
        void validatePointerOnObjectID(unsigned int, class MovingObject *);

    // RVA: 0x53 | Ordinal: 84
        void wWeaponSystemManager(void);

    // RVA: 0x6A6 | Ordinal: 1703
        void we_launch(class wsType const &, double);

    // RVA: 0x6A7 | Ordinal: 1704
        void weaponControlHostId(void) const;

    // RVA: 0x80 | Ordinal: 129
        void _wWeaponSystemManager(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WWEAPONSYSTEMMANAGER_HPP
