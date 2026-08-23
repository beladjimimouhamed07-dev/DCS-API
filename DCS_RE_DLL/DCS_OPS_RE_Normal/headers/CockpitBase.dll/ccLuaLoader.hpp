#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccLuaLoader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccLuaLoader
{
public:

    // RVA: 0x7FD | Ordinal: 2046
        void LuaDofile(struct lua_State *, class ed::basic_string<char> const &, bool);

    // RVA: 0x972 | Ordinal: 2419
        void bind_options(struct lua_State *);

    // RVA: 0xC1B | Ordinal: 3100
        void freeSharedStates(void);

    // RVA: 0x12DD | Ordinal: 4830
        void l_check_metatable(struct lua_State *, char const *);

    // RVA: 0x1486 | Ordinal: 5255
        void open(char const *, bool);

    // RVA: 0x1554 | Ordinal: 5461
        void querySharedState(enum cockpit::sharedStatesEnum, bool *);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCLUALOADER_HPP
