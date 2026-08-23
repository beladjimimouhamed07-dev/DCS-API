#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: BombSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class BombSight
{
public:

    // RVA: 0x765 | Ordinal: 1894
        void BombFlyHorizontalDist(double, class osg::Vec3f const &, double);

    // RVA: 0x766 | Ordinal: 1895
        void BombFlyHorizontalDist_New(class osg::Vec3f const &, double);

    // RVA: 0x767 | Ordinal: 1896
        void BombFlyInitAlt(double, class osg::Vec3f const &);

    // RVA: 0x768 | Ordinal: 1897
        void BombFlyInitAlt_New(double, class osg::Vec3f const &);

    // RVA: 0x769 | Ordinal: 1898
        void BombFlyInitAlt_Old(double, class osg::Vec3f const &);

    // RVA: 0x30 | Ordinal: 49
        void BombSight(class cockpit::BombSight const &);

    // RVA: 0x31 | Ordinal: 50
        void BombSight(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x987 | Ordinal: 2440
        void breakaway(void) const;

    // RVA: 0x9C3 | Ordinal: 2500
        void calculate(double, double, double, class Math::Polar &);

    // RVA: 0x9C4 | Ordinal: 2501
        void calculate(void);

    // RVA: 0x9C5 | Ordinal: 2502
        void calculate(class Math::Polar &);

    // RVA: 0x9CE | Ordinal: 2511
        void calculateDist_by_Alt(double);

    // RVA: 0x9CF | Ordinal: 2512
        void calculateDist_by_Time(class osg::Vec3f const &, double);

    // RVA: 0x9D0 | Ordinal: 2513
        void calculateDist_by_Time(double, double, class osg::Vec3f const &, double);

    // RVA: 0x9D7 | Ordinal: 2520
        void calculate_aim_point(class osg::Vec3f const &, class osg::Vec3f const &, double, double &, class osg::Vec3d &);

    // RVA: 0x9E1 | Ordinal: 2530
        void calculate_lead(float, double, class Math::Polar &, bool, bool);

    // RVA: 0x9E2 | Ordinal: 2531
        void calculate_lead(double, class Math::Polar &, bool, bool);

    // RVA: 0x9E3 | Ordinal: 2532
        void calculate_lead_alt_vel(float, double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9E4 | Ordinal: 2533
        void calculate_lead_alt_vel(double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9E5 | Ordinal: 2534
        void calculate_lead_alt_vel_acc(double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9E6 | Ordinal: 2535
        void calculate_lead_dist(double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9E7 | Ordinal: 2536
        void calculate_lead_time(double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9E8 | Ordinal: 2537
        void calculate_lead_time(double, float, double, class Math::Polar &, double &, bool, bool);

    // RVA: 0x9EF | Ordinal: 2544
        void calculate_velocity_by_pitch(class osg::Vec3f const &, double, double);

    // RVA: 0xED3 | Ordinal: 3796
        void get_center_of_bomb_serie(void) const;

    // RVA: 0xF97 | Ordinal: 3992
        void get_lead_acceleration(void);

    // RVA: 0xF98 | Ordinal: 3993
        void get_lead_aim_point(void) const;

    // RVA: 0xF99 | Ordinal: 3994
        void get_lead_aim_point_global(void) const;

    // RVA: 0xF9A | Ordinal: 3995
        void get_lead_release_point_vel_acc(class wPosition3<double> const &, class osg::Vec3d const &, double, class wPosition3<double> &, class osg::Vec3d &);

    // RVA: 0xF9B | Ordinal: 3996
        void get_lead_time(void) const;

    // RVA: 0xFBE | Ordinal: 4031
        void get_max_bomb_ht(void);

    // RVA: 0x1388 | Ordinal: 5001
        void launch_authorized(void) const;

    // RVA: 0x16A5 | Ordinal: 5798
        void setBombType(class wsType const &);

    // RVA: 0x18C0 | Ordinal: 6337
        void set_lead_target_level(double);

    // RVA: 0x1B12 | Ordinal: 6931
        void updateFilters(void);

    // RVA: 0x29D | Ordinal: 670
        void _BombSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_BOMBSIGHT_HPP
