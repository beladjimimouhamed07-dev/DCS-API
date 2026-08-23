#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: StringsCacheFast
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class StringsCacheFast
{
public:

    // RVA: 0x88 | Ordinal: 137
        void StringsCacheFast(unsigned __int64, unsigned __int64, unsigned __int64);

    // RVA: 0x14C | Ordinal: 333
        void addStringToCache(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x16C | Ordinal: 365
        void clear(void);

    // RVA: 0x358 | Ordinal: 857
        void reserve(unsigned __int64);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_STRINGSCACHEFAST_HPP
