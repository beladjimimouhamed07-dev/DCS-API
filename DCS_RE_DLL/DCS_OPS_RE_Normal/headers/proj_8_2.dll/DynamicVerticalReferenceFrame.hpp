#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DynamicVerticalReferenceFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class DynamicVerticalReferenceFrame
{
public:

    // RVA: 0x172 | Ordinal: 371
        void create(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class osgeo::proj::util::optional<class osgeo::proj::datum::RealizationMethod> const &, class osgeo::proj::common::Measure const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &);

    // RVA: 0x23E | Ordinal: 575
        void deformationModelName(void) const;

    // RVA: 0x25B | Ordinal: 604
        void frameReferenceEpoch(void) const;

    // RVA: 0x54 | Ordinal: 85
        void _DynamicVerticalReferenceFrame(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DYNAMICVERTICALREFERENCEFRAME_HPP
