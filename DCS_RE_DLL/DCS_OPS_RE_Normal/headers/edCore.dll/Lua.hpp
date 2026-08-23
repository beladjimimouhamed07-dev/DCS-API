#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Lua
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {
namespace syntax_highlight {

class Lua
{
public:

    // RVA: 0x274 | Ordinal: 629
        void isBuiltin(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x277 | Ordinal: 632
        void isKeyword(class std::basic_string_view<wchar_t, struct std::char_traits<wchar_t>>);

    // RVA: 0x2F5 | Ordinal: 758
        void printTraceback(struct lua_State *);

    // RVA: 0x2F7 | Ordinal: 760
        void printTracebackToString(struct lua_State *);

    // RVA: 0x3CF | Ordinal: 976
        void to_string(struct lua_State *, int, unsigned int);

    // RVA: 0x3DA | Ordinal: 987
        void to_string_compact(struct lua_State *, int, unsigned int);
};

} // namespace syntax_highlight
} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_LUA_HPP
