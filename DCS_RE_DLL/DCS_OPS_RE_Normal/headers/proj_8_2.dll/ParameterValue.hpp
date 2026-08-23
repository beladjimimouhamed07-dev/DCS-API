#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: ParameterValue
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class ParameterValue
{
public:

    // RVA: 0x137 | Ordinal: 312
        void booleanValue(void) const;

    // RVA: 0x18A | Ordinal: 395
        void create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x18B | Ordinal: 396
        void create(class osgeo::proj::common::Measure const &);

    // RVA: 0x18C | Ordinal: 397
        void create(int);

    // RVA: 0x18D | Ordinal: 398
        void create(char const *);

    // RVA: 0x18E | Ordinal: 399
        void create(bool);

    // RVA: 0x1C6 | Ordinal: 455
        void createFilename(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x29A | Ordinal: 667
        void integerValue(void) const;

    // RVA: 0x337 | Ordinal: 824
        void stringValue(void) const;

    // RVA: 0x34B | Ordinal: 844
        void type(void) const;

    // RVA: 0x353 | Ordinal: 852
        void value(void) const;

    // RVA: 0x356 | Ordinal: 855
        void valueFile(void) const;

    // RVA: 0x84 | Ordinal: 133
        void _ParameterValue(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_PARAMETERVALUE_HPP
