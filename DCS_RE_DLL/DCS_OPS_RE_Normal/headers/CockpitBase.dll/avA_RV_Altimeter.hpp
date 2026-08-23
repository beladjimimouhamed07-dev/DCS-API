#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avA_RV_Altimeter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avA_RV_Altimeter
{
public:

    // RVA: 0x847 | Ordinal: 2120
        void OnPowerOff(struct lwl::CSignalInfo const *);

    // RVA: 0x84C | Ordinal: 2125
        void OnPowerOn(struct lwl::CSignalInfo const *);

    // RVA: 0x86E | Ordinal: 2159
        void SetCommand(int, float);

    // RVA: 0xBE | Ordinal: 191
        void avA_RV_Altimeter(class cockpit::avA_RV_Altimeter const &);

    // RVA: 0xBF | Ordinal: 192
        void avA_RV_Altimeter(void);

    // RVA: 0xA33 | Ordinal: 2612
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xAB5 | Ordinal: 2742
        void clear(void);

    // RVA: 0xAF9 | Ordinal: 2810
        void connect_electric(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0xC7F | Ordinal: 3200
        void getDangerousHeight(void) const;

    // RVA: 0xC80 | Ordinal: 3201
        void getDangerousHeightFlag(void) const;

    // RVA: 0xD08 | Ordinal: 3337
        void getISdangerousHeightSound(void) const;

    // RVA: 0xD0A | Ordinal: 3339
        void getIndicatorAltitude(void) const;

    // RVA: 0xD27 | Ordinal: 3368
        void getLamp_DangerousHeightStatus(void) const;

    // RVA: 0xDAB | Ordinal: 3500
        void getRALT_warning_flag(void) const;

    // RVA: 0x119A | Ordinal: 4507
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x130D | Ordinal: 4878
        void l_get_dangerous_height(struct lua_State *);

    // RVA: 0x130E | Ordinal: 4879
        void l_get_dangerous_height_flag(struct lua_State *);

    // RVA: 0x1319 | Ordinal: 4890
        void l_get_needle_value(struct lua_State *);

    // RVA: 0x132D | Ordinal: 4910
        void l_get_warning_flag(struct lua_State *);

    // RVA: 0x1358 | Ordinal: 4953
        void l_register_functions(struct lua_State *, int);

    // RVA: 0x14CE | Ordinal: 5327
        void post_initialize(void);

    // RVA: 0x16E8 | Ordinal: 5865
        void setElecPower(bool);

    // RVA: 0x1A98 | Ordinal: 6809
        void update(void);

    // RVA: 0x2D7 | Ordinal: 728
        void _avA_RV_Altimeter(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVA_RV_ALTIMETER_HPP
