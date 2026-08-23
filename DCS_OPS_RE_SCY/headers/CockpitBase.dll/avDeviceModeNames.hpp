#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDeviceModeNames
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDeviceModeNames
{
public:

    // RVA: 0xF8 | Ordinal: 249
        void avDeviceModeNames(class cockpit::avDeviceModeNames &&);

    // RVA: 0xF9 | Ordinal: 250
        void avDeviceModeNames(class cockpit::avDeviceModeNames const &);

    // RVA: 0xFA | Ordinal: 251
        void avDeviceModeNames(void);

    // RVA: 0xFDB | Ordinal: 4060
        void get_name(struct cockpit::Device_Mode const &);

    // RVA: 0x11B2 | Ordinal: 4531
        void initialize(class Lua::Config &);

    // RVA: 0x2F7 | Ordinal: 760
        void _avDeviceModeNames(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDEVICEMODENAMES_HPP
