#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: PngFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class PngFile
{
public:

    // RVA: 0x5 | Ordinal: 6
        void PngFile(class edtex::PngFile const &);

    // RVA: 0x6 | Ordinal: 7
        void PngFile(void);

    // RVA: 0x1F | Ordinal: 32
        void doClose(void);

    // RVA: 0x22 | Ordinal: 35
        void doLoadTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x25 | Ordinal: 38
        void doSaveTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x39 | Ordinal: 58
        void openRead(char const *);

    // RVA: 0x3C | Ordinal: 61
        void openWrite(char const *);

    // RVA: 0xC | Ordinal: 13
        void _PngFile(void);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_PNGFILE_HPP
