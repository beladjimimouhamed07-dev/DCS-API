#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avBAKLAN5
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avBAKLAN5
{
public:

    // RVA: 0x2BB | Ordinal: 700
        void SetCommand(int, float);

    // RVA: 0xA3 | Ordinal: 164
        void avBAKLAN5(class cockpit::dcswwii::avBAKLAN5 const &);

    // RVA: 0xA4 | Ordinal: 165
        void avBAKLAN5(void);

    // RVA: 0x2DE | Ordinal: 735
        void checkAnimationConditions(int, int, float &);

    // RVA: 0x41B | Ordinal: 1052
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4A1 | Ordinal: 1186
        void on_frequency_changed(void);

    // RVA: 0x5C4 | Ordinal: 1477
        void set_preset_channel(unsigned int);

    // RVA: 0x5C6 | Ordinal: 1479
        void set_tuned_frequency(int);

    // RVA: 0x624 | Ordinal: 1573
        void update(void);

    // RVA: 0x12B | Ordinal: 300
        void _avBAKLAN5(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVBAKLAN5_HPP
