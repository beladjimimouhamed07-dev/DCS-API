#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: Weather
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Weather
{
public:

    // RVA: 0x5A | Ordinal: 91
        void getCloudsPreset(char const *);

    // RVA: 0x80 | Ordinal: 129
        void reconfigureAtmosphere(struct Weather::atmo_initializer &, class Lua::Config &);

    // RVA: 0x9A | Ordinal: 155
        void windVectorToVelocityAndDirection(class Math::Vector<3, double>, double &, double &);
};

// DCS_OPS_RE_WEATHER.DLL_WEATHER_HPP
