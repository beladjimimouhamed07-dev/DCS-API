#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avNavigationSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace navigation {

class avNavigationSystem
{
public:

    // RVA: 0x167 | Ordinal: 360
        void avNavigationSystem(void);

    // RVA: 0xCA5 | Ordinal: 3238
        void getEmbeddedNavigation(void);

    // RVA: 0xCAC | Ordinal: 3245
        void getFigureOfMerit(void) const;

    // RVA: 0xD04 | Ordinal: 3333
        void getIMU(void);

    // RVA: 0xD06 | Ordinal: 3335
        void getINS(void);

    // RVA: 0xD5F | Ordinal: 3424
        void getModifiableState(void);

    // RVA: 0xD80 | Ordinal: 3457
        void getOutputState(void) const;

    // RVA: 0xDC5 | Ordinal: 3526
        void getSNS(void);

    // RVA: 0xDE0 | Ordinal: 3553
        void getSettings(void);

    // RVA: 0xE27 | Ordinal: 3624
        void getTimeOfModeChange(void);

    // RVA: 0xE35 | Ordinal: 3638
        void getUnifiedFOM(void) const;

    // RVA: 0x11D6 | Ordinal: 4567
        void initialize(struct cockpit::navigation::NavSystemSettings);

    // RVA: 0x14F2 | Ordinal: 5363
        void post_initialize(void);

    // RVA: 0x1535 | Ordinal: 5430
        void pushInputPositionForAlignment(class osg::Vec3d const &);

    // RVA: 0x1540 | Ordinal: 5441
        void pushStateCoordinatesLocal(class osg::Vec3d const &);

    // RVA: 0x1542 | Ordinal: 5443
        void pushStateHeading(double);

    // RVA: 0x1544 | Ordinal: 5445
        void pushStateHeight(double);

    // RVA: 0x1546 | Ordinal: 5447
        void pushStateSpeedGeo(class osg::Vec3d const &);

    // RVA: 0x154B | Ordinal: 5452
        void pushTrueAirSpeed(double);

    // RVA: 0x15BC | Ordinal: 5565
        void release(void);

    // RVA: 0x1691 | Ordinal: 5778
        void setAccuracies(struct cockpit::IavEmbeddedNavigation::SensorsAccuracies);

    // RVA: 0x1693 | Ordinal: 5780
        void setAdcSpeedAvailability(bool);

    // RVA: 0x16DA | Ordinal: 5851
        void setDnsSpeedAvailability(bool);

    // RVA: 0x1717 | Ordinal: 5912
        void setGnssCoordinateAvailability(bool);

    // RVA: 0x1718 | Ordinal: 5913
        void setGnssSpeedAvailability(bool);

    // RVA: 0x172D | Ordinal: 5934
        void setINS(class cockpit::navigation::avINSinterface *);

    // RVA: 0x1732 | Ordinal: 5939
        void setInsCoordinatesAvailability(bool);

    // RVA: 0x1733 | Ordinal: 5940
        void setInsHeadingAvailability(bool);

    // RVA: 0x1734 | Ordinal: 5941
        void setInsSpeedAvailability(bool);

    // RVA: 0x174A | Ordinal: 5963
        void setMalfunctionStatus(bool);

    // RVA: 0x1766 | Ordinal: 5991
        void setNavMode(struct cockpit::Device_Mode const &);

    // RVA: 0x17AC | Ordinal: 6061
        void setSensorsAvailability(bool, bool, bool, bool, bool, bool);

    // RVA: 0x1A16 | Ordinal: 6679
        void swapPreviousMode(void);

    // RVA: 0x1AC5 | Ordinal: 6854
        void update(void);

    // RVA: 0x1B07 | Ordinal: 6920
        void updateAngles(void);

    // RVA: 0x1B26 | Ordinal: 6951
        void updatePosition(void);
};

} // namespace navigation
} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVNAVIGATIONSYSTEM_HPP
