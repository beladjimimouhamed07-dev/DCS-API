#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: VerticalReferenceFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class VerticalReferenceFrame
{
public:

    // RVA: 0x1A2 | Ordinal: 419
        void create(class osgeo::proj::util::PropertyMap const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class osgeo::proj::util::optional<class osgeo::proj::datum::RealizationMethod> const &);

    // RVA: 0x2F6 | Ordinal: 759
        void realizationMethod(void) const;

    // RVA: 0x9E | Ordinal: 159
        void _VerticalReferenceFrame(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_VERTICALREFERENCEFRAME_HPP
