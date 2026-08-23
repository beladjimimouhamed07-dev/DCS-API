#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DerivedGeodeticCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class DerivedGeodeticCRS
{
public:

    // RVA: 0x131 | Ordinal: 306
        void baseCRS(void) const;

    // RVA: 0x16C | Ordinal: 365
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::GeodeticCRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Conversion>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CartesianCS>> const &);

    // RVA: 0x16D | Ordinal: 366
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::GeodeticCRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Conversion>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::SphericalCS>> const &);

    // RVA: 0x4F | Ordinal: 80
        void _DerivedGeodeticCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DERIVEDGEODETICCRS_HPP
