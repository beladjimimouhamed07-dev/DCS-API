#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Space.dll
// Class: Space
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Space
{
public:

    // RVA: 0x14 | Ordinal: 21
        void Get_Sun_Zenit(void);

    // RVA: 0x2 | Ordinal: 3
        void Space(class Space const &);

    // RVA: 0x3 | Ordinal: 4
        void Space(void);

    // RVA: 0x18 | Ordinal: 25
        void azimuthElevation(double, double, double &, double &);

    // RVA: 0x19 | Ordinal: 26
        void azimuthElevationForLatLon(double, double, double, double, double &, double &) const;

    // RVA: 0x20 | Ordinal: 33
        void done(void);

    // RVA: 0x22 | Ordinal: 35
        void getD(void);

    // RVA: 0x23 | Ordinal: 36
        void getDateTime(double &, double &, double &, double &, double &, double &);

    // RVA: 0x24 | Ordinal: 37
        void getDir(double, double) const;

    // RVA: 0x27 | Ordinal: 40
        void getInstance(void);

    // RVA: 0x28 | Ordinal: 41
        void getLatLon(double &, double &);

    // RVA: 0x29 | Ordinal: 42
        void getMoon(double &, double &);

    // RVA: 0x2A | Ordinal: 43
        void getMoon(class wPosition3<float> &);

    // RVA: 0x2B | Ordinal: 44
        void getMoonPhaseVisibility(void);

    // RVA: 0x2C | Ordinal: 45
        void getMoonZenithCos(void);

    // RVA: 0x2D | Ordinal: 46
        void getOrbitalElements(enum Space::PlanetID) const;

    // RVA: 0x2E | Ordinal: 47
        void getPlanet(enum Space::PlanetID, double &);

    // RVA: 0x2F | Ordinal: 48
        void getPlanet(enum Space::PlanetID, double &, double &, double &);

    // RVA: 0x31 | Ordinal: 50
        void getStar(int);

    // RVA: 0x32 | Ordinal: 51
        void getStar(int, double &, double &, double &);

    // RVA: 0x33 | Ordinal: 52
        void getStars(class ed::vector<class osg::Vec4f, class ed::allocator<class osg::Vec4f>> &, double, double, double);

    // RVA: 0x34 | Ordinal: 53
        void getStarsList(void);

    // RVA: 0x35 | Ordinal: 54
        void getSummerTimeDelta(void);

    // RVA: 0x36 | Ordinal: 55
        void getSun(double &, double &);

    // RVA: 0x37 | Ordinal: 56
        void getSun(class wPosition3<float> &);

    // RVA: 0x38 | Ordinal: 57
        void getSunVector(void);

    // RVA: 0x39 | Ordinal: 58
        void getSunVector(float &, float &, float &);

    // RVA: 0x3A | Ordinal: 59
        void getSunZenithAngleD(void);

    // RVA: 0x3B | Ordinal: 60
        void getSunZenithAngleR(void);

    // RVA: 0x3C | Ordinal: 61
        void getSunZenithCos(void);

    // RVA: 0x3D | Ordinal: 62
        void getSunriseSunsetSecond(double &, double &, double, double, double, double);

    // RVA: 0x3F | Ordinal: 64
        void getTimeShift(void);

    // RVA: 0x40 | Ordinal: 65
        void getUTime(void) const;

    // RVA: 0x43 | Ordinal: 68
        void getWinterTimeDelta(void);

    // RVA: 0x45 | Ordinal: 70
        void init(void);

    // RVA: 0x46 | Ordinal: 71
        void initialized(void);

    // RVA: 0x49 | Ordinal: 74
        void setGreenwichDateTime(double, double, double, double, double, double);

    // RVA: 0x4A | Ordinal: 75
        void setGreenwichDateTimeNoUpdate(double, double, double, double, double, double);

    // RVA: 0x4B | Ordinal: 76
        void setLatLon(double, double);

    // RVA: 0x50 | Ordinal: 81
        void siderialTime(void) const;

    // RVA: 0x51 | Ordinal: 82
        void solarTime(void) const;

    // RVA: 0x54 | Ordinal: 85
        void update(void);

    // RVA: 0x5A | Ordinal: 91
        void updateTimeShift(void);

    // RVA: 0x9 | Ordinal: 10
        void _Space(void);
};

// DCS_OPS_RE_SPACE.DLL_SPACE_HPP
