#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: ProjectedCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class ProjectedCRS
{
public:

    // RVA: 0x125 | Ordinal: 294
        void alterParametersLinearUnit(class osgeo::proj::common::UnitOfMeasure const &, bool) const;

    // RVA: 0x135 | Ordinal: 310
        void baseCRS(void) const;

    // RVA: 0x152 | Ordinal: 339
        void coordinateSystem(void) const;

    // RVA: 0x194 | Ordinal: 405
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::GeodeticCRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Conversion>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CartesianCS>> const &);

    // RVA: 0x242 | Ordinal: 579
        void demoteTo2D(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &) const;

    // RVA: 0x296 | Ordinal: 663
        void identify(class std::shared_ptr<class osgeo::proj::io::AuthorityFactory> const &) const;

    // RVA: 0x8C | Ordinal: 141
        void _ProjectedCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PROJECTEDCRS_HPP
