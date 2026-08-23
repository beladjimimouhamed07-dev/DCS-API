#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SightDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SightDevice
{
public:

    // RVA: 0x7A | Ordinal: 123
        void SightDevice(class cockpit::SightDevice const &);

    // RVA: 0x7B | Ordinal: 124
        void SightDevice(class weapon_base::WindTableProxy_<float> const *);

    // RVA: 0x9CB | Ordinal: 2508
        void calculate(class Math::Polar &);

    // RVA: 0xC17 | Ordinal: 3096
        void forestall(class Math::Polar const &);

    // RVA: 0xC1F | Ordinal: 3104
        void freeze(void);

    // RVA: 0xE58 | Ordinal: 3673
        void get_DLZ(void) const;

    // RVA: 0xE8D | Ordinal: 3726
        void get_aim_point(double) const;

    // RVA: 0xE8E | Ordinal: 3727
        void get_aim_point(void) const;

    // RVA: 0xE90 | Ordinal: 3729
        void get_aim_point_global(void) const;

    // RVA: 0xF30 | Ordinal: 3889
        void get_external_distance(void) const;

    // RVA: 0xF76 | Ordinal: 3959
        void get_human_point(void) const;

    // RVA: 0xF77 | Ordinal: 3960
        void get_human_position(void) const;

    // RVA: 0x1046 | Ordinal: 4167
        void get_real_wind(double) const;

    // RVA: 0x107C | Ordinal: 4221
        void get_self_height(void) const;

    // RVA: 0x1098 | Ordinal: 4249
        void get_sight_data(void) const;

    // RVA: 0x10BB | Ordinal: 4284
        void get_target_level(void) const;

    // RVA: 0x10CF | Ordinal: 4304
        void get_time(void) const;

    // RVA: 0x10FA | Ordinal: 4347
        void get_wt_ptr(class osg::Vec3d const &);

    // RVA: 0x10FB | Ordinal: 4348
        void get_wt_ptr(void);

    // RVA: 0x12B1 | Ordinal: 4786
        void is_distance_available(void) const;

    // RVA: 0x12B6 | Ordinal: 4791
        void is_freezed(void) const;

    // RVA: 0x1839 | Ordinal: 6202
        void set_can_calculate(bool);

    // RVA: 0x1877 | Ordinal: 6264
        void set_distance_available(bool);

    // RVA: 0x1881 | Ordinal: 6274
        void set_external_aim_point(class Math::Polar const &);

    // RVA: 0x1882 | Ordinal: 6275
        void set_external_aim_point_available(bool);

    // RVA: 0x1885 | Ordinal: 6278
        void set_external_distance(double);

    // RVA: 0x192A | Ordinal: 6443
        void set_sight_data(struct cockpit::SightingData const &);

    // RVA: 0x194C | Ordinal: 6477
        void set_target_level(double);

    // RVA: 0x1A79 | Ordinal: 6778
        void unfreeze(void);

    // RVA: 0x2BA | Ordinal: 699
        void _SightDevice(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SIGHTDEVICE_HPP
