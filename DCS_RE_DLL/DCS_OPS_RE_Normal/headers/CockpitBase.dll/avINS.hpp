#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avINS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avINS
{
public:

    // RVA: 0x883 | Ordinal: 2180
        void SetCommand(int, float);

    // RVA: 0x128 | Ordinal: 297
        void avINS(class cockpit::avINS const &);

    // RVA: 0x129 | Ordinal: 298
        void avINS(void);

    // RVA: 0x9DE | Ordinal: 2527
        void calculate_error_const(void);

    // RVA: 0xBFF | Ordinal: 3072
        void find_platform_angles(class wPosition3<double> &, class osg::Vec3d &);

    // RVA: 0xCD8 | Ordinal: 3289
        void getGyroBankValid(void) const;

    // RVA: 0xCDD | Ordinal: 3294
        void getGyroHeadingValid(void) const;

    // RVA: 0xCE3 | Ordinal: 3300
        void getGyroOrient(class wPosition3<double> &) const;

    // RVA: 0xCE6 | Ordinal: 3303
        void getGyroOrientValid(void) const;

    // RVA: 0xCEC | Ordinal: 3309
        void getGyroPitchBankValid(void) const;

    // RVA: 0xCEF | Ordinal: 3312
        void getGyroPitchValid(void) const;

    // RVA: 0xF63 | Ordinal: 3940
        void get_gyro_bank(void) const;

    // RVA: 0xF64 | Ordinal: 3941
        void get_gyro_heading(void) const;

    // RVA: 0xF65 | Ordinal: 3942
        void get_gyro_pitch(void) const;

    // RVA: 0xFFA | Ordinal: 4091
        void get_pframe(void) const;

    // RVA: 0x1009 | Ordinal: 4106
        void get_platform_bank_error(void) const;

    // RVA: 0x100A | Ordinal: 4107
        void get_platform_pitch_error(void) const;

    // RVA: 0x100B | Ordinal: 4108
        void get_platform_rheading_error(void) const;

    // RVA: 0x10D2 | Ordinal: 4307
        void get_total_acceleration(void) const;

    // RVA: 0x11C1 | Ordinal: 4546
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x13EE | Ordinal: 5103
        void main_simulation(double);

    // RVA: 0x14E7 | Ordinal: 5352
        void post_initialize(void);

    // RVA: 0x1AB5 | Ordinal: 6838
        void update(void);

    // RVA: 0x310 | Ordinal: 785
        void _avINS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVINS_HPP
