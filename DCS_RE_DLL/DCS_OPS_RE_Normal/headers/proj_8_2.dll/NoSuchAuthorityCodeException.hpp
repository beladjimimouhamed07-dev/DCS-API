#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: NoSuchAuthorityCodeException
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class NoSuchAuthorityCodeException
{
public:

    // RVA: 0x21 | Ordinal: 34
        void NoSuchAuthorityCodeException(class osgeo::proj::io::NoSuchAuthorityCodeException const &);

    // RVA: 0x22 | Ordinal: 35
        void NoSuchAuthorityCodeException(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x263 | Ordinal: 612
        void getAuthority(void) const;

    // RVA: 0x264 | Ordinal: 613
        void getAuthorityCode(void) const;

    // RVA: 0x7B | Ordinal: 124
        void _NoSuchAuthorityCodeException(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_NOSUCHAUTHORITYCODEEXCEPTION_HPP
