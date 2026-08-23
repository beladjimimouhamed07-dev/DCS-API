#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: Rocket_Const
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Rocket_Const
{
public:

    // RVA: 0x20 | Ordinal: 33
        void Rocket_Const(struct Rocket_Const &&);

    // RVA: 0x21 | Ordinal: 34
        void Rocket_Const(struct Rocket_Const const &);

    // RVA: 0x22 | Ordinal: 35
        void Rocket_Const(void);

    // RVA: 0x269 | Ordinal: 618
        void calcAngles_(float, float, float, float, float &, float &) const;

    // RVA: 0x34F | Ordinal: 848
        void getAverageVelocity(float, float) const;

    // RVA: 0x36E | Ordinal: 879
        void getCtrlEnableDelay(int);

    // RVA: 0x372 | Ordinal: 883
        void getDFlight(float, float, float, float, float &, double &) const;

    // RVA: 0x394 | Ordinal: 917
        void getDmaxFlight_(float, float &) const;

    // RVA: 0x396 | Ordinal: 919
        void getDmaxLaunch(float) const;

    // RVA: 0x397 | Ordinal: 920
        void getDmaxLaunch(float, float) const;

    // RVA: 0x398 | Ordinal: 921
        void getDmaxLaunch(float, float, float) const;

    // RVA: 0x399 | Ordinal: 922
        void getDmaxLaunch(class osg::Vec3f, class osg::Vec3f, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> &) const;

    // RVA: 0x39B | Ordinal: 924
        void getDmaxLaunchJ(float, float, int) const;

    // RVA: 0x39C | Ordinal: 925
        void getDmaxLaunchJ(float, float, bool) const;

    // RVA: 0x39D | Ordinal: 926
        void getDmaxLaunch_(float, float &, float &, float &) const;

    // RVA: 0x39E | Ordinal: 927
        void getDmaxLaunch_(float, float, float, float &, float &, float &) const;

    // RVA: 0x3A0 | Ordinal: 929
        void getDminLaunch(float, float) const;

    // RVA: 0x3A2 | Ordinal: 931
        void getDminLaunchJ(float, float, int) const;

    // RVA: 0x3A3 | Ordinal: 932
        void getDminLaunchJ(float, float, bool) const;

    // RVA: 0x3CB | Ordinal: 972
        void getInclinationByDist(float) const;

    // RVA: 0x3D0 | Ordinal: 977
        void getLoftStartRange(float, float) const;

    // RVA: 0x40D | Ordinal: 1038
        void getPropCoeff(float);

    // RVA: 0x430 | Ordinal: 1073
        void getTOF(float, float, float) const;

    // RVA: 0x447 | Ordinal: 1096
        void getVelocityOnHeight(float, float &, float &) const;

    // RVA: 0x62 | Ordinal: 99
        void _Rocket_Const(void);
};

// DCS_OPS_RE_WEAPONS.DLL_ROCKET_CONST_HPP
