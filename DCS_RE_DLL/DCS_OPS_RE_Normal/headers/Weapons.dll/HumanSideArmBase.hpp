#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: HumanSideArmBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HumanSideArmBase
{
public:

    // RVA: 0x1C | Ordinal: 29
        void HumanSideArmBase(void);

    // RVA: 0x25E | Ordinal: 607
        void attach_update(void);

    // RVA: 0x2E6 | Ordinal: 743
        void create(struct SideArmInit const &);

    // RVA: 0x3BB | Ordinal: 956
        void getFirePoint(class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x4C2 | Ordinal: 1219
        void isReload(void) const;

    // RVA: 0x4C5 | Ordinal: 1222
        void isShooting(void) const;

    // RVA: 0x518 | Ordinal: 1305
        void netCreate(struct NetSideArmInit const &);

    // RVA: 0x5DF | Ordinal: 1504
        void setActiveBarrelType(unsigned int const &);

    // RVA: 0x664 | Ordinal: 1637
        void startReload(void);

    // RVA: 0x668 | Ordinal: 1641
        void startShoot(unsigned int);

    // RVA: 0x674 | Ordinal: 1653
        void stopShoot(void);

    // RVA: 0x61 | Ordinal: 98
        void _HumanSideArmBase(void);
};

// DCS_OPS_RE_WEAPONS.DLL_HUMANSIDEARMBASE_HPP
