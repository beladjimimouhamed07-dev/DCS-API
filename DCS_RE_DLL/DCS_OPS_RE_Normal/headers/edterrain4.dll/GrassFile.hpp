#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: GrassFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class GrassFile
{
public:

    // RVA: 0x3 | Ordinal: 4
        void GrassFile(void);

    // RVA: 0x31D | Ordinal: 798
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x420 | Ordinal: 1057
        void init(void);

    // RVA: 0x477 | Ordinal: 1144
        void load(class io::MmfStream &);

    // RVA: 0x50 | Ordinal: 81
        void _GrassFile(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_GRASSFILE_HPP
