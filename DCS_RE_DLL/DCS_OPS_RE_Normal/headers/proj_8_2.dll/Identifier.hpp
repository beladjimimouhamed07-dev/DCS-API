#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: Identifier
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace metadata {

class Identifier
{
public:

    // RVA: 0x18 | Ordinal: 25
        void Identifier(class osgeo::proj::metadata::Identifier const &);

    // RVA: 0x12A | Ordinal: 299
        void authority(void) const;

    // RVA: 0x140 | Ordinal: 321
        void code(void) const;

    // RVA: 0x142 | Ordinal: 323
        void codeSpace(void) const;

    // RVA: 0x180 | Ordinal: 385
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x245 | Ordinal: 582
        void description(void) const;

    // RVA: 0x2A7 | Ordinal: 680
        void isEquivalentName(char const *, char const *);

    // RVA: 0x350 | Ordinal: 849
        void uri(void) const;

    // RVA: 0x35A | Ordinal: 859
        void version(void) const;

    // RVA: 0x71 | Ordinal: 114
        void _Identifier(void);
};

} // namespace metadata
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_IDENTIFIER_HPP
