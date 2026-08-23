#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DerivedVerticalCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class DerivedVerticalCRS
{
public:

    // RVA: 0x134 | Ordinal: 309
        void baseCRS(void) const;

    // RVA: 0x170 | Ordinal: 369
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::VerticalCRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::Conversion>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::VerticalCS>> const &);

    // RVA: 0x52 | Ordinal: 83
        void _DerivedVerticalCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DERIVEDVERTICALCRS_HPP
