#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: IAvionicsDataProxy
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class IAvionicsDataProxy
{
public:

    // RVA: 0x5B | Ordinal: 92
        void IAvionicsDataProxy(class cockpit::IAvionicsDataProxy const &);

    // RVA: 0x5C | Ordinal: 93
        void IAvionicsDataProxy(void);

    // RVA: 0xEB5 | Ordinal: 3766
        void get_baro_altitude_s(void) const;

    // RVA: 0x1004 | Ordinal: 4101
        void get_pitch_s(void) const;

    // RVA: 0x1036 | Ordinal: 4151
        void get_radar_altitude_s(void) const;

    // RVA: 0x1040 | Ordinal: 4161
        void get_rate_of_pitch_s(void) const;

    // RVA: 0x1042 | Ordinal: 4163
        void get_rate_of_roll_s(void) const;

    // RVA: 0x1044 | Ordinal: 4165
        void get_rate_of_yaw_s(void) const;

    // RVA: 0x1055 | Ordinal: 4182
        void get_roll_s(void) const;

    // RVA: 0x10C7 | Ordinal: 4296
        void get_tas_s(void) const;

    // RVA: 0x2AC | Ordinal: 685
        void _IAvionicsDataProxy(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_IAVIONICSDATAPROXY_HPP
