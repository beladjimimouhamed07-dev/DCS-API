#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GeodeticCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class GeodeticCRS
{
public:

    // RVA: 0x178 | Ordinal: 377
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CartesianCS>> const &);

    // RVA: 0x179 | Ordinal: 378
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::SphericalCS>> const &);

    // RVA: 0x17A | Ordinal: 379
        void create(class osgeo::proj::util::PropertyMap const &, class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame> const &, class std::shared_ptr<class osgeo::proj::datum::DatumEnsemble> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CartesianCS>> const &);

    // RVA: 0x17B | Ordinal: 380
        void create(class osgeo::proj::util::PropertyMap const &, class std::shared_ptr<class osgeo::proj::datum::GeodeticReferenceFrame> const &, class std::shared_ptr<class osgeo::proj::datum::DatumEnsemble> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::SphericalCS>> const &);

    // RVA: 0x236 | Ordinal: 567
        void datum(void) const;

    // RVA: 0x24B | Ordinal: 588
        void ellipsoid(void) const;

    // RVA: 0x295 | Ordinal: 662
        void identify(class std::shared_ptr<class osgeo::proj::io::AuthorityFactory> const &) const;

    // RVA: 0x2A9 | Ordinal: 682
        void isGeocentric(void) const;

    // RVA: 0x2AF | Ordinal: 688
        void isSphericalPlanetocentric(void) const;

    // RVA: 0x2ED | Ordinal: 750
        void primeMeridian(void) const;

    // RVA: 0x358 | Ordinal: 857
        void velocityModel(void) const;

    // RVA: 0x63 | Ordinal: 100
        void _GeodeticCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GEODETICCRS_HPP
