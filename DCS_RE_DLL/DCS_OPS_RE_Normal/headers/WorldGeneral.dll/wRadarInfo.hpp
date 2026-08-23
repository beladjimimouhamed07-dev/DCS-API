#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wRadarInfo
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wRadarInfo
{
public:

    // RVA: 0x669 | Ordinal: 1642
        void check_target(struct wTargetDetectionInfo const &, double, struct wSensorInfo::wSensorState const &) const;

    // RVA: 0x74C | Ordinal: 1869
        void create(void);

    // RVA: 0x8E8 | Ordinal: 2281
        void getRadarType(void) const;

    // RVA: 0x916 | Ordinal: 2327
        void get_airborne_target_detection_dist_(float, enum wRadarInfo::wHemisphere, enum wRadarInfo::wTargetAspect, bool, float *) const;

    // RVA: 0x917 | Ordinal: 2328
        void get_airborne_target_detection_dist_(float, bool, float *) const;

    // RVA: 0x92F | Ordinal: 2352
        void get_detection_dist(struct wTargetDetectionInfo const &, double, enum wSensorInfo::wSensorMode, float &) const;

    // RVA: 0x93F | Ordinal: 2368
        void get_max_detection_dist(void) const;

    // RVA: 0x940 | Ordinal: 2369
        void get_max_detection_distance(class MovingObject *) const;

    // RVA: 0x956 | Ordinal: 2391
        void get_scan_period_(enum wSensorInfo::wSensorMode) const;

    // RVA: 0x958 | Ordinal: 2393
        void get_sensor_type(void) const;

    // RVA: 0x95A | Ordinal: 2395
        void get_surface_target_detection_dist_(float, enum wRadarInfo::SurfaceSearchMode) const;

    // RVA: 0x95D | Ordinal: 2398
        void get_volume(struct wSensorInfo::wSensorState const &) const;

    // RVA: 0xA55 | Ordinal: 2646
        void load_from_state(class Lua::Config &);

    // RVA: 0xB2C | Ordinal: 2861
        void provideDistance(void) const;

    // RVA: 0xB8D | Ordinal: 2958
        void search_target(struct wTargetDetectionInfo const &, class wTargetDetectionStatus &, double, struct wSensorInfo::wSensorState const &) const;

    // RVA: 0x1FF | Ordinal: 512
        void wRadarInfo(class wRadarInfo &&);

    // RVA: 0x200 | Ordinal: 513
        void wRadarInfo(class wRadarInfo const &);

    // RVA: 0x201 | Ordinal: 514
        void wRadarInfo(void);

    // RVA: 0x2DB | Ordinal: 732
        void _wRadarInfo(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WRADARINFO_HPP
