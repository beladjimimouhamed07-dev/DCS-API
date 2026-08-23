#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: av14a3312FootageIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class av14a3312FootageIndicator
{
public:

    // RVA: 0x8C | Ordinal: 141
        void av14a3312FootageIndicator(class cockpit::dcswwii::av14a3312FootageIndicator &&);

    // RVA: 0x8D | Ordinal: 142
        void av14a3312FootageIndicator(class cockpit::dcswwii::av14a3312FootageIndicator const &);

    // RVA: 0x8E | Ordinal: 143
        void av14a3312FootageIndicator(void);

    // RVA: 0x2F8 | Ordinal: 761
        void connectTo(class EagleFM::Elec::ItemBase &, class EagleFM::Elec::ItemBase &);

    // RVA: 0x320 | Ordinal: 801
        void doSetCommand(int, float, bool, int);

    // RVA: 0x40E | Ordinal: 1039
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x468 | Ordinal: 1129
        void netRegisterControls(int);

    // RVA: 0x50F | Ordinal: 1296
        void repair(void);

    // RVA: 0x5AD | Ordinal: 1454
        void set_failure(class ed::basic_string<char> const &);

    // RVA: 0x618 | Ordinal: 1561
        void update(void);

    // RVA: 0x11E | Ordinal: 287
        void _av14a3312FootageIndicator(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AV14A3312FOOTAGEINDICATOR_HPP
