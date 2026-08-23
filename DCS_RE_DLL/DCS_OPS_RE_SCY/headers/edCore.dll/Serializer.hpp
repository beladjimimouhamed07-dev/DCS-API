#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Serializer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Lua {

class Serializer
{
public:

    // RVA: 0x83 | Ordinal: 132
        void Serializer(char const *);

    // RVA: 0x36F | Ordinal: 880
        void serialize(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0xCE | Ordinal: 207
        void _Serializer(void);
};

} // namespace Lua

// DCS_OPS_RE_EDCORE.DLL_SERIALIZER_HPP
