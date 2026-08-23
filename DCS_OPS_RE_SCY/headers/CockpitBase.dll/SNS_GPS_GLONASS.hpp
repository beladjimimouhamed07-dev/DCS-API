#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SNS_GPS_GLONASS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SNS_GPS_GLONASS
{
public:

    // RVA: 0x75 | Ordinal: 118
        void SNS_GPS_GLONASS(void);

    // RVA: 0x8D3 | Ordinal: 2260
        void Stop(void);

    // RVA: 0x926 | Ordinal: 2343
        void add_satellite_for_sort(class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &, struct cockpit::SNSv2::ChannelStatus const &, bool);

    // RVA: 0x945 | Ordinal: 2374
        void analyze_status(struct cockpit::SNSv2::SystemStatus &, class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &, bool);

    // RVA: 0xACF | Ordinal: 2768
        void clear_status(bool);

    // RVA: 0x102D | Ordinal: 4142
        void get_primary_system(void) const;

    // RVA: 0x105F | Ordinal: 4192
        void get_satellite_common_number(unsigned int, unsigned int) const;

    // RVA: 0x1065 | Ordinal: 4198
        void get_satellites_qty(unsigned char, enum cockpit::enum_satellites_qty_type) const;

    // RVA: 0x1075 | Ordinal: 4214
        void get_selected_system(void) const;

    // RVA: 0x118D | Ordinal: 4494
        void initialize(void);

    // RVA: 0x1918 | Ordinal: 6425
        void set_primary_system(unsigned char);

    // RVA: 0x1944 | Ordinal: 6469
        void set_system(unsigned char);

    // RVA: 0x2B7 | Ordinal: 696
        void _SNS_GPS_GLONASS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SNS_GPS_GLONASS_HPP
