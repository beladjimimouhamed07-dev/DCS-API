#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: DibitVector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {
namespace BSPUtils3 {

class DibitVector
{
public:

    // RVA: 0x1 | Ordinal: 2
        void DibitVector(unsigned int, bool);

    // RVA: 0x1D8 | Ordinal: 473
        void convertToBackPolygonMask(void);

    // RVA: 0x1D9 | Ordinal: 474
        void convertToFrontPolygonMask(void);

    // RVA: 0x2E6 | Ordinal: 743
        void getDibit(unsigned int) const;
};

} // namespace BSPUtils3
} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_DIBITVECTOR_HPP
