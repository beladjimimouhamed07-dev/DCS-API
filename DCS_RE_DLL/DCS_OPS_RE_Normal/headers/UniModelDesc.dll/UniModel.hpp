#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: UniModel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class UniModel
{
public:

    // RVA: 0xA | Ordinal: 11
        void UniModel(void);

    // RVA: 0x1C | Ordinal: 29
        void addEdmFromFile(char const *);

    // RVA: 0x5F | Ordinal: 96
        void getBBox(void) const;

    // RVA: 0x77 | Ordinal: 120
        void getLightBox(void) const;

    // RVA: 0x7F | Ordinal: 128
        void getLodsList(void);

    // RVA: 0xA4 | Ordinal: 165
        void getUserBox(void) const;

    // RVA: 0xBB | Ordinal: 188
        void isSingleEdm(void) const;

    // RVA: 0xDD | Ordinal: 222
        void open(char const *, class std::unordered_map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::hash<class ed::basic_string<char>>, struct std::equal_to<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const *);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_UNIMODEL_HPP
