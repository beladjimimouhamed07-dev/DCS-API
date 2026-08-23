#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lsa5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class lsa5File
{
public:

    // RVA: 0x1E5 | Ordinal: 486
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x32F | Ordinal: 816
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x3CA | Ordinal: 971
        void getSquareL0(struct landscape5::lsa5File::SubdivSquareID);

    // RVA: 0x3DB | Ordinal: 988
        void getSubdivSquare(struct landscape5::lsa5File::SubdivSquareID);

    // RVA: 0x405 | Ordinal: 1030
        void getType(void);

    // RVA: 0x49D | Ordinal: 1182
        void load(class io::MmfStream &);

    // RVA: 0x557 | Ordinal: 1368
        void save(class ed::basic_string<char> const &);

    // RVA: 0x5A6 | Ordinal: 1447
        void subdivSquarePoolCapacity(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_LSA5FILE_HPP
