#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lSurfaceDetails2File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lSurfaceDetails2File
{
public:

    // RVA: 0x1E4 | Ordinal: 485
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x32D | Ordinal: 814
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x404 | Ordinal: 1029
        void getType(void);

    // RVA: 0x49 | Ordinal: 74
        void lSurfaceDetails2File(void);

    // RVA: 0x49A | Ordinal: 1179
        void load(class io::MmfStream &);

    // RVA: 0x553 | Ordinal: 1364
        void save(char const *);

    // RVA: 0x6B | Ordinal: 108
        void _lSurfaceDetails2File(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LSURFACEDETAILS2FILE_HPP
