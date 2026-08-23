#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: internal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class internal
{
public:

    // RVA: 0x138 | Ordinal: 313
        void c_locale_stod(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x13D | Ordinal: 318
        void ci_equal(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x13E | Ordinal: 319
        void ci_equal(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *);

    // RVA: 0x13F | Ordinal: 320
        void ci_find(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *);

    // RVA: 0x2FE | Ordinal: 767
        void replaceAll(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x32E | Ordinal: 815
        void split(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x32F | Ordinal: 816
        void split(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char);

    // RVA: 0x348 | Ordinal: 841
        void toString(double, int);

    // RVA: 0x349 | Ordinal: 842
        void tolower(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_INTERNAL_HPP
