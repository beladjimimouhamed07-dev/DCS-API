#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsCore.dll
// Class: Livery
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Graphics {

class Livery
{
public:

    // RVA: 0x162 | Ordinal: 355
        void enumerateTextures(class std::function<void __cdecl(unsigned int, unsigned int, class render::Texture const &, class ed::basic_string<char> const &)>) const;

    // RVA: 0x196 | Ordinal: 407
        void getNumMaterials(void) const;

    // RVA: 0x1B8 | Ordinal: 441
        void getTexture(unsigned int, unsigned int, class render::Texture &) const;

    // RVA: 0x204 | Ordinal: 517
        void load(void);

    // RVA: 0x20B | Ordinal: 524
        void load_with_tlbu(bool);

    // RVA: 0x2AF | Ordinal: 688
        void unload(void);
};

} // namespace Graphics

// DCS_OPS_RE_GRAPHICSCORE.DLL_LIVERY_HPP
