#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Renderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Renderer
{
public:

    // RVA: 0x4F | Ordinal: 80
        void BeginFrame(void);

    // RVA: 0x50 | Ordinal: 81
        void BeginParse(void);

    // RVA: 0x53 | Ordinal: 84
        void Clear(bool, bool, bool, class osg::Vec3f const *);

    // RVA: 0x5C | Ordinal: 93
        void DrawRenderText(class Graphics::RenderText *, bool);

    // RVA: 0x5D | Ordinal: 94
        void EndFrame(void);

    // RVA: 0x5E | Ordinal: 95
        void EndParse(void);

    // RVA: 0x61 | Ordinal: 98
        void FreeResources(void);

    // RVA: 0x63 | Ordinal: 100
        void FreeUnusedResources(void);

    // RVA: 0x6A | Ordinal: 107
        void GetCamera(void);

    // RVA: 0x8A | Ordinal: 139
        void GetRenderMode(void);

    // RVA: 0x9A | Ordinal: 155
        void OnParseCallback(void);

    // RVA: 0x1A | Ordinal: 27
        void Renderer(void);

    // RVA: 0xA5 | Ordinal: 166
        void SetCamera(class Graphics::Camera const &);

    // RVA: 0xBF | Ordinal: 192
        void SetRenderMode(enum Graphics::RenderMode);

    // RVA: 0xCC | Ordinal: 205
        void Update(void);

    // RVA: 0xE1 | Ordinal: 226
        void createSamplers(int);

    // RVA: 0xE4 | Ordinal: 229
        void destroySamplers(void);

    // RVA: 0xE8 | Ordinal: 233
        void dumpNextFrame(void);

    // RVA: 0xF4 | Ordinal: 245
        void getCloudShadowsProjNTexture(class osg::Matrixf &) const;

    // RVA: 0xF7 | Ordinal: 248
        void getDummyBlackTexture(void) const;

    // RVA: 0xF8 | Ordinal: 249
        void getDumpFile(void);

    // RVA: 0x109 | Ordinal: 266
        void initialize(void *, int, int, int, enum ed::TimerDestination);

    // RVA: 0x137 | Ordinal: 312
        void setAnisotropy(unsigned int);

    // RVA: 0x139 | Ordinal: 314
        void setCloudShadowsProjNTexture(class osg::Matrixf const &, class render::Texture);

    // RVA: 0x156 | Ordinal: 343
        void startDumpFrame(void);

    // RVA: 0x158 | Ordinal: 345
        void uninitialize(void);

    // RVA: 0x31 | Ordinal: 50
        void _Renderer(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_RENDERER_HPP
