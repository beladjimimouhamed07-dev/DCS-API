#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: wDetector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wDetector
{
public:

    // RVA: 0x615 | Ordinal: 1558
        void addSensorPod(struct wSensorCarrier const *);

    // RVA: 0x637 | Ordinal: 1592
        void buildTargetDetectionInfo(class MovingObject *, class wTargetDetectionStatus const &, struct wTargetDetectionInfo &, unsigned int) const;

    // RVA: 0x655 | Ordinal: 1622
        void checkRadar(class MovingObject *, class wTargetDetectionStatus &, enum RadarMode, float);

    // RVA: 0x656 | Ordinal: 1623
        void checkShooter(class MovingObject *, class wTargetDetectionStatus &, class wsType const &, void *, unsigned int);

    // RVA: 0x65A | Ordinal: 1627
        void checkTarget(class MovingObject *, class wTargetDetectionStatus &, bool, unsigned int *);

    // RVA: 0x771 | Ordinal: 1906
        void detectMissile(class MovingObject *, bool);

    // RVA: 0x81C | Ordinal: 2077
        void getContrastFactor(class MovingObject *, class wTargetDetectionStatus &);

    // RVA: 0x829 | Ordinal: 2090
        void getDetectionFlags(void) const;

    // RVA: 0x82C | Ordinal: 2093
        void getDetectorInfo(void) const;

    // RVA: 0x85E | Ordinal: 2143
        void getMaxVisibilityDistWithFog(class MovingObject *, class wTargetDetectionStatus &, enum wVisualDetectorImpl::SpectrumBand, float, float);

    // RVA: 0x8C6 | Ordinal: 2247
        void getNearestDetectedTarget(class osg::Vec3f const &, class osg::Vec3f &) const;

    // RVA: 0x8E5 | Ordinal: 2278
        void getRadarMaxAzimuthAngle(void) const;

    // RVA: 0x8E6 | Ordinal: 2279
        void getRadarMaxElevationAngle(void) const;

    // RVA: 0x8E7 | Ordinal: 2280
        void getRadarMaxTWSTargets(void) const;

    // RVA: 0x8F0 | Ordinal: 2289
        void getSensorMode(enum wSensorInfo::wSensorType) const;

    // RVA: 0x8FD | Ordinal: 2302
        void getTargetOfInterest(void) const;

    // RVA: 0x973 | Ordinal: 2420
        void hasSensors(enum wSensorInfo::wSensorType) const;

    // RVA: 0x97C | Ordinal: 2429
        void init(class MovingObject *, struct wDetectorInfo const *);

    // RVA: 0x9C5 | Ordinal: 2502
        void isTargetRadiated(class MovingObject *) const;

    // RVA: 0xB69 | Ordinal: 2922
        void removeSensorPod(struct wSensorCarrier const *);

    // RVA: 0xBCA | Ordinal: 3019
        void setSensorMode(enum wSensorInfo::wSensorType, enum wSensorInfo::wSensorMode);

    // RVA: 0xBCB | Ordinal: 3020
        void setSensorsPos(class wPosition3<float> const &);

    // RVA: 0xBD2 | Ordinal: 3027
        void setTargetOfInterest(class MovingObject *);

    // RVA: 0x1E9 | Ordinal: 490
        void wDetector(class wDetector const &);

    // RVA: 0x1EA | Ordinal: 491
        void wDetector(void);

    // RVA: 0x2D2 | Ordinal: 723
        void _wDetector(void);
};

// DCS_OPS_RE_WORLDGENERAL.DLL_WDETECTOR_HPP
