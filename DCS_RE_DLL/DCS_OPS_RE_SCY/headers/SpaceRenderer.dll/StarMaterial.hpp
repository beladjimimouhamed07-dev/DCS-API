#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: SpaceRenderer.dll
// Class: StarMaterial
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class StarMaterial
{
public:

    // RVA: 0xB | Ordinal: 12
        void draw(struct Graphics::StarObject const &);

    // RVA: 0xC | Ordinal: 13
        void fillBuffers(void);

    // RVA: 0x12 | Ordinal: 19
        void init(void);

    // RVA: 0x13 | Ordinal: 20
        void setBufferSizes(unsigned __int64);
};

} // namespace Graphics

// DCS_OPS_RE_SPACERENDERER.DLL_STARMATERIAL_HPP
