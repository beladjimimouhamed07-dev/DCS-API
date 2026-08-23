#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GunSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GunSight
{
public:

    // RVA: 0x53 | Ordinal: 84
        void GunSight(class cockpit::GunSight const &);

    // RVA: 0x54 | Ordinal: 85
        void GunSight(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x988 | Ordinal: 2441
        void breakaway(void) const;

    // RVA: 0x9C6 | Ordinal: 2503
        void calculate(void);

    // RVA: 0x9C7 | Ordinal: 2504
        void calculate(class Math::Polar &);

    // RVA: 0x9DA | Ordinal: 2523
        void calculate_air_to_ground(double &, class osg::Vec3d &, class wShellDescriptor const *);

    // RVA: 0x9DB | Ordinal: 2524
        void calculate_depression(double, class osg::Vec3d &, double, double);

    // RVA: 0x9DF | Ordinal: 2528
        void calculate_funnel(float, double &, class osg::Vec3d &);

    // RVA: 0x9E0 | Ordinal: 2529
        void calculate_funnel(double, class osg::Vec3d &);

    // RVA: 0xCAA | Ordinal: 3243
        void getFEDSPoint(int, class osg::Vec3d &);

    // RVA: 0xD2C | Ordinal: 3373
        void getLastGroundFEDS(class osg::Vec3d &);

    // RVA: 0x1387 | Ordinal: 5000
        void launchFEDS(bool, double, float, double);

    // RVA: 0x1389 | Ordinal: 5002
        void launch_authorized(void) const;

    // RVA: 0x17AD | Ordinal: 6062
        void setShellDesc(class wShellDescriptor const *);

    // RVA: 0x1B11 | Ordinal: 6930
        void updateFEDS(double);

    // RVA: 0x2A8 | Ordinal: 681
        void _GunSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GUNSIGHT_HPP
