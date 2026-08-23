#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAHRS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAHRS
{
public:

    // RVA: 0x86B | Ordinal: 2156
        void SetCommand(int, float);

    // RVA: 0xB4 | Ordinal: 181
        void avAHRS(class cockpit::avAHRS const &);

    // RVA: 0xB5 | Ordinal: 182
        void avAHRS(void);

    // RVA: 0x1196 | Ordinal: 4503
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x2D2 | Ordinal: 723
        void _avAHRS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAHRS_HPP
