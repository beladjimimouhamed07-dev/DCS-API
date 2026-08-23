#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDNS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDNS
{
public:

    // RVA: 0x76F | Ordinal: 1904
        void ChangeMode(enum cockpit::avDNS_modes);

    // RVA: 0x876 | Ordinal: 2167
        void SetCommand(int, float);

    // RVA: 0xEE | Ordinal: 239
        void avDNS(class cockpit::avDNS const &);

    // RVA: 0xEF | Ordinal: 240
        void avDNS(void);

    // RVA: 0xC9A | Ordinal: 3227
        void getElecPower(void) const;

    // RVA: 0xE28 | Ordinal: 3625
        void getTimeOfModeStart(void) const;

    // RVA: 0xE84 | Ordinal: 3717
        void get_W_scalar(void) const;

    // RVA: 0xE85 | Ordinal: 3718
        void get_W_vec_bframe(void) const;

    // RVA: 0xE86 | Ordinal: 3719
        void get_W_vec_ltp(void) const;

    // RVA: 0xF00 | Ordinal: 3841
        void get_d1(void);

    // RVA: 0xF01 | Ordinal: 3842
        void get_d2(void);

    // RVA: 0xF02 | Ordinal: 3843
        void get_d3(void);

    // RVA: 0xF03 | Ordinal: 3844
        void get_d4(void);

    // RVA: 0xF22 | Ordinal: 3875
        void get_drift_angle(void) const;

    // RVA: 0xFCE | Ordinal: 4047
        void get_mode(void);

    // RVA: 0x105D | Ordinal: 4190
        void get_rr(void) const;

    // RVA: 0x11B0 | Ordinal: 4529
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1310 | Ordinal: 4881
        void l_get_drift_angle(struct lua_State *);

    // RVA: 0x132C | Ordinal: 4909
        void l_get_w_vector(struct lua_State *);

    // RVA: 0x133D | Ordinal: 4926
        void l_metatable_name(void) const;

    // RVA: 0x135D | Ordinal: 4958
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14DB | Ordinal: 5340
        void post_initialize(void);

    // RVA: 0x1AA9 | Ordinal: 6826
        void update(void);

    // RVA: 0x1BA7 | Ordinal: 7080
        void zeroizeOutput(void);

    // RVA: 0x2F3 | Ordinal: 756
        void _avDNS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDNS_HPP
