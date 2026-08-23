#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: VerticalCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class VerticalCRS
{
public:

    // RVA: 0x155 | Ordinal: 342
        void coordinateSystem(void) const;

    // RVA: 0x19E | Ordinal: 415
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::VerticalReferenceFrame>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::VerticalCS>> const &);

    // RVA: 0x19F | Ordinal: 416
        void create(class osgeo::proj::util::PropertyMap const &, class std::shared_ptr<class osgeo::proj::datum::VerticalReferenceFrame> const &, class std::shared_ptr<class osgeo::proj::datum::DatumEnsemble> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::VerticalCS>> const &);

    // RVA: 0x23A | Ordinal: 571
        void datum(void) const;

    // RVA: 0x25D | Ordinal: 606
        void geoidModel(void) const;

    // RVA: 0x297 | Ordinal: 664
        void identify(class std::shared_ptr<class osgeo::proj::io::AuthorityFactory> const &) const;

    // RVA: 0x359 | Ordinal: 858
        void velocityModel(void) const;

    // RVA: 0x9B | Ordinal: 156
        void _VerticalCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_VERTICALCRS_HPP
