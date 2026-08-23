#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: BoundCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class BoundCRS
{
public:

    // RVA: 0x12F | Ordinal: 304
        void baseCRS(void) const;

    // RVA: 0x136 | Ordinal: 311
        void baseCRSWithCanonicalBoundCRS(void) const;

    // RVA: 0x15C | Ordinal: 349
        void create(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Transformation>> const &);

    // RVA: 0x15D | Ordinal: 350
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Transformation>> const &);

    // RVA: 0x1CD | Ordinal: 462
        void createFromNadgrids(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x1CF | Ordinal: 464
        void createFromTOWGS84(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0x28F | Ordinal: 656
        void hubCRS(void) const;

    // RVA: 0x34A | Ordinal: 843
        void transformation(void) const;

    // RVA: 0x3A | Ordinal: 59
        void _BoundCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_BOUNDCRS_HPP
