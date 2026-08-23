#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBaseARC
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBaseARC
{
public:

    // RVA: 0xCE | Ordinal: 207
        void avBaseARC(enum cockpit::ADF_Range);

    // RVA: 0xB06 | Ordinal: 2823
        void connect_sound(void);

    // RVA: 0xBC4 | Ordinal: 3013
        void electric_commutation(void);

    // RVA: 0xC94 | Ordinal: 3221
        void getElecPower(void) const;

    // RVA: 0xDF3 | Ordinal: 3572
        void getSoundElement(void);

    // RVA: 0xE8C | Ordinal: 3725
        void get_adf_bearing(void) const;

    // RVA: 0xFAE | Ordinal: 4015
        void get_loop_signal_volume(void) const;

    // RVA: 0xFB2 | Ordinal: 4019
        void get_magnetic_bearing(void) const;

    // RVA: 0x109A | Ordinal: 4251
        void get_signal_strength(void) const;

    // RVA: 0x11A2 | Ordinal: 4515
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x12A9 | Ordinal: 4778
        void is_bearing_valid(void) const;

    // RVA: 0x146A | Ordinal: 5227
        void on_frequency_changed(void);

    // RVA: 0x1477 | Ordinal: 5240
        void on_power_off(struct lwl::CSignalInfo const *);

    // RVA: 0x147A | Ordinal: 5243
        void on_power_on(struct lwl::CSignalInfo const *);

    // RVA: 0x14D2 | Ordinal: 5331
        void post_initialize(void);

    // RVA: 0x15A7 | Ordinal: 5544
        void release(void);

    // RVA: 0x15F1 | Ordinal: 5618
        void repair(void);

    // RVA: 0x16E9 | Ordinal: 5866
        void setElecPower(bool);

    // RVA: 0x1854 | Ordinal: 6229
        void set_damage(unsigned int, bool);

    // RVA: 0x18E2 | Ordinal: 6371
        void set_mode(unsigned char);

    // RVA: 0x196C | Ordinal: 6509
        void set_volume(float);

    // RVA: 0x1995 | Ordinal: 6550
        void simulate_loop_antenna(double);

    // RVA: 0x1996 | Ordinal: 6551
        void simulate_signal_strength(double);

    // RVA: 0x1AA0 | Ordinal: 6817
        void update(void);

    // RVA: 0x1B67 | Ordinal: 7016
        void update_frequency(void);

    // RVA: 0x2E2 | Ordinal: 739
        void _avBaseARC(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASEARC_HPP
