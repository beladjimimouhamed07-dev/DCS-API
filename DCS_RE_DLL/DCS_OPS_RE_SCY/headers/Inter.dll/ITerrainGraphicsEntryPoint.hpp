#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: ITerrainGraphicsEntryPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edterrain {

class ITerrainGraphicsEntryPoint
{
public:

    // RVA: 0x7 | Ordinal: 8
        void ITerrainGraphicsEntryPoint(void);

    // RVA: 0x29 | Ordinal: 42
        void close(void);

    // RVA: 0x2C | Ordinal: 45
        void createTerrainGraphics(class edterrain::ITerrain *, struct lua_State *, class std::function<void __cdecl(float, class ed::basic_string<char> const &)>);

    // RVA: 0x11 | Ordinal: 18
        void _ITerrainGraphicsEntryPoint(void);
};

} // namespace edterrain

// DCS_OPS_RE_INTER.DLL_ITERRAINGRAPHICSENTRYPOINT_HPP
