#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: defines
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace export4 {

class defines
{
public:

    // RVA: 0x150 | Ordinal: 337
        void addToNode(struct offshore::Scene &, int, class ed::basic_string<char> const &);

    // RVA: 0x151 | Ordinal: 338
        void addToNode(struct offshore::Scene &, int, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x152 | Ordinal: 339
        void addToString(class ed::basic_string<char> &, class ed::basic_string<char> const &);

    // RVA: 0x475 | Ordinal: 1142
        void join(class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> const &);

    // RVA: 0x4D0 | Ordinal: 1233
        void parseFromNode(struct offshore::Scene const &, int);

    // RVA: 0x4D1 | Ordinal: 1234
        void parseFromString(class ed::basic_string<char> const &);

    // RVA: 0x529 | Ordinal: 1322
        void removeFromNode(struct offshore::Scene &, int, class ed::basic_string<char> const &);

    // RVA: 0x52A | Ordinal: 1323
        void removeFromString(class ed::basic_string<char> &, class ed::basic_string<char> const &);
};

} // namespace export4

// DCS_OPS_RE_EDTERRAIN4.DLL_DEFINES_HPP
