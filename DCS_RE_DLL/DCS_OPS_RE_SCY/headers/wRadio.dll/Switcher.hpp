#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: Switcher
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sounder {

class Switcher
{
public:

    // RVA: 0x54 | Ordinal: 85
        void Switcher(class Sounder::Switcher const &);

    // RVA: 0x55 | Ordinal: 86
        void Switcher(void);

    // RVA: 0x25C | Ordinal: 605
        void getGain(void) const;

    // RVA: 0x339 | Ordinal: 826
        void isOn(void) const;

    // RVA: 0x439 | Ordinal: 1082
        void setOnOff(bool);

    // RVA: 0xA2 | Ordinal: 163
        void _Switcher(void);
};

} // namespace Sounder

// DCS_OPS_RE_WRADIO.DLL_SWITCHER_HPP
