#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: JSONFormatter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class JSONFormatter
{
public:

    // RVA: 0x181 | Ordinal: 386
        void create(class std::shared_ptr<class osgeo::proj::io::DatabaseContext>);

    // RVA: 0x314 | Ordinal: 789
        void setIndentationWidth(int);

    // RVA: 0x319 | Ordinal: 794
        void setMultiLine(bool);

    // RVA: 0x31E | Ordinal: 799
        void setSchema(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x343 | Ordinal: 836
        void toString(void) const;

    // RVA: 0x75 | Ordinal: 118
        void _JSONFormatter(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_JSONFORMATTER_HPP
