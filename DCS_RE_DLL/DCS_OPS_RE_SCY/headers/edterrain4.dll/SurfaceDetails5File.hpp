#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: SurfaceDetails5File
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class SurfaceDetails5File
{
public:

    // RVA: 0x2A | Ordinal: 43
        void SurfaceDetails5File(void);

    // RVA: 0x1DF | Ordinal: 480
        void copyFrom(class landscape4::lDataFile *);

    // RVA: 0x320 | Ordinal: 801
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x3FE | Ordinal: 1023
        void getType(void);

    // RVA: 0x47A | Ordinal: 1147
        void load(class io::MmfStream &);

    // RVA: 0x538 | Ordinal: 1337
        void save(char const *);

    // RVA: 0x5A | Ordinal: 91
        void _SurfaceDetails5File(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_SURFACEDETAILS5FILE_HPP
