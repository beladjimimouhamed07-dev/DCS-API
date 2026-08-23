#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: seaFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class seaFile
{
public:

    // RVA: 0x331 | Ordinal: 818
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x4A3 | Ordinal: 1188
        void load(class io::MmfStream &);

    // RVA: 0x4D | Ordinal: 78
        void seaFile(void);

    // RVA: 0x70 | Ordinal: 113
        void _seaFile(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_SEAFILE_HPP
