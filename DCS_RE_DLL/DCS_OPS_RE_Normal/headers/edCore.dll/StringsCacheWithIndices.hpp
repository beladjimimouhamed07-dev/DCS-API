#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: StringsCacheWithIndices
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class StringsCacheWithIndices
{
public:

    // RVA: 0x89 | Ordinal: 138
        void StringsCacheWithIndices(class ed::StringsCacheWithIndices &&);

    // RVA: 0x8A | Ordinal: 139
        void StringsCacheWithIndices(char const *, unsigned __int64);

    // RVA: 0x8B | Ordinal: 140
        void StringsCacheWithIndices(unsigned __int64);

    // RVA: 0x144 | Ordinal: 325
        void add(char const *);

    // RVA: 0x13F | Ordinal: 320
        void add2(char const *);

    // RVA: 0x16D | Ordinal: 366
        void clear(void);

    // RVA: 0x1E1 | Ordinal: 482
        void get(unsigned __int64) const;
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_STRINGSCACHEWITHINDICES_HPP
