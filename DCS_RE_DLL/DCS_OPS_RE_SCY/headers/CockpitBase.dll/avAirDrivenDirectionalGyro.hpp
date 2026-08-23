#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAirDrivenDirectionalGyro
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAirDrivenDirectionalGyro
{
public:

    // RVA: 0xC3 | Ordinal: 196
        void avAirDrivenDirectionalGyro(void);

    // RVA: 0xF6B | Ordinal: 3948
        void get_heading(void) const;

    // RVA: 0x116C | Ordinal: 4461
        void initSound(void);

    // RVA: 0x1170 | Ordinal: 4465
        void initSoundHost(void);

    // RVA: 0x119D | Ordinal: 4510
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14CF | Ordinal: 5328
        void post_initialize(void);

    // RVA: 0x15EE | Ordinal: 5615
        void repair(void);

    // RVA: 0x1851 | Ordinal: 6226
        void set_damage(unsigned int, bool);

    // RVA: 0x190C | Ordinal: 6413
        void set_power(float);

    // RVA: 0x1A9A | Ordinal: 6811
        void update(void);

    // RVA: 0x1B83 | Ordinal: 7044
        void update_sound(void);

    // RVA: 0x2DA | Ordinal: 731
        void _avAirDrivenDirectionalGyro(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAIRDRIVENDIRECTIONALGYRO_HPP
