#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avADI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avADI
{
public:

    // RVA: 0x869 | Ordinal: 2154
        void SetCommand(int, float);

    // RVA: 0xB1 | Ordinal: 178
        void avADI(class cockpit::avADI const &);

    // RVA: 0xB2 | Ordinal: 179
        void avADI(void);

    // RVA: 0xEAE | Ordinal: 3759
        void get_bank(void) const;

    // RVA: 0xFFC | Ordinal: 4093
        void get_pitch(void) const;

    // RVA: 0x1093 | Ordinal: 4244
        void get_sideslip(void) const;

    // RVA: 0x1195 | Ordinal: 4502
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1303 | Ordinal: 4868
        void l_get_adi_bank(struct lua_State *);

    // RVA: 0x1304 | Ordinal: 4869
        void l_get_adi_pitch(struct lua_State *);

    // RVA: 0x1324 | Ordinal: 4901
        void l_get_slipball_sideslip(struct lua_State *);

    // RVA: 0x133B | Ordinal: 4924
        void l_metatable_name(void) const;

    // RVA: 0x1357 | Ordinal: 4952
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14C9 | Ordinal: 5322
        void post_initialize(void);

    // RVA: 0x1575 | Ordinal: 5494
        void read_gauges(class Lua::Config &);

    // RVA: 0x15A2 | Ordinal: 5539
        void release(void);

    // RVA: 0x1A93 | Ordinal: 6804
        void update(void);

    // RVA: 0x2D0 | Ordinal: 721
        void _avADI(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVADI_HPP
