#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: LuaCoroutine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class LuaCoroutine
{
public:

    // RVA: 0x67 | Ordinal: 104
        void LuaCoroutine(struct lua_State *, unsigned int);

    // RVA: 0x821 | Ordinal: 2082
        void NextEvent(void);

    // RVA: 0x943 | Ordinal: 2372
        void allive(void);

    // RVA: 0xB2E | Ordinal: 2863
        void create(struct lua_State *);

    // RVA: 0x12A7 | Ordinal: 4776
        void is_allive(class cockpit::LuaCoroutine *);

    // RVA: 0x1317 | Ordinal: 4888
        void l_get_model_time(struct lua_State *);

    // RVA: 0x1321 | Ordinal: 4898
        void l_get_self(struct lua_State *);

    // RVA: 0x1333 | Ordinal: 4916
        void l_kill_me(struct lua_State *);

    // RVA: 0x1377 | Ordinal: 4984
        void l_set_metatable(struct lua_State *);

    // RVA: 0x137E | Ordinal: 4991
        void l_start(struct lua_State *);

    // RVA: 0x158F | Ordinal: 5520
        void register_in_script(struct lua_State *);

    // RVA: 0x2AF | Ordinal: 688
        void _LuaCoroutine(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_LUACOROUTINE_HPP
