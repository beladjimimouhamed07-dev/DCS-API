#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: MaterialBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class MaterialBase
{
public:

    // RVA: 0x5F | Ordinal: 96
        void FillFlags(void);

    // RVA: 0x75 | Ordinal: 118
        void GetKey(union Graphics::SortKey &) const;

    // RVA: 0x7E | Ordinal: 127
        void GetMaterialCaps(void);

    // RVA: 0xA | Ordinal: 11
        void MaterialBase(void);

    // RVA: 0x9C | Ordinal: 157
        void QueryCustomMaterial(void);

    // RVA: 0xA2 | Ordinal: 163
        void SetAmbientColor(class osg::Vec3f const &);

    // RVA: 0xAA | Ordinal: 171
        void SetDiffuseColor(class osg::Vec3f const &);

    // RVA: 0xB2 | Ordinal: 179
        void SetGlossiness(float);

    // RVA: 0xBA | Ordinal: 187
        void SetOpacity(float);

    // RVA: 0xBC | Ordinal: 189
        void SetRadianceColor(class osg::Vec3f const &);

    // RVA: 0xC2 | Ordinal: 195
        void SetRenderTexture(int, class render::Texture &);

    // RVA: 0xC3 | Ordinal: 196
        void SetRenderTexture(int, char const *);

    // RVA: 0xC5 | Ordinal: 198
        void SetSpecularColor(class osg::Vec3f const &);

    // RVA: 0x2A | Ordinal: 43
        void _MaterialBase(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_MATERIALBASE_HPP
