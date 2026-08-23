#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SpaceRenderer.dll
// Class: CelestialBodiesProvider
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class CelestialBodiesProvider
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CelestialBodiesProvider(bool);

    // RVA: 0x5 | Ordinal: 6
        void collectRenderables(unsigned int, struct render::CollectionInfo const **, bool const *const, class ed::vector<struct render::ISceneRenderable *, class ed::allocator<struct render::ISceneRenderable *>> **, struct render::ILightProbeSampler &);

    // RVA: 0xD | Ordinal: 14
        void getBoundingBox(void);

    // RVA: 0x17 | Ordinal: 24
        void updateGraphicState(struct SpaceState const &);

    // RVA: 0x3 | Ordinal: 4
        void _CelestialBodiesProvider(void);
};

} // namespace Graphics

// DCS_OPS_RE_SPACERENDERER.DLL_CELESTIALBODIESPROVIDER_HPP
