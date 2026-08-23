#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avChaffFlareDispencer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avChaffFlareDispencer
{
public:

    // RVA: 0x795 | Ordinal: 1942
        void DropSnar(unsigned char, int, char);

    // RVA: 0x7D4 | Ordinal: 2005
        void InitContainersPayload(void);

    // RVA: 0xE8 | Ordinal: 233
        void avChaffFlareDispencer(class cockpit::avChaffFlareDispencer const &);

    // RVA: 0xE9 | Ordinal: 234
        void avChaffFlareDispencer(void);

    // RVA: 0xA4D | Ordinal: 2638
        void checkIsDropPossible(unsigned char);

    // RVA: 0xB5A | Ordinal: 2907
        void decCurrentProgram(void);

    // RVA: 0xC5C | Ordinal: 3165
        void getChaffCount(void);

    // RVA: 0xC5D | Ordinal: 3166
        void getChaffNumberPerCycle(void) const;

    // RVA: 0xC70 | Ordinal: 3185
        void getCurrentProgram(void);

    // RVA: 0xC71 | Ordinal: 3186
        void getCurrentProgramName(void) const;

    // RVA: 0xCB3 | Ordinal: 3252
        void getFlareCount(void);

    // RVA: 0xCB4 | Ordinal: 3253
        void getFlareNumberPerCycle(void) const;

    // RVA: 0xD14 | Ordinal: 3349
        void getIsContinuousDispence(void) const;

    // RVA: 0xD15 | Ordinal: 3350
        void getIsDispensingFlag(void) const;

    // RVA: 0xD16 | Ordinal: 3351
        void getIsDispensingFlagChanged(void) const;

    // RVA: 0x114A | Ordinal: 4427
        void incCurrentProgram(void);

    // RVA: 0x11AD | Ordinal: 4526
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1523 | Ordinal: 5412
        void processDrop(unsigned char, int, char);

    // RVA: 0x16CA | Ordinal: 5835
        void setCurrentProgram(char);

    // RVA: 0x1737 | Ordinal: 5944
        void setIsDispensingFlagChanged(bool);

    // RVA: 0x1738 | Ordinal: 5945
        void setIsEmerFlaresJtsn(bool);

    // RVA: 0x19FD | Ordinal: 6654
        void stopDispence(void);

    // RVA: 0x1A57 | Ordinal: 6744
        void tryDispence(unsigned char, bool, bool);

    // RVA: 0x1AA8 | Ordinal: 6825
        void update(void);

    // RVA: 0x2F0 | Ordinal: 753
        void _avChaffFlareDispencer(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVCHAFFFLAREDISPENCER_HPP
