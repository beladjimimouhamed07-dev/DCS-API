#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrainExtra4.dll
// Class: ITextureFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace edtex {

class ITextureFile
{
public:

    // RVA: 0x3 | Ordinal: 4
        void ITextureFile(class edtex::ITextureFile const &);

    // RVA: 0x4 | Ordinal: 5
        void ITextureFile(void);

    // RVA: 0x1C | Ordinal: 29
        void close(void);

    // RVA: 0x1D | Ordinal: 30
        void create(enum edtex::enTextureType, char const *);

    // RVA: 0x31 | Ordinal: 50
        void getMetaData(void) const;

    // RVA: 0x36 | Ordinal: 55
        void loadTexture(struct edtex::texture::ITextureAccesor *);

    // RVA: 0x37 | Ordinal: 56
        void open(char const *, enum edtex::ITextureFile::Mode);

    // RVA: 0x40 | Ordinal: 65
        void saveTexture(struct edtex::texture::ITextureAccesor *, struct edtex::MetaData const &);

    // RVA: 0xB | Ordinal: 12
        void _ITextureFile(void);
};

} // namespace edtex

// DCS_OPS_RE_EDTERRAINEXTRA4.DLL_ITEXTUREFILE_HPP
