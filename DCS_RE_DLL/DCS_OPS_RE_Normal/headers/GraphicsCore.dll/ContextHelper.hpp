#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: ContextHelper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class ContextHelper
{
public:

    // RVA: 0xA | Ordinal: 11
        void ContextHelper(void);

    // RVA: 0x1CF | Ordinal: 464
        void init(class render::Shader &);

    // RVA: 0x279 | Ordinal: 634
        void setAtmosphereSamplesId(int, int);

    // RVA: 0x2CD | Ordinal: 718
        void useCBuffers(unsigned int);

    // RVA: 0x2D0 | Ordinal: 721
        void useSBuffers(unsigned int);
};

} // namespace render

// DCS_OPS_RE_GRAPHICSCORE.DLL_CONTEXTHELPER_HPP
