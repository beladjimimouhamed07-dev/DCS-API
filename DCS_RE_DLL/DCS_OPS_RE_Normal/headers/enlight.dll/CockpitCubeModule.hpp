#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CockpitCubeModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class CockpitCubeModule
{
public:

    // RVA: 0x5A | Ordinal: 91
        void addBuildPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::FrameContext const &, class osg::Matrixd const &, class osg::Vec3f const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, bool, class render::IRenderGraphDependencyList const *);

    // RVA: 0x5D | Ordinal: 94
        void addGBufferPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::FrameContext const &, class osg::Vec3f const &);

    // RVA: 0x60 | Ordinal: 97
        void addPrefilterPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::FrameContext const &, class render::IRenderGraphDependencyList const *);

    // RVA: 0x65 | Ordinal: 102
        void applyConfig(struct enlight::CockpitConfig const &);

    // RVA: 0xA8 | Ordinal: 169
        void getTextureForAutoBinding(int) const;

    // RVA: 0xAF | Ordinal: 176
        void init(class render::RenderGraph &, int, int);
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_COCKPITCUBEMODULE_HPP
