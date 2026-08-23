#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: ITerrainEntryPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edterrain {

class ITerrainEntryPoint
{
public:

    // RVA: 0x6 | Ordinal: 7
        void ITerrainEntryPoint(void);

    // RVA: 0x28 | Ordinal: 41
        void close(void);

    // RVA: 0x69 | Ordinal: 106
        void openTerrain(char const *, struct lua_State *, class ed::ITerrainSecurity *);

    // RVA: 0x10 | Ordinal: 17
        void _ITerrainEntryPoint(void);
};

} // namespace edterrain

// DCS_OPS_RE_INTER.DLL_ITERRAINENTRYPOINT_HPP
