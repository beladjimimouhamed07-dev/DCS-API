#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avHSI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avHSI
{
public:

    // RVA: 0x84A | Ordinal: 2123
        void OnPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x87C | Ordinal: 2173
        void SetCommand(int, float);

    // RVA: 0x113 | Ordinal: 276
        void avHSI(class cockpit::avHSI const &);

    // RVA: 0x114 | Ordinal: 277
        void avHSI(void);

    // RVA: 0xC9B | Ordinal: 3228
        void getElecPower(void);

    // RVA: 0xF6D | Ordinal: 3950
        void get_heading(void) const;

    // RVA: 0x11B9 | Ordinal: 4538
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1313 | Ordinal: 4884
        void l_get_heading(struct lua_State *);

    // RVA: 0x1340 | Ordinal: 4929
        void l_metatable_name(void) const;

    // RVA: 0x1361 | Ordinal: 4962
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14E2 | Ordinal: 5347
        void post_initialize(void);

    // RVA: 0x305 | Ordinal: 774
        void _avHSI(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVHSI_HPP
