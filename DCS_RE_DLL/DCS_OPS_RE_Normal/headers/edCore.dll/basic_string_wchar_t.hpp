#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: basic_string<wchar_t>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class basic_string_wchar_t_
{
public:

    // RVA: 0x153 | Ordinal: 340
        void appendf(wchar_t const *, ...);

    // RVA: 0x1C9 | Ordinal: 458
        void format(wchar_t const *, ...);

    // RVA: 0x353 | Ordinal: 852
        void replace_all(class ed::basic_string<wchar_t> const &, class ed::basic_string<wchar_t> const &);

    // RVA: 0x354 | Ordinal: 853
        void replace_all(class ed::basic_string<wchar_t> const &, wchar_t const *);

    // RVA: 0x355 | Ordinal: 854
        void replace_all(wchar_t const *, wchar_t const *);

    // RVA: 0x356 | Ordinal: 855
        void replace_all(wchar_t const *, class ed::basic_string<wchar_t> const &);

    // RVA: 0x357 | Ordinal: 856
        void replace_all(wchar_t, wchar_t);

    // RVA: 0x3FB | Ordinal: 1020
        void vappendf(wchar_t const *, char *);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_BASIC_STRING_WCHAR_T_HPP
