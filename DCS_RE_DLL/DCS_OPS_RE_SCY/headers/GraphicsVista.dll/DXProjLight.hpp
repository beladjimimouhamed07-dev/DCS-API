#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: DXProjLight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class DXProjLight
{
public:

    // RVA: 0x51 | Ordinal: 82
        void ClassName(void) const;

    // RVA: 0x54 | Ordinal: 85
        void Create(enum ResourceType, class ed::basic_string<char> const &);

    // RVA: 0x56 | Ordinal: 87
        void CreateByName(class ed::basic_string<char> const &);

    // RVA: 0x5A | Ordinal: 91
        void CreateVolume(void);

    // RVA: 0x4 | Ordinal: 5
        void DXProjLight(class Graphics::DXProjLight const &);

    // RVA: 0x5 | Ordinal: 6
        void DXProjLight(void);

    // RVA: 0x62 | Ordinal: 99
        void FreeToStep(int);

    // RVA: 0x66 | Ordinal: 103
        void GetAmbientColor(class osg::Vec3f &);

    // RVA: 0x68 | Ordinal: 105
        void GetAttenuationParams(float &, float &, float &, float &);

    // RVA: 0x6B | Ordinal: 108
        void GetConeAngles(float &, float &);

    // RVA: 0x6E | Ordinal: 111
        void GetDiffuseColor(class osg::Vec3f &);

    // RVA: 0x70 | Ordinal: 113
        void GetDirection(class osg::Vec3f &);

    // RVA: 0x72 | Ordinal: 115
        void GetDistance(void);

    // RVA: 0x77 | Ordinal: 120
        void GetLightExtent(class osg::Matrixf const &, class osg::Vec3f &, class osg::Vec3f &);

    // RVA: 0x78 | Ordinal: 121
        void GetLightType(void);

    // RVA: 0x7B | Ordinal: 124
        void GetLoadStep(void);

    // RVA: 0x7C | Ordinal: 125
        void GetLoadStepCount(void);

    // RVA: 0x86 | Ordinal: 135
        void GetRadius(void);

    // RVA: 0x88 | Ordinal: 137
        void GetRange(float &);

    // RVA: 0x8E | Ordinal: 143
        void GetTexture(void) const;

    // RVA: 0x91 | Ordinal: 146
        void GetVolume(void) const;

    // RVA: 0x97 | Ordinal: 152
        void LoadToStep(int);

    // RVA: 0xA1 | Ordinal: 162
        void SetAmbientColor(class osg::Vec3f const &);

    // RVA: 0xA3 | Ordinal: 164
        void SetAttenuationParams(float, float, float, float);

    // RVA: 0xA6 | Ordinal: 167
        void SetConeAngles(float, float);

    // RVA: 0xA9 | Ordinal: 170
        void SetDiffuseColor(class osg::Vec3f const &);

    // RVA: 0xAC | Ordinal: 173
        void SetDiffuseColorLinearly(class osg::Vec3f const &);

    // RVA: 0xAE | Ordinal: 175
        void SetDirection(class osg::Vec3f const &);

    // RVA: 0xAF | Ordinal: 176
        void SetDistance(float, float);

    // RVA: 0xB3 | Ordinal: 180
        void SetLightTexture(int);

    // RVA: 0xB4 | Ordinal: 181
        void SetLightType(enum Graphics::Light::LightType);

    // RVA: 0xBD | Ordinal: 190
        void SetRange(float);

    // RVA: 0xC6 | Ordinal: 199
        void SetTexture(class render::Texture *);

    // RVA: 0xC9 | Ordinal: 202
        void TurnOffLight(void);

    // RVA: 0xCD | Ordinal: 206
        void UpdatePos(class wPosition3<float> const &);

    // RVA: 0xCF | Ordinal: 208
        void UsedThisFrame(void);

    // RVA: 0xD1 | Ordinal: 210
        void Using(int);

    // RVA: 0x28 | Ordinal: 41
        void _DXProjLight(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DXPROJLIGHT_HPP
