#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DerivedGeographicCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class DerivedGeographicCRS
{
public:

    // RVA: 0x132 | Ordinal: 307
        void baseCRS(void) const;

    // RVA: 0x16E | Ordinal: 367
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::GeodeticCRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Conversion>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::EllipsoidalCS>> const &);

    // RVA: 0x240 | Ordinal: 577
        void demoteTo2D(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &) const;

    // RVA: 0x50 | Ordinal: 81
        void _DerivedGeographicCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DERIVEDGEOGRAPHICCRS_HPP
