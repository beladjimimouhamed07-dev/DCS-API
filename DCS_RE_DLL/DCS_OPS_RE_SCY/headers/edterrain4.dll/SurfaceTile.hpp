#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: SurfaceTile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class SurfaceTile
{
public:

    // RVA: 0x1E0 | Ordinal: 481
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x321 | Ordinal: 802
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x3FF | Ordinal: 1024
        void getType(void);

    // RVA: 0x47B | Ordinal: 1148
        void load(class io::MmfStream &);

    // RVA: 0x539 | Ordinal: 1338
        void save(class ed::basic_string<char> const &);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SURFACETILE_HPP
