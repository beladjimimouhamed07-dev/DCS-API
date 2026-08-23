#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: CustomMaterial_Impl
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class CustomMaterial_Impl
{
public:

    // RVA: 0x3 | Ordinal: 4
        void CustomMaterial_Impl(void);

    // RVA: 0x65 | Ordinal: 102
        void GetAmbientColor(void);

    // RVA: 0x6D | Ordinal: 110
        void GetDiffuseColor(void);

    // RVA: 0x74 | Ordinal: 117
        void GetGlossiness(void);

    // RVA: 0x7A | Ordinal: 123
        void GetLighted(void);

    // RVA: 0x7D | Ordinal: 126
        void GetMaterialCaps(void);

    // RVA: 0x81 | Ordinal: 130
        void GetOpacity(void);

    // RVA: 0x85 | Ordinal: 134
        void GetRadianceColor(void);

    // RVA: 0x8B | Ordinal: 140
        void GetRenderTexture(int);

    // RVA: 0x8C | Ordinal: 141
        void GetSpecularColor(void);

    // RVA: 0x90 | Ordinal: 145
        void GetTwoSided(void);

    // RVA: 0xA0 | Ordinal: 161
        void SetAmbientColor(class osg::Vec3f const &);

    // RVA: 0xA8 | Ordinal: 169
        void SetDiffuseColor(class osg::Vec3f const &);

    // RVA: 0xB1 | Ordinal: 178
        void SetGlossiness(float);

    // RVA: 0xB6 | Ordinal: 183
        void SetLighted(bool);

    // RVA: 0xB9 | Ordinal: 186
        void SetOpacity(float);

    // RVA: 0xBB | Ordinal: 188
        void SetRadianceColor(class osg::Vec3f const &);

    // RVA: 0xC0 | Ordinal: 193
        void SetRenderTexture(int, class render::Texture &);

    // RVA: 0xC1 | Ordinal: 194
        void SetRenderTexture(int, char const *);

    // RVA: 0xC4 | Ordinal: 197
        void SetSpecularColor(class osg::Vec3f const &);

    // RVA: 0xC8 | Ordinal: 201
        void SetTwoSided(bool);

    // RVA: 0x103 | Ordinal: 260
        void getTexturesCount(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_CUSTOMMATERIAL_IMPL_HPP
