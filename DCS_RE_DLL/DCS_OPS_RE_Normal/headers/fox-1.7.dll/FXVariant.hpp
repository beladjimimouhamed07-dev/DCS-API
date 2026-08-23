#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXVariant>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXVariant_
{
public:

    // RVA: 0x96D | Ordinal: 2414
        void adopt(class FX::FXArray<class FX::FXVariant> &);

    // RVA: 0x9BC | Ordinal: 2493
        void append(class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0x9BD | Ordinal: 2494
        void append(class FX::FXVariant const &);

    // RVA: 0x9BE | Ordinal: 2495
        void append(class FX::FXVariant const &, __int64);

    // RVA: 0x9BF | Ordinal: 2496
        void append(class FX::FXVariant const *, __int64);

    // RVA: 0xA12 | Ordinal: 2579
        void assign(class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0xA13 | Ordinal: 2580
        void assign(class FX::FXVariant const &);

    // RVA: 0xA14 | Ordinal: 2581
        void assign(class FX::FXVariant const &, __int64);

    // RVA: 0xA15 | Ordinal: 2582
        void assign(class FX::FXVariant const *, __int64);

    // RVA: 0xA27 | Ordinal: 2600
        void at(__int64);

    // RVA: 0xA28 | Ordinal: 2601
        void at(__int64) const;

    // RVA: 0xACD | Ordinal: 2766
        void clear(void);

    // RVA: 0xC15 | Ordinal: 3094
        void data(void);

    // RVA: 0xC16 | Ordinal: 3095
        void data(void) const;

    // RVA: 0xE30 | Ordinal: 3633
        void erase(__int64, __int64);

    // RVA: 0xE31 | Ordinal: 3634
        void erase(__int64);

    // RVA: 0x1819 | Ordinal: 6170
        void head(void);

    // RVA: 0x181A | Ordinal: 6171
        void head(void) const;

    // RVA: 0x189C | Ordinal: 6301
        void insert(__int64, class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0x189D | Ordinal: 6302
        void insert(__int64, class FX::FXVariant const &, __int64);

    // RVA: 0x189E | Ordinal: 6303
        void insert(__int64, class FX::FXVariant const &);

    // RVA: 0x189F | Ordinal: 6304
        void insert(__int64, class FX::FXVariant const *, __int64);

    // RVA: 0x1F11 | Ordinal: 7954
        void no(__int64);

    // RVA: 0x1F12 | Ordinal: 7955
        void no(void) const;

    // RVA: 0x267E | Ordinal: 9855
        void pop(void);

    // RVA: 0x26A2 | Ordinal: 9891
        void prepend(class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0x26A3 | Ordinal: 9892
        void prepend(class FX::FXVariant const &);

    // RVA: 0x26A4 | Ordinal: 9893
        void prepend(class FX::FXVariant const &, __int64);

    // RVA: 0x26A5 | Ordinal: 9894
        void prepend(class FX::FXVariant const *, __int64);

    // RVA: 0x26D1 | Ordinal: 9938
        void push(class FX::FXVariant const &);

    // RVA: 0x276B | Ordinal: 10092
        void replace(__int64, __int64, class FX::FXArray<class FX::FXVariant> const &);

    // RVA: 0x276C | Ordinal: 10093
        void replace(__int64, __int64, class FX::FXVariant const &, __int64);

    // RVA: 0x276D | Ordinal: 10094
        void replace(__int64, __int64, class FX::FXVariant const *, __int64);

    // RVA: 0x276E | Ordinal: 10095
        void replace(__int64, class FX::FXVariant const &);

    // RVA: 0x2E88 | Ordinal: 11913
        void tail(void);

    // RVA: 0x2E89 | Ordinal: 11914
        void tail(void) const;
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXVARIANT_HPP
