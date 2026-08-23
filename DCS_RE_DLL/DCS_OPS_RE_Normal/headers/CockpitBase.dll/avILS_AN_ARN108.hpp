#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avILS_AN_ARN108
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avILS_AN_ARN108
{
public:

    // RVA: 0x882 | Ordinal: 2179
        void SetCommand(int, float);

    // RVA: 0x123 | Ordinal: 292
        void avILS_AN_ARN108(void);

    // RVA: 0xA3C | Ordinal: 2621
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xCB8 | Ordinal: 3257
        void getFrequencyDigit(int);

    // RVA: 0x11BE | Ordinal: 4543
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14E6 | Ordinal: 5351
        void post_initialize(void);

    // RVA: 0x30D | Ordinal: 782
        void _avILS_AN_ARN108(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVILS_AN_ARN108_HPP
