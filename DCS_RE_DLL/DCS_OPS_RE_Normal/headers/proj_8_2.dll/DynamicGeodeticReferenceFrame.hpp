#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DynamicGeodeticReferenceFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class DynamicGeodeticReferenceFrame
{
public:

    // RVA: 0x171 | Ordinal: 370
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::Ellipsoid>> const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::PrimeMeridian>> const &, class osgeo::proj::common::Measure const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &);

    // RVA: 0x23D | Ordinal: 574
        void deformationModelName(void) const;

    // RVA: 0x25A | Ordinal: 603
        void frameReferenceEpoch(void) const;

    // RVA: 0x53 | Ordinal: 84
        void _DynamicGeodeticReferenceFrame(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DYNAMICGEODETICREFERENCEFRAME_HPP
