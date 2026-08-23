#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: DynamicAtmosphere
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class DynamicAtmosphere
{
public:

    // RVA: 0x3 | Ordinal: 4
        void DynamicAtmosphere(class Weather::DynamicAtmosphere const &);

    // RVA: 0x4 | Ordinal: 5
        void DynamicAtmosphere(void);

    // RVA: 0x20 | Ordinal: 33
        void addBaricSystem(class Weather::BaricSystem const &);

    // RVA: 0x23 | Ordinal: 36
        void addGroundTurbulence(double);

    // RVA: 0x25 | Ordinal: 38
        void addPointAtmoTemperature(class Math::Vector<3, double> const &, double, double);

    // RVA: 0x2F | Ordinal: 48
        void calcIcingRate(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x30 | Ordinal: 49
        void calcIcingRate(double, double, double) const;

    // RVA: 0x33 | Ordinal: 52
        void clear(void);

    // RVA: 0x41 | Ordinal: 66
        void fillPressureGrid(class osg::Vec3d const &, double *) const;

    // RVA: 0x43 | Ordinal: 68
        void getAtmoSoundSpeed(double) const;

    // RVA: 0x45 | Ordinal: 70
        void getAtmoTemperature(class Math::Vector<3, double> const &, double *, double *) const;

    // RVA: 0x47 | Ordinal: 72
        void getAtmoTemperatureAndPressure(class Math::Vector<3, double> const &, double *, double *, double *) const;

    // RVA: 0x49 | Ordinal: 74
        void getAtmoTemperatureAndPressureAndDensity(class Math::Vector<3, double> const &, double *, double *, double *, double *) const;

    // RVA: 0x4B | Ordinal: 76
        void getAtmoType(void) const;

    // RVA: 0x4D | Ordinal: 78
        void getAtmoWind_w(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x4F | Ordinal: 80
        void getAverageTemperature(double) const;

    // RVA: 0x50 | Ordinal: 81
        void getBaseWind_w(class Math::Vector<3, double> const &, double) const;

    // RVA: 0x53 | Ordinal: 84
        void getCeiling(class Math::Vector<3, double> const &);

    // RVA: 0x58 | Ordinal: 89
        void getCloudsDensity(class Math::Vector<3, double> const &) const;

    // RVA: 0x5B | Ordinal: 92
        void getCloudsUpperEdge(class Math::Vector<3, double> const &);

    // RVA: 0x61 | Ordinal: 98
        void getDynSlowdownK(void) const;

    // RVA: 0x66 | Ordinal: 103
        void getPrecipitation(class Math::Vector<3, double> const &) const;

    // RVA: 0x68 | Ordinal: 105
        void getPressureExcess(class Math::Vector<3, double> const &) const;

    // RVA: 0x69 | Ordinal: 106
        void getRelativeHumidity(class Math::Vector<3, double> const &) const;

    // RVA: 0x77 | Ordinal: 120
        void isBaricSystemPresent(void) const;

    // RVA: 0x90 | Ordinal: 145
        void simulate(double);

    // RVA: 0x96 | Ordinal: 151
        void updateBaricSystems(double);

    // RVA: 0xF | Ordinal: 16
        void _DynamicAtmosphere(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_DYNAMICATMOSPHERE_HPP
