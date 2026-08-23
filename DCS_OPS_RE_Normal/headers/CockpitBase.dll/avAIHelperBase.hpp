#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAIHelperBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAIHelperBase
{
public:

    // RVA: 0x86C | Ordinal: 2157
        void SetCommand(int, float);

    // RVA: 0xB6 | Ordinal: 183
        void avAIHelperBase(class cockpit::avAIHelperBase &&);

    // RVA: 0xB7 | Ordinal: 184
        void avAIHelperBase(class cockpit::avAIHelperBase const &);

    // RVA: 0xB8 | Ordinal: 185
        void avAIHelperBase(char const *, unsigned int);

    // RVA: 0xD33 | Ordinal: 3380
        void getLightness(void) const;

    // RVA: 0x1197 | Ordinal: 4504
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1259 | Ordinal: 4698
        void isEnabled(void) const;

    // RVA: 0x14CB | Ordinal: 5324
        void post_initialize(void);

    // RVA: 0x152B | Ordinal: 5420
        void promptShouldShow(int) const;

    // RVA: 0x1793 | Ordinal: 6036
        void setPromptElemConnector(int, char const *);

    // RVA: 0x1A95 | Ordinal: 6806
        void update(void);

    // RVA: 0x2D3 | Ordinal: 724
        void _avAIHelperBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAIHELPERBASE_HPP
