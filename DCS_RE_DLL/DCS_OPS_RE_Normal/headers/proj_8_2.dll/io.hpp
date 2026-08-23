#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: io
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {

class io
{
public:

    // RVA: 0x1D0 | Ordinal: 465
        void createFromUserInput(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &, bool);

    // RVA: 0x1D1 | Ordinal: 466
        void createFromUserInput(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, struct pj_ctx *);
};

} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_IO_HPP
