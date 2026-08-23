#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTACAN_ARN118
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTACAN_ARN118
{
public:

    // RVA: 0x1C0 | Ordinal: 449
        void avTACAN_ARN118(void);

    // RVA: 0xD11 | Ordinal: 3346
        void getIsAutoSelfTest(void) const;

    // RVA: 0xD1D | Ordinal: 3358
        void getIsManualTest(void) const;

    // RVA: 0xD22 | Ordinal: 3363
        void getIsTestOfAnyKind(void) const;

    // RVA: 0xE1D | Ordinal: 3614
        void getTestLight(void) const;

    // RVA: 0xE1F | Ordinal: 3616
        void getTestSignalWire(void);

    // RVA: 0x11F7 | Ordinal: 4600
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x127E | Ordinal: 4735
        void isRangeValid(void);

    // RVA: 0x143A | Ordinal: 5179
        void onChannelChanged(void);

    // RVA: 0x1620 | Ordinal: 5665
        void resetAutoSelfTest(void);

    // RVA: 0x174B | Ordinal: 5964
        void setManualTest(bool);

    // RVA: 0x175A | Ordinal: 5979
        void setMode(int);

    // RVA: 0x1ADC | Ordinal: 6877
        void update(void);

    // RVA: 0x35B | Ordinal: 860
        void _avTACAN_ARN118(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTACAN_ARN118_HPP
