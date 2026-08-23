#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: IAtmosphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class IAtmosphere
{
public:

    // RVA: 0x5 | Ordinal: 6
        void IAtmosphere(class Weather::IAtmosphere const &);

    // RVA: 0x6 | Ordinal: 7
        void IAtmosphere(void);

    // RVA: 0x2B | Ordinal: 44
        void addWingtipVortices(class AtmosphericEffect *, unsigned int);

    // RVA: 0x2D | Ordinal: 46
        void calcDynamicSlowdown(double, double &, double &) const;

    // RVA: 0x2E | Ordinal: 47
        void calcDynamicSlowdown(double, double &) const;

    // RVA: 0x35 | Ordinal: 54
        void clearWingtipVortices(unsigned int);

    // RVA: 0x3C | Ordinal: 61
        void eraseWingtipVortices(class AtmosphericEffect *);

    // RVA: 0x42 | Ordinal: 67
        void generateClouds(void);

    // RVA: 0x52 | Ordinal: 83
        void getBasicRelativeHumidity(void) const;

    // RVA: 0x56 | Ordinal: 87
        void getCloudSquare(class osg::Vec2i const &);

    // RVA: 0x57 | Ordinal: 88
        void getClouds(void);

    // RVA: 0x5D | Ordinal: 94
        void getDailyHumidityDelta(void) const;

    // RVA: 0x5E | Ordinal: 95
        void getDewPoint(double) const;

    // RVA: 0x5F | Ordinal: 96
        void getDewPoint(double, double) const;

    // RVA: 0x60 | Ordinal: 97
        void getDewPoint(class Math::Vector<3, double> const &) const;

    // RVA: 0x63 | Ordinal: 100
        void getGroundWind_w(class Math::Vector<3, double> const &) const;

    // RVA: 0x64 | Ordinal: 101
        void getLayeredTurbulence(class Math::Vector<3, double> const &) const;

    // RVA: 0x65 | Ordinal: 102
        void getLayeredTurbulence(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x6B | Ordinal: 108
        void getSaturationPressure(double) const;

    // RVA: 0x6C | Ordinal: 109
        void getTurbulenceInLayer(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x6D | Ordinal: 110
        void getVaporPressure(double, double) const;

    // RVA: 0x6F | Ordinal: 112
        void getWakeTurbulenceWind_w(class Math::Vector<3, double> const &) const;

    // RVA: 0x70 | Ordinal: 113
        void getWindGroundFactor(double, double const &) const;

    // RVA: 0x72 | Ordinal: 115
        void getYearHumidityDelta(void) const;

    // RVA: 0x74 | Ordinal: 117
        void graphicUpdate(bool, class std::map<class osg::Vec2i, bool, struct std::less<class osg::Vec2i>, class ed::allocator<struct std::pair<class osg::Vec2i const, bool>>> *);

    // RVA: 0x78 | Ordinal: 121
        void isBaricSystemPresent(void) const;

    // RVA: 0x7F | Ordinal: 128
        void readTurbulenceData(void);

    // RVA: 0x8B | Ordinal: 140
        void setRelativeHumidityData(double, double, double);

    // RVA: 0x8C | Ordinal: 141
        void setSecondsInYear(int);

    // RVA: 0x8D | Ordinal: 142
        void setSquaresToGraphicUpdate(int, int, int, int);

    // RVA: 0x8F | Ordinal: 144
        void setTimeFromYearStart(double);

    // RVA: 0x91 | Ordinal: 146
        void simulate(double);

    // RVA: 0x93 | Ordinal: 148
        void synchronize(double, double);

    // RVA: 0x97 | Ordinal: 152
        void updateClouds(void);

    // RVA: 0x99 | Ordinal: 154
        void viObjectWasDeleted(class viObject *);

    // RVA: 0x10 | Ordinal: 17
        void _IAtmosphere(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_IATMOSPHERE_HPP
