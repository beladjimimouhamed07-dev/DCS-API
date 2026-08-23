#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherRocket
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherRocket
{
public:

    // RVA: 0x156 | Ordinal: 343
        void CFF_adjustTargetPoint(float, float);

    // RVA: 0x160 | Ordinal: 353
        void CFF_inAimingAdjustMode(void) const;

    // RVA: 0x163 | Ordinal: 356
        void CFF_switchToFFE(float);

    // RVA: 0x1D0 | Ordinal: 465
        void IsIndirect(void) const;

    // RVA: 0x238 | Ordinal: 569
        void adjustAimingTime(float);

    // RVA: 0x250 | Ordinal: 593
        void assignTargetEx(struct wsTarget const &);

    // RVA: 0x263 | Ordinal: 612
        void barrelFire(struct FireMsgData const &);

    // RVA: 0x34 | Ordinal: 53
        void cLauncherRocket(void);

    // RVA: 0x26B | Ordinal: 620
        void calcPoint_(double, double, class Math::Vector<3, double> const &, double &, struct wNURSSight::targeting_data *);

    // RVA: 0x270 | Ordinal: 625
        void calculateAimingEx_(double const &, double &);

    // RVA: 0x277 | Ordinal: 632
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &, struct wNURSSight::targeting_data *);

    // RVA: 0x278 | Ordinal: 633
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x27A | Ordinal: 635
        void calculateAiming_(class osg::Vec3d const &, class osg::Vec3d const &, class osg::Vec3d &, struct wNURSSight::targeting_data *);

    // RVA: 0x284 | Ordinal: 645
        void canExecuteCFFMission(void) const;

    // RVA: 0x29C | Ordinal: 669
        void cancelAssign(void);

    // RVA: 0x2AC | Ordinal: 685
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x2B1 | Ordinal: 690
        void checkMakeSight(class wAmmunitionDescriptor *);

    // RVA: 0x2B9 | Ordinal: 698
        void checkTrgAltitude(class MovingObject *) const;

    // RVA: 0x2DE | Ordinal: 735
        void conditionsOfShootingAreExecuted(void);

    // RVA: 0x300 | Ordinal: 769
        void fill_the_wind_table(void);

    // RVA: 0x30E | Ordinal: 783
        void fire(void);

    // RVA: 0x30F | Ordinal: 784
        void fireActivityHandler(double &);

    // RVA: 0x312 | Ordinal: 787
        void fireStart(void);

    // RVA: 0x315 | Ordinal: 790
        void fireStop(void);

    // RVA: 0x344 | Ordinal: 837
        void getArtilleryAngleByDist(double const &);

    // RVA: 0x384 | Ordinal: 901
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x3B3 | Ordinal: 948
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3F8 | Ordinal: 1017
        void getNewTargetTime(class MovingObject *) const;

    // RVA: 0x3FA | Ordinal: 1019
        void getNextShotDelay(void) const;

    // RVA: 0x550 | Ordinal: 1361
        void net_assignTargetEx(struct wsTarget const &);

    // RVA: 0x584 | Ordinal: 1413
        void postInit(void);

    // RVA: 0x58C | Ordinal: 1421
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x5FA | Ordinal: 1531
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x6B | Ordinal: 108
        void _cLauncherRocket(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERROCKET_HPP
