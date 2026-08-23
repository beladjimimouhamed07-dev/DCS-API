#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Context
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Context
{
public:

    // RVA: 0x2 | Ordinal: 3
        void Context(void);

    // RVA: 0xD4 | Ordinal: 213
        void addAtmosphereSamples(class osg::Vec3f const *, unsigned int);

    // RVA: 0xD6 | Ordinal: 215
        void bindContextToGPU(int, int, struct render::FrameContext const &, struct render::ViewportContext const &, struct enlight::ShadowParams const &);

    // RVA: 0xD7 | Ordinal: 216
        void bindViewportContextToGPU(int, struct render::ViewportContext const &, struct enlight::ShadowParams const *);

    // RVA: 0xF1 | Ordinal: 242
        void getCamera(void) const;

    // RVA: 0xF6 | Ordinal: 247
        void getCurrentContext(void);

    // RVA: 0x102 | Ordinal: 259
        void getStackSize(void);

    // RVA: 0x106 | Ordinal: 263
        void init(void);

    // RVA: 0x121 | Ordinal: 290
        void pop(void);

    // RVA: 0x122 | Ordinal: 291
        void push(class Graphics::Context *);

    // RVA: 0x125 | Ordinal: 294
        void release(void);

    // RVA: 0x131 | Ordinal: 306
        void reset(void);

    // RVA: 0x138 | Ordinal: 313
        void setCamera(class Graphics::Camera const &, bool, class osg::Vec2i const &);

    // RVA: 0x15B | Ordinal: 348
        void updatePerFrameCBuffer(double, class osg::Vec2f *);

    // RVA: 0x15C | Ordinal: 349
        void updatePerFrameCBuffer(double, class osg::Vec3f const *, class osg::Vec3f const *);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSVISTA.DLL_CONTEXT_HPP
