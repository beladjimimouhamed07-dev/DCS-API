#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: Lsa5Point
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace assets {
namespace lPointAsset {

class Lsa5Point
{
public:

    // RVA: 0x20D | Ordinal: 526
        void dump(class ed::basic_string<char> const &, bool) const;

    // RVA: 0x2C6 | Ordinal: 711
        void getContourVertInMesh(int, int) const;

    // RVA: 0x52F | Ordinal: 1328
        void reverse(void);
};

} // namespace lPointAsset
} // namespace assets

// DCS_OPS_RE_EDTERRAIN4.DLL_LSA5POINT_HPP
