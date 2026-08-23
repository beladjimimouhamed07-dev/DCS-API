#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: HumanRifle
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HumanRifle
{
public:

    // RVA: 0x1A | Ordinal: 27
        void HumanRifle(void);

    // RVA: 0x21D | Ordinal: 542
        void activateAnimation(bool, class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x25A | Ordinal: 603
        void attach(class MovingObject *, bool);

    // RVA: 0x25D | Ordinal: 606
        void attach_update(void);

    // RVA: 0x2EE | Ordinal: 751
        void debug_draw(void);

    // RVA: 0x2F8 | Ordinal: 761
        void drop(void);

    // RVA: 0x316 | Ordinal: 791
        void flush(void);

    // RVA: 0x318 | Ordinal: 793
        void flush_animation_actions(void);

    // RVA: 0x324 | Ordinal: 805
        void getActiveBarrelType(void) const;

    // RVA: 0x32C | Ordinal: 813
        void getAmmoCount(void) const;

    // RVA: 0x32E | Ordinal: 815
        void getAmmoDescription(void) const;

    // RVA: 0x33B | Ordinal: 828
        void getAnimation(unsigned int const &);

    // RVA: 0x351 | Ordinal: 850
        void getBarrelCount(void) const;

    // RVA: 0x353 | Ordinal: 852
        void getBarrelInfo(unsigned int, struct HandWeaponInfo &) const;

    // RVA: 0x3BA | Ordinal: 955
        void getFirePoint(class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x407 | Ordinal: 1032
        void getPositionInParentSpace(double);

    // RVA: 0x429 | Ordinal: 1066
        void getSumAmmoCount(void) const;

    // RVA: 0x44E | Ordinal: 1103
        void get_attach_pos(void) const;

    // RVA: 0x452 | Ordinal: 1107
        void get_bone_by_id(class ed::basic_string<char> const &) const;

    // RVA: 0x453 | Ordinal: 1108
        void get_bone_id(class ed::basic_string<char> const &) const;

    // RVA: 0x48B | Ordinal: 1164
        void init(struct SideArmInit const &);

    // RVA: 0x49B | Ordinal: 1180
        void init_animation_actions(bool);

    // RVA: 0x4C0 | Ordinal: 1217
        void isReload(void) const;

    // RVA: 0x4C4 | Ordinal: 1221
        void isShooting(void) const;

    // RVA: 0x4E3 | Ordinal: 1252
        void load(class ed::basic_string<char> const &);

    // RVA: 0x50C | Ordinal: 1293
        void move_back_to_aim(bool);

    // RVA: 0x50D | Ordinal: 1294
        void move_back_to_hand(bool);

    // RVA: 0x50E | Ordinal: 1295
        void move_hand_to_aim(bool);

    // RVA: 0x52E | Ordinal: 1327
        void netInit(struct NetSideArmInit const &);

    // RVA: 0x531 | Ordinal: 1330
        void netInputFire(unsigned int, unsigned char, bool);

    // RVA: 0x533 | Ordinal: 1332
        void netInputReload(unsigned int);

    // RVA: 0x5DE | Ordinal: 1503
        void setActiveBarrelType(unsigned int const &);

    // RVA: 0x663 | Ordinal: 1636
        void startReload(void);

    // RVA: 0x667 | Ordinal: 1640
        void startShoot(unsigned int);

    // RVA: 0x673 | Ordinal: 1652
        void stopShoot(void);

    // RVA: 0x5F | Ordinal: 96
        void _HumanRifle(void);
};

// DCS_OPS_RE_WEAPONS.DLL_HUMANRIFLE_HPP
