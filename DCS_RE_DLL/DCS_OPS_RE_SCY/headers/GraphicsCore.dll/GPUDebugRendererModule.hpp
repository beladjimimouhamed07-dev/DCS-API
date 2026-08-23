#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: GPUDebugRendererModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class GPUDebugRendererModule
{
public:

    // RVA: 0x1A | Ordinal: 27
        void GPUDebugRendererModule(void);

    // RVA: 0xFF | Ordinal: 256
        void addRenderPass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture);

    // RVA: 0x1DB | Ordinal: 476
        void init(class render::RenderGraph &, enum render::MSAA_ENUM);

    // RVA: 0x284 | Ordinal: 645
        void setCursorPosition(class osg::Vec2i);

    // RVA: 0x69 | Ordinal: 106
        void _GPUDebugRendererModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_GPUDEBUGRENDERERMODULE_HPP
