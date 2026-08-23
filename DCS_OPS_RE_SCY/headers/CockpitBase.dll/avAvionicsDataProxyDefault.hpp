#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAvionicsDataProxyDefault
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAvionicsDataProxyDefault
{
public:

    // RVA: 0xCC | Ordinal: 205
        void avAvionicsDataProxyDefault(class cockpit::avAvionicsDataProxyDefault const &);

    // RVA: 0xCD | Ordinal: 206
        void avAvionicsDataProxyDefault(void);

    // RVA: 0xEB4 | Ordinal: 3765
        void get_baro_altitude(void) const;

    // RVA: 0xFFE | Ordinal: 4095
        void get_pitch(void) const;

    // RVA: 0x1035 | Ordinal: 4150
        void get_radar_altitude(void) const;

    // RVA: 0x103F | Ordinal: 4160
        void get_rate_of_pitch(void) const;

    // RVA: 0x1041 | Ordinal: 4162
        void get_rate_of_roll(void) const;

    // RVA: 0x1043 | Ordinal: 4164
        void get_rate_of_yaw(void) const;

    // RVA: 0x1054 | Ordinal: 4181
        void get_roll(void) const;

    // RVA: 0x10C6 | Ordinal: 4295
        void get_tas(void) const;

    // RVA: 0x12CD | Ordinal: 4814
        void is_valid(void) const;

    // RVA: 0x2E1 | Ordinal: 738
        void _avAvionicsDataProxyDefault(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAVIONICSDATAPROXYDEFAULT_HPP
