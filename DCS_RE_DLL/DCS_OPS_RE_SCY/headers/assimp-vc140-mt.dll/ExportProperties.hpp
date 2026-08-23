#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: ExportProperties
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class ExportProperties
{
public:

    // RVA: 0x16 | Ordinal: 23
        void ExportProperties(class Assimp::ExportProperties const &);

    // RVA: 0x17 | Ordinal: 24
        void ExportProperties(void);

    // RVA: 0x1AE | Ordinal: 431
        void GetPropertyBool(char const *, bool) const;

    // RVA: 0x1B0 | Ordinal: 433
        void GetPropertyFloat(char const *, float) const;

    // RVA: 0x1B2 | Ordinal: 435
        void GetPropertyInteger(char const *, int) const;

    // RVA: 0x1B4 | Ordinal: 437
        void GetPropertyMatrix(char const *, class aiMatrix4x4t<float> const &) const;

    // RVA: 0x1B6 | Ordinal: 439
        void GetPropertyString(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1BF | Ordinal: 448
        void HasPropertyBool(char const *) const;

    // RVA: 0x1C0 | Ordinal: 449
        void HasPropertyFloat(char const *) const;

    // RVA: 0x1C1 | Ordinal: 450
        void HasPropertyInteger(char const *) const;

    // RVA: 0x1C2 | Ordinal: 451
        void HasPropertyMatrix(char const *) const;

    // RVA: 0x1C3 | Ordinal: 452
        void HasPropertyString(char const *) const;

    // RVA: 0x235 | Ordinal: 566
        void SetPropertyBool(char const *, bool);

    // RVA: 0x237 | Ordinal: 568
        void SetPropertyFloat(char const *, float);

    // RVA: 0x239 | Ordinal: 570
        void SetPropertyInteger(char const *, int);

    // RVA: 0x23B | Ordinal: 572
        void SetPropertyMatrix(char const *, class aiMatrix4x4t<float> const &);

    // RVA: 0x23D | Ordinal: 574
        void SetPropertyString(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x7D | Ordinal: 126
        void _ExportProperties(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_EXPORTPROPERTIES_HPP
