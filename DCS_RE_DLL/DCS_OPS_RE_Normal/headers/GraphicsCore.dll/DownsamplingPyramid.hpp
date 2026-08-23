#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: DownsamplingPyramid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class DownsamplingPyramid
{
public:

    // RVA: 0x166 | Ordinal: 359
        void fetchGPUResources(class render::RenderGraphResources &, unsigned int, class render::RenderGraphTexture const *const);

    // RVA: 0x1D5 | Ordinal: 470
        void init(class render::RenderGraph &, char const *, unsigned int, unsigned int, unsigned int, enum render::FMT_ENUM, enum render::MSAA_ENUM, bool const *const);

    // RVA: 0x1D6 | Ordinal: 471
        void init(char const *, unsigned int, unsigned int, unsigned int, enum render::FMT_ENUM, enum render::MSAA_ENUM, bool const *const);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_DOWNSAMPLINGPYRAMID_HPP
