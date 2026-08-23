#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avArtificialHorizon
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avArtificialHorizon
{
public:

    // RVA: 0xC7 | Ordinal: 200
        void avArtificialHorizon(class cockpit::GyroPowerSource *, class cockpit::GyroSound *);

    // RVA: 0xEAF | Ordinal: 3760
        void get_bank(void) const;

    // RVA: 0xFFD | Ordinal: 4094
        void get_pitch(void) const;

    // RVA: 0x1001 | Ordinal: 4098
        void get_pitch_delta(void) const;

    // RVA: 0x116D | Ordinal: 4462
        void initSound(void);

    // RVA: 0x1171 | Ordinal: 4466
        void initSoundHost(void);

    // RVA: 0x11A0 | Ordinal: 4513
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14D0 | Ordinal: 5329
        void post_initialize(void);

    // RVA: 0x15F0 | Ordinal: 5617
        void repair(void);

    // RVA: 0x1853 | Ordinal: 6228
        void set_damage(unsigned int, bool);

    // RVA: 0x1900 | Ordinal: 6401
        void set_pitch_delta(double);

    // RVA: 0x190E | Ordinal: 6415
        void set_power(float);

    // RVA: 0x1A9E | Ordinal: 6815
        void update(void);

    // RVA: 0x2DE | Ordinal: 735
        void _avArtificialHorizon(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVARTIFICIALHORIZON_HPP
