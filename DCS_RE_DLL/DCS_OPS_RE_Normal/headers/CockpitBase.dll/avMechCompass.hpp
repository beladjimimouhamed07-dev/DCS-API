#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMechCompass
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMechCompass
{
public:

    // RVA: 0x88C | Ordinal: 2189
        void SetCommand(int, float);

    // RVA: 0x156 | Ordinal: 343
        void avMechCompass(class cockpit::avMechCompass const &);

    // RVA: 0x157 | Ordinal: 344
        void avMechCompass(void);

    // RVA: 0xAF0 | Ordinal: 2801
        void configurePitchBankAnimation(bool);

    // RVA: 0xEB1 | Ordinal: 3762
        void get_bank(void) const;

    // RVA: 0xEE6 | Ordinal: 3815
        void get_compass_card_heading(void) const;

    // RVA: 0x1000 | Ordinal: 4097
        void get_pitch(void) const;

    // RVA: 0x11D2 | Ordinal: 4563
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14F0 | Ordinal: 5361
        void post_initialize(void);

    // RVA: 0x15BB | Ordinal: 5564
        void release(void);

    // RVA: 0x1AC0 | Ordinal: 6849
        void update(void);

    // RVA: 0x324 | Ordinal: 805
        void _avMechCompass(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMECHCOMPASS_HPP
