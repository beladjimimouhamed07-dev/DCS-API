#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CoordinateSystemAxis
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace cs {

class CoordinateSystemAxis
{
public:

    // RVA: 0x10F | Ordinal: 272
        void abbreviation(void) const;

    // RVA: 0x166 | Ordinal: 359
        void create(class osgeo::proj::util::PropertyMap const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class osgeo::proj::cs::AxisDirection const &, class osgeo::proj::common::UnitOfMeasure const &, class std::shared_ptr<class osgeo::proj::cs::Meridian> const &);

    // RVA: 0x246 | Ordinal: 583
        void direction(void) const;

    // RVA: 0x2B7 | Ordinal: 696
        void maximumValue(void) const;

    // RVA: 0x2B9 | Ordinal: 698
        void meridian(void) const;

    // RVA: 0x2BB | Ordinal: 700
        void minimumValue(void) const;

    // RVA: 0x34D | Ordinal: 846
        void unit(void) const;

    // RVA: 0x47 | Ordinal: 72
        void _CoordinateSystemAxis(void);
};

} // namespace cs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_COORDINATESYSTEMAXIS_HPP
