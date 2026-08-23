#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: cAimingDirector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class cAimingDirector
{
public:

    // RVA: 0x223 | Ordinal: 548
        void addDesignationClient(class cLauncher *);

    // RVA: 0x26 | Ordinal: 39
        void cAimingDirector(class cAimingDirector const &);

    // RVA: 0x27 | Ordinal: 40
        void cAimingDirector(class cLauncher *);

    // RVA: 0x2E4 | Ordinal: 741
        void countTheShot(void);

    // RVA: 0x331 | Ordinal: 818
        void getAmmoName(void) const;

    // RVA: 0x37A | Ordinal: 891
        void getDesignationParams(void) const;

    // RVA: 0x5B0 | Ordinal: 1457
        void removeDesignationClient(class cLauncher *);

    // RVA: 0x5C3 | Ordinal: 1476
        void resetDesignationParams(void);

    // RVA: 0x5EF | Ordinal: 1520
        void setDesignationAmmoInitVelocity(float);

    // RVA: 0x5F0 | Ordinal: 1521
        void setDesignationDirection(class osg::Vec3d const &);

    // RVA: 0x5F2 | Ordinal: 1523
        void setDesignationTime(double);

    // RVA: 0x620 | Ordinal: 1569
        void setOpenFire(bool);

    // RVA: 0x627 | Ordinal: 1576
        void setRadius(float);

    // RVA: 0x631 | Ordinal: 1586
        void setShotDelays(float);

    // RVA: 0x68F | Ordinal: 1680
        void updateClientsReadyState(void);

    // RVA: 0x690 | Ordinal: 1681
        void updateDesignationParams(void);

    // RVA: 0x64 | Ordinal: 101
        void _cAimingDirector(void);
};

// DCS_OPS_RE_WEAPONS.DLL_CAIMINGDIRECTOR_HPP
