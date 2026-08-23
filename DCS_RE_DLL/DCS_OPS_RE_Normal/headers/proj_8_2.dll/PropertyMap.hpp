#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: PropertyMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace util {

class PropertyMap
{
public:

    // RVA: 0x25 | Ordinal: 38
        void PropertyMap(class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x26 | Ordinal: 39
        void PropertyMap(void);

    // RVA: 0x305 | Ordinal: 774
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x306 | Ordinal: 775
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct osgeo::proj::util::BaseObjectNNPtr const &);

    // RVA: 0x307 | Ordinal: 776
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &);

    // RVA: 0x308 | Ordinal: 777
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int);

    // RVA: 0x309 | Ordinal: 778
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *);

    // RVA: 0x30A | Ordinal: 779
        void set(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool);

    // RVA: 0x8D | Ordinal: 142
        void _PropertyMap(void);
};

} // namespace util
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PROPERTYMAP_HPP
