#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: PROJStringParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class PROJStringParser
{
public:

    // RVA: 0x23 | Ordinal: 36
        void PROJStringParser(void);

    // RVA: 0x128 | Ordinal: 297
        void attachDatabaseContext(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &);

    // RVA: 0x1CE | Ordinal: 463
        void createFromPROJString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x324 | Ordinal: 805
        void setUsePROJ4InitRules(bool);

    // RVA: 0x35C | Ordinal: 861
        void warningList(void) const;

    // RVA: 0x83 | Ordinal: 132
        void _PROJStringParser(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PROJSTRINGPARSER_HPP
