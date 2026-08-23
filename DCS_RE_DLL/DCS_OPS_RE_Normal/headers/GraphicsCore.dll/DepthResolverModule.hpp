#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: DepthResolverModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class DepthResolverModule
{
public:

    // RVA: 0x15 | Ordinal: 22
        void DepthResolverModule(class render::DepthResolverModule &&);

    // RVA: 0x16 | Ordinal: 23
        void DepthResolverModule(class render::DepthResolverModule const &);

    // RVA: 0x17 | Ordinal: 24
        void DepthResolverModule(void);

    // RVA: 0xE6 | Ordinal: 231
        void addDepthResolvePass(char const *, class render::RenderGraph &, class render::RenderGraphTexture, char const *, bool, class render::ViewportTag const &);

    // RVA: 0xE7 | Ordinal: 232
        void addDepthUpscalePass(char const *, class render::RenderGraph &, class render::RenderGraphTexture, class osg::Vec4f const &, class osg::Vec2i const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::ViewportTag const &);

    // RVA: 0x1D4 | Ordinal: 469
        void init(enum render::MSAA_ENUM);

    // RVA: 0x67 | Ordinal: 104
        void _DepthResolverModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_DEPTHRESOLVERMODULE_HPP
