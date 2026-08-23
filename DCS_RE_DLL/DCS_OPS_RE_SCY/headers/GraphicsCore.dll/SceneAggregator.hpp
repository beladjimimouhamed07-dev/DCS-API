#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: SceneAggregator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class SceneAggregator
{
public:

    // RVA: 0x12B | Ordinal: 300
        void collectLightsAggregated(unsigned int, struct Graphics::SceneAggregator::LightCollectionRequest *const, class ed::TaskQueue *, struct SceneStatistics::CollectRenderablesResult *, struct SceneStatistics::CollectLightsResult *);

    // RVA: 0x12C | Ordinal: 301
        void collectRenderablesAggregated(unsigned int, struct Graphics::SceneAggregator::CollectionRequest *const, class ed::TaskQueue *, bool, struct SceneStatistics::CollectRenderablesResult *);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSCORE.DLL_SCENEAGGREGATOR_HPP
