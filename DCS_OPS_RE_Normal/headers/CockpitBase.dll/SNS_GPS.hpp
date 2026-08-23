#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SNS_GPS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SNS_GPS
{
public:

    // RVA: 0x74 | Ordinal: 117
        void SNS_GPS(void);

    // RVA: 0x8C9 | Ordinal: 2250
        void Start(bool);

    // RVA: 0x8CA | Ordinal: 2251
        void Start(bool, class osg::Vec3f);

    // RVA: 0x8D0 | Ordinal: 2257
        void StartWorking(bool);

    // RVA: 0x8D2 | Ordinal: 2259
        void Stop(void);

    // RVA: 0x8ED | Ordinal: 2286
        void activate_mesage_update(bool);

    // RVA: 0x923 | Ordinal: 2340
        void add_satellite(struct cockpit::SNSv2::SystemStatus &, class ed::vector<struct cockpit::SNSv2::Channel, class ed::allocator<struct cockpit::SNSv2::Channel>> &, struct cockpit::SNSv2::ChannelStatus const &);

    // RVA: 0x925 | Ordinal: 2342
        void add_satellite_for_sort(class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &, struct cockpit::SNSv2::ChannelStatus const &, bool);

    // RVA: 0x944 | Ordinal: 2373
        void analyze_status(struct cockpit::SNSv2::SystemStatus &, class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &, bool);

    // RVA: 0x957 | Ordinal: 2392
        void applyDifferentialCorrection(bool);

    // RVA: 0x9BC | Ordinal: 2493
        void calc_DOPs(class osg::Vec3f const &, struct cockpit::SNSv2::SystemStatus &, class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> const &, bool);

    // RVA: 0xA6F | Ordinal: 2672
        void check_exclude(unsigned int, unsigned char) const;

    // RVA: 0xA80 | Ordinal: 2689
        void check_satellites(class osg::Vec3f const &, struct cockpit::SNSv2::avSNSSettings const &, class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &, bool);

    // RVA: 0xACE | Ordinal: 2767
        void clear_status(bool);

    // RVA: 0xB29 | Ordinal: 2858
        void correct(class osg::Vec3f const &);

    // RVA: 0xBCF | Ordinal: 3024
        void exclude_satellite(unsigned int);

    // RVA: 0xBE6 | Ordinal: 3047
        void extrapolate_coords(void);

    // RVA: 0xC89 | Ordinal: 3210
        void getDeltas(void) const;

    // RVA: 0xCBE | Ordinal: 3263
        void getGPSsatsData(class ed::vector<struct cockpit::GPSKalmanFilterv2::GPSSatData, class ed::allocator<struct cockpit::GPSKalmanFilterv2::GPSSatData>> &);

    // RVA: 0xDC6 | Ordinal: 3527
        void getSatMultipath(class wPosition3<float>, class osg::Vec3f const &, float &, float &, bool);

    // RVA: 0xE80 | Ordinal: 3713
        void get_UERE(class waSatellite *, float) const;

    // RVA: 0x105E | Ordinal: 4191
        void get_satellite_common_number(unsigned int, unsigned int) const;

    // RVA: 0x1062 | Ordinal: 4195
        void get_satellite_record(unsigned int, unsigned int) const;

    // RVA: 0x1064 | Ordinal: 4197
        void get_satellites_qty(unsigned char, enum cockpit::enum_satellites_qty_type) const;

    // RVA: 0x1074 | Ordinal: 4213
        void get_selected_system(void) const;

    // RVA: 0x10AB | Ordinal: 4268
        void get_status(void);

    // RVA: 0x10DA | Ordinal: 4315
        void get_tracking_satellitesV2(void);

    // RVA: 0x1143 | Ordinal: 4420
        void imgui_update(void);

    // RVA: 0x118C | Ordinal: 4493
        void initialize(void);

    // RVA: 0x12AC | Ordinal: 4781
        void is_channel_ready(int) const;

    // RVA: 0x13FB | Ordinal: 5116
        void make_prediction(class osg::Vec3f, double, struct cockpit::SNSv2::SystemStatus &, class ed::vector<struct cockpit::SNSv2::ChannelStatus, class ed::allocator<struct cockpit::SNSv2::ChannelStatus>> &);

    // RVA: 0x14C4 | Ordinal: 5317
        void post_initialize(void);

    // RVA: 0x159E | Ordinal: 5535
        void release(void);

    // RVA: 0x169E | Ordinal: 5791
        void setAntennaPos(class osg::Vec3f);

    // RVA: 0x16A3 | Ordinal: 5796
        void setAugmentations(class std::map<int, class osg::Vec3d, struct std::less<int>, class ed::allocator<struct std::pair<int const, class osg::Vec3d>>>);

    // RVA: 0x1700 | Ordinal: 5889
        void setEllipsoid(unsigned char);

    // RVA: 0x18AB | Ordinal: 6316
        void set_input_coord(class osg::Vec3d);

    // RVA: 0x18D8 | Ordinal: 6361
        void set_max_PDOP(float);

    // RVA: 0x18DF | Ordinal: 6368
        void set_min_elev_angle(float);

    // RVA: 0x1943 | Ordinal: 6468
        void set_system(unsigned int);

    // RVA: 0x1A88 | Ordinal: 6793
        void update(void);

    // RVA: 0x1B51 | Ordinal: 6994
        void update_channels(void);

    // RVA: 0x1B74 | Ordinal: 7029
        void update_messages_list(void);

    // RVA: 0x1B87 | Ordinal: 7048
        void update_status(void);

    // RVA: 0x1B8B | Ordinal: 7052
        void useAntiSpoofing(bool);

    // RVA: 0x1B8F | Ordinal: 7056
        void use_P_code(bool);

    // RVA: 0x2B6 | Ordinal: 695
        void _SNS_GPS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SNS_GPS_HPP
