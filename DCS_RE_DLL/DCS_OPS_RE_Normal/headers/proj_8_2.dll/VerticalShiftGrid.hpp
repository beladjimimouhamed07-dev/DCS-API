#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: VerticalShiftGrid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class VerticalShiftGrid
{
public:

    // RVA: 0x2F | Ordinal: 48
        void VerticalShiftGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int, int, struct osgeo::proj::ExtentAndRes const &);

    // RVA: 0x285 | Ordinal: 646
        void gridAt(double, double) const;

    // RVA: 0x9F | Ordinal: 160
        void _VerticalShiftGrid(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_VERTICALSHIFTGRID_HPP
