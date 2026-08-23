#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: EngineeringCRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace crs {

class EngineeringCRS
{
public:

    // RVA: 0x175 | Ordinal: 374
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::EngineeringDatum>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::cs::CoordinateSystem>> const &);

    // RVA: 0x235 | Ordinal: 566
        void datum(void) const;

    // RVA: 0x57 | Ordinal: 88
        void _EngineeringCRS(void);
};

} // namespace crs
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_ENGINEERINGCRS_HPP
