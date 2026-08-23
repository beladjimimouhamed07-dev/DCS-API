#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainGraphics41.dll
// Class: TextureArrayRemapperGraphics
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtg41 {

class TextureArrayRemapperGraphics
{
public:

    // RVA: 0x1A | Ordinal: 27
        void init(class landscape4::TextureArrayRemapper const &);

    // RVA: 0x1C | Ordinal: 29
        void isEmpty(void);

    // RVA: 0x21 | Ordinal: 34
        void remapManifold(unsigned char *, int, int, void *);
};

} // namespace edtg41

// DCS_OPS_RE_EDTERRAINGRAPHICS41.DLL_TEXTUREARRAYREMAPPERGRAPHICS_HPP
