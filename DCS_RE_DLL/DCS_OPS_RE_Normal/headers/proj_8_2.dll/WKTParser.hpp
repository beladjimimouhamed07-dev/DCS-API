#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: WKTParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class WKTParser
{
public:

    // RVA: 0x31 | Ordinal: 50
        void WKTParser(void);

    // RVA: 0x129 | Ordinal: 298
        void attachDatabaseContext(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &);

    // RVA: 0x1D2 | Ordinal: 467
        void createFromWKT(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x28C | Ordinal: 653
        void guessDialect(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x322 | Ordinal: 803
        void setStrict(bool);

    // RVA: 0x35D | Ordinal: 862
        void warningList(void) const;

    // RVA: 0xA3 | Ordinal: 164
        void _WKTParser(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_WKTPARSER_HPP
