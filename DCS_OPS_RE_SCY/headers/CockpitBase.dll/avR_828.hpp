#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avR_828
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avR_828
{
public:

    // RVA: 0x892 | Ordinal: 2195
        void SetCommand(int, float);

    // RVA: 0x182 | Ordinal: 387
        void avR_828(class cockpit::avR_828 const &);

    // RVA: 0x183 | Ordinal: 388
        void avR_828(void);

    // RVA: 0xA2A | Ordinal: 2603
        void checkASU(void) const;

    // RVA: 0xA3F | Ordinal: 2624
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xAFB | Ordinal: 2812
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xBD7 | Ordinal: 3032
        void ext_set_channel(int);

    // RVA: 0xDCE | Ordinal: 3535
        void getSearchLampStatus(void) const;

    // RVA: 0x1086 | Ordinal: 4231
        void get_set_frequency(void) const;

    // RVA: 0x11DE | Ordinal: 4575
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1341 | Ordinal: 4930
        void l_metatable_name(void) const;

    // RVA: 0x13A8 | Ordinal: 5033
        void load_dials(class Lua::Config &);

    // RVA: 0x13B4 | Ordinal: 5045
        void load_presets(void);

    // RVA: 0x14A5 | Ordinal: 5286
        void perform_init_state(void);

    // RVA: 0x164D | Ordinal: 5710
        void save_dials(void) const;

    // RVA: 0x17A8 | Ordinal: 6057
        void setSearchLampStatus(bool);

    // RVA: 0x1912 | Ordinal: 6419
        void set_preset_channel(unsigned int);

    // RVA: 0x1A18 | Ordinal: 6681
        void switchASU(bool);

    // RVA: 0x1A63 | Ordinal: 6756
        void tuning_finished(void);

    // RVA: 0x339 | Ordinal: 826
        void _avR_828(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVR_828_HPP
