#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMovingMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMovingMap
{
public:

    // RVA: 0x161 | Ordinal: 354
        void avMovingMap(class cockpit::avMovingMap const &);

    // RVA: 0x162 | Ordinal: 355
        void avMovingMap(void);

    // RVA: 0xA68 | Ordinal: 2665
        void check_camera_orientation(void);

    // RVA: 0xA6B | Ordinal: 2668
        void check_camera_volume(bool, float, float, float, float);

    // RVA: 0xEC7 | Ordinal: 3784
        void get_camera(bool, float, float, float, float);

    // RVA: 0xEC8 | Ordinal: 3785
        void get_camera(void);

    // RVA: 0xFB5 | Ordinal: 4022
        void get_map_center(void);

    // RVA: 0xFB7 | Ordinal: 4024
        void get_map_rotation(double &);

    // RVA: 0x159A | Ordinal: 5531
        void relative_position_map(class osg::Vec3f const &);

    // RVA: 0x32A | Ordinal: 811
        void _avMovingMap(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMOVINGMAP_HPP
