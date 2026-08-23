#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAChS_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAChS_1
{
public:

    // RVA: 0x868 | Ordinal: 2153
        void SetCommand(int, float);

    // RVA: 0xAD | Ordinal: 174
        void avAChS_1(class cockpit::avAChS_1 const &);

    // RVA: 0xAE | Ordinal: 175
        void avAChS_1(void);

    // RVA: 0xA23 | Ordinal: 2596
        void change_timer_state(bool &, bool &);

    // RVA: 0xA30 | Ordinal: 2609
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xDD1 | Ordinal: 3538
        void getSecondsMeter_started(void) const;

    // RVA: 0xDD2 | Ordinal: 3539
        void getSecondsMeter_stopped(void) const;

    // RVA: 0xEFD | Ordinal: 3838
        void get_currtime_seconds(void) const;

    // RVA: 0xF3A | Ordinal: 3899
        void get_flight_time_meter_started(void) const;

    // RVA: 0xF3B | Ordinal: 3900
        void get_flight_time_meter_stopped(void) const;

    // RVA: 0xF3C | Ordinal: 3901
        void get_flighttime(void) const;

    // RVA: 0xF3D | Ordinal: 3902
        void get_flighttime_delta_time(void) const;

    // RVA: 0x1051 | Ordinal: 4178
        void get_rewind_delay(void) const;

    // RVA: 0x1072 | Ordinal: 4211
        void get_seconds_meter_time(void) const;

    // RVA: 0x10AC | Ordinal: 4269
        void get_status(void) const;

    // RVA: 0x1193 | Ordinal: 4500
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14C8 | Ordinal: 5321
        void post_initialize(void);

    // RVA: 0x1574 | Ordinal: 5493
        void read_gauges(class Lua::Config &);

    // RVA: 0x15A0 | Ordinal: 5537
        void release(void);

    // RVA: 0x188B | Ordinal: 6284
        void set_flighttime_delta_time(double);

    // RVA: 0x1924 | Ordinal: 6437
        void set_rewind_delay(bool);

    // RVA: 0x1925 | Ordinal: 6438
        void set_rewind_delay_left(double);

    // RVA: 0x1939 | Ordinal: 6458
        void set_status(double);

    // RVA: 0x1A91 | Ordinal: 6802
        void update(void);

    // RVA: 0x2CE | Ordinal: 719
        void _avAChS_1(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVACHS_1_HPP
