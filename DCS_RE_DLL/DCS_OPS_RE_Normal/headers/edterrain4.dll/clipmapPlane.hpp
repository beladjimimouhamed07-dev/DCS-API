#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: clipmapPlane
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape5 {

class clipmapPlane
{
public:

    // RVA: 0x2F | Ordinal: 48
        void clipmapPlane(void);

    // RVA: 0x322 | Ordinal: 803
        void getMaterials(class ed::vector<struct landscape4::Material const *, class ed::allocator<struct landscape4::Material const *>> &) const;

    // RVA: 0x47E | Ordinal: 1151
        void load(class io::MmfStream &);

    // RVA: 0x5D | Ordinal: 94
        void _clipmapPlane(void);
};

} // namespace landscape5

// DCS_OPS_RE_EDTERRAIN4.DLL_CLIPMAPPLANE_HPP
