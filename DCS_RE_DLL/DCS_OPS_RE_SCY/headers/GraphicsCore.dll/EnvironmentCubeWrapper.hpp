#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: EnvironmentCubeWrapper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace environment {

class EnvironmentCubeWrapper
{
public:

    // RVA: 0x1D8 | Ordinal: 473
        void init(char const *);

    // RVA: 0x229 | Ordinal: 554
        void prefilterToBuffer(class render::Texture const &, class render::StructuredBuffer &, unsigned int, float, bool);

    // RVA: 0x22D | Ordinal: 558
        void processFiltering(void);

    // RVA: 0x241 | Ordinal: 578
        void release(void);
};

} // namespace environment

// DCS_OPS_RE_GRAPHICSCORE.DLL_ENVIRONMENTCUBEWRAPPER_HPP
