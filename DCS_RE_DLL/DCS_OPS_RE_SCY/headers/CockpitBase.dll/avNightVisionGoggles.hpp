#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avNightVisionGoggles
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avNightVisionGoggles
{
public:

    // RVA: 0x890 | Ordinal: 2193
        void SetCommand(int, float);

    // RVA: 0x16D | Ordinal: 366
        void avNightVisionGoggles(class cockpit::avNightVisionGoggles const &);

    // RVA: 0x16E | Ordinal: 367
        void avNightVisionGoggles(void);

    // RVA: 0x111F | Ordinal: 4384
        void helmet_type(void) const;

    // RVA: 0x11D8 | Ordinal: 4569
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x16F1 | Ordinal: 5874
        void setElecPower(bool);

    // RVA: 0x32F | Ordinal: 816
        void _avNightVisionGoggles(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVNIGHTVISIONGOGGLES_HPP
