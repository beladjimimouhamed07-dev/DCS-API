#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleRWR
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleRWR
{
public:

    // RVA: 0x1AF | Ordinal: 432
        void avSimpleRWR(void);

    // RVA: 0xCA1 | Ordinal: 3234
        void getElecPower(void) const;

    // RVA: 0x11F0 | Ordinal: 4593
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x131D | Ordinal: 4894
        void l_get_power(struct lua_State *);

    // RVA: 0x1368 | Ordinal: 4969
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x136E | Ordinal: 4975
        void l_reset(struct lua_State *);

    // RVA: 0x1379 | Ordinal: 4986
        void l_set_power(struct lua_State *);

    // RVA: 0x14F8 | Ordinal: 5369
        void post_initialize(void);

    // RVA: 0x16F5 | Ordinal: 5878
        void setElecPower(bool);

    // RVA: 0x1AD8 | Ordinal: 6873
        void update(void);

    // RVA: 0x1B5F | Ordinal: 7008
        void update_export(void);

    // RVA: 0x350 | Ordinal: 849
        void _avSimpleRWR(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLERWR_HPP
