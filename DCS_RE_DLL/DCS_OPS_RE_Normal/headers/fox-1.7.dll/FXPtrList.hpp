#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXPtrList
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXPtrList
{
public:

    // RVA: 0x258 | Ordinal: 601
        void FXPtrList(class FX::FXPtrList const &);

    // RVA: 0x259 | Ordinal: 602
        void FXPtrList(void **, __int64);

    // RVA: 0x25A | Ordinal: 603
        void FXPtrList(void *);

    // RVA: 0x25B | Ordinal: 604
        void FXPtrList(void *, __int64);

    // RVA: 0x25C | Ordinal: 605
        void FXPtrList(void);

    // RVA: 0x971 | Ordinal: 2418
        void adopt(class FX::FXPtrList &);

    // RVA: 0x9C6 | Ordinal: 2503
        void append(class FX::FXPtrList const &);

    // RVA: 0x9C7 | Ordinal: 2504
        void append(void **, __int64);

    // RVA: 0x9C8 | Ordinal: 2505
        void append(void *);

    // RVA: 0x9C9 | Ordinal: 2506
        void append(void *, __int64);

    // RVA: 0xA1A | Ordinal: 2587
        void assign(class FX::FXPtrList const &);

    // RVA: 0xA1B | Ordinal: 2588
        void assign(void **, __int64);

    // RVA: 0xA1C | Ordinal: 2589
        void assign(void *);

    // RVA: 0xA1D | Ordinal: 2590
        void assign(void *, __int64);

    // RVA: 0xA31 | Ordinal: 2610
        void at(__int64);

    // RVA: 0xA32 | Ordinal: 2611
        void at(__int64) const;

    // RVA: 0xAD4 | Ordinal: 2773
        void clear(void);

    // RVA: 0xC1C | Ordinal: 3101
        void data(void);

    // RVA: 0xC1D | Ordinal: 3102
        void data(void) const;

    // RVA: 0xE37 | Ordinal: 3640
        void erase(__int64, __int64);

    // RVA: 0xE38 | Ordinal: 3641
        void erase(__int64);

    // RVA: 0xF0A | Ordinal: 3851
        void find(void *, __int64) const;

    // RVA: 0x181D | Ordinal: 6174
        void head(void);

    // RVA: 0x181E | Ordinal: 6175
        void head(void) const;

    // RVA: 0x18AB | Ordinal: 6316
        void insert(__int64, class FX::FXPtrList const &);

    // RVA: 0x18AC | Ordinal: 6317
        void insert(__int64, void **, __int64);

    // RVA: 0x18AD | Ordinal: 6318
        void insert(__int64, void *, __int64);

    // RVA: 0x18AE | Ordinal: 6319
        void insert(__int64, void *);

    // RVA: 0x1F1A | Ordinal: 7963
        void no(__int64);

    // RVA: 0x1F1B | Ordinal: 7964
        void no(void) const;

    // RVA: 0x2680 | Ordinal: 9857
        void pop(void);

    // RVA: 0x26AC | Ordinal: 9901
        void prepend(class FX::FXPtrList const &);

    // RVA: 0x26AD | Ordinal: 9902
        void prepend(void **, __int64);

    // RVA: 0x26AE | Ordinal: 9903
        void prepend(void *);

    // RVA: 0x26AF | Ordinal: 9904
        void prepend(void *, __int64);

    // RVA: 0x26D3 | Ordinal: 9940
        void push(void *);

    // RVA: 0x2741 | Ordinal: 10050
        void remove(void *);

    // RVA: 0x2774 | Ordinal: 10101
        void replace(__int64, __int64, class FX::FXPtrList const &);

    // RVA: 0x2775 | Ordinal: 10102
        void replace(__int64, __int64, void **, __int64);

    // RVA: 0x2776 | Ordinal: 10103
        void replace(__int64, __int64, void *, __int64);

    // RVA: 0x2777 | Ordinal: 10104
        void replace(__int64, void *);

    // RVA: 0x27A8 | Ordinal: 10153
        void rfind(void *, __int64) const;

    // RVA: 0x2E8C | Ordinal: 11917
        void tail(void);

    // RVA: 0x2E8D | Ordinal: 11918
        void tail(void) const;

    // RVA: 0x485 | Ordinal: 1158
        void _FXPtrList(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXPTRLIST_HPP
