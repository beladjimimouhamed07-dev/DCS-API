#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: StaticAtmosphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class StaticAtmosphere
{
public:

    // RVA: 0x8 | Ordinal: 9
        void StaticAtmosphere(class Weather::StaticAtmosphere const &);

    // RVA: 0x9 | Ordinal: 10
        void StaticAtmosphere(void);

    // RVA: 0x21 | Ordinal: 34
        void addCeiling(double);

    // RVA: 0x22 | Ordinal: 35
        void addCloudsUpperEdge(double);

    // RVA: 0x24 | Ordinal: 37
        void addPointAtmoPressure(class Math::Vector<3, double> const &, double, double);

    // RVA: 0x26 | Ordinal: 39
        void addPointAtmoTemperature(class Math::Vector<3, double> const &, double, double);

    // RVA: 0x27 | Ordinal: 40
        void addPointAtmoWind_w(class Math::Vector<3, double> const &, double, class Math::Vector<3, double> const &, double);

    // RVA: 0x28 | Ordinal: 41
        void addPointGroundWind_w(class Math::Vector<3, double> const &, double, class Math::Vector<3, double> const &, double);

    // RVA: 0x2A | Ordinal: 43
        void addPrecipitation(class Math::Vector<3, double> const &, enum Weather::ATMO_PRECIP);

    // RVA: 0x2C | Ordinal: 45
        void calcAtmosphere(void);

    // RVA: 0x31 | Ordinal: 50
        void calcIcingRate(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x32 | Ordinal: 51
        void calcIcingRate(double, double, double) const;

    // RVA: 0x34 | Ordinal: 53
        void clear(void);

    // RVA: 0x44 | Ordinal: 69
        void getAtmoSoundSpeed(double) const;

    // RVA: 0x46 | Ordinal: 71
        void getAtmoTemperature(class Math::Vector<3, double> const &, double *, double *) const;

    // RVA: 0x48 | Ordinal: 73
        void getAtmoTemperatureAndPressure(class Math::Vector<3, double> const &, double *, double *, double *) const;

    // RVA: 0x4A | Ordinal: 75
        void getAtmoTemperatureAndPressureAndDensity(class Math::Vector<3, double> const &, double *, double *, double *, double *) const;

    // RVA: 0x4C | Ordinal: 77
        void getAtmoType(void) const;

    // RVA: 0x4E | Ordinal: 79
        void getAtmoWind_w(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x51 | Ordinal: 82
        void getBaseWind_w(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x54 | Ordinal: 85
        void getCeiling(class Math::Vector<3, double> const &);

    // RVA: 0x59 | Ordinal: 90
        void getCloudsDensity(class Math::Vector<3, double> const &) const;

    // RVA: 0x5C | Ordinal: 93
        void getCloudsUpperEdge(class Math::Vector<3, double> const &);

    // RVA: 0x62 | Ordinal: 99
        void getDynSlowdownK(void) const;

    // RVA: 0x67 | Ordinal: 104
        void getPrecipitation(class Math::Vector<3, double> const &) const;

    // RVA: 0x6A | Ordinal: 107
        void getRelativeHumidity(class Math::Vector<3, double> const &) const;

    // RVA: 0x7A | Ordinal: 123
        void isOvercast(void);

    // RVA: 0x89 | Ordinal: 138
        void setCloudsDensity(int);

    // RVA: 0x8A | Ordinal: 139
        void setOvercast(bool);

    // RVA: 0x92 | Ordinal: 147
        void simulate(double);

    // RVA: 0x12 | Ordinal: 19
        void _StaticAtmosphere(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_STATICATMOSPHERE_HPP
