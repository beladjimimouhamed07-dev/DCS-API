#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avEmbeddedNavigation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avEmbeddedNavigation
{
public:

    // RVA: 0x10C | Ordinal: 269
        void avEmbeddedNavigation(void);

    // RVA: 0xAE1 | Ordinal: 2786
        void common_update(void);

    // RVA: 0xC90 | Ordinal: 3217
        void getDriftAngleDerivative(void) const;

    // RVA: 0xD0D | Ordinal: 3342
        void getInputVector(void);

    // RVA: 0xD53 | Ordinal: 3412
        void getMeasuredGeoSpeed(void) const;

    // RVA: 0xE06 | Ordinal: 3591
        void getState(void);

    // RVA: 0x11B6 | Ordinal: 4535
        void initialize(void);

    // RVA: 0x14DF | Ordinal: 5344
        void post_initialize(void);

    // RVA: 0x15B0 | Ordinal: 5553
        void release(void);

    // RVA: 0x16C6 | Ordinal: 5831
        void setCoordinates(class osg::Vec3d);

    // RVA: 0x1802 | Ordinal: 6147
        void setWindSpeedEstimate(class osg::Vec2d);

    // RVA: 0x1AAF | Ordinal: 6832
        void update(void);

    // RVA: 0x1B0E | Ordinal: 6927
        void updateDnsSpeed(class osg::Vec2d const &);

    // RVA: 0x1B0F | Ordinal: 6928
        void updateDriftAngle(double const &);

    // RVA: 0x1B14 | Ordinal: 6933
        void updateGnssGeoCoordinates(class osg::Vec3d const &);

    // RVA: 0x1B15 | Ordinal: 6934
        void updateGnssNUECoordinates(class osg::Vec3d const &);

    // RVA: 0x1B16 | Ordinal: 6935
        void updateGnssSpeed(class osg::Vec3d const &);

    // RVA: 0x1B18 | Ordinal: 6937
        void updateImuHeading(double const &);

    // RVA: 0x1B1A | Ordinal: 6939
        void updateInsCoordinates(class osg::Vec3d const &);

    // RVA: 0x1B1B | Ordinal: 6940
        void updateInsSpeed(class osg::Vec2d const &);

    // RVA: 0x1B31 | Ordinal: 6962
        void updateTas(double const &);

    // RVA: 0x301 | Ordinal: 770
        void _avEmbeddedNavigation(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVEMBEDDEDNAVIGATION_HPP
