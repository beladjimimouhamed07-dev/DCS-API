#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDictionary
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDictionary
{
public:

    // RVA: 0xCE | Ordinal: 207
        void FXDictionary(class FX::FXDictionary const &);

    // RVA: 0xCF | Ordinal: 208
        void FXDictionary(void);

    // RVA: 0x96E | Ordinal: 2415
        void adopt(class FX::FXDictionary &);

    // RVA: 0xA29 | Ordinal: 2602
        void at(class FX::FXString const &);

    // RVA: 0xA2A | Ordinal: 2603
        void at(char const *);

    // RVA: 0xA2B | Ordinal: 2604
        void at(class FX::FXString const &) const;

    // RVA: 0xA2C | Ordinal: 2605
        void at(char const *) const;

    // RVA: 0xACE | Ordinal: 2767
        void clear(void);

    // RVA: 0xC17 | Ordinal: 3096
        void data(__int64);

    // RVA: 0xC18 | Ordinal: 3097
        void data(__int64) const;

    // RVA: 0xDE8 | Ordinal: 3561
        void empty(void) const;

    // RVA: 0xDE9 | Ordinal: 3562
        void empty(__int64) const;

    // RVA: 0xE32 | Ordinal: 3635
        void erase(__int64);

    // RVA: 0xF04 | Ordinal: 3845
        void find(class FX::FXString const &) const;

    // RVA: 0xF05 | Ordinal: 3846
        void find(char const *) const;

    // RVA: 0xF5B | Ordinal: 3932
        void free(__int64);

    // RVA: 0xF5C | Ordinal: 3933
        void free(void) const;

    // RVA: 0x17FB | Ordinal: 6140
        void has(class FX::FXString const &) const;

    // RVA: 0x17FC | Ordinal: 6141
        void has(char const *) const;

    // RVA: 0x18A0 | Ordinal: 6305
        void insert(class FX::FXString const &, void *);

    // RVA: 0x18A1 | Ordinal: 6306
        void insert(char const *, void *);

    // RVA: 0x1A13 | Ordinal: 6676
        void key(__int64) const;

    // RVA: 0x1F13 | Ordinal: 7956
        void no(__int64);

    // RVA: 0x1F14 | Ordinal: 7957
        void no(void) const;

    // RVA: 0x2738 | Ordinal: 10041
        void remove(class FX::FXString const &);

    // RVA: 0x2739 | Ordinal: 10042
        void remove(char const *);

    // RVA: 0x2790 | Ordinal: 10129
        void resize(__int64);

    // RVA: 0x2F25 | Ordinal: 12070
        void used(__int64);

    // RVA: 0x2F26 | Ordinal: 12071
        void used(void) const;

    // RVA: 0x3EE | Ordinal: 1007
        void _FXDictionary(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDICTIONARY_HPP
