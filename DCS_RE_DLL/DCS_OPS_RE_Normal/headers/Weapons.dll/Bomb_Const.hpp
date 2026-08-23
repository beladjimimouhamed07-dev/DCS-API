#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: Bomb_Const
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Bomb_Const
{
public:

    // RVA: 0x12 | Ordinal: 19
        void Bomb_Const(struct Bomb_Const &&);

    // RVA: 0x13 | Ordinal: 20
        void Bomb_Const(struct Bomb_Const const &);

    // RVA: 0x14 | Ordinal: 21
        void Bomb_Const(void);

    // RVA: 0x34B | Ordinal: 844
        void getAspectMaxLaunch(float, float) const;

    // RVA: 0x34C | Ordinal: 845
        void getAspectMinLaunch(float, float) const;

    // RVA: 0x395 | Ordinal: 918
        void getDmaxLaunch(float, float, float, float) const;

    // RVA: 0x39F | Ordinal: 928
        void getDminLaunch(float, float, float) const;

    // RVA: 0x3A6 | Ordinal: 935
        void getDynLAR4(float, class osg::Vec3f, class osg::Vec3f, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> *);

    // RVA: 0x42E | Ordinal: 1071
        void getTOF(float, float, float) const;

    // RVA: 0x42F | Ordinal: 1072
        void getTOF(float, float, float, float) const;

    // RVA: 0x431 | Ordinal: 1074
        void getTOFDiveCoeff(float, float, float) const;

    // RVA: 0x47B | Ordinal: 1148
        void hasAspectMaxLaunchData(void);

    // RVA: 0x47C | Ordinal: 1149
        void hasAspectMinLaunchData(void);

    // RVA: 0x47F | Ordinal: 1152
        void hasDmaxLaunchData(void);

    // RVA: 0x481 | Ordinal: 1154
        void hasDminLaunchData(void);

    // RVA: 0x5D | Ordinal: 94
        void _Bomb_Const(void);
};

// DCS_OPS_RE_WEAPONS.DLL_BOMB_CONST_HPP
