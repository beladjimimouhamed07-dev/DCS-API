#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: RenderUtils
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class RenderUtils
{
public:

    // RVA: 0x7 | Ordinal: 8
        void RenderUtils(void);

    // RVA: 0x55 | Ordinal: 86
        void getCloudDensityForMap(void);

    // RVA: 0x71 | Ordinal: 114
        void getWindyForMap(void);

    // RVA: 0x87 | Ordinal: 136
        void setAtmo(class Weather::IAtmosphere *);

    // RVA: 0x11 | Ordinal: 18
        void _RenderUtils(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_RENDERUTILS_HPP
