#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lReferenceFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lReferenceFile
{
public:

    // RVA: 0x329 | Ordinal: 810
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x3F | Ordinal: 64
        void lReferenceFile(void);

    // RVA: 0x48F | Ordinal: 1168
        void load(class io::MmfStream &);

    // RVA: 0x4AB | Ordinal: 1196
        void loadReferenceObjects(void);

    // RVA: 0x54B | Ordinal: 1356
        void save(char const *);

    // RVA: 0x67 | Ordinal: 104
        void _lReferenceFile(void);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LREFERENCEFILE_HPP
