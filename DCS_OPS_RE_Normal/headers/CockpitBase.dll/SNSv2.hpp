#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: SNSv2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class SNSv2
{
public:

    // RVA: 0x7E1 | Ordinal: 2018
        void IsOn(void) const;

    // RVA: 0x7E3 | Ordinal: 2020
        void IsReady(void) const;

    // RVA: 0x78 | Ordinal: 121
        void SNSv2(class cockpit::SNSv2 const &);

    // RVA: 0x79 | Ordinal: 122
        void SNSv2(void);

    // RVA: 0x8CB | Ordinal: 2252
        void Start(bool);

    // RVA: 0x8D4 | Ordinal: 2261
        void Stop(void);

    // RVA: 0xA83 | Ordinal: 2692
        void check_service_provider(int);

    // RVA: 0xB2A | Ordinal: 2859
        void correct(class osg::Vec3f const &);

    // RVA: 0xBE7 | Ordinal: 3048
        void extrapolate_coords(void);

    // RVA: 0xE5C | Ordinal: 3677
        void get_FPU(void) const;

    // RVA: 0xF57 | Ordinal: 3928
        void get_ground_speed(void) const;

    // RVA: 0xF71 | Ordinal: 3954
        void get_height(void) const;

    // RVA: 0xF95 | Ordinal: 3990
        void get_latitude(void) const;

    // RVA: 0xFAB | Ordinal: 4012
        void get_longitude(void) const;

    // RVA: 0x1022 | Ordinal: 4131
        void get_position_vector(void) const;

    // RVA: 0x1048 | Ordinal: 4169
        void get_receiver_ready_flag(void) const;

    // RVA: 0x1076 | Ordinal: 4215
        void get_selected_system(void) const;

    // RVA: 0x107E | Ordinal: 4223
        void get_self_position(void) const;

    // RVA: 0x10A1 | Ordinal: 4258
        void get_speed_vector(void) const;

    // RVA: 0x10CE | Ordinal: 4303
        void get_time(void) const;

    // RVA: 0x118F | Ordinal: 4496
        void initialize(void);

    // RVA: 0x17DF | Ordinal: 6112
        void setTrueCoordAndVel(void);

    // RVA: 0x17FD | Ordinal: 6142
        void setVersion(int);

    // RVA: 0x191F | Ordinal: 6432
        void set_receiver_ready_flag(bool);

    // RVA: 0x1945 | Ordinal: 6470
        void set_system(unsigned int);

    // RVA: 0x1A8A | Ordinal: 6795
        void update(void);

    // RVA: 0x2B9 | Ordinal: 698
        void _SNSv2(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_SNSV2_HPP
