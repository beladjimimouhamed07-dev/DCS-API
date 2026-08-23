#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: ModelLight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class ModelLight
{
public:

    // RVA: 0x52 | Ordinal: 83
        void ClassName(void) const;

    // RVA: 0x67 | Ordinal: 104
        void GetAmbientColor(class osg::Vec3f &);

    // RVA: 0x69 | Ordinal: 106
        void GetAttenuationParams(float &, float &, float &, float &);

    // RVA: 0x6C | Ordinal: 109
        void GetConeAngles(float &, float &);

    // RVA: 0x6F | Ordinal: 112
        void GetDiffuseColor(class osg::Vec3f &);

    // RVA: 0x71 | Ordinal: 114
        void GetDirection(class osg::Vec3f &);

    // RVA: 0x73 | Ordinal: 116
        void GetDistance(void);

    // RVA: 0x79 | Ordinal: 122
        void GetLightType(void);

    // RVA: 0x83 | Ordinal: 132
        void GetPos(void);

    // RVA: 0x87 | Ordinal: 136
        void GetRadius(void);

    // RVA: 0x89 | Ordinal: 138
        void GetRange(float &);

    // RVA: 0x8D | Ordinal: 142
        void GetSpecularColor(class osg::Vec3f &);

    // RVA: 0x8F | Ordinal: 144
        void GetTexture(void) const;

    // RVA: 0x95 | Ordinal: 150
        void IsEnabled(void) const;

    // RVA: 0x10 | Ordinal: 17
        void ModelLight(void);

    // RVA: 0xA4 | Ordinal: 165
        void SetAttenuationParams(float, float, float, float);

    // RVA: 0xA7 | Ordinal: 168
        void SetConeAngles(float, float);

    // RVA: 0xAB | Ordinal: 172
        void SetDiffuseColor(class osg::Vec3f const &);

    // RVA: 0xAD | Ordinal: 174
        void SetDiffuseColorLinearly(class osg::Vec3f const &);

    // RVA: 0xB0 | Ordinal: 177
        void SetDistance(float, float);

    // RVA: 0xB5 | Ordinal: 182
        void SetLightType(enum Graphics::Light::LightType);

    // RVA: 0xBE | Ordinal: 191
        void SetRange(float);

    // RVA: 0xC7 | Ordinal: 200
        void SetTexture(class render::Texture *);

    // RVA: 0xCE | Ordinal: 207
        void UpdatePos(class wPosition3<float> const &);

    // RVA: 0x2C | Ordinal: 45
        void _ModelLight(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_MODELLIGHT_HPP
