#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avUV_26
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avUV_26
{
public:

    // RVA: 0x89E | Ordinal: 2207
        void SetCommand(int, float);

    // RVA: 0x8EC | Ordinal: 2285
        void activateProgram(void);

    // RVA: 0x1D1 | Ordinal: 466
        void avUV_26(class cockpit::avUV_26 const &);

    // RVA: 0x1D2 | Ordinal: 467
        void avUV_26(void);

    // RVA: 0x9F5 | Ordinal: 2550
        void cancel_program(void);

    // RVA: 0xA1E | Ordinal: 2591
        void change_lamps_status(void);

    // RVA: 0xAE7 | Ordinal: 2792
        void complete_reset(void);

    // RVA: 0xAFE | Ordinal: 2815
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xB75 | Ordinal: 2934
        void dispenser_reset(void);

    // RVA: 0xC4E | Ordinal: 3151
        void getBITPower(void) const;

    // RVA: 0xCA4 | Ordinal: 3237
        void getElecPower(void) const;

    // RVA: 0xD32 | Ordinal: 3379
        void getLeftLampStatus(void) const;

    // RVA: 0xDC2 | Ordinal: 3523
        void getRightLampStatus(void) const;

    // RVA: 0xEF4 | Ordinal: 3829
        void get_current_board(void) const;

    // RVA: 0xFD4 | Ordinal: 4053
        void get_mode_of_indication(void) const;

    // RVA: 0xFDA | Ordinal: 4059
        void get_nFlare(unsigned int) const;

    // RVA: 0x1031 | Ordinal: 4146
        void get_program(void) const;

    // RVA: 0x10FF | Ordinal: 4352
        void getflag_failure(void) const;

    // RVA: 0x1200 | Ordinal: 4609
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1450 | Ordinal: 5201
        void onPwrOff(struct lwl::CSignalInfo const *);

    // RVA: 0x1452 | Ordinal: 5203
        void onPwrOn(struct lwl::CSignalInfo const *);

    // RVA: 0x1502 | Ordinal: 5379
        void post_initialize(void);

    // RVA: 0x15CA | Ordinal: 5579
        void release(void);

    // RVA: 0x1603 | Ordinal: 5636
        void repair(void);

    // RVA: 0x162C | Ordinal: 5677
        void reset_activity(bool);

    // RVA: 0x1865 | Ordinal: 6246
        void set_damage(unsigned int, bool);

    // RVA: 0x18F5 | Ordinal: 6390
        void set_num_in_burst(void);

    // RVA: 0x1926 | Ordinal: 6439
        void set_ripple_interval(void);

    // RVA: 0x1927 | Ordinal: 6440
        void set_ripple_quantity(void);

    // RVA: 0x1974 | Ordinal: 6517
        void setflag_failure(bool);

    // RVA: 0x19FE | Ordinal: 6655
        void stopDispence(void);

    // RVA: 0x1A58 | Ordinal: 6745
        void tryDispenceByProgram(enum cockpit::avUV_26::UV_26_board);

    // RVA: 0x1AE2 | Ordinal: 6883
        void update(void);

    // RVA: 0x365 | Ordinal: 870
        void _avUV_26(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVUV_26_HPP
