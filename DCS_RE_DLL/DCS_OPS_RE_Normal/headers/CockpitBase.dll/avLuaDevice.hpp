#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avLuaDevice
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avLuaDevice
{
public:

    // RVA: 0x837 | Ordinal: 2104
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x889 | Ordinal: 2186
        void SetCommand(int, float);

    // RVA: 0x14B | Ordinal: 332
        void avLuaDevice(class cockpit::avLuaDevice const &);

    // RVA: 0x14C | Ordinal: 333
        void avLuaDevice(void);

    // RVA: 0xA3E | Ordinal: 2623
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x11CE | Ordinal: 4559
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1338 | Ordinal: 4921
        void l_make_default_activity(struct lua_State *);

    // RVA: 0x1364 | Ordinal: 4965
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x1375 | Ordinal: 4982
        void l_set_damage(struct lua_State *);

    // RVA: 0x1592 | Ordinal: 5523
        void register_in_script(struct lua_State *);

    // RVA: 0x15B9 | Ordinal: 5562
        void release(void);

    // RVA: 0x15F8 | Ordinal: 5625
        void repair(void);

    // RVA: 0x185B | Ordinal: 6236
        void set_damage(unsigned int, bool);

    // RVA: 0x1950 | Ordinal: 6481
        void set_timer(double);

    // RVA: 0x1ABD | Ordinal: 6846
        void update(void);

    // RVA: 0x320 | Ordinal: 801
        void _avLuaDevice(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVLUADEVICE_HPP
