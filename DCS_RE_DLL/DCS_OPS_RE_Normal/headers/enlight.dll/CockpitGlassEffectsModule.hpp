#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CockpitGlassEffectsModule
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class CockpitGlassEffectsModule
{
public:

    // RVA: 0x17 | Ordinal: 24
        void CockpitGlassEffectsModule(enum render::MSAA_ENUM, int);

    // RVA: 0x5F | Ordinal: 96
        void addPasses(struct DCSCockpitGlassEffectsDesc const &, class render::RenderGraph &, struct render::FrameContext const &, struct render::ISceneRenderContextBinder const &);

    // RVA: 0x61 | Ordinal: 98
        void addRefractionPass(class render::RenderGraph &, class render::RenderGraphTexture, class render::RenderGraphTexture, char const *);

    // RVA: 0xE4 | Ordinal: 229
        void resetFeatures(void);
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_COCKPITGLASSEFFECTSMODULE_HPP
