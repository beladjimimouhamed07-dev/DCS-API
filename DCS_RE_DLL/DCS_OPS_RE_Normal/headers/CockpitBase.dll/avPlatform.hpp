#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avPlatform
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avPlatform
{
public:

    // RVA: 0x174 | Ordinal: 373
        void avPlatform(class cockpit::avPlatform const &);

    // RVA: 0x175 | Ordinal: 374
        void avPlatform(void);

    // RVA: 0x968 | Ordinal: 2409
        void azimuth(void) const;

    // RVA: 0xBC5 | Ordinal: 3014
        void elevation(void) const;

    // RVA: 0xBEB | Ordinal: 3052
        void fill_camera(class Graphics::Camera &) const;

    // RVA: 0xC58 | Ordinal: 3161
        void getCamera(void) const;

    // RVA: 0xD95 | Ordinal: 3478
        void getPlatformInitialLocalPosition(void) const;

    // RVA: 0xD96 | Ordinal: 3479
        void getPlatformInitialPosition(void) const;

    // RVA: 0xD97 | Ordinal: 3480
        void getPlatformInitialPositionInterpolated(void) const;

    // RVA: 0xD98 | Ordinal: 3481
        void getPlatformLocalPosition(void) const;

    // RVA: 0xD9B | Ordinal: 3484
        void getPlatformPosition(void) const;

    // RVA: 0xD9C | Ordinal: 3485
        void getPlatformPositionInterpolated(void) const;

    // RVA: 0xD9F | Ordinal: 3488
        void getPolarPosition(void) const;

    // RVA: 0xED1 | Ordinal: 3794
        void get_carrier(void) const;

    // RVA: 0xED2 | Ordinal: 3795
        void get_carrier_position(void) const;

    // RVA: 0xF68 | Ordinal: 3945
        void get_h_axis(void);

    // RVA: 0xF69 | Ordinal: 3946
        void get_h_axis(void) const;

    // RVA: 0xF94 | Ordinal: 3989
        void get_last_update_time(void) const;

    // RVA: 0x1007 | Ordinal: 4104
        void get_platform(void);

    // RVA: 0x1008 | Ordinal: 4105
        void get_platform(void) const;

    // RVA: 0x104B | Ordinal: 4172
        void get_relative_position(class osg::Vec3d const &) const;

    // RVA: 0x10E2 | Ordinal: 4323
        void get_v_axis(void);

    // RVA: 0x10E3 | Ordinal: 4324
        void get_v_axis(void) const;

    // RVA: 0x123D | Ordinal: 4670
        void interpolate_angles(class wPosition3<double> const &, double) const;

    // RVA: 0x1481 | Ordinal: 5250
        void on_update_position(double);

    // RVA: 0x1635 | Ordinal: 5686
        void respat_angles(double, double);

    // RVA: 0x163A | Ordinal: 5691
        void restart(void);

    // RVA: 0x1786 | Ordinal: 6023
        void setPlatformInitialLocalPosition(class wPosition3<double> const &);

    // RVA: 0x183A | Ordinal: 6203
        void set_carrier(class MovingObject *);

    // RVA: 0x1903 | Ordinal: 6404
        void set_platform(class cockpit::avPlatform *);

    // RVA: 0x1B47 | Ordinal: 6984
        void update_angles(double);

    // RVA: 0x1B78 | Ordinal: 7033
        void update_platform_position(void);

    // RVA: 0x332 | Ordinal: 819
        void _avPlatform(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVPLATFORM_HPP
