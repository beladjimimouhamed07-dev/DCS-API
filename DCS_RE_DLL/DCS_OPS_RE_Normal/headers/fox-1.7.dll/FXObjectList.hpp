#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXObjectList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXObjectList
{
public:

    // RVA: 0x22A | Ordinal: 555
        void FXObjectList(class FX::FXObjectList const &);

    // RVA: 0x22B | Ordinal: 556
        void FXObjectList(class FX::FXObject **, __int64);

    // RVA: 0x22C | Ordinal: 557
        void FXObjectList(class FX::FXObject *);

    // RVA: 0x22D | Ordinal: 558
        void FXObjectList(class FX::FXObject *, __int64);

    // RVA: 0x22E | Ordinal: 559
        void FXObjectList(void);

    // RVA: 0x970 | Ordinal: 2417
        void adopt(class FX::FXObjectList &);

    // RVA: 0x9C2 | Ordinal: 2499
        void append(class FX::FXObjectList const &);

    // RVA: 0x9C3 | Ordinal: 2500
        void append(class FX::FXObject **, __int64);

    // RVA: 0x9C4 | Ordinal: 2501
        void append(class FX::FXObject *);

    // RVA: 0x9C5 | Ordinal: 2502
        void append(class FX::FXObject *, __int64);

    // RVA: 0xA16 | Ordinal: 2583
        void assign(class FX::FXObjectList const &);

    // RVA: 0xA17 | Ordinal: 2584
        void assign(class FX::FXObject **, __int64);

    // RVA: 0xA18 | Ordinal: 2585
        void assign(class FX::FXObject *);

    // RVA: 0xA19 | Ordinal: 2586
        void assign(class FX::FXObject *, __int64);

    // RVA: 0xA2F | Ordinal: 2608
        void at(__int64);

    // RVA: 0xA30 | Ordinal: 2609
        void at(__int64) const;

    // RVA: 0xAD3 | Ordinal: 2772
        void clear(void);

    // RVA: 0xC1A | Ordinal: 3099
        void data(void);

    // RVA: 0xC1B | Ordinal: 3100
        void data(void) const;

    // RVA: 0xE35 | Ordinal: 3638
        void erase(__int64, __int64);

    // RVA: 0xE36 | Ordinal: 3639
        void erase(__int64);

    // RVA: 0xF09 | Ordinal: 3850
        void find(class FX::FXObject const *, __int64) const;

    // RVA: 0x181B | Ordinal: 6172
        void head(void);

    // RVA: 0x181C | Ordinal: 6173
        void head(void) const;

    // RVA: 0x18A7 | Ordinal: 6312
        void insert(__int64, class FX::FXObjectList const &);

    // RVA: 0x18A8 | Ordinal: 6313
        void insert(__int64, class FX::FXObject **, __int64);

    // RVA: 0x18A9 | Ordinal: 6314
        void insert(__int64, class FX::FXObject *, __int64);

    // RVA: 0x18AA | Ordinal: 6315
        void insert(__int64, class FX::FXObject *);

    // RVA: 0x1B14 | Ordinal: 6933
        void load(class FX::FXStream &);

    // RVA: 0x1F18 | Ordinal: 7961
        void no(__int64);

    // RVA: 0x1F19 | Ordinal: 7962
        void no(void) const;

    // RVA: 0x267F | Ordinal: 9856
        void pop(void);

    // RVA: 0x26A8 | Ordinal: 9897
        void prepend(class FX::FXObjectList const &);

    // RVA: 0x26A9 | Ordinal: 9898
        void prepend(class FX::FXObject **, __int64);

    // RVA: 0x26AA | Ordinal: 9899
        void prepend(class FX::FXObject *);

    // RVA: 0x26AB | Ordinal: 9900
        void prepend(class FX::FXObject *, __int64);

    // RVA: 0x26D2 | Ordinal: 9939
        void push(class FX::FXObject *);

    // RVA: 0x2740 | Ordinal: 10049
        void remove(class FX::FXObject const *);

    // RVA: 0x2770 | Ordinal: 10097
        void replace(__int64, __int64, class FX::FXObjectList const &);

    // RVA: 0x2771 | Ordinal: 10098
        void replace(__int64, __int64, class FX::FXObject **, __int64);

    // RVA: 0x2772 | Ordinal: 10099
        void replace(__int64, __int64, class FX::FXObject *, __int64);

    // RVA: 0x2773 | Ordinal: 10100
        void replace(__int64, class FX::FXObject *);

    // RVA: 0x27A7 | Ordinal: 10152
        void rfind(class FX::FXObject const *, __int64) const;

    // RVA: 0x2845 | Ordinal: 10310
        void save(class FX::FXStream &) const;

    // RVA: 0x2E8A | Ordinal: 11915
        void tail(void);

    // RVA: 0x2E8B | Ordinal: 11916
        void tail(void) const;

    // RVA: 0x472 | Ordinal: 1139
        void _FXObjectList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXOBJECTLIST_HPP
