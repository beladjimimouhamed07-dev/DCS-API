#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherAutogun
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherAutogun
{
public:

    // RVA: 0x24D | Ordinal: 590
        void assignTargetEx(struct wsTarget const &);

    // RVA: 0x260 | Ordinal: 609
        void barrelFire(struct FireMsgData const &);

    // RVA: 0x2D | Ordinal: 46
        void cLauncherAutogun(class cLauncherAutogun const &);

    // RVA: 0x2E | Ordinal: 47
        void cLauncherAutogun(void);

    // RVA: 0x26D | Ordinal: 622
        void calculateAimingCorrections(struct BC_InputData const &, double &, double &);

    // RVA: 0x273 | Ordinal: 628
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x29B | Ordinal: 668
        void cancelAssign(void);

    // RVA: 0x2A9 | Ordinal: 682
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x2B8 | Ordinal: 697
        void checkTrgAltitude(class MovingObject *) const;

    // RVA: 0x2C1 | Ordinal: 706
        void checkTrgDistanceReal(class MovingObject *, double) const;

    // RVA: 0x2DC | Ordinal: 733
        void conditionsOfShootingAreExecuted(void);

    // RVA: 0x2FF | Ordinal: 768
        void endBurstSound(double &);

    // RVA: 0x306 | Ordinal: 775
        void findStowageForArmoredTarget(float, struct wIArmoredTarget::ArmorData const &) const;

    // RVA: 0x30B | Ordinal: 780
        void fire(void);

    // RVA: 0x311 | Ordinal: 786
        void fireStart(void);

    // RVA: 0x314 | Ordinal: 789
        void fireStop(void);

    // RVA: 0x381 | Ordinal: 898
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x390 | Ordinal: 913
        void getDistanceMaxForFCS(void) const;

    // RVA: 0x3BD | Ordinal: 958
        void getFrequencyRange(void) const;

    // RVA: 0x44D | Ordinal: 1102
        void get_aiming_delay(void) const;

    // RVA: 0x454 | Ordinal: 1109
        void get_burst_delay(double) const;

    // RVA: 0x455 | Ordinal: 1110
        void get_burst_len(double) const;

    // RVA: 0x477 | Ordinal: 1144
        void good_to_attack(class MovingObject *, float &, class wWeaponSystem const *, unsigned __int64);

    // RVA: 0x4FB | Ordinal: 1276
        void maintain(void);

    // RVA: 0x54D | Ordinal: 1358
        void net_assignTargetEx(struct wsTarget const &);

    // RVA: 0x554 | Ordinal: 1365
        void net_fireStop(short, int);

    // RVA: 0x581 | Ordinal: 1410
        void postInit(void);

    // RVA: 0x589 | Ordinal: 1418
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x593 | Ordinal: 1428
        void prepareNewQueue(void);

    // RVA: 0x59B | Ordinal: 1436
        void queueSetState(bool);

    // RVA: 0x5CD | Ordinal: 1486
        void scheduleEndBurstSound(void);

    // RVA: 0x5D6 | Ordinal: 1495
        void select_new_stowage(void);

    // RVA: 0x5F7 | Ordinal: 1528
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x605 | Ordinal: 1542
        void setEmissionOnOff(bool);

    // RVA: 0x626 | Ordinal: 1575
        void setQueueType(void);

    // RVA: 0x645 | Ordinal: 1606
        void shellCaseExtraction(class wBarrel *);

    // RVA: 0x686 | Ordinal: 1671
        void uninitGunLauncher(void);

    // RVA: 0x67 | Ordinal: 104
        void _cLauncherAutogun(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERAUTOGUN_HPP
