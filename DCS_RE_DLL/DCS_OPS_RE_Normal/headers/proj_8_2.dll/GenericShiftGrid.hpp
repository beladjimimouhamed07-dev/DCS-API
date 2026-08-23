#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GenericShiftGrid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class GenericShiftGrid
{
public:

    // RVA: 0x13 | Ordinal: 20
        void GenericShiftGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int, int, struct osgeo::proj::ExtentAndRes const &);

    // RVA: 0x281 | Ordinal: 642
        void gridAt(double, double) const;

    // RVA: 0x61 | Ordinal: 98
        void _GenericShiftGrid(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GENERICSHIFTGRID_HPP
