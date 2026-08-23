#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVariantMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVariantMap
{
public:

    // RVA: 0x355 | Ordinal: 854
        void FXVariantMap(class FX::FXVariantMap const &);

    // RVA: 0x356 | Ordinal: 855
        void FXVariantMap(void);

    // RVA: 0x976 | Ordinal: 2423
        void adopt(class FX::FXVariantMap &);

    // RVA: 0xA3D | Ordinal: 2622
        void at(class FX::FXString const &);

    // RVA: 0xA3E | Ordinal: 2623
        void at(char const *);

    // RVA: 0xA3F | Ordinal: 2624
        void at(class FX::FXString const &) const;

    // RVA: 0xA40 | Ordinal: 2625
        void at(char const *) const;

    // RVA: 0xADC | Ordinal: 2781
        void clear(void);

    // RVA: 0xC22 | Ordinal: 3107
        void data(__int64) const;

    // RVA: 0xDFC | Ordinal: 3581
        void empty(void) const;

    // RVA: 0xDFD | Ordinal: 3582
        void empty(__int64) const;

    // RVA: 0xE3C | Ordinal: 3645
        void erase(__int64);

    // RVA: 0xF14 | Ordinal: 3861
        void find(class FX::FXString const &) const;

    // RVA: 0xF15 | Ordinal: 3862
        void find(char const *) const;

    // RVA: 0xF63 | Ordinal: 3940
        void free(__int64);

    // RVA: 0xF64 | Ordinal: 3941
        void free(void) const;

    // RVA: 0x1801 | Ordinal: 6146
        void has(class FX::FXString const &) const;

    // RVA: 0x1802 | Ordinal: 6147
        void has(char const *) const;

    // RVA: 0x1A18 | Ordinal: 6681
        void key(__int64) const;

    // RVA: 0x1F22 | Ordinal: 7971
        void no(__int64);

    // RVA: 0x1F23 | Ordinal: 7972
        void no(void) const;

    // RVA: 0x2744 | Ordinal: 10053
        void remove(class FX::FXString const &);

    // RVA: 0x2745 | Ordinal: 10054
        void remove(char const *);

    // RVA: 0x279C | Ordinal: 10141
        void resize(__int64);

    // RVA: 0x2F2D | Ordinal: 12078
        void used(__int64);

    // RVA: 0x2F2E | Ordinal: 12079
        void used(void) const;

    // RVA: 0x4E7 | Ordinal: 1256
        void _FXVariantMap(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVARIANTMAP_HPP
