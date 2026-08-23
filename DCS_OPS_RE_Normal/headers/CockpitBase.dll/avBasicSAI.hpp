#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicSAI
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicSAI
{
public:

    // RVA: 0xDE | Ordinal: 223
        void avBasicSAI(class cockpit::GyroPowerSource *);

    // RVA: 0xC4B | Ordinal: 3148
        void getAttFailure_flag(void) const;

    // RVA: 0xC99 | Ordinal: 3226
        void getElecPower(void) const;

    // RVA: 0xD2F | Ordinal: 3376
        void getLateralDeviationBarPos(void) const;

    // RVA: 0xD44 | Ordinal: 3397
        void getLongitudinalDeviationBarPos(void) const;

    // RVA: 0xEB0 | Ordinal: 3761
        void get_bank(void) const;

    // RVA: 0xFFF | Ordinal: 4096
        void get_pitch(void) const;

    // RVA: 0x1002 | Ordinal: 4099
        void get_pitch_delta(void) const;

    // RVA: 0x116F | Ordinal: 4464
        void initSound(void);

    // RVA: 0x1173 | Ordinal: 4468
        void initSoundHost(void);

    // RVA: 0x11AA | Ordinal: 4523
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14D8 | Ordinal: 5337
        void post_initialize(void);

    // RVA: 0x1901 | Ordinal: 6402
        void set_pitch_delta(double);

    // RVA: 0x1AA6 | Ordinal: 6823
        void update(void);

    // RVA: 0x1B2A | Ordinal: 6955
        void updateSound(void);

    // RVA: 0x2EA | Ordinal: 747
        void _avBasicSAI(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICSAI_HPP
