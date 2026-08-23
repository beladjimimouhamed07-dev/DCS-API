#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GeographicCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class GeographicCRS
{
public:

    // RVA: 0x150 | Ordinal: 337
        void coordinateSystem(void) const;

    // RVA: 0x17E | Ordinal: 383
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::EllipsoidalCS>> const &);

    // RVA: 0x17F | Ordinal: 384
        void create(class osgeo::proj::util::PropertyMap const &, class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame> const &, class std::shared_ptr<class osgeo::proj::datum::DatumEnsemble> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::EllipsoidalCS>> const &);

    // RVA: 0x241 | Ordinal: 578
        void demoteTo2D(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &) const;

    // RVA: 0x2A4 | Ordinal: 677
        void is2DPartOf3D(class dropbox::oxygen::nn<class osgeo::proj::crs::GeographicCRS const *>, class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &) const;

    // RVA: 0x66 | Ordinal: 103
        void _GeographicCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GEOGRAPHICCRS_HPP
