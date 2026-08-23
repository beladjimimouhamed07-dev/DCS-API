#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Texture2dProperties
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Texture2dProperties
{
public:

    // RVA: 0x6 | Ordinal: 7
        void Texture2dProperties(struct model::Texture2dProperties const &);

    // RVA: 0x7 | Ordinal: 8
        void Texture2dProperties(char const *);

    // RVA: 0x8 | Ordinal: 9
        void Texture2dProperties(char const *, enum model::tex::TextureProperty, enum model::tex::TextureProperty, enum model::tex::TextureProperty, enum model::tex::TextureProperty, unsigned int);

    // RVA: 0x9 | Ordinal: 10
        void Texture2dProperties(void);

    // RVA: 0x43 | Ordinal: 68
        void clear(void);

    // RVA: 0xBD | Ordinal: 190
        void isUVTransformIdentity(void) const;

    // RVA: 0xCD | Ordinal: 206
        void load(class io::IBinaryFileR &);

    // RVA: 0x111 | Ordinal: 274
        void save(class io::IBinaryFileW &) const;

    // RVA: 0x12D | Ordinal: 302
        void setPath(char const *);

    // RVA: 0x13D | Ordinal: 318
        void valid(void) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_TEXTURE2DPROPERTIES_HPP
