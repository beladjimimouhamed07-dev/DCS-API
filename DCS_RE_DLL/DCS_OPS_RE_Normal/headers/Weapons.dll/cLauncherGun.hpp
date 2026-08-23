#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherGun
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherGun
{
public:

    // RVA: 0x24E | Ordinal: 591
        void assignTargetEx(struct wsTarget const &);

    // RVA: 0x261 | Ordinal: 610
        void barrelFire(struct FireMsgData const &);

    // RVA: 0x2F | Ordinal: 48
        void cLauncherGun(class cLauncherGun const &);

    // RVA: 0x30 | Ordinal: 49
        void cLauncherGun(void);

    // RVA: 0x26E | Ordinal: 623
        void calculateAimingCorrections(struct BC_InputData const &, double &, double &);

    // RVA: 0x274 | Ordinal: 629
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x2A6 | Ordinal: 679
        void checkAimingDeviation(double) const;

    // RVA: 0x2AA | Ordinal: 683
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x30C | Ordinal: 781
        void fire(void);

    // RVA: 0x382 | Ordinal: 899
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x391 | Ordinal: 914
        void getDistanceMaxForFCS(void) const;

    // RVA: 0x54E | Ordinal: 1359
        void net_assignTargetEx(struct wsTarget const &);

    // RVA: 0x582 | Ordinal: 1411
        void postInit(void);

    // RVA: 0x58A | Ordinal: 1419
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x5F8 | Ordinal: 1529
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x68 | Ordinal: 105
        void _cLauncherGun(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERGUN_HPP
