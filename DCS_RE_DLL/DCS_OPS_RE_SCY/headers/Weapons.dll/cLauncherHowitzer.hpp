#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherHowitzer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherHowitzer
{
public:

    // RVA: 0x155 | Ordinal: 342
        void CFF_adjustTargetPoint(float, float);

    // RVA: 0x15F | Ordinal: 352
        void CFF_inAimingAdjustMode(void) const;

    // RVA: 0x162 | Ordinal: 355
        void CFF_switchToFFE(float);

    // RVA: 0x1CF | Ordinal: 464
        void IsIndirect(void) const;

    // RVA: 0x237 | Ordinal: 568
        void adjustAimingTime(float);

    // RVA: 0x24F | Ordinal: 592
        void assignTargetEx(struct wsTarget const &);

    // RVA: 0x262 | Ordinal: 611
        void barrelFire(struct FireMsgData const &);

    // RVA: 0x31 | Ordinal: 50
        void cLauncherHowitzer(class cLauncherHowitzer const &);

    // RVA: 0x32 | Ordinal: 51
        void cLauncherHowitzer(void);

    // RVA: 0x26F | Ordinal: 624
        void calculateAimingCorrections(struct BC_InputData const &, double &, double &);

    // RVA: 0x275 | Ordinal: 630
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &, struct wShellAimingTableDescriptor::targeting_data *);

    // RVA: 0x276 | Ordinal: 631
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x283 | Ordinal: 644
        void canExecuteCFFMission(void) const;

    // RVA: 0x2AB | Ordinal: 684
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x2BE | Ordinal: 703
        void checkTrgDistancePossible(class MovingObject *, class wWeaponSystem const *) const;

    // RVA: 0x2DD | Ordinal: 734
        void conditionsOfShootingAreExecuted(void);

    // RVA: 0x30D | Ordinal: 782
        void fire(void);

    // RVA: 0x321 | Ordinal: 802
        void generate_new_delta(void);

    // RVA: 0x343 | Ordinal: 836
        void getArtilleryAngleByDist(double const &);

    // RVA: 0x346 | Ordinal: 839
        void getArtilleryDistByAngle(double const &) const;

    // RVA: 0x348 | Ordinal: 841
        void getArtilleryShellMaxHeight(unsigned int) const;

    // RVA: 0x383 | Ordinal: 900
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x392 | Ordinal: 915
        void getDistanceMaxForFCS(void) const;

    // RVA: 0x3B2 | Ordinal: 947
        void getFMInfo(class cPointerTemplate<class MovingObject>, struct ControlFire::FireMissionData &);

    // RVA: 0x3BF | Ordinal: 960
        void getFuseDelay(void) const;

    // RVA: 0x3F7 | Ordinal: 1016
        void getNewTargetTime(class MovingObject *) const;

    // RVA: 0x478 | Ordinal: 1145
        void good_to_attack(class MovingObject *, float &, class wWeaponSystem const *, unsigned __int64);

    // RVA: 0x54F | Ordinal: 1360
        void net_assignTargetEx(struct wsTarget const &);

    // RVA: 0x571 | Ordinal: 1394
        void onShellExplosion(class Math::Vector<3, double> const &);

    // RVA: 0x583 | Ordinal: 1412
        void postInit(void);

    // RVA: 0x58B | Ordinal: 1420
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x5F9 | Ordinal: 1530
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x612 | Ordinal: 1555
        void setManual(bool);

    // RVA: 0x69 | Ordinal: 106
        void _cLauncherHowitzer(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERHOWITZER_HPP
