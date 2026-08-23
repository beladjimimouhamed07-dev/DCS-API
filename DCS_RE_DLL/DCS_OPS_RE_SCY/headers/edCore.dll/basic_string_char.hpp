#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: basic_string<char>
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class basic_string_char_
{
public:

    // RVA: 0x152 | Ordinal: 339
        void appendf(char const *, ...);

    // RVA: 0x1C8 | Ordinal: 457
        void format(char const *, ...);

    // RVA: 0x34E | Ordinal: 847
        void replace_all(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x34F | Ordinal: 848
        void replace_all(class ed::basic_string<char> const &, char const *);

    // RVA: 0x350 | Ordinal: 849
        void replace_all(char, char);

    // RVA: 0x351 | Ordinal: 850
        void replace_all(char const *, char const *);

    // RVA: 0x352 | Ordinal: 851
        void replace_all(char const *, class ed::basic_string<char> const &);

    // RVA: 0x3FA | Ordinal: 1019
        void vappendf(char const *, char *);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_BASIC_STRING_CHAR_HPP
