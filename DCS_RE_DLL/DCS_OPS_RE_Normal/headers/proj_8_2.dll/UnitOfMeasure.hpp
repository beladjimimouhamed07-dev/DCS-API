#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: UnitOfMeasure
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace common {

class UnitOfMeasure
{
public:

    // RVA: 0x2C | Ordinal: 45
        void UnitOfMeasure(class osgeo::proj::common::UnitOfMeasure const &);

    // RVA: 0x2D | Ordinal: 46
        void UnitOfMeasure(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, double, enum osgeo::proj::common::UnitOfMeasure::Type, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x141 | Ordinal: 322
        void code(void) const;

    // RVA: 0x143 | Ordinal: 324
        void codeSpace(void) const;

    // RVA: 0x14B | Ordinal: 332
        void conversionToSI(void) const;

    // RVA: 0x2C2 | Ordinal: 707
        void name(void) const;

    // RVA: 0x34C | Ordinal: 845
        void type(void) const;

    // RVA: 0x99 | Ordinal: 154
        void _UnitOfMeasure(void);
};

} // namespace common
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_UNITOFMEASURE_HPP
