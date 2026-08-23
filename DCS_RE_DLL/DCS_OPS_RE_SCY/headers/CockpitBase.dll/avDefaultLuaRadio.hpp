#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDefaultLuaRadio
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDefaultLuaRadio
{
public:

    // RVA: 0x831 | Ordinal: 2098
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x877 | Ordinal: 2168
        void SetCommand(int, float);

    // RVA: 0xF3 | Ordinal: 244
        void avDefaultLuaRadio(class cockpit::avDefaultLuaRadio &&);

    // RVA: 0xF4 | Ordinal: 245
        void avDefaultLuaRadio(class cockpit::avDefaultLuaRadio const &);

    // RVA: 0xF5 | Ordinal: 246
        void avDefaultLuaRadio(void);

    // RVA: 0xA37 | Ordinal: 2616
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x12DF | Ordinal: 4832
        void l_dlr_listen_event(struct lua_State *);

    // RVA: 0x12E0 | Ordinal: 4833
        void l_dlr_set_damage(struct lua_State *);

    // RVA: 0x1337 | Ordinal: 4920
        void l_make_default_activity(struct lua_State *);

    // RVA: 0x135E | Ordinal: 4959
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1590 | Ordinal: 5521
        void register_in_script(struct lua_State *);

    // RVA: 0x15AD | Ordinal: 5550
        void release(void);

    // RVA: 0x1858 | Ordinal: 6233
        void set_damage(unsigned int, bool);

    // RVA: 0x194F | Ordinal: 6480
        void set_timer(double);

    // RVA: 0x1AAA | Ordinal: 6827
        void update(void);

    // RVA: 0x2F5 | Ordinal: 758
        void _avDefaultLuaRadio(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDEFAULTLUARADIO_HPP
