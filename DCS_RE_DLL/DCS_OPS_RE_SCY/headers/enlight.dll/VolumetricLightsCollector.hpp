#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: VolumetricLightsCollector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class VolumetricLightsCollector
{
public:

    // RVA: 0x27 | Ordinal: 40
        void VolumetricLightsCollector(class DCSSceneProxy *);

    // RVA: 0x5E | Ordinal: 95
        void addLightsPrePass(class render::RenderGraph &, struct render::ISceneRenderContextBinder const &, struct render::SceneRenderContext const &, struct render::ClippingVolume &, class render::SpectrumModel, class render::SecondaryShadowmapModule *, class render::ViewportTag const &);

    // RVA: 0x3C | Ordinal: 61
        void _VolumetricLightsCollector(void);
};

} // namespace render

// DCS_OPS_RE_ENLIGHT.DLL_VOLUMETRICLIGHTSCOLLECTOR_HPP
