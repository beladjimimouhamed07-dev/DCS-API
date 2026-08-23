#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wAmmunitionGuided
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAmmunitionGuided
{
public:

    // RVA: 0x1BD | Ordinal: 446
        void HojActive(void);

    // RVA: 0x20D | Ordinal: 526
        void Target_ID(void) const;

    // RVA: 0x249 | Ordinal: 586
        void assignLocalAimPoint(class osg::Vec3f const &);

    // RVA: 0x252 | Ordinal: 595
        void assignTargetPoint(class osg::Vec3f const &);

    // RVA: 0x337 | Ordinal: 824
        void getAmmunitionGuidedHotJoinData(struct AmmunitionGuidedHotJoinData &) const;

    // RVA: 0x38E | Ordinal: 911
        void getDistFromSatSeeker(void);

    // RVA: 0x497 | Ordinal: 1176
        void initCommon_(class MovingObject *, class wAmmunitionDescriptor const *);

    // RVA: 0x516 | Ordinal: 1303
        void netActiveRadarLockDist(struct AmmunitionGuidedRadarLockDistMessage const &);

    // RVA: 0x51C | Ordinal: 1309
        void netCreate(struct AmmunitionGuidedHotJoinData const &);

    // RVA: 0x51E | Ordinal: 1311
        void netCruiseHeight(struct AmmunitionGuidedNetCruiseHeightMessage const &);

    // RVA: 0x526 | Ordinal: 1319
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x52A | Ordinal: 1323
        void netHeadActive(struct AmmunitionGuidedHeadActiveModeMessage const &);

    // RVA: 0x52C | Ordinal: 1325
        void netHeading(struct AmmunitionGuidedNetHeadingMessage const &);

    // RVA: 0x52D | Ordinal: 1326
        void netHoj(struct AmmunitionGuidedNetHojMessage const &);

    // RVA: 0x537 | Ordinal: 1336
        void netLoft(struct AmmunitionGuidedNetLoftMessage const &);

    // RVA: 0x53B | Ordinal: 1340
        void netRoutePoint(struct AmmunitionGuidedRoutePointMessage const &);

    // RVA: 0x542 | Ordinal: 1347
        void netStartSelfDestructProc(struct AmmunitionGuidedSelfDestructProcMessage const &);

    // RVA: 0x56F | Ordinal: 1392
        void onNetMessage(struct GuidedWeaponNetMessage const &);

    // RVA: 0x5D1 | Ordinal: 1490
        void seekerHasTarget(void);

    // RVA: 0x5E0 | Ordinal: 1505
        void setActiveRadarLockDist(double, bool);

    // RVA: 0x5E6 | Ordinal: 1511
        void setAmmunitionGuidedHotJoinData(struct AmmunitionGuidedHotJoinData const *);

    // RVA: 0x5EC | Ordinal: 1517
        void setCruiseHeight(double, bool);

    // RVA: 0x607 | Ordinal: 1544
        void setHeadActive(bool, bool);

    // RVA: 0x609 | Ordinal: 1546
        void setHeading(double, bool);

    // RVA: 0x60A | Ordinal: 1547
        void setHoj(bool, bool);

    // RVA: 0x60F | Ordinal: 1552
        void setLoft(int, bool);

    // RVA: 0x62D | Ordinal: 1582
        void setRoutePoint(class Math::Vector<3, double>, int, bool, bool, bool);

    // RVA: 0x630 | Ordinal: 1585
        void setSeekerDelay(double);

    // RVA: 0x634 | Ordinal: 1589
        void setTarget(unsigned int);

    // RVA: 0x640 | Ordinal: 1601
        void setValsNextTick(void);

    // RVA: 0x655 | Ordinal: 1622
        void simulate(void);

    // RVA: 0x666 | Ordinal: 1639
        void startSelfDestructProc(bool);

    // RVA: 0x67D | Ordinal: 1662
        void testStartSequence(void);

    // RVA: 0x698 | Ordinal: 1689
        void updateTargetPnt_(void);

    // RVA: 0x3E | Ordinal: 63
        void wAmmunitionGuided(void);

    // RVA: 0x75 | Ordinal: 118
        void _wAmmunitionGuided(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WAMMUNITIONGUIDED_HPP
