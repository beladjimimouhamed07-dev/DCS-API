#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSimpleElectricSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSimpleElectricSystem
{
public:

    // RVA: 0x1AB | Ordinal: 428
        void avSimpleElectricSystem(class cockpit::avSimpleElectricSystem const &);

    // RVA: 0x1AC | Ordinal: 429
        void avSimpleElectricSystem(void);

    // RVA: 0xC2F | Ordinal: 3120
        void get(void);

    // RVA: 0xC34 | Ordinal: 3125
        void getACbus(int);

    // RVA: 0xC7D | Ordinal: 3198
        void getDCbus(int);

    // RVA: 0x11EE | Ordinal: 4591
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x12D5 | Ordinal: 4822
        void l_AC_Generator_1_on(struct lua_State *);

    // RVA: 0x12D6 | Ordinal: 4823
        void l_AC_Generator_2_on(struct lua_State *);

    // RVA: 0x12D7 | Ordinal: 4824
        void l_DC_Battery_on(struct lua_State *);

    // RVA: 0x12FD | Ordinal: 4862
        void l_get_AC_Bus_1_voltage(struct lua_State *);

    // RVA: 0x12FE | Ordinal: 4863
        void l_get_AC_Bus_2_voltage(struct lua_State *);

    // RVA: 0x12FF | Ordinal: 4864
        void l_get_DC_Bus_1_voltage(struct lua_State *);

    // RVA: 0x1300 | Ordinal: 4865
        void l_get_DC_Bus_2_voltage(struct lua_State *);

    // RVA: 0x1367 | Ordinal: 4968
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14F7 | Ordinal: 5368
        void post_initialize(void);

    // RVA: 0x1A19 | Ordinal: 6682
        void switchBattery(bool);

    // RVA: 0x1A1C | Ordinal: 6685
        void switchGenerator(bool, int);

    // RVA: 0x1AD6 | Ordinal: 6871
        void update(void);

    // RVA: 0x34E | Ordinal: 847
        void _avSimpleElectricSystem(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSIMPLEELECTRICSYSTEM_HPP
