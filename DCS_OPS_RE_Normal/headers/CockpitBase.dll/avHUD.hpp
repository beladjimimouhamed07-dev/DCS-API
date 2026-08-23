#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avHUD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avHUD
{
public:

    // RVA: 0x87D | Ordinal: 2174
        void SetCommand(int, float);

    // RVA: 0x115 | Ordinal: 278
        void avHUD(class cockpit::avHUD const &);

    // RVA: 0x116 | Ordinal: 279
        void avHUD(void);

    // RVA: 0xA1A | Ordinal: 2587
        void change_brightness(void);

    // RVA: 0xA39 | Ordinal: 2618
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xC54 | Ordinal: 3157
        void getBrightnessSquared(float, float);

    // RVA: 0xC55 | Ordinal: 3158
        void getBrightnessToSubstract(void);

    // RVA: 0xD1C | Ordinal: 3357
        void getIsInitialized(void);

    // RVA: 0xEBF | Ordinal: 3776
        void get_brightness(void) const;

    // RVA: 0x11BA | Ordinal: 4539
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x16A9 | Ordinal: 5802
        void setBrightnessToSubstract(float);

    // RVA: 0x173A | Ordinal: 5947
        void setIsInitialized(bool);

    // RVA: 0x1831 | Ordinal: 6194
        void set_brightness(float);

    // RVA: 0x306 | Ordinal: 775
        void _avHUD(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVHUD_HPP
