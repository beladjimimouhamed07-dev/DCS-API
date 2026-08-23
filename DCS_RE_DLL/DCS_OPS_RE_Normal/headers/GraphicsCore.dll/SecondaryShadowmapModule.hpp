#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SecondaryShadowmapModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class SecondaryShadowmapModule
{
public:

    // RVA: 0x45 | Ordinal: 70
        void SecondaryShadowmapModule(class render::SecondaryShadowmapModule &&);

    // RVA: 0x46 | Ordinal: 71
        void SecondaryShadowmapModule(class render::SecondaryShadowmapModule const &);

    // RVA: 0x47 | Ordinal: 72
        void SecondaryShadowmapModule(int);

    // RVA: 0xF2 | Ordinal: 243
        void addLightsCollection(class render::RenderGraphLightsCollection const &, class osg::Matrixf const &);

    // RVA: 0xF9 | Ordinal: 250
        void addPasses(class render::RenderGraph &, struct render::SecondaryShadowmapModule::Params const &, struct render::FrameContext const &, struct render::ISceneRenderContextBinder const &);

    // RVA: 0x118 | Ordinal: 281
        void beginFrame(void);

    // RVA: 0x12D | Ordinal: 302
        void collectShadowmaps(struct render::FrameContext const &, class ed::vector<struct render::SceneLight *, class ed::allocator<struct render::SceneLight *>> const &, class osg::Matrixf const &);

    // RVA: 0x173 | Ordinal: 372
        void getContextParams(void) const;

    // RVA: 0x1A9 | Ordinal: 426
        void getShadowmapIdx(struct render::IShadowmap const *) const;

    // RVA: 0x7D | Ordinal: 126
        void _SecondaryShadowmapModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_SECONDARYSHADOWMAPMODULE_HPP
