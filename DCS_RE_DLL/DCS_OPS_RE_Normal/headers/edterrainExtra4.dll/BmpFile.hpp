#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: BmpFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class BmpFile
{
public:

    // RVA: 0x0 | Ordinal: 1
        void BmpFile(class edtex::BmpFile const &);

    // RVA: 0x1 | Ordinal: 2
        void BmpFile(void);

    // RVA: 0x1E | Ordinal: 31
        void doClose(void);

    // RVA: 0x21 | Ordinal: 34
        void doLoadTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x24 | Ordinal: 37
        void doSaveTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x38 | Ordinal: 57
        void openRead(char const *);

    // RVA: 0x3B | Ordinal: 60
        void openWrite(char const *);

    // RVA: 0x9 | Ordinal: 10
        void _BmpFile(void);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_BMPFILE_HPP
