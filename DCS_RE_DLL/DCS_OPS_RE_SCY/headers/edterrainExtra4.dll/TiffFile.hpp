#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: TiffFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class TiffFile
{
public:

    // RVA: 0x7 | Ordinal: 8
        void TiffFile(class edtex::TiffFile const &);

    // RVA: 0x8 | Ordinal: 9
        void TiffFile(void);

    // RVA: 0x20 | Ordinal: 33
        void doClose(void);

    // RVA: 0x23 | Ordinal: 36
        void doLoadTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x26 | Ordinal: 39
        void doSaveTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x3A | Ordinal: 59
        void openRead(char const *);

    // RVA: 0x3D | Ordinal: 62
        void openWrite(char const *);

    // RVA: 0xD | Ordinal: 14
        void _TiffFile(void);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_TIFFFILE_HPP
