#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: HorizontalShiftGrid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class HorizontalShiftGrid
{
public:

    // RVA: 0x17 | Ordinal: 24
        void HorizontalShiftGrid(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int, int, struct osgeo::proj::ExtentAndRes const &);

    // RVA: 0x283 | Ordinal: 644
        void gridAt(double, double) const;

    // RVA: 0x6A | Ordinal: 107
        void _HorizontalShiftGrid(void);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_HORIZONTALSHIFTGRID_HPP
