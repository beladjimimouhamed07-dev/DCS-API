#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: TerrainParams
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class TerrainParams
{
public:

    // RVA: 0x125 | Ordinal: 294
        void Load(class Lua::Config &, class ed::ITerrainSecurity *);

    // RVA: 0x126 | Ordinal: 295
        void LoadClipmaps(class Lua::Config &);

    // RVA: 0x127 | Ordinal: 296
        void LoadCloseupTexturesParams(class Lua::Config &);

    // RVA: 0x128 | Ordinal: 297
        void LoadFabricTexturesParams(class Lua::Config &);

    // RVA: 0x129 | Ordinal: 298
        void LoadRuntimeModelAliases(class Lua::Config &);

    // RVA: 0x12A | Ordinal: 299
        void LoadSourceTexturesPaths(class Lua::Config &);

    // RVA: 0x12B | Ordinal: 300
        void LoadSplatmapTexturesParams(class Lua::Config &);

    // RVA: 0x2B | Ordinal: 44
        void TerrainParams(void);

    // RVA: 0x1D0 | Ordinal: 465
        void closeupTextureParamsAvailible(void) const;

    // RVA: 0x254 | Ordinal: 597
        void fabricTextureParamsAvailible(void) const;

    // RVA: 0x291 | Ordinal: 658
        void getAllSplatmapTexturesParams(void) const;

    // RVA: 0x2B7 | Ordinal: 696
        void getClipmap(class ed::basic_string<char> const &) const;

    // RVA: 0x2B8 | Ordinal: 697
        void getClipmapSplatmapNoiseTextures(void) const;

    // RVA: 0x2B9 | Ordinal: 698
        void getClipmaps(void) const;

    // RVA: 0x2BC | Ordinal: 701
        void getCloseupTextureParams(class ed::basic_string<char> const &) const;

    // RVA: 0x2F3 | Ordinal: 756
        void getFabricTextureParams(class ed::basic_string<char> const &) const;

    // RVA: 0x38D | Ordinal: 910
        void getResolvedRuntimeModelAlias(class ed::basic_string<char> const &) const;

    // RVA: 0x39D | Ordinal: 926
        void getRoofsDistances(void) const;

    // RVA: 0x3BF | Ordinal: 960
        void getSourceTexturesPaths(void) const;

    // RVA: 0x3C0 | Ordinal: 961
        void getSplatmapTextureParams(class ed::basic_string<char> const &) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void getTexture(class std::basic_string_view<char, struct std::char_traits<char>>) const;

    // RVA: 0x41D | Ordinal: 1054
        void hasTerrainNoise(void) const;

    // RVA: 0x592 | Ordinal: 1427
        void splatmapTextureParamsAvailible(void) const;

    // RVA: 0x5B | Ordinal: 92
        void _TerrainParams(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_TERRAINPARAMS_HPP
