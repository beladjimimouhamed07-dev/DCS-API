#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cLauncherAAGun
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cLauncherAAGun
{
public:

    // RVA: 0x2A | Ordinal: 43
        void cLauncherAAGun(class cLauncherAAGun &&);

    // RVA: 0x2B | Ordinal: 44
        void cLauncherAAGun(class cLauncherAAGun const &);

    // RVA: 0x2C | Ordinal: 45
        void cLauncherAAGun(void);

    // RVA: 0x272 | Ordinal: 627
        void calculateAimingParameters(class wPosition3<double> const &, class MovingObject *, class osg::Vec3d &);

    // RVA: 0x2A8 | Ordinal: 681
        void checkAimingDynamicParameters(class MovingObject *, class wWeaponSystem const *);

    // RVA: 0x2B7 | Ordinal: 696
        void checkTrgAltitude(class MovingObject *) const;

    // RVA: 0x2BD | Ordinal: 702
        void checkTrgDistancePossible(class MovingObject *, class wWeaponSystem const *) const;

    // RVA: 0x2C0 | Ordinal: 705
        void checkTrgDistanceReal(class MovingObject *, double) const;

    // RVA: 0x3BE | Ordinal: 959
        void getFuseDelay(void) const;

    // RVA: 0x580 | Ordinal: 1409
        void postInit(void);

    // RVA: 0x588 | Ordinal: 1417
        void preInit(class MovingObject *, class wWeaponSystem *, class Lua::Config &, enum wsystem_type, int);

    // RVA: 0x66 | Ordinal: 103
        void _cLauncherAAGun(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CLAUNCHERAAGUN_HPP
