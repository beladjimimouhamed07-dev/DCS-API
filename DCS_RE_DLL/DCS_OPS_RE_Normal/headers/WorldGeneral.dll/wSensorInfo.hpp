#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wSensorInfo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSensorInfo
{
public:

    // RVA: 0x65D | Ordinal: 1630
        void check_detected_by_time(double, double, float &);

    // RVA: 0x667 | Ordinal: 1640
        void check_shooter(struct wTargetDetectionInfo const &, double, struct wSensorInfo::wSensorState const &, class wsType const &, void *, unsigned int) const;

    // RVA: 0x858 | Ordinal: 2137
        void getLinkedAxes(void) const;

    // RVA: 0x981 | Ordinal: 2434
        void initRandoms(int);

    // RVA: 0x9D7 | Ordinal: 2520
        void is_in_angular_volume(class osg::Vec3f const &, class wAngularVolume const &, class wPosition3<float> const &);

    // RVA: 0x9D8 | Ordinal: 2521
        void is_in_scan_volume(class MovingObject *, class MovingObject *, struct wSensorInfo::wSensorState const &) const;

    // RVA: 0x9D9 | Ordinal: 2522
        void is_in_scan_volume(class MovingObject *, class osg::Vec3f const &, class osg::Vec3f const &, class MovingObject *, struct wSensorInfo::wSensorState const &) const;

    // RVA: 0xA57 | Ordinal: 2648
        void load_from_state(class Lua::Config &);

    // RVA: 0x207 | Ordinal: 520
        void wSensorInfo(class wSensorInfo const &);

    // RVA: 0x208 | Ordinal: 521
        void wSensorInfo(void);

    // RVA: 0x2DE | Ordinal: 735
        void _wSensorInfo(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WSENSORINFO_HPP
