#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: uiBaseRenderer.dll
// Class: uiBaseRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class uiBaseRenderer
{
public:

    // RVA: 0x30 | Ordinal: 49
        void addShaderParam(char const *);

    // RVA: 0x32 | Ordinal: 51
        void beginShader(enum uiBaseRenderer::TechniqueType);

    // RVA: 0x34 | Ordinal: 53
        void createTarget(int, int);

    // RVA: 0x3F | Ordinal: 64
        void drawToTarget(class std::function<void __cdecl(void)>);

    // RVA: 0x41 | Ordinal: 66
        void endShader(void);

    // RVA: 0x43 | Ordinal: 68
        void get(void);

    // RVA: 0x5D | Ordinal: 94
        void getOpacity(void) const;

    // RVA: 0x5E | Ordinal: 95
        void getScale(void) const;

    // RVA: 0x5F | Ordinal: 96
        void getShaderParamHandle(char const *) const;

    // RVA: 0x62 | Ordinal: 99
        void getTargetTexture(void);

    // RVA: 0x63 | Ordinal: 100
        void getTechniqueType(void) const;

    // RVA: 0x68 | Ordinal: 105
        void getWidgetShader(char const *);

    // RVA: 0x7F | Ordinal: 128
        void setOpacity(float);

    // RVA: 0x82 | Ordinal: 131
        void setScale(float);

    // RVA: 0x83 | Ordinal: 132
        void setShaderParam(int, class osg::Vec2f const &);

    // RVA: 0x84 | Ordinal: 133
        void setShaderParam(int, class osg::Vec2i const &);

    // RVA: 0x85 | Ordinal: 134
        void setShaderParam(int, class osg::Vec4f const &);

    // RVA: 0x86 | Ordinal: 135
        void setShaderParam(int, float);

    // RVA: 0x88 | Ordinal: 137
        void setShaderParamArray(int, float const *, int);

    // RVA: 0x87 | Ordinal: 136
        void setShaderParamArray4f(int, float const *, int);
};

// DCS_OPS_RE_UIBASERENDERER.DLL_UIBASERENDERER_HPP
