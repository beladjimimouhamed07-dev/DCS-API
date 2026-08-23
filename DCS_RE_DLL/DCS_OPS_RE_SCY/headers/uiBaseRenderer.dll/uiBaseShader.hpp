#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseShader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseShader
{
public:

    // RVA: 0x3D | Ordinal: 62
        void drawQuads(float const *, float const *, unsigned short const *, int);

    // RVA: 0x73 | Ordinal: 116
        void resetPositionShift(void);

    // RVA: 0x74 | Ordinal: 117
        void resetTextureSampler(void);

    // RVA: 0x79 | Ordinal: 122
        void setColor(class osg::Vec4f const &);

    // RVA: 0x7A | Ordinal: 123
        void setColors(float const *, int);

    // RVA: 0x7B | Ordinal: 124
        void setGamma(float);

    // RVA: 0x7D | Ordinal: 126
        void setIntensity(float);

    // RVA: 0x80 | Ordinal: 129
        void setOpacity(float);

    // RVA: 0x89 | Ordinal: 138
        void setTexture(class ed::Ptr<class uiBaseTexture, class uiTextureCleaner>);

    // RVA: 0x8B | Ordinal: 140
        void setTextureArray(class uiBaseTextureArray const *);

    // RVA: 0x8E | Ordinal: 143
        void setUserTextureFiltering(enum uiBaseRenderer::TextureSampler);

    // RVA: 0x91 | Ordinal: 146
        void shiftPosition(float, float, float);

    // RVA: 0x92 | Ordinal: 147
        void turnOffDrawQuads(void);

    // RVA: 0x93 | Ordinal: 148
        void turnOffFontBlur(void);

    // RVA: 0x94 | Ordinal: 149
        void turnOnDrawQuads(void);

    // RVA: 0x95 | Ordinal: 150
        void turnOnFontBlur(class osg::Vec4f const &);

    // RVA: 0xB | Ordinal: 12
        void uiBaseShader(class uiBaseRenderer *);

    // RVA: 0x20 | Ordinal: 33
        void _uiBaseShader(void);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASESHADER_HPP
