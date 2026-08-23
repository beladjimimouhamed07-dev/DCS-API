#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDirectionalGyro_AN5735
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDirectionalGyro_AN5735
{
public:

    // RVA: 0x879 | Ordinal: 2170
        void SetCommand(int, float);

    // RVA: 0xFF | Ordinal: 256
        void avDirectionalGyro_AN5735(void);

    // RVA: 0xC11 | Ordinal: 3090
        void forceHeadingAdjustment(double);

    // RVA: 0xCF3 | Ordinal: 3316
        void getHeadingAdjustment(void) const;

    // RVA: 0xF6C | Ordinal: 3949
        void get_heading(void) const;

    // RVA: 0x11B3 | Ordinal: 4532
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14DD | Ordinal: 5342
        void post_initialize(void);

    // RVA: 0x1AAC | Ordinal: 6829
        void update(void);

    // RVA: 0x2FA | Ordinal: 763
        void _avDirectionalGyro_AN5735(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDIRECTIONALGYRO_AN5735_HPP
