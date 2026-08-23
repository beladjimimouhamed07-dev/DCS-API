#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avSNS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avSNS
{
public:

    // RVA: 0x7E2 | Ordinal: 2019
        void IsOn(void) const;

    // RVA: 0x7E4 | Ordinal: 2021
        void IsReady(void) const;

    // RVA: 0x895 | Ordinal: 2198
        void SetCommand(int, float);

    // RVA: 0x8CD | Ordinal: 2254
        void Start(bool);

    // RVA: 0x8D5 | Ordinal: 2262
        void Stop(void);

    // RVA: 0x198 | Ordinal: 409
        void avSNS(class cockpit::avSNS const &);

    // RVA: 0x199 | Ordinal: 410
        void avSNS(void);

    // RVA: 0xA84 | Ordinal: 2693
        void check_service_provider(int);

    // RVA: 0xB2B | Ordinal: 2860
        void correct(class osg::Vec3f const &);

    // RVA: 0xBE8 | Ordinal: 3049
        void extrapolate_coords(void);

    // RVA: 0xE5D | Ordinal: 3678
        void get_FPU(void) const;

    // RVA: 0xF58 | Ordinal: 3929
        void get_ground_speed(void) const;

    // RVA: 0xF72 | Ordinal: 3955
        void get_height(void) const;

    // RVA: 0xF96 | Ordinal: 3991
        void get_latitude(void) const;

    // RVA: 0xFAC | Ordinal: 4013
        void get_longitude(void) const;

    // RVA: 0x1049 | Ordinal: 4170
        void get_receiver_ready_flag(void) const;

    // RVA: 0x107F | Ordinal: 4224
        void get_self_position(void) const;

    // RVA: 0x10D0 | Ordinal: 4305
        void get_time(void) const;

    // RVA: 0x11E6 | Ordinal: 4583
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x17E0 | Ordinal: 6113
        void setTrueCoordAndVel(void);

    // RVA: 0x1920 | Ordinal: 6433
        void set_receiver_ready_flag(bool);

    // RVA: 0x1AD1 | Ordinal: 6866
        void update(void);

    // RVA: 0x344 | Ordinal: 837
        void _avSNS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVSNS_HPP
