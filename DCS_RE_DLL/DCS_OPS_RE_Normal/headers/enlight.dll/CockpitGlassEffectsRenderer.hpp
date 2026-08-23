#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: CockpitGlassEffectsRenderer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class CockpitGlassEffectsRenderer
{
public:

    // RVA: 0x18 | Ordinal: 25
        void CockpitGlassEffectsRenderer(enum render::MSAA_ENUM, int);

    // RVA: 0x74 | Ordinal: 117
        void buildCockpitRefraction(class render::Texture, class render::Texture, class render::Texture);

    // RVA: 0x76 | Ordinal: 119
        void buildDroplets(class render::Texture);

    // RVA: 0xA9 | Ordinal: 170
        void getType(void) const;

    // RVA: 0xE5 | Ordinal: 230
        void resetFeatures(void);

    // RVA: 0xEB | Ordinal: 236
        void setCockpitParams(struct enlight::CockpitGlassEffectsRenderer::CockpitParams const &);

    // RVA: 0x103 | Ordinal: 260
        void update(struct enlight::CockpitGlassEffectsRenderer::EffectParams const &);

    // RVA: 0x32 | Ordinal: 51
        void _CockpitGlassEffectsRenderer(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_COCKPITGLASSEFFECTSRENDERER_HPP
