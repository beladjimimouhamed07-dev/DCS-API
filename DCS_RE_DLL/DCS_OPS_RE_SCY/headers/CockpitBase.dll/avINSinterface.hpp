#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avINSinterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace navigation {

class avINSinterface
{
public:

    // RVA: 0x12A | Ordinal: 299
        void avINSinterface(class cockpit::navigation::avINSinterface &&);

    // RVA: 0x12B | Ordinal: 300
        void avINSinterface(class cockpit::navigation::avINSinterface const &);

    // RVA: 0x12C | Ordinal: 301
        void avINSinterface(void);

    // RVA: 0xC37 | Ordinal: 3128
        void getAccelerationValid(void);

    // RVA: 0xC42 | Ordinal: 3139
        void getAltitudeValid(void);

    // RVA: 0xC4C | Ordinal: 3149
        void getAttitudeValid(void);

    // RVA: 0xCAB | Ordinal: 3244
        void getFigureOfMerit(void) const;

    // RVA: 0xCFA | Ordinal: 3323
        void getHeadingValid(void);

    // RVA: 0xD03 | Ordinal: 3332
        void getIMU(void);

    // RVA: 0xD05 | Ordinal: 3334
        void getINS(void);

    // RVA: 0xD5E | Ordinal: 3423
        void getModifiableState(void);

    // RVA: 0xD6E | Ordinal: 3439
        void getNavigationReady(void);

    // RVA: 0xD7F | Ordinal: 3456
        void getOutputState(void) const;

    // RVA: 0xD8F | Ordinal: 3472
        void getPerformanceEstimate(void) const;

    // RVA: 0xDA7 | Ordinal: 3496
        void getPresentPositionValid(void);

    // RVA: 0xDDF | Ordinal: 3552
        void getSettings(void);

    // RVA: 0x11C2 | Ordinal: 4547
        void initialize(struct cockpit::navigation::NavSystemINSsettings);

    // RVA: 0x14E8 | Ordinal: 5353
        void post_initialize(void);

    // RVA: 0x1533 | Ordinal: 5428
        void pushInputAnglesForAlignment(class osg::Vec3d const &);

    // RVA: 0x1534 | Ordinal: 5429
        void pushInputPositionForAlignment(class osg::Vec3d const &);

    // RVA: 0x153F | Ordinal: 5440
        void pushStateCoordinatesLocal(class osg::Vec3d const &);

    // RVA: 0x1541 | Ordinal: 5442
        void pushStateHeading(double);

    // RVA: 0x1543 | Ordinal: 5444
        void pushStateHeight(double);

    // RVA: 0x1545 | Ordinal: 5446
        void pushStateSpeedGeo(class osg::Vec3d const &);

    // RVA: 0x154A | Ordinal: 5451
        void pushTrueAirSpeed(double);

    // RVA: 0x15B3 | Ordinal: 5556
        void release(void);

    // RVA: 0x1765 | Ordinal: 5990
        void setNavMode(struct cockpit::Device_Mode const &);

    // RVA: 0x1A15 | Ordinal: 6678
        void swapPreviousMode(void);

    // RVA: 0x1AB6 | Ordinal: 6839
        void update(void);

    // RVA: 0x1B06 | Ordinal: 6919
        void updateAngles(void);

    // RVA: 0x1B25 | Ordinal: 6950
        void updatePosition(void);
};

} // namespace navigation
} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINSINTERFACE_HPP
