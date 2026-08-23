#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: lBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace landscape4 {

class lBlock
{
public:

    // RVA: 0x481 | Ordinal: 1154
        void load(class io::MmfStream &);

    // RVA: 0x482 | Ordinal: 1155
        void load(class ed::basic_string<char> const &);

    // RVA: 0x483 | Ordinal: 1156
        void load(char const *);

    // RVA: 0x53F | Ordinal: 1344
        void save(class ed::basic_string<char> const &);

    // RVA: 0x540 | Ordinal: 1345
        void save(char const *);
};

} // namespace landscape4

// DCS_OPS_RE_EDTERRAIN4.DLL_LBLOCK_HPP
