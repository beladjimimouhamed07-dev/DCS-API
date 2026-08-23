#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wGroupTargetManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGroupTargetManager
{
public:

    // RVA: 0x14C | Ordinal: 333
        void AllowMoreAttackers(struct wsCommonTarget &, class MovingObject *, int, enum wsystem_type);

    // RVA: 0x157 | Ordinal: 344
        void CFF_adjustTargetPoint(class woTargetPoint *, float, float, float) const;

    // RVA: 0x15B | Ordinal: 348
        void CFF_getTimeToTarget(class MovingObject *) const;

    // RVA: 0x164 | Ordinal: 357
        void CFF_switchToFFE(class woTargetPoint *, float);

    // RVA: 0x16C | Ordinal: 365
        void Coalition(void) const;

    // RVA: 0x199 | Ordinal: 410
        void GetLastWaypointId(void) const;

    // RVA: 0x1A1 | Ordinal: 418
        void GetNumberOfAttackers(unsigned int, class ed::basic_string<char> const &) const;

    // RVA: 0x1A2 | Ordinal: 419
        void GetNumberOfAttackersWS(unsigned int, enum wsystem_type) const;

    // RVA: 0x21A | Ordinal: 539
        void accept_point_target(void) const;

    // RVA: 0x22B | Ordinal: 556
        void addTargetGroup(class wControl *, bool);

    // RVA: 0x22C | Ordinal: 557
        void addTargetUnit(unsigned int, bool);

    // RVA: 0x22D | Ordinal: 558
        void addTargetUnit(class MovingObject *, bool);

    // RVA: 0x230 | Ordinal: 561
        void add_member(class wWeaponSystemManager *);

    // RVA: 0x231 | Ordinal: 562
        void add_target(struct wsCommonTarget &, float, class MovingObject *);

    // RVA: 0x232 | Ordinal: 563
        void add_target(struct wsCommonTarget &, unsigned __int64);

    // RVA: 0x256 | Ordinal: 599
        void assignTargets(double &);

    // RVA: 0x258 | Ordinal: 601
        void assign_target_to_unit(class wWeaponSystemManager *, struct wsCommonTarget &, float &, class wWeaponSystemManager const *, unsigned __int64);

    // RVA: 0x285 | Ordinal: 646
        void canExecuteCFFMission(void) const;

    // RVA: 0x296 | Ordinal: 663
        void can_we_launch(class wsType const &);

    // RVA: 0x29F | Ordinal: 672
        void cancelRestrictedTargets(int);

    // RVA: 0x2C5 | Ordinal: 710
        void checkUnitNearby(class ed::basic_string<char> const &, class osg::Vec3d, float);

    // RVA: 0x2C8 | Ordinal: 713
        void check_availavble_trk_by_type_ws(class ed::basic_string<char> const &, int) const;

    // RVA: 0x2CD | Ordinal: 718
        void check_potentialTarget(unsigned int);

    // RVA: 0x2D1 | Ordinal: 722
        void clean_up_obsolete_targets(void);

    // RVA: 0x2D6 | Ordinal: 727
        void cleanup_targets(void);

    // RVA: 0x2D8 | Ordinal: 729
        void clear_targets(void);

    // RVA: 0x2FC | Ordinal: 765
        void enableFire(bool);

    // RVA: 0x307 | Ordinal: 776
        void findTargets(double &);

    // RVA: 0x309 | Ordinal: 778
        void find_trk_by_type_ws(class ed::basic_string<char> const &, int, unsigned int, bool *);

    // RVA: 0x319 | Ordinal: 794
        void forceCoalition(enum wcCoalitionName);

    // RVA: 0x328 | Ordinal: 809
        void getAlarmStateOption(void) const;

    // RVA: 0x361 | Ordinal: 866
        void getCoalitionTargetsMgr(void) const;

    // RVA: 0x368 | Ordinal: 873
        void getCommonTarget(unsigned int, struct wsCommonTarget &);

    // RVA: 0x37C | Ordinal: 893
        void getDetectedTargets(class ed::vector<struct wControl::Target, class ed::allocator<struct wControl::Target>> &) const;

    // RVA: 0x3AD | Ordinal: 942
        void getEnableFire(void) const;

    // RVA: 0x3B4 | Ordinal: 949
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3C0 | Ordinal: 961
        void getGroundTargetsListEx(void) const;

    // RVA: 0x3E5 | Ordinal: 998
        void getMaxRangeK(void) const;

    // RVA: 0x47A | Ordinal: 1147
        void hasAirDefenceUnits(void) const;

    // RVA: 0x486 | Ordinal: 1159
        void has_point_target(void);

    // RVA: 0x4C7 | Ordinal: 1224
        void isTargetDetected(unsigned int, class wTargetDetectionStatus &) const;

    // RVA: 0x4DE | Ordinal: 1247
        void is_target_in_list(unsigned int);

    // RVA: 0x4F8 | Ordinal: 1273
        void mailToHuman(class wWeaponSystemManager *, class MovingObject *);

    // RVA: 0x4F9 | Ordinal: 1274
        void mailToHumanPlanes(double &);

    // RVA: 0x4FD | Ordinal: 1278
        void maintain(void);

    // RVA: 0x503 | Ordinal: 1284
        void maxNumberofAttackers(enum wsCommonTargetType, enum wsCommonTargetType);

    // RVA: 0x504 | Ordinal: 1285
        void maxNumberofAttackersWS(struct wsCommonTarget const &, enum wsystem_type);

    // RVA: 0x563 | Ordinal: 1380
        void notifyRadarProcessorAboutEmission(class wWeaponSystemManager *, class MovingObject *);

    // RVA: 0x564 | Ordinal: 1381
        void notifyRadarProcessorAboutTrackedTargets(double &);

    // RVA: 0x56E | Ordinal: 1391
        void onMyUnitShoot(enum wcCoalitionName, unsigned int, class wsType const &, void *, unsigned int, unsigned int, class osg::Vec3f const &, double);

    // RVA: 0x572 | Ordinal: 1395
        void onShoot(enum wcCoalitionName, unsigned int, class wsType const &, void *, unsigned int, unsigned int, class osg::Vec3f const &, double);

    // RVA: 0x585 | Ordinal: 1414
        void postInit(void);

    // RVA: 0x597 | Ordinal: 1432
        void processRadarNotifications(double &);

    // RVA: 0x598 | Ordinal: 1433
        void processShoots(void);

    // RVA: 0x5B5 | Ordinal: 1462
        void removeTargetGroup(class wControl *);

    // RVA: 0x5B6 | Ordinal: 1463
        void removeTargetUnit(unsigned int);

    // RVA: 0x5B8 | Ordinal: 1465
        void remove_member(class wWeaponSystemManager *);

    // RVA: 0x5BB | Ordinal: 1468
        void remove_target(unsigned int);

    // RVA: 0x5BD | Ordinal: 1470
        void remove_target_priority(unsigned int, class MovingObject *);

    // RVA: 0x5C5 | Ordinal: 1478
        void reset_priority_hadicaps(void);

    // RVA: 0x5CE | Ordinal: 1487
        void scheduleMasterArms_Off(double);

    // RVA: 0x5CF | Ordinal: 1488
        void scheduleMasterArms_Off(void);

    // RVA: 0x602 | Ordinal: 1539
        void setEmissionEnabled(bool);

    // RVA: 0x615 | Ordinal: 1558
        void setMaxRangeK(float);

    // RVA: 0x622 | Ordinal: 1571
        void setOption(unsigned int, class Parameter const &);

    // RVA: 0x646 | Ordinal: 1607
        void shootsIntersectionObtain(void);

    // RVA: 0x647 | Ordinal: 1608
        void shootsIntersectionRequest(void);

    // RVA: 0x67B | Ordinal: 1660
        void targetTypeDetermination(enum wsCommonTargetType &, enum wsCommonTargetType &, class MovingObject *);

    // RVA: 0x69B | Ordinal: 1692
        void update_target_priority(struct wsCommonTarget &, float, class MovingObject *);

    // RVA: 0x69F | Ordinal: 1696
        void validatePointerOnObjectID(unsigned int, class MovingObject *);

    // RVA: 0x4B | Ordinal: 76
        void wGroupTargetManager(class wGroupTargetManager const &);

    // RVA: 0x4C | Ordinal: 77
        void wGroupTargetManager(void);

    // RVA: 0x6A5 | Ordinal: 1702
        void we_launch(class wsType const &, double);

    // RVA: 0x7C | Ordinal: 125
        void _wGroupTargetManager(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WGROUPTARGETMANAGER_HPP
