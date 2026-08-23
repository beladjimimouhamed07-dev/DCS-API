#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: TextureArrayRemapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class TextureArrayRemapper
{
public:

    // RVA: 0x14F | Ordinal: 336
        void addTexture(class ed::basic_string<char> const &);

    // RVA: 0x18B | Ordinal: 396
        void buildGeometryRemap(struct landscape4::MaterialAlias const &, struct landscape4::Material &, struct landscape4::GeometrySource &);

    // RVA: 0x18C | Ordinal: 397
        void buildManifoldRemap(struct landscape4::lManifold *, struct landscape4::Material &, struct landscape4::MaterialAlias::ManifoldDeclaration const &);

    // RVA: 0x1A5 | Ordinal: 422
        void buildStreamRemap(struct landscape4::GeometrySource::Stream const *, struct landscape4::GeometrySource::Stream *, struct landscape4::Material &, struct landscape4::MaterialAlias::ManifoldDeclaration const &);

    // RVA: 0x1D6 | Ordinal: 471
        void convertRemapArraysToTextureArrays(void);

    // RVA: 0x3E9 | Ordinal: 1002
        void getTextureIndex(class ed::basic_string<char> const &, class ed::basic_string<char> const &);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_TEXTUREARRAYREMAPPER_HPP
