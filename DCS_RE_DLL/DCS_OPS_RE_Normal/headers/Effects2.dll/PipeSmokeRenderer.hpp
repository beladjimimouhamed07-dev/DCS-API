#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: PipeSmokeRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class PipeSmokeRenderer
{
public:

    // RVA: 0x27 | Ordinal: 40
        void addToRender(struct Effects::PipeSmokeObject const &, struct render::ViewportContext const &, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> &, struct render::ILightProbeSampler &, bool);

    // RVA: 0x35 | Ordinal: 54
        void draw(struct Effects::PipeSmokeRenderer::EffectInstance const &);

    // RVA: 0x4D | Ordinal: 78
        void getEffectsCount(void) const;

    // RVA: 0x63 | Ordinal: 100
        void init(void);

    // RVA: 0x65 | Ordinal: 102
        void instance(void);

    // RVA: 0x68 | Ordinal: 105
        void isInitialized(void) const;

    // RVA: 0x6E | Ordinal: 111
        void onParseBegin(void);

    // RVA: 0x6F | Ordinal: 112
        void onParseEnd(void);

    // RVA: 0x76 | Ordinal: 119
        void release(void);

    // RVA: 0x13 | Ordinal: 20
        void _PipeSmokeRenderer(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_PIPESMOKERENDERER_HPP
