#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXStringDictionary
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXStringDictionary
{
public:

    // RVA: 0x2F7 | Ordinal: 760
        void FXStringDictionary(class FX::FXStringDictionary const &);

    // RVA: 0x2F8 | Ordinal: 761
        void FXStringDictionary(void);

    // RVA: 0x974 | Ordinal: 2421
        void adopt(class FX::FXStringDictionary &);

    // RVA: 0xA39 | Ordinal: 2618
        void at(class FX::FXString const &, bool);

    // RVA: 0xA3A | Ordinal: 2619
        void at(char const *, bool);

    // RVA: 0xA3B | Ordinal: 2620
        void at(class FX::FXString const &) const;

    // RVA: 0xA3C | Ordinal: 2621
        void at(char const *) const;

    // RVA: 0xAD9 | Ordinal: 2778
        void clear(void);

    // RVA: 0xC20 | Ordinal: 3105
        void data(__int64);

    // RVA: 0xC21 | Ordinal: 3106
        void data(__int64) const;

    // RVA: 0xDFA | Ordinal: 3579
        void empty(void) const;

    // RVA: 0xDFB | Ordinal: 3580
        void empty(__int64) const;

    // RVA: 0xE3B | Ordinal: 3644
        void erase(__int64);

    // RVA: 0xF12 | Ordinal: 3859
        void find(class FX::FXString const &) const;

    // RVA: 0xF13 | Ordinal: 3860
        void find(char const *) const;

    // RVA: 0xF61 | Ordinal: 3938
        void free(__int64);

    // RVA: 0xF62 | Ordinal: 3939
        void free(void) const;

    // RVA: 0x17FD | Ordinal: 6142
        void has(class FX::FXString const &) const;

    // RVA: 0x17FE | Ordinal: 6143
        void has(char const *) const;

    // RVA: 0x18B8 | Ordinal: 6329
        void insert(class FX::FXString const &, class FX::FXString const &, bool);

    // RVA: 0x18B9 | Ordinal: 6330
        void insert(class FX::FXString const &, char const *, bool);

    // RVA: 0x18BA | Ordinal: 6331
        void insert(char const *, char const *, bool);

    // RVA: 0x1A17 | Ordinal: 6680
        void key(__int64) const;

    // RVA: 0x1CB6 | Ordinal: 7351
        void mark(__int64) const;

    // RVA: 0x1F1E | Ordinal: 7967
        void no(__int64);

    // RVA: 0x1F1F | Ordinal: 7968
        void no(void) const;

    // RVA: 0x2742 | Ordinal: 10051
        void remove(class FX::FXString const &);

    // RVA: 0x2743 | Ordinal: 10052
        void remove(char const *);

    // RVA: 0x279A | Ordinal: 10139
        void resize(__int64);

    // RVA: 0x2F2B | Ordinal: 12076
        void used(__int64);

    // RVA: 0x2F2C | Ordinal: 12077
        void used(void) const;

    // RVA: 0x4BF | Ordinal: 1216
        void _FXStringDictionary(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSTRINGDICTIONARY_HPP
