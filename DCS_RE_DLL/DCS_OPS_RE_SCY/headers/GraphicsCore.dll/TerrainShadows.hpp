#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: TerrainShadows
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class TerrainShadows
{
public:

    // RVA: 0x50 | Ordinal: 81
        void TerrainShadows(class enlight::TerrainShadows const &);

    // RVA: 0x51 | Ordinal: 82
        void TerrainShadows(void);

    // RVA: 0x11F | Ordinal: 288
        void build(class enlight::TerrainShadows::SceneRender *, enum render::MSAA_ENUM, bool);

    // RVA: 0x83 | Ordinal: 132
        void _TerrainShadows(void);
};

} // namespace enlight

// DCS_OPS_RE_GRAPHICSCORE.DLL_TERRAINSHADOWS_HPP
