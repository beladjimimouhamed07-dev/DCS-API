#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Ellipsoid
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class Ellipsoid
{
public:

    // RVA: 0x13B | Ordinal: 316
        void celestialBody(void) const;

    // RVA: 0x145 | Ordinal: 326
        void computeSemiMinorAxis(void) const;

    // RVA: 0x146 | Ordinal: 327
        void computedInverseFlattening(void) const;

    // RVA: 0x1C7 | Ordinal: 456
        void createFlattenedSphere(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Scale const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x219 | Ordinal: 538
        void createSphere(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Length const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x222 | Ordinal: 547
        void createTwoAxis(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::common::Length const &, class osgeo::proj::common::Length const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x294 | Ordinal: 661
        void identify(void) const;

    // RVA: 0x2A3 | Ordinal: 676
        void inverseFlattening(void) const;

    // RVA: 0x2AE | Ordinal: 687
        void isSphere(void) const;

    // RVA: 0x302 | Ordinal: 771
        void semiMajorAxis(void) const;

    // RVA: 0x303 | Ordinal: 772
        void semiMedianAxis(void) const;

    // RVA: 0x304 | Ordinal: 773
        void semiMinorAxis(void) const;

    // RVA: 0x330 | Ordinal: 817
        void squaredEccentricity(void) const;

    // RVA: 0x55 | Ordinal: 86
        void _Ellipsoid(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_ELLIPSOID_HPP
