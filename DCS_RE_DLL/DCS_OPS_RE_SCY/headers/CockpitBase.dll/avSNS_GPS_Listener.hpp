#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSNS_GPS_Listener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSNS_GPS_Listener
{
public:

    // RVA: 0x8CE | Ordinal: 2255
        void Start(bool);

    // RVA: 0x8D1 | Ordinal: 2258
        void StartWorking(bool);

    // RVA: 0x8D7 | Ordinal: 2264
        void Stop(void);

    // RVA: 0x8EE | Ordinal: 2287
        void activate_mesage_update(bool);

    // RVA: 0x924 | Ordinal: 2341
        void add_satellite(struct cockpit::avSatelliteSystemStatus &, class ed::vector<struct cockpit::avSNSchannel, class ed::allocator<struct cockpit::avSNSchannel>> &, struct cockpit::avSNSchannelStatus const &);

    // RVA: 0x928 | Ordinal: 2345
        void add_satellite_for_sort(class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &, struct cockpit::avSNSchannelStatus const &, bool);

    // RVA: 0x947 | Ordinal: 2376
        void analyze_status(struct cockpit::avSatelliteSystemStatus &, class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &, bool);

    // RVA: 0x19B | Ordinal: 412
        void avSNS_GPS_Listener(void);

    // RVA: 0x9BD | Ordinal: 2494
        void calc_DOPs(class osg::Vec3f const &, struct cockpit::avSatelliteSystemStatus &, class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> const &, bool);

    // RVA: 0xA70 | Ordinal: 2673
        void check_exclude(unsigned int, unsigned char) const;

    // RVA: 0xA81 | Ordinal: 2690
        void check_satellites(class osg::Vec3f const &, struct cockpit::avSNSSettings const &, class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &, bool);

    // RVA: 0xAD1 | Ordinal: 2770
        void clear_status(bool);

    // RVA: 0xB2C | Ordinal: 2861
        void correct(class osg::Vec3f const &);

    // RVA: 0xBD0 | Ordinal: 3025
        void exclude_satellite(unsigned int);

    // RVA: 0xBE9 | Ordinal: 3050
        void extrapolate_coords(void);

    // RVA: 0xE81 | Ordinal: 3714
        void get_UERE(class waSatellite *, float) const;

    // RVA: 0x1061 | Ordinal: 4194
        void get_satellite_common_number(unsigned int, unsigned int) const;

    // RVA: 0x1063 | Ordinal: 4196
        void get_satellite_record(unsigned int, unsigned int) const;

    // RVA: 0x1067 | Ordinal: 4200
        void get_satellites_qty(unsigned char, enum cockpit::enum_satellites_qty_type) const;

    // RVA: 0x10AD | Ordinal: 4270
        void get_status(void) const;

    // RVA: 0x10D9 | Ordinal: 4314
        void get_tracking_satellites(void) const;

    // RVA: 0x11E8 | Ordinal: 4585
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x12AD | Ordinal: 4782
        void is_channel_ready(int) const;

    // RVA: 0x13FC | Ordinal: 5117
        void make_prediction(class osg::Vec3f, double, struct cockpit::avSatelliteSystemStatus &, class ed::vector<struct cockpit::avSNSchannelStatus, class ed::allocator<struct cockpit::avSNSchannelStatus>> &);

    // RVA: 0x14F5 | Ordinal: 5366
        void post_initialize(void);

    // RVA: 0x15C2 | Ordinal: 5571
        void release(void);

    // RVA: 0x1702 | Ordinal: 5891
        void setEllipsoid(unsigned char);

    // RVA: 0x18D9 | Ordinal: 6362
        void set_max_PDOP(float);

    // RVA: 0x18E0 | Ordinal: 6369
        void set_min_elev_angle(float);

    // RVA: 0x1AD2 | Ordinal: 6867
        void update(void);

    // RVA: 0x1B52 | Ordinal: 6995
        void update_channels(void);

    // RVA: 0x1B75 | Ordinal: 7030
        void update_messages_list(void);

    // RVA: 0x1B88 | Ordinal: 7049
        void update_status(void);

    // RVA: 0x346 | Ordinal: 839
        void _avSNS_GPS_Listener(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSNS_GPS_LISTENER_HPP
