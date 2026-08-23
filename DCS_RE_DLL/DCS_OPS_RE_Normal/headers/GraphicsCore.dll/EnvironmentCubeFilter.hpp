#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: EnvironmentCubeFilter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace environment {

class EnvironmentCubeFilter
{
public:

    // RVA: 0x127 | Ordinal: 296
        void chooseNextMipToFilter(struct environment::EnvironmentCubeTarget &);

    // RVA: 0x134 | Ordinal: 309
        void computeGF(class render::Texture &);

    // RVA: 0x1D7 | Ordinal: 472
        void init(void);

    // RVA: 0x226 | Ordinal: 551
        void prefilterAllMips(struct environment::EnvironmentCubeTarget &, bool, bool);

    // RVA: 0x227 | Ordinal: 552
        void prefilterMip(struct environment::EnvironmentCubeTarget &, unsigned int, bool, bool);

    // RVA: 0x228 | Ordinal: 553
        void prefilterToBuffer(class render::Texture const &, class render::StructuredBuffer &, unsigned int, float, bool);

    // RVA: 0x22C | Ordinal: 557
        void processFiltering(struct environment::EnvironmentCubeTarget &);

    // RVA: 0x23F | Ordinal: 576
        void release(void);
};

} // namespace environment

// DCS_OPS_RE_GRAPHICSCORE.DLL_ENVIRONMENTCUBEFILTER_HPP
