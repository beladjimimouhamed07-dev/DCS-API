#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: ITerrainContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edterrain {

class ITerrainContext
{
public:

    // RVA: 0x71 | Ordinal: 114
        void setRunwayLightsState(int, int, int, int);

    // RVA: 0x73 | Ordinal: 116
        void setTaxiwaysLightsState(int, bool);
};

} // namespace edterrain

// DCS_OPS_RE_INTER.DLL_ITERRAINCONTEXT_HPP
