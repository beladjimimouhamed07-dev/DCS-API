#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTelephone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTelephone
{
public:

    // RVA: 0x1C6 | Ordinal: 455
        void avTelephone(class cockpit::avTelephone &&);

    // RVA: 0x1C7 | Ordinal: 456
        void avTelephone(void);

    // RVA: 0xDF7 | Ordinal: 3576
        void getSoundElement(void);

    // RVA: 0x11FB | Ordinal: 4604
        void initialize(char const *);

    // RVA: 0x1274 | Ordinal: 4725
        void isOn(void) const;

    // RVA: 0x14FF | Ordinal: 5376
        void post_initialize(void);

    // RVA: 0x15C7 | Ordinal: 5576
        void release(void);

    // RVA: 0x1751 | Ordinal: 5970
        void setMicrophoneOnOff(bool);

    // RVA: 0x176E | Ordinal: 5999
        void setOnOff(bool);

    // RVA: 0x35F | Ordinal: 864
        void _avTelephone(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTELEPHONE_HPP
