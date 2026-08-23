#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DateTime
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace common {

class DateTime
{
public:

    // RVA: 0xC | Ordinal: 13
        void DateTime(class osgeo::proj::common::DateTime const &);

    // RVA: 0x169 | Ordinal: 362
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2AB | Ordinal: 684
        void isISO_8601(void) const;

    // RVA: 0x342 | Ordinal: 835
        void toString(void) const;

    // RVA: 0x4A | Ordinal: 75
        void _DateTime(void);
};

} // namespace common
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DATETIME_HPP
