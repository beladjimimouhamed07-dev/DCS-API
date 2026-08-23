#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avHUD_SEI31
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avHUD_SEI31
{
public:

    // RVA: 0x87E | Ordinal: 2175
        void SetCommand(int, float);

    // RVA: 0x117 | Ordinal: 280
        void avHUD_SEI31(class cockpit::avHUD_SEI31 const &);

    // RVA: 0x118 | Ordinal: 281
        void avHUD_SEI31(void);

    // RVA: 0xB0B | Ordinal: 2828
        void control(void);

    // RVA: 0xF33 | Ordinal: 3892
        void get_filter_stage(void);

    // RVA: 0xF7B | Ordinal: 3964
        void get_indication_mode(void) const;

    // RVA: 0x11BB | Ordinal: 4540
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x12B7 | Ordinal: 4792
        void is_grid(void);

    // RVA: 0x14E3 | Ordinal: 5348
        void post_initialize(void);

    // RVA: 0x150C | Ordinal: 5389
        void powerOff(void);

    // RVA: 0x150D | Ordinal: 5390
        void powerOn(void);

    // RVA: 0x1AB1 | Ordinal: 6834
        void update(void);

    // RVA: 0x307 | Ordinal: 776
        void _avHUD_SEI31(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVHUD_SEI31_HPP
