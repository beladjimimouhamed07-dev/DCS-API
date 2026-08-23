#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: MotionBlurModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class MotionBlurModule
{
public:

    // RVA: 0x31 | Ordinal: 50
        void MotionBlurModule(void);

    // RVA: 0xF5 | Ordinal: 246
        void addMotionBlurPass(char const *, class render::RenderGraph &, struct render::SceneRenderContext const &, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture, class render::RenderGraphTexture);

    // RVA: 0x1DF | Ordinal: 480
        void init(int, float, enum render::MSAA_ENUM);

    // RVA: 0x73 | Ordinal: 116
        void _MotionBlurModule(void);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_MOTIONBLURMODULE_HPP
