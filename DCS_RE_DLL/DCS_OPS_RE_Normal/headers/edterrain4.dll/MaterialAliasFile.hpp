#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: MaterialAliasFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class MaterialAliasFile
{
public:

    // RVA: 0xC | Ordinal: 13
        void MaterialAliasFile(void);

    // RVA: 0x12C | Ordinal: 301
        void Open(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x12D | Ordinal: 302
        void Open(char const *, char const *, char const *, char const *, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x28F | Ordinal: 656
        void getAlias(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x290 | Ordinal: 657
        void getAlias(char const *, char const *);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_MATERIALALIASFILE_HPP
