#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSNS_GPS_GNSS_Listener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSNS_GPS_GNSS_Listener
{
public:

    // RVA: 0x8D6 | Ordinal: 2263
        void Stop(void);

    // RVA: 0x927 | Ordinal: 2344
        void add_satellite_for_sort(class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &, struct cockpit::avSNSchannelStatus const &, bool);

    // RVA: 0x946 | Ordinal: 2375
        void analyze_status(struct cockpit::avSatelliteSystemStatus &, class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &, bool);

    // RVA: 0x19A | Ordinal: 411
        void avSNS_GPS_GNSS_Listener(void);

    // RVA: 0xAD0 | Ordinal: 2769
        void clear_status(bool);

    // RVA: 0x102E | Ordinal: 4143
        void get_primary_system(void) const;

    // RVA: 0x1060 | Ordinal: 4193
        void get_satellite_common_number(unsigned int, unsigned int) const;

    // RVA: 0x1066 | Ordinal: 4199
        void get_satellites_qty(unsigned char, enum cockpit::enum_satellites_qty_type) const;

    // RVA: 0x1077 | Ordinal: 4216
        void get_selected_system(void) const;

    // RVA: 0x11E7 | Ordinal: 4584
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1919 | Ordinal: 6426
        void set_primary_system(unsigned char);

    // RVA: 0x1946 | Ordinal: 6471
        void set_system(unsigned char);

    // RVA: 0x345 | Ordinal: 838
        void _avSNS_GPS_GNSS_Listener(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSNS_GPS_GNSS_LISTENER_HPP
