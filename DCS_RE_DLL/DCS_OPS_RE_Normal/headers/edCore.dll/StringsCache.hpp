#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: StringsCache
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class StringsCache
{
public:

    // RVA: 0x85 | Ordinal: 134
        void StringsCache(class ed::StringsCache &&);

    // RVA: 0x86 | Ordinal: 135
        void StringsCache(char const *, unsigned __int64);

    // RVA: 0x87 | Ordinal: 136
        void StringsCache(unsigned __int64);

    // RVA: 0x143 | Ordinal: 324
        void add(char const *);

    // RVA: 0x16B | Ordinal: 364
        void clear(void);

    // RVA: 0x1C2 | Ordinal: 451
        void find_or_add(char const *);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_STRINGSCACHE_HPP
