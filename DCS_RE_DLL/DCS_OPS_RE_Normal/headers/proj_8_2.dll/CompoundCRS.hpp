#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CompoundCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class CompoundCRS
{
public:

    // RVA: 0x144 | Ordinal: 325
        void componentReferenceSystems(void) const;

    // RVA: 0x160 | Ordinal: 353
        void create(class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>>>> const &);

    // RVA: 0x292 | Ordinal: 659
        void identify(class std::shared_ptr<class osgeo::proj::io::AuthorityFactory> const &) const;

    // RVA: 0x40 | Ordinal: 65
        void _CompoundCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_COMPOUNDCRS_HPP
