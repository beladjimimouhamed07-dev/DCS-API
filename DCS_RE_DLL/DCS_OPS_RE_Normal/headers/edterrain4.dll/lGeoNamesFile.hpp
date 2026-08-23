#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lGeoNamesFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lGeoNamesFile
{
public:

    // RVA: 0x327 | Ordinal: 808
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x39 | Ordinal: 58
        void lGeoNamesFile(void);

    // RVA: 0x489 | Ordinal: 1162
        void load(char const *);

    // RVA: 0x48A | Ordinal: 1163
        void load(class io::MmfStream &);

    // RVA: 0x4F4 | Ordinal: 1269
        void preload(void);

    // RVA: 0x546 | Ordinal: 1351
        void save(char const *);

    // RVA: 0x63 | Ordinal: 100
        void _lGeoNamesFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LGEONAMESFILE_HPP
