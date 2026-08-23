#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: CheckedLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Lua {

class CheckedLoader
{
public:

    // RVA: 0x41 | Ordinal: 66
        void CheckedLoader(void);

    // RVA: 0x145 | Ordinal: 326
        void addCheckedFile(char const *, int);

    // RVA: 0x26C | Ordinal: 621
        void instance(void);

    // RVA: 0x28C | Ordinal: 653
        void loadFile(struct lua_State *, char const *, char const *);

    // RVA: 0x3DF | Ordinal: 992
        void tryLoadFile(struct lua_State *, char const *, char const *);

    // RVA: 0xAF | Ordinal: 176
        void _CheckedLoader(void);
};

} // namespace Lua

// DCS_OPS_RE_EDCORE.DLL_CHECKEDLOADER_HPP
