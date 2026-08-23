#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: DynamicLibrary
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class DynamicLibrary
{
public:

    // RVA: 0x20A | Ordinal: 523
        void getProcAddress(char const *);

    // RVA: 0x28A | Ordinal: 651
        void load(class ed::basic_string<char> const &);

    // RVA: 0x2B7 | Ordinal: 696
        void nativeName(void);

    // RVA: 0x3E9 | Ordinal: 1002
        void unload(void);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_DYNAMICLIBRARY_HPP
