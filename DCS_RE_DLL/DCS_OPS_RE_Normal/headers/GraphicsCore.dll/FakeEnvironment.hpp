#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: FakeEnvironment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace environment {

class FakeEnvironment
{
public:

    // RVA: 0x156 | Ordinal: 343
        void drawClouds(class render::Texture, class osg::Matrixf const &);

    // RVA: 0x157 | Ordinal: 344
        void drawFarSurface(struct render::ViewportContext const &);

    // RVA: 0x158 | Ordinal: 345
        void drawFarSurface(class GraphicsCore::ContextBase *);

    // RVA: 0x15D | Ordinal: 350
        void drawSurface(struct render::SceneRenderContext const &, class render::Texture &, class render::Texture &, float);

    // RVA: 0x15E | Ordinal: 351
        void drawSurface(class GraphicsCore::ContextBase *, float);

    // RVA: 0x15F | Ordinal: 352
        void drawWater(class GraphicsCore::ContextBase *);

    // RVA: 0x1DA | Ordinal: 475
        void init(class render::Texture const *, int const *);

    // RVA: 0x242 | Ordinal: 579
        void release(void);

    // RVA: 0x68 | Ordinal: 105
        void _FakeEnvironment(void);
};

} // namespace environment

// DCS_OPS_RE_GRAPHICSCORE.DLL_FAKEENVIRONMENT_HPP
