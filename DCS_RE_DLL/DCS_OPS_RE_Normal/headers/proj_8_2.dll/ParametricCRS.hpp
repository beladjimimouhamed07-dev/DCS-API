#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: ParametricCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class ParametricCRS
{
public:

    // RVA: 0x151 | Ordinal: 338
        void coordinateSystem(void) const;

    // RVA: 0x18F | Ordinal: 400
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::ParametricDatum>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::ParametricCS>> const &);

    // RVA: 0x237 | Ordinal: 568
        void datum(void) const;

    // RVA: 0x85 | Ordinal: 134
        void _ParametricCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PARAMETRICCRS_HPP
