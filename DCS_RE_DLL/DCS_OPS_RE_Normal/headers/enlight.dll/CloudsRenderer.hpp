#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CloudsRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class CloudsRenderer
{
public:

    // RVA: 0x13 | Ordinal: 20
        void CloudsRenderer(void);

    // RVA: 0x62 | Ordinal: 99
        void addRenderingPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::IRenderGraphDependencyList const *, bool, bool, class osg::Vec2f const &, class osg::Vec4f const &);

    // RVA: 0xBB | Ordinal: 188
        void isValid(void) const;
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_CLOUDSRENDERER_HPP
