#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avBasicLightSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avBasicLightSystem
{
public:

    // RVA: 0xDA | Ordinal: 219
        void avBasicLightSystem(void);

    // RVA: 0xDB | Ordinal: 220
        void avBasicLightSystem(class cockpit::avBasicLightSystem const &);

    // RVA: 0xFA1 | Ordinal: 4002
        void get_light_scheme(void) const;

    // RVA: 0xFE1 | Ordinal: 4066
        void get_night(void) const;

    // RVA: 0x11A8 | Ordinal: 4521
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x2E8 | Ordinal: 745
        void _avBasicLightSystem(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVBASICLIGHTSYSTEM_HPP
