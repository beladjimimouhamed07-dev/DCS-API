#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avArtificialHorizont_AN5736
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avArtificialHorizont_AN5736
{
public:

    // RVA: 0x870 | Ordinal: 2161
        void SetCommand(int, float);

    // RVA: 0xC8 | Ordinal: 201
        void avArtificialHorizont_AN5736(void);

    // RVA: 0xA34 | Ordinal: 2613
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xC4A | Ordinal: 3147
        void getAttFailure_flag(void) const;

    // RVA: 0x1005 | Ordinal: 4102
        void get_pitch_shift(void);

    // RVA: 0x11A1 | Ordinal: 4514
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14D1 | Ordinal: 5330
        void post_initialize(void);

    // RVA: 0x1A9F | Ordinal: 6816
        void update(void);

    // RVA: 0x2DF | Ordinal: 736
        void _avArtificialHorizont_AN5736(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVARTIFICIALHORIZONT_AN5736_HPP
