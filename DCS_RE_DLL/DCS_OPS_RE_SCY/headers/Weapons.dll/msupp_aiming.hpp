#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: msupp_aiming
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class msupp_aiming
{
public:

    // RVA: 0x50F | Ordinal: 1296
        void msupp_calc_back_cannon_to_point(class wPosition3<float>, class osg::Vec3f, float, class wPosition3<float>, class wPosition3<float>, struct targeting_info *, class osg::Vec3f, class osg::Vec3f);

    // RVA: 0x510 | Ordinal: 1297
        void msupp_calc_cannon_to_point(class wPosition3<float>, class osg::Vec3f, float, class osg::Vec3f, class wPosition3<float>, class wPosition3<float>, struct targeting_info *, class osg::Vec3f, class osg::Vec3f, bool &);

    // RVA: 0x511 | Ordinal: 1298
        void msupp_calc_gunpod_to_point(bool, class wPosition3<float>, class wPosition3<float>, struct targeting_info *, class osg::Vec3f, class osg::Vec3f);

    // RVA: 0x512 | Ordinal: 1299
        void msupp_calc_weapon_to_point(bool, class osg::Vec3f, class osg::Vec3f, class wPosition3<float>, class wPosition3<float>, struct targeting_info *, class osg::Vec3f, class osg::Vec3f, bool &, bool &, bool &, class osg::Vec3f &, class osg::Vec3f &, float, float, float, float);
};

// DCS_OPS_RE_WEAPONS.DLL_MSUPP_AIMING_HPP
