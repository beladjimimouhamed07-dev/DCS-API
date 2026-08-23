#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: GeodeticReferenceFrame
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class GeodeticReferenceFrame
{
public:

    // RVA: 0x17C | Ordinal: 381
        void create(class osgeo::proj::util::PropertyMap const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::Ellipsoid>> const &, class osgeo::proj::util::optional<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::PrimeMeridian>> const &);

    // RVA: 0x24C | Ordinal: 589
        void ellipsoid(void) const;

    // RVA: 0x2EE | Ordinal: 751
        void primeMeridian(void) const;

    // RVA: 0x64 | Ordinal: 101
        void _GeodeticReferenceFrame(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_GEODETICREFERENCEFRAME_HPP
